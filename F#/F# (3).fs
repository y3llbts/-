open System
open System.IO

[<EntryPoint>]
let main args =
    let folderPath =
            Directory.GetCurrentDirectory()
    let FS =
        let getFiles folderPath =
            Directory.GetFiles(folderPath, "*.*", SearchOption.AllDirectories)
        let totalQuant =
            folderPath
            |> getFiles
        totalQuant
    let result = FS
    Console.Write("Path: ")
    printfn "%A" folderPath
    Console.Write("Files: ")
    printfn "%A" result
    Console.ReadKey()
    0