project(hashTable)
file(GLOB SOURCES *.cpp)
add_executable(hashTable ${SOURCES}
        hashTable/hashTable.h)
