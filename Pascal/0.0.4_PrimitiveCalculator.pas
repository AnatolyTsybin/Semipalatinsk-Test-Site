program PrimitiveCalculator;

var
    x, y: integer;
    c: char;

begin
    while not eof do
    begin
        read(x, c, y);
        case c of
            '+':
                writeln('=', x+y);
            '-':
                writeln('=', x-y);
            '*':
                writeln('=', x*y);
            '/':
                writeln('=', x/y);
            '%':
                writeln('=', x mod y);
            else
                writeln('Error: try again!')
        end
    end
end.

