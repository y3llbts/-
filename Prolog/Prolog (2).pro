% Copyright Сидорчук Михаил ФИТ з/о
% Найти сумму цифр заданного числа

implement main
    open core, console

class predicates
    digitValue : (integer, integer [out]).
clauses
    run() :-
        Number = 548963,
        digitValue(Number, Output),
        write('Исходное число = ', Number),
        nl,
        write('---'),
        nl,
        write('Сумма цифр исходного числа = ', Output),
        _ = readLine(),
        succeed.
    digitValue(Num, Num) :-
        Num < 10,
        !.
    digitValue(Num, Sum) :-
        NumTemp = Num div 10,
        digitValue(NumTemp, SumTemp),
        Sum = SumTemp + Num mod 10.

end implement main

goal
    console::run(main::run).
