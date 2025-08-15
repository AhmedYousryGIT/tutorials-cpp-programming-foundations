This code was forked from Linkedin Learning course "Complete Guide to C++ Programming Foundations" by Eduardo Corpeño
https://www.linkedin.com/learning/complete-guide-to-c-plus-plus-programming-foundations

OS configuration changes:
I changed the Vscode settings to work on Windows OS rather than Linux

Setting a default debuger:
    I added a launch.json file to set a default debuger for the project

Adding shared functions to the whole project:
    File structure changes:
    I created a file with shared functions to be used with all project files
    The was reconfigured to read the headers from the "${workspaceFolder}/headers" directory 
    The shared files were added directly in the src folder
    To Make this work properly:

    Configuration changes:
    To add the functions to the intellisense
    open: .vscode/c_cpp_properties.json
    add the following to the "includePath" array
        "${workspaceFolder}/headers"

    To enable the compiling open .vscode/tasks.json
    Add the following to the args array
        "${workspaceFolder}/src/sharedFns.cpp",
        "-I${workspaceFolder}/headers"

Building cpp files in a "${workspaceFolder}/bin/" directory:
    The files are built in the following pattern:
    ${workspaceFolder}/bin/<parent_directory_name>-<file_name>

    Configuration:
    To enable the building open .vscode/tasks.json
    Add the following at the end of the args array (must be at the end)
        "-o",
        "${workspaceFolder}/bin/${fileBasenameNoExtension}-${fileBasename}"
    Notice that this didin't work when "type" was changed to "shell"
    You must use "type": "cppbuild"

Adding custom buttons at the Tab Bar:
    For that I am using the Extension Customize Toolbar by "Liangru Liu"

    Configuration:
    To add a build and debug button, in the .vscode/settings.json this code was added
        "CustomizeToolbar.buttonConfig": [
            {
                "name": "Build and Debug",
                "icon": {
                    "light": "C:/Users/arcah/OneDrive/Pictures/Icons/svg/run-debug-light.svg",
                    "dark": "C:/Users/arcah/OneDrive/Pictures/Icons/svg/run-debug-dark.svg"
                },
                "command_vscode": "workbench.action.debug.start"
            }
        ]