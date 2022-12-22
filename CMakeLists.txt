cmake_minimum_required(VERSION 3.23)
project(GameEntry)

set(CMAKE_CXX_STANDARD 14)

add_executable(GameEntry main.cpp GameEntry.cpp GameEntry.h Scores.cpp Scores.h RuntimeException.h IndexOutOfBounds.h)
