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


# Compiling using command line on Windows



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

# Compiling using command line on Linux

Type on terminal:
```console
$ g++ -Wall -std=c++14 main.cpp -o main
``` 
This will create a "main" file that is executable

To execute the file:
```console
$ ./main
``` 

# CodeLite
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

# Visual Studio Code (VS Code)



