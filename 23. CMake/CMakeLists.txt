
cmake_minimum_required(VERSION 3.1)


project(totocmake VERSION 1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(FICHIERS_SOURCES
	main.cpp 
	fichier1.cpp 
	fichier1.hpp
	dossier/santé.cpp 
	dossier/santé.hpp
)

add_executable(tutocmake ${FICHIERS_SOURCES})

