function c = pure_pos_cost(q, LP, SV, Goal)
    SV_t = Trans_aa_pos_init(LP, SV, q);
    c = norm(Goal.POS{2} - SV_t.POS_e{2});
end