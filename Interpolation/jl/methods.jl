function Lagrange(X, Y, x)
    if (length(X) != length(Y))
        println("Lagrange Interpolation: X and Y have different legnths.");
        return;
    end
    y = 0;
    n = length(X);
    for i = 1:n
        p = Y[i];
        for j = 1:n
            if (i != j)
                p *= (x - X[j])/(X[i] - X[j]);
            end
        end
        y += p;
    end
    return y;
end
