cmake_minimum_required(VERSION 3.21)
project(test C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled3 main.c  node.c node.h Dictionnaire_test.txt forme_fleche.c forme_fleche.h tree.c tree.h)
