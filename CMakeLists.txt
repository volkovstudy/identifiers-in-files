cmake_minimum_required(VERSION 3.24)
project(identifiers-in-files)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

file(GLOB_RECURSE main-sources
        "src/*.cpp"
)

add_executable(identifiers-in-files src/main.cpp ${main-sources})
