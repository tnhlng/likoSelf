cmake_minimum_required(VERSION 3.8)

project(likoSelf LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

include_directories(
    ./
    interview150/
)

link_directories(
)

add_executable(likoSelf 
    main.cpp
    util.cpp
)

# target_link_libraries(likoSelf 
    

# )
