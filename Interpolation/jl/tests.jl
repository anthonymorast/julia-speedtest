include("methods.jl")

X = [1 2 3 4 5];
Y = [1 4 9 16 25]; # y = x*x
x = 2.5;
@time Lagrange(X, Y, x);
#println("f(x) = x*x -> f(2.5) = ", string(y));
