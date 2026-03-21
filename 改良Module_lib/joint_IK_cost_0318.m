% function cost = joint_IK_cost_0318(q, LP, SV, Goal)
% 
% SV = Trans_aa_pos(LP, SV, q);
% 
% cost = 0;
% for i = 1:SV.m
%      pos_err = norm(Goal.POS{i} - SV.POS_e{i});
%     if Goal.change(i) == 1
%         cost = cost + pos_err ;
%     end
% end
% 
% end


function cost = joint_IK_cost_0318(q, LP, SV, Goal)

SV = Trans_aa_pos(LP, SV, q);

cost = 0;
for i = 1:SV.m
    pos_err = norm(Goal.POS{i} - SV.POS_e{i});
    ori_err = norm(Goal.ORI{i} - SV.ORI_e{i});
    if Goal.change(i) ==1
        cost = cost + 1000*pos_err + ori_err;
    else
        cost = cost + pos_err + ori_err;
    end
end

end