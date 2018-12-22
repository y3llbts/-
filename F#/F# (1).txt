open System
[<EntryPoint>]
let main argv = 
    let create = 
         [
         let list = [ 0; 1 ]
         printfn "List with 0 and 1"
         for i = 1 to 1000 do
             printf "%A" list.Head
             printf "%A" list.Tail.Head
         ]
    Console.ReadKey()
    0