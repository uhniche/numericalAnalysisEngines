cmake_minimum_required(VERSION 4.0)
project(numericalAnalysisEngines)

set(CMAKE_CXX_STANDARD 17)

add_executable(rk4 rk4.cpp exampleDiffEqInput.cpp)
add_executable(euler eulerApproximation.cpp exampleDiffEqInput.cpp)

