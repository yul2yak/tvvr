# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 2.6)

project(tvvr)

set(CMAKE_CXX_STANDARD 14)

find_package(rxcpp CONFIG)

add_executable(tvvr main.cpp ui/presenter/banner_presenter.cpp ui/presenter/banner_presenter.hpp ui/presenter/contract.cpp ui/presenter/contract.hpp)