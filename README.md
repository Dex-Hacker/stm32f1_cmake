# introduce

    stm32f1x cmake build basic project

## code tree

    |---cmake           // toolchain
    |---compiler        // startup files
    |---Libraries       // stm32 std lib
    |---User            // user code
    |---CMakeLists.txt  
    |---README.md       

## how to build
### required

    *   vscode {cmake cmake-tools} 
        gcc-arm-none-eabi

    *   add system environment variable
            export ARMEABI_BASE = /home/x/Tools/gcc-arm-none-eabi-9-2019-q4-major
            
    *   ->  vscode shift+p search cmake kits, copy & paste:
            [
                {
                    "name": "arm_gcc_stm",
                    "toolchainFile": "./cmake/toolchain-gcc-armeabi.cmake"
                } 
            ]

    *   ->  click cmake-tools,Clean Rebuild All Project
    *   Done

##  how to debug
### required    
    
    *   vscode {cortex-debug} 
        JLinkGDBServer

    *   edit lanuch.json in .vscode, copy & paste:
        {
            "version": "0.2.0",
            "configurations": [
            {
                "name": "projectname",
                "cwd": "${workspaceRoot}",
                "executable": "./build/elfname",
                "request": "launch",
                "type": "cortex-debug",
                "servertype": "jlink",
                "interface": "swd",
                "device": "stm32f100vc",
            }
            ]
        }
    
    *   F5
    *Done