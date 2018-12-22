open System
[<EntryPoint>]
let main argv = 
    let list = [ 124; 22; 51; 523; 32; 523; 22; 31; 72; 523 ]
    let maxelem result x = if x > result then x
                           else result
    let max_find (max, res) x = 
                  if x = max then (max, res + 1)
                  else if x > max then (x, 1)
                  else (max, res)
    Console.Write("Maximum list item = ")
    printfn "%A" (List.fold maxelem (List.head list) list)
    Console.Write("Number of maximum list items = ")
    printf "%A" (snd (List.fold max_find (List.head list, 1) list))
    Console.ReadKey()
    0