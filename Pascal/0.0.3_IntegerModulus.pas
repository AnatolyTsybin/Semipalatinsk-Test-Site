program IntegerModulus;

var
    x: integer;
begin
    write('Enter an integer: ');
    read(x);
    if x < 0 then
        x := -x;
    writeln('Modulus is ', x)
end.

