% Copyright Сидорчук Михаил ФИТ з/о
% Найти максимальный элемент списка и число его вхождений

implement main
    open core, console

class predicates
    maxValue : (integer*, integer [out]) determ.
clauses
    run() :-
        List = [9, 6, 9, 2, 3],
        write('Исходный список = ', List),
        maxValue(List, Output),
        nl,
        write('---'),
        nl,
        write('Максимальный элемент списка = ', Output),
        fail.
    run() :-
        _ = readLine(),
        succeed.

    /* Максимальный элемент списка */
    maxValue([X], X) :-
        !.
    maxValue([Head | Tail], Head) :-
        maxValue(Tail, MaxTemp),
        Head > MaxTemp,
        !.
    maxValue([_ | Tail], MaxTemp) :-
        maxValue(Tail, MaxTemp).

end implement main

goal
    console::run(main::run).
