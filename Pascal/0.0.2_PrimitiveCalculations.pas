program PrimitiveCalculations;

var
    x, y: integer;

begin
    write('Enter an integer: ');
    read(x);
    y := x*x;
    writeln('y(x) = x^2 = ', y);
    y := x*x*x;
    writeln('y(x) = x^3 = ', y)
end.

