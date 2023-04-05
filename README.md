# LuaTask

## Introduction
- This project is Screening Task 2 of project Feature Engineering in Vowpal Wabbit (VW) using LUA for Reinforcement Learning Open-Source Fest. 
- It contains a C++ program TaskPrintInt.cpp and a corresponding Lua script TaskPrintInt.lua.
- In `TaskPrintInt.Cpp` it contains
  - `PrintName()` Functions that will print my name
  - `PrintLuatoCpp()` Function that Change value of an int variable in Lua and print it out in C++
  - `PrintCpptoLua()` Function that Pass an int variable to Lua and print out the value in Lua

## Installation
- To compile the program, use the following command:
  - `g++ -o TaskPrintInt TaskPrintInt.cpp -llua`
- To run the program, execute the following command in your terminal:
  - `./TaskPrintInt`
- This will load and execute the TaskPrintInt.lua script, which will print all the answers for task 2.

## Porting
### To fork this repository and run the code on your local machine, follow these steps:

- Fork the repository by clicking on the `Fork` button in the top-right corner of the repository page.

### Clone the forked repository to your local machine:

- git clone `https://github.com/<your-username>/LuaTask.git`
- `cd LuaTask` Navigate to the cloned directory
- Compile the program using the commands :

- `g++ -o TaskPrintInt TaskPrintInt.cpp -llua` Run the program using the command given in the Usage section:
- `./TaskPrintInt` This should print an integer value to the console.
