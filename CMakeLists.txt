cmake_minimum_required(VERSION 3.17)
project(cstudy C)

set(CMAKE_C_STANDARD 99)

add_executable(cstudy main.c study/escape_seq.c solution.h study/ifelse.c "study/loop.c" study/array.c study/pointer.c study/char.c study/string.c study/variable.c study/twodarray.c study/memory.c study/functionpointer.c study/struct.c study/file.c temp.c study/linkedlist.c study/DoublyLinkedLists.c study/stack.c)
add_executable(study_variable study/variable.c)
add_executable(study_scanf study/scanf.c)