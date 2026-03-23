function [state, options, optchanged] = ga_outfun(options, state, flag, goal, RP_data)

    optchanged = false;

    % 用 persistent 存储每一代数据
    persistent best_cost_history best_x_history tracked_best

    switch flag
        case 'init'
            best_cost_history = [];
            best_x_history = [];
            tracked_best = struct('cost', Inf, 'x', [], 'w', NaN, 'q_opt', [], 'sig', NaN);

        case 'iter'
            % 每一代最优值
            [~, idx] = min(state.Score);
            x_gen_best = state.Population(idx, :);
            [cost_gen_best, detail] = mex_ev(x_gen_best, goal, RP_data);
            best_cost_history(end+1) = cost_gen_best;
            best_x_history(end+1, :) = x_gen_best;

            if cost_gen_best < tracked_best.cost
                tracked_best.cost = cost_gen_best;
                tracked_best.x = x_gen_best;
                tracked_best.w = detail.w;
                tracked_best.q_opt = detail.q_opt;
                tracked_best.sig = detail.sig;
            end

            % 打印（可选）
            fprintf('第 %d 代: best_cost = %.6f\n', state.Generation, cost_gen_best);

        case 'done'
            % 保存到 workspace
            assignin('base', 'best_cost_history', best_cost_history);
            assignin('base', 'best_x_history', best_x_history);
            assignin('base', 'ga_tracked_best', tracked_best);
    end
end
