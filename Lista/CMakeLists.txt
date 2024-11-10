cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(meu_projeto C)

# Define a versão do C a ser utilizada
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)

# Adiciona o diretório include ao caminho de pesquisa
include_directories(include)

# Adiciona o executável
add_executable(project src/main.c src/Lista.c)

target_link_libraries(project m)
