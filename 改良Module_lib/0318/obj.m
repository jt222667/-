function cost = obj(LP,SV)
    w = calc_Manipulability_0318(LP,SV);
    cost = -log(w(2));
end