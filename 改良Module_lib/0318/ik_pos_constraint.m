function [c, ceq] = ik_pos_constraint(q, LP, SV, Goal)
    SV_t = Trans_aa_pos_init(LP, SV, q);
    c = [];
    ceq = Goal.POS{2} - SV_t.POS_e{2}; 
end