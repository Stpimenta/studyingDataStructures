cmake_minimum_required(VERSION 3.10)
project(MyChallenges)

# Ativar C++17
set(CMAKE_CXX_STANDARD 17)

# Buscar automaticamente subdiretórios (desafios)
file(GLOB SUBDIRS LIST_DIRECTORIES true *)

foreach(SUBDIR ${SUBDIRS})
    if(EXISTS ${SUBDIR}/CMakeLists.txt)
        add_subdirectory(${SUBDIR})
    endif()
endforeach()
