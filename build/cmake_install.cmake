# Install script for directory: /home/stpimenta/Desktop/Meus Documentos/Estudos-Atual/Estudos próprios/C++ e estrutura de dados/studyingDataStructures/studyingAlgorithms

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/stpimenta/Desktop/Meus Documentos/Estudos-Atual/Estudos próprios/C++ e estrutura de dados/studyingDataStructures/studyingAlgorithms/build/05_hashTable/cmake_install.cmake")
  include("/home/stpimenta/Desktop/Meus Documentos/Estudos-Atual/Estudos próprios/C++ e estrutura de dados/studyingDataStructures/studyingAlgorithms/build/1-stack-pilha/cmake_install.cmake")
  include("/home/stpimenta/Desktop/Meus Documentos/Estudos-Atual/Estudos próprios/C++ e estrutura de dados/studyingDataStructures/studyingAlgorithms/build/2-queue-fila/cmake_install.cmake")
  include("/home/stpimenta/Desktop/Meus Documentos/Estudos-Atual/Estudos próprios/C++ e estrutura de dados/studyingDataStructures/studyingAlgorithms/build/3-linkedList-ListaEncadeada/cmake_install.cmake")
  include("/home/stpimenta/Desktop/Meus Documentos/Estudos-Atual/Estudos próprios/C++ e estrutura de dados/studyingDataStructures/studyingAlgorithms/build/4-recursion-factorial/cmake_install.cmake")
  include("/home/stpimenta/Desktop/Meus Documentos/Estudos-Atual/Estudos próprios/C++ e estrutura de dados/studyingDataStructures/studyingAlgorithms/build/4-recursion-sum-of-a-list/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/stpimenta/Desktop/Meus Documentos/Estudos-Atual/Estudos próprios/C++ e estrutura de dados/studyingDataStructures/studyingAlgorithms/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
