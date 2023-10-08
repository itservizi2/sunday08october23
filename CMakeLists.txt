cmake_minimum_required(VERSION 3.26)
project(sunday08 C)

set(CMAKE_C_STANDARD 11)

add_executable(sunday08 
        main.c
)

add_executable(numere_pare sunday/numere_pare.c)
add_executable(numere_impare sunday/numere_impare.c)
add_executable(factorial1 sunday/factorial1.c)
add_executable(aria_triunghi sunday/aria_triunghi.c)
add_executable(max_position sunday/max_position.c)
add_executable(vocale sunday/vocale.c)

