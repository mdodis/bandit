cmake_minimum_required(VERSION 3.20)
project(bandit LANGUAGES C CXX)

include(FetchContent)
include(CTest)

set(BA_TRIPLET $<$<CONFIG:Debug>:debug>$<$<CONFIG:Release>:release>-$<$<PLATFORM_ID:Darwin>:osx>$<$<PLATFORM_ID:Linux>:linux>$<$<PLATFORM_ID:Windows>:win>$<$<CONFIG:Debug>:64>$<$<CONFIG:Release>:64>)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out-${BA_TRIPLET}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out-${BA_TRIPLET}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out-${BA_TRIPLET}/lib)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

add_subdirectory(ThirdParty)
add_subdirectory(Engine)
