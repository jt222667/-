function [state, options, optchanged] = ga_outfun(options, state, flag)

    optchanged = false;

    % 用 persistent 存储每一代数据
    persistent best_cost_history

    switch flag
        case 'init'
            best_cost_history = [];

        case 'iter'
            % 每一代最优值
            best_cost_history(end+1) = state.Best(end);

            % 打印（可选）
            fprintf('第 %d 代: best_cost = %.6f\n', state.Generation, state.Best(end));

        case 'done'
            % 保存到 workspace
            assignin('base', 'best_cost_history', best_cost_history);
    end
end