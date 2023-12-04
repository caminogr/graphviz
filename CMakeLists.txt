cmake_minimum_required(VERSION 3.12)

project(graphviz)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(ROOT "${CMAKE_CURRENT_LIST_DIR}")
set(EXTERNAL_LIB "${ROOT}/third_party")
set(Easy3D_DIR "${EXTERNAL_LIB}/EAsy3D-main/build")

find_package(Easy3D COMPONENTS viewer REQUIRED)  # request Easy3D (recommended to request only needed components)

add_executable(EasyMain easy3d.cpp)
target_link_libraries(EasyMain easy3d::viewer)
