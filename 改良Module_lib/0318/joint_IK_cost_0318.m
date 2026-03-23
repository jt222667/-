% function cost = joint_IK_cost_0318(q, LP, SV, Goal, w_ref)
% 
% SV_tmp = Trans_aa_pos_init(LP, SV, q);
% 
% % 1. 位置误差 (主任务)
% pos_err = log((norm(Goal.POS{2} - SV_tmp.POS_e{2})));
% 
% % 2. 动态可操作度项 (次任务)
% w_struct = calc_Manipulability_0318(LP, SV_tmp);
% w_curr = w_struct(2);
% 
% % --- 核心：相对对数代价 ---
% % 我们不关心 w 的绝对大小，只关心它相对于初始状态提升了多少
% % 如果 w_curr > w_ref，则该项为负，奖励优化；反之惩罚。
% % 对数处理确保了无论 w 是 10^5 还是 10^-5，其增量都在相似的量级
% cost_w = -log((w_curr));
% 
% cost = pos_err + cost_w;
% end


function cost = joint_IK_cost_0318(q, LP, SV, Goal, w_ref)

SV_tmp = Trans_aa_pos_init(LP, SV, q);

% 1. 位置误差 (主任务)
pos_err = norm(Goal.POS{2} - SV_tmp.POS_e{2});

% 2. 动态可操作度项 (次任务)
w_struct = calc_Manipulability_0318(LP, SV_tmp);
w_curr = w_struct(2);

% --- 核心：相对对数代价 ---
% 我们不关心 w 的绝对大小，只关心它相对于初始状态提升了多少
% 如果 w_curr > w_ref，则该项为负，奖励优化；反之惩罚。
% 对数处理确保了无论 w 是 10^5 还是 10^-5，其增量都在相似的量级
cost_w = -log((w_curr + 1e-9) / w_ref);

cost = pos_err + cost_w;
end





% function cost = joint_IK_cost_0318(q, LP, SV, Goal)
%
% SV = Trans_aa_pos_init(LP, SV, q);
%
% cost = 0;
%
% for i = 1:SV.m
%     pos_err = norm(Goal.POS{i} - SV.POS_e{i});
%     ori_err = norm(Goal.ORI{i} - SV.ORI_e{i});
%     if Goal.change(i) == 1
%         cost = cost + pos_err + ori_err;
%     else
%     end
% end
%
% end