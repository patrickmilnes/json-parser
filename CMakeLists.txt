cmake_minimum_required(VERSION 3.17)
project(json_parser C)

set(CMAKE_C_STANDARD 11)

add_executable(json_parser src/main.c src/hashtable.c src/include/hashtable.h src/include/parser.h src/parser.c src/include/lexer.h src/lexer.c)