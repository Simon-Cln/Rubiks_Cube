cmake_minimum_required(VERSION 3.23)
project(C)

set(CMAKE_CXX_STANDARD 14)

include_directories(RUBIKS_CUBE)

add_executable(C
        .idea/.gitignore
        .idea/C.iml
        .idea/modules.xml
        .idea/workspace.xml
        RUBIKS_CUBE/.idea/.gitignore
        RUBIKS_CUBE/.idea/misc.xml
        RUBIKS_CUBE/.idea/modules.xml
        RUBIKS_CUBE/.idea/RUBIKS_CUBE.iml
        RUBIKS_CUBE/.idea/workspace.xml
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/query/cache-v2
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/query/cmakeFiles-v1
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/query/codemodel-v2
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/query/toolchains-v1
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/reply/cache-v2-d5080e1595108eb64776.json
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/reply/cmakeFiles-v1-53e44ef0687376adc8f7.json
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/reply/codemodel-v2-06b87df1b48d4c077952.json
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/reply/directory-.-Debug-d0094a50bb2071803777.json
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/reply/index-2023-03-05T14-27-06-0106.json
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/reply/target-RUBIKS_CUBE-Debug-5a64e7c28eb943f6e5bc.json
        RUBIKS_CUBE/cmake-build-debug/.cmake/api/v1/reply/toolchains-v1-1ed426be0aa6263acb43.json
        RUBIKS_CUBE/cmake-build-debug/Testing/Temporary/LastTest.log
        RUBIKS_CUBE/cmake-build-debug/.ninja_deps
        RUBIKS_CUBE/cmake-build-debug/.ninja_log
        RUBIKS_CUBE/cmake-build-debug/build.ninja
        RUBIKS_CUBE/cmake-build-debug/cmake_install.cmake
        RUBIKS_CUBE/cmake-build-debug/CMakeCache.txt
        RUBIKS_CUBE/cmake-build-debug/RUBIKS_CUBE.exe
        RUBIKS_CUBE/output/rubiks.exe
        RUBIKS_CUBE/CMakeLists.txt
        RUBIKS_CUBE/main.c
        RUBIKS_CUBE/rubiks.c
        RUBIKS_CUBE/rubiks.h)
