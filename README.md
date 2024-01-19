# Test - Run C code in Windows

## Dev Env
- OS : Win11
- gcc : 13.1.0
- Package Manager : Chocolatey

## Dev Tools
- VSCode : 1.85.1
- PowerShell core : 7.4.0
- VSCode Extension
  - C/C++
  - C/C++ Extension Pack
  - Code Runner

## Methods of run C code in VSCode
1. Run C/C++ File (VSCode Extension : C/C++)
    - Need to add "task.json" in ".vscode" folder
    - Only "main.c" file
        ```json
        # task.json
        "args": [
            "-fdiagnostics-color=always",
            "-g",
            "${file}",
            "-o",
            "${fileDirname}\\${fileBasenameNoExtension}.exe"
        ],
        ```
    - Multiple ".h" and ".c" files in same path.
        ```json
        # task.json
        "args": [
            "-fdiagnostics-color=always",
            "-g",
            "${workspaceFolder}\\*.h",
            "${workspaceFolder}\\*.c",
            "-o",
            "${fileDirname}\\${fileBasenameNoExtension}.exe"
        ],
        ```
    - Multiple ".h" and ".c" files in different path.
        ```json
        # task.json
        "args": [
            "-fdiagnostics-color=always",
            "-g",
            "${workspaceFolder}\\include\\*.h",
            "${workspaceFolder}\\src\\*.c",
            "${workspaceFolder}\\*.c",
            "-o",
            "${fileDirname}\\${fileBasenameNoExtension}.exe"
        ],
        ```

2. Run Code (Code Runner)
    - Need to add "settings.json" in ".vscode" folder

## Source
- C.gitignore
  - https://github.com/github/gitignore/blob/main/C.gitignore
