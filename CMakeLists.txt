cmake_minimum_required(VERSION 3.30)
project(Cube3D)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake_modules)

set(SDL2_PATH "C:/SDL/SDL2-2.30.10/x86_64-w64-mingw32")
find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIR})

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(Cube3D src/main.cpp
        include/Draw.h
        include/EventHandler.h
        include/GlobalVariables.h
        include/VertexReader.h
        include/Projections.h
        include/Logging.h
        include/Rotations.h
        include/MatrixClass.h
        include/InputHandler.h
        include/App.h)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})