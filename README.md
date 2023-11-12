# Introduction

This repository was created as a reference point for myself and tutorial for others who are moderately proficient and/or newbies to C++ programming. The purpose of this particular README.md file is to explain how to setup your system to utilize the greatest code editor on the planet (i.e., *Visual Studio Code*) in Windows, macOS, and Ubuntu operating systems. After the setup sections of the different architectures there will be an explanation of the directory structure of the remainder of the repository. In this reference/tutorial we will primarily focus on utilizing a GNU *gcc* and/or *g++* compiler to execute our programs from the command line. We will only briefly scratch the surface of CMake to demonstrate the efficiency of using CMake as a build system for our C++ program(s).

This reference/tutorial will be a very simplified introduction to CMake as a build system which we will only be introducing to demonstrate the advantage of CMake as our programs grow in complexity. I intend to develop a similar reference/tutorial targeting the same beginner/intermediate C++ programmers to also be used as a reference/tutorial on how to use CMake as a primary build system for our C++ program(s). However, we must learn to crawl before we can walk, and walk before we can run. That said, I would like to emphasize this is reference/tutorial is targeting beginner/intermediate C++ programmers; therefore, if you come across this repository as an advanced C++ programmer your input is not only welcomed, but also very much appreciated.

If you're reading this introduction, then you're likely on the rigorous journey to learn and/or become more proficient at programming in the C++ programming language. Some (or many) would say this is a waste of time, and that we should be learning more contemporary languages like Rust or Python. To those people I say... "**STFU**" because C++ isn't going anywhere anytime soon. The majority of Embedded Systems, Operating Systems, and video games are written predominantly in C++. Also, for the sake of full disclosure I do not claim to be an advanced and/or professional developer, nor do I guarantee the contents of this repository are optimally organized, written, or executed. This is simply my own journey which I am sharing with anyone who also desires to learn and/or become more proficient in the C++ programming language.

## Windows OS Setup

The following table is consisten with my current Windows 11 system configuration at the time of writing. I have added a date column/field in the event the configuration below should change (i.e., Version or Build); however, regardless of updates, the *Edition* will always be Windows 11 Pro. In addition to the Windows configuration I am running a custom build on a ASUS ProArt X570-Creator WiFi motherboard, AMD Ryzen 9 5950x 16-Core CPU, and 64GB of RAM. This information is specifically meant to aid in troubleshooting in the event you observe behavior inconcsistent with the setup instructions, which may or may not vary from system to system.

| Edition | Version | Build | Date |
| :-- | :-- | :-- | :-- |
| 11 Pro | 23H2 | 22631.2506 | Nov-11-2023 |

### Downloading and Installing MSYS2

To install the `g++` and `gcc` compiler, as well as the `gdb` debugger on our Windows system we will use MSYS2 using the following steps:

1. Select the highlighted [MSYS2](https://www.msys2.org/) hyperlink to navigate to the MSYS2 page.
2. Scroll down to the **Installation** section and double-click the most current executable for download. At the time of my writing this it is [msys2-x86_64-20231026.exe](https://github.com/msys2/msys2-installer/releases/download/2023-10-26/msys2-x86_64-20231026.exe). **IF YOU SELECT THE HYPERLINK IN STEP 2 IT WILL AUTOMATICALLY DOWNLOAD THE EXECUTABLE I USED WHEN CREATING THESE STEPS!**
3. Navigate to the directory where the download is stored and double-click the executable to run the MSYS2 installer.
4. When the *MSYS2 Setup* pop-up appears you will be on the *Welcome* screen. Simply click `Next` to continue with the installation.
5. The default location will be `C:\msys64` but you can select the `Browse...` button if you would like to change the location the installer is stored. Unless you have a specific reason for doing so, simply click `Next` to install in the default path.
6. The next screen will be the *Start Menu Shortcuts* which provides information on what this does, but I simply leave it as the default value (e.g., MYSYS2) and select `Next`.
7. The *Installing* screen will appear to display the progress of your installation. You do not need to do anything on this screen as it will automatically switch to the *Finished* section of the installer prompt, then deselect the option to *Run MSYS2 now.*, and select `Finish`.
8. In the *Search* window on the bottom of your screen next to the *Windows* button, type *MSYS2 MSYS* (which will likely appear before you finish typing), and select the `MSYS2 MSYS` application to launch the *MSYS* terminal window.
9. When the *MSYS2* terminal opens, type the command `pacman -Syu` and press *Enter* key. When prompted, type `y` or `Y` to confirm the installation. This command will synchronize your system, upgrade existing packages, and install any which do not exist but are necessary.
10. Now type the command `pacman -Su` and press *Enter* key. If prompted, type `y` or `Y` and press *Enter* key to confirm the installation, but there may be nothing to do, which will displayed in the terminal window if that is the case. This command will synchronize your system and upgrade existing packages if needed (which is why it may do nothing after running the command in **Step 9** above).
11. Now type the command `pacman -Ss gcc` and press *Enter* key. This command will search remote databases for the package defined (i.e., gcc) available for download and installation. If you are running a 64-bit architecture (which I assume you are), then we will search for **mingw64/mingw-w64-x86_64-gcc** and you will copy ONLY the *mingw-w64-x86_64-gcc* part. IFF you are for some reason running a 32-bit version of Windows, you will do the same as above **except** you will find the **mingw32/...** command and complete the rest in the same way.
12. Now type the command `pacman -S mingw-w64-x86_64-gcc` into the *MSYS2* terminal window and press *Enter* key. When prompted, type `y` or `Y` and press *Enter* key to confirm the installation. This command will download, install the *gcc* (for C code) and *g++* (for C++ code) compilers and synchronize your system.
13. Now type the command `pacman -Ss gdb` into the *MSYS2* terminal window and press *Enter* key. This command will search remote databases for the package defined (i.e., gdb) available for download and installation. Look for **mingw64/mingw-w64-x86_64-gdb** and copy **only** the *mingw-w64-x86_64-gdb*.
14. Now type the command `pacman -S mingw-w64-x86_64-gdb` into the *MSYS2* terminal window and press *Enter* key. When prompted, type `y` or `Y` and press *Enter* key to confirm the installation. This command will download, install, and synchronize your system with the *gdb* debugger.
15. Now from your *MSYS2* terminal window type `gdb --version` and you will see it is recognized if installed properly.
16. Now from your *MSYS2* terminal window type `gcc --version` and you will see it is recognized if installed properly.
17. Now from your *MSYS2* terminal window type `g++ --version` and you will see it is recognized if installed properly.
18. Now open your *Command Prompt* or *PowerShell* terminal and type `gdb --version` and you will see it is not recognized and displays an error. This is because it has not been added to your user and/or system specific environment variables list.
19. Open *File Explorer* and navigate to the location your originally selected to store *MSYS2* (**Step 5 above**), double-click on *msys64*, then double-click *mingw64*, and then double-click *bin*. Copy the path of the *bin* folder by highlighting the *URL* at the top of the *File Explorer* and copying the path. The copied path, if installed in the default location, should be very similar to the following: `C:\msys64\mingw64\bin`
20. In the search window to the right of the Windows icon begin typing *Environment* until the option *Edit the systems environment variables* appears, and select that option. The *System Properties* window will appear, and at the bottom right locate the tab *Environment Variables...* just above the *Cancel* button.
21. The *Environment Variables* window will open with the *User variables for xyzuser* selections on top, and the *System variables* below it. **IFF you are the only user of the computer, or you would like for any user of the computer to have access to the compilers and debugger just installed, then skip Step 22, and go directly to Step 23.**
22. To add the *gcc* and *g++* compilers and *gdb* debugger to **ONLY** the current users *Environment variables*, highlight *Path* in the *User variables for xyzuser* section, select *Edit...*, and a new *Edit environment variable* window will open. On the right-hand side select *New*, and paste the address you copied in **Step 19** above into that field, then select *OK* at the bottom of the window. Then select *OK* at the bottom of the *Environment Variables* window, and lastly close the *System Properties* window by selecting *OK* at the bottom.
23. To add the *gcc* and *g++* compilers and *gdb* debugger to the system path which allows **anyone** using the computer to access the compilers and debugger installed, highlight *Path* in the *System variables* section, select *Edit...*, and a new *Edit environment variable* window will open. On the right-hand side select *New*, and paste the address you copied in **Step 19** above, then select *OK* at the bottom of the window. Then select *OK* at the bottom of the *Environment Variables* window, and lastly close the *System Properties* window by selecting *OK* at the bottom.
24. If the *Command Prompt* or *PowerShell* window(s) you opened in **Step 18** above are still open, then close them and open a new *Command Prompt* or *PowerShell* window.
25. Type `gdb --version` and you should see *gdb* is now recognized.
26. Type `gcc --version` and you should see *gcc* is now recognized.
27. Type `g++ --version` and you should see *g++* is now recognized.

#### Summary of Install

You may be thinking *Damn... that was ridiculous!* and rest assured you are not alone. In the beginning of these steps you installed *MSYS2* which is a *Software Distribution and Building Platform for Windows* which is an archlinux (simply meaning an imitation of Linux) enabling the use of tools consistent with more developer friendly environments such as Linux. After installing *MSYS2* you used the *mingw64* terminal to execute several commands, all of which were prepended by the keyword *pacman* which is the keyword for the **Package Management System** (hints the name *pacman*) used by MSYS2, similar to *npm* in JavaScript, *rpm* in Linux, among many others. If you would like, click the following highlighted link to learn more about [pacman](https://wiki.archlinux.org/title/pacman) and other userful commands. Lastly, just know there are many ways to setup an archlinux type environment on a Windows machine. These instructions are specifically designed for those who simply want to use a Windows-based operating system without having to resort to *Windows Subsystem for Linux* (WSL), which can a bit more complicated to understand if you're not familiar with the Linux environment, or any of it's variants.
