%% 3.17 12:28 修正f_kin_end
function [LP, SV, flag] = ck(LP, SV, Goal)
%% 初始化
% 目标点容差设置
norm_limit = 1e-2;
% 目标点可达flag = 0，不可达flag = 1
flag = 0;

%% 优化关节角求逆解
% 随机初始关节角
num_trials = 5;  % 一次运行中尝试5个随机初始点

% 为了在 parfor 内部比较，我们需要先准备好存储容器
all_q_opt = cell(num_trials, 1);
all_fvals = Inf(num_trials, 1);

parfor k = 1:num_trials
    % 这里的 q0 依然在每个迭代中独立生成
    options1 = optimoptions('fmincon','Display','off','Algorithm','sqp');
    q_init = rand(LP.num_joint,1) * 2 * pi;
    [q_ik, ~] = fmincon(@(q) pure_pos_cost(q, LP, SV, Goal), q_init, ...
                        [],[],[],[], zeros(LP.num_joint,1), 2*pi*ones(LP.num_joint,1), [], options1);
    
    % 调用 fmincon
    options2 = optimoptions('fmincon','Display','iter','Algorithm','sqp',...
                            'ConstraintTolerance', 1e-7); % 极高的约束精度
    [q_final, fval] = fmincon(@(q) obj(LP,SV), ...
                           q_ik, [],[],[],[], ...
                           zeros(LP.num_joint,1), 2*pi*ones(LP.num_joint,1), ...
                           @(q) ik_pos_constraint(q, LP, SV, Goal), options2);

    % 将结果存入临时数组（parfor 内部不能直接更新外部的全局 best_cost）
    all_q_opt{k} = q_final;
    all_fvals(k) = fval;
end
% 循环结束后，在主线程找出最优解
[~, best_idx] = min(all_fvals);
q_sol = all_q_opt{best_idx};
SV = Trans_aa_pos_init(LP, SV, q_sol);

%% 验证逆解结果
% 结果对比可视化
for i = 1:SV.m
    fprintf('   Goal.POS{%d}: SV.POS_e{%d}:\n', i, i);
    disp([Goal.POS{i} , SV.POS_e{i}]);
    fprintf('   Goal.ORI{%d}:                  SV.ORI_e{%d}:\n', i, i);
    disp([Goal.ORI{i} , SV.ORI_e{i}]);
end

ERROR = 0;
for i = 1:SV.m
    ERROR = ERROR + norm(SV.POS_e{i} - Goal.POS{i});
end
if ERROR > norm_limit
    flag = 1;
end
fprintf(' ERROR = %d\n',ERROR);
fprintf(' flag  = %d\n',flag);

end






