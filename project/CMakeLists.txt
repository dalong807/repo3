cmake_minimum_required(VERSION 3.16)
project(project)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")
add_executable(project main.cpp workerManager.h workerManager.cpp worker.h employee.h employee.cpp manager.h manager.cpp boss.h boss.cpp)