# C++ compiler on Windows

A example of compiler that can be used on windows is Mingw-w64 (https://www.mingw-w64.org/)

Mingw-w64 is an advancement of the original mingw.org project, created to support the GCC compiler on Windows systems. It has forked it in 2007 in order to provide support for 64 bits and new APIs. It has since then gained widespread use and distribution.

The development and community are very active and welcoming with new contributors every month and simple installers.

To use it, just download and install a windows version
On installation process, pay atencion on: 
- Select architecture according with your operating system (x86_64 for 64bits systems)
- Select a directory to install (it is good to use a small folder name)
- Set PATH variable to contain the mingw-w64 installation folder
-- Look in configuration for "edit environment variables for your account". After that, edit Path variable to include the path for mingw-w64. Remember that each path on this configuration is separated by a semicolon (;)
- Testing installation going to cmd.exe and typing > g++ --version

> You can use your account Path variable or system Path variable if you are a system administrator, just pay atencion to not delete any other paths inside variable


## Compiling using command line on Windows

Type on command prompt:
```console
> g++ -Wall -std=c++14 main.cpp -o main.exe
``` 
This will create a "main.exe" file that is executable

To execute the file, go to project folder on command prompt and type:
```console
> main.exe 
``` 

OBS: to run the executable file in a PowerShell prompt, type:
```console
> .\main.exe 
``` 

# C++ compiler on Linux

- Update packages first
```console
$ sudo apt update
``` 

- install build-essential packages
```console
$ sudo apt install build-essential
``` 

- Test installation:
```console
$ g++ -- version
``` 

## Compiling using command line on Linux

Type on terminal:
```console
$ g++ -Wall -std=c++14 main.cpp -o main
``` 
This will create a "main" file that is executable

To execute the file, go to project folder and type:
```console
$ ./main
``` 

# Using CodeLite as C++ IDE
Go to CodeLite website and follow installation instructions for your operating system

## Configuring CodeLite
- Run Setup Wizard from help menu
- Choose C/C++ development profile
- Make CodeLite scan computer for compilers and click next
- Select color scheme that you like
- Select indentation and white spaces as you wish
- Go on Settings --> Build Settings menu and choose GCC as compiler
- Create a new Workspace
- Select C++ Workspace
- Choose a name without space or special characters
- Right-Click on workspace, go to workspace settings and enable C++17 code completion
- Right-Click on the new workspace name and select New Project
- Select category of your project (GUI, console, etc)
> As example: you can select Console and simple executable g++ considering that g++ is the compiler that is installed
- Select GCC as compiler
- Select GNU gbd debugger as debugger 
- Select build system as default
- Right-Click on Project, choose Settings, go on Compiler, C++ Compiler options, click on the button on the right and choose: C++17 features, optimize for debugging, produce debugging information
- Click on Linker --> Linker options and type "-static"

### CodeLite template

#### Creating a project template:
After configuring all those options above:
- Right click on project and click on "Save As Template"
- Name it and choose category "User Templates"

#### Using a project tempĺate:
- Right-click on Workspace, Click on "New --> New project"
- Choose category "User Templates"
- Select your template on "Type"

## CodeLite Active Project
In a workspace with more than one project, you will notice a bold/italic project. This is the active project. 

CodeLite will always build and run the active project

To select a different active project, just right click on project and click on "make active" or simply double click on it

# Using Visual Studio Code (VS Code) as C++ IDE

## Install and configure VS Code on Windows
- Go to Visual Studio Code website, download it and see install instructions
- Install C/C++ Extension from Microsoft
- Open VS Code Command Palette (Crtl+Shift+P)
- Type C/C++:Edit Configuration(UI)
- On Compiler Path, use "c:\Program files\mingw64\bin\g++.exe"
- On C++ standard, use c++17
> This will create a c_cpp_properties.json file
- With a .cpp file open, go to menu, Click on "Terminal --> Configure Default Build Task..." and select "C/C++:g++.exe build active file"
> This will create a task.json file
- Go tasks.json and change "args" to:
```json
"args": [    
    "-g",
    "-Wall",
    "-std=c++17",
    "${fileDirname}\\*.cpp",
    "-o",
    "${fileDirname}\\${fileBasenameNoExtension}.exe"
],
```
> This "*.cpp" will make VS code compile wall .cpp files
> Normally it just compile only the active .cpp file

## Compile C++ Project on VS Code on Windows
- Select a .cpp file inside project folder
- Go to Terminal Menu and click on "Run Build Task"

## Debugging C++ Project on VS Code on Windows
 - Select a .cpp file
 - Go to Run menu, click on "Add Configuration"
 - Select "C++(GDB/LLDB)" environment
 - Select "g++.exe - Build and debug active file" configuration
> This will create a launch.json file
- Make sure launch.json file is like this:
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "g++.exe - Build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: g++.exe build active file",
            "miDebuggerPath": "C:\Program Files\\mingw64\\bin\\gdb.exe"
        }
    ]
}
```
- Use Debug button on the right bar
- When debugging you can click on left of line numbers on code file and create a breakpoint
- Use top commands to decide how you want to procede on code execution

REMEMBER: This configuration is made for the main folder of VSCode that contains the project folders. It is possible to copy files on .vscode folder to a new main folder

## Install and configure VS Code on Linux
- Go to Visual Studio Code website, download it and see install instructions
- Install C/C++ Extension from Microsoft
- Open VS Code Command Palette (Crtl+Shift+P)
- Type C/C++:Edit Configuration(UI)
- On Compiler Path, use "/usr/bin/g++"
- On C++ standard, use c++17
> This will create a c_cpp_properties.json file
- With a .cpp file open, go to menu, Click on "Terminal --> Configure Default Build Task..." and select "C/C++:g++ build active file"
> This will create a task.json file
- Go tasks.json and change "args" to:
```json
"args": [    
    "-g",
    "-Wall",
    "-std=c++17",
    "${fileDirname}/*.cpp",
    "-o",
    "${fileDirname}/${fileBasenameNoExtension}"
],
```
> This "*.cpp" will make VS code compile wall .cpp files
> Normally it just compile only the active .cpp file

## Compile C++ Project on VS Code on Linux
- Select a .cpp file inside project folder
- Go to Terminal Menu and click on "Run Build Task"

## Debugging C++ Project on VS Code on Linux
 - Select a .cpp file
 - Go to Run menu, click on "Add Configuration"
 - Select "C++(GDB/LLDB)" environment
 - Select "g++ - Build and debug active file" configuration
> This will create a launch.json file
- Make sure launch.json file is like this:
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "g++ - Build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: g++ build active file",
            "miDebuggerPath": "/usr/bin/gdb"
        }
    ]
}
```
- Use Debug button on the right bar
- When debugging you can click on left of line numbers on code file and create a breakpoint
- Use top commands to decide how you want to procede on code execution

REMEMBER: This configuration is made for the main folder of VSCode that contains the project folders. It is possible to copy files on .vscode folder to a new main folder



