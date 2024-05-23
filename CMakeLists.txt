cmake_minimum_required(VERSION 3.19)
project(Paint_odil)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        src/drawing/paintscene.cpp
        src/drawing/paintscene.h
        src/drawing/painttable.cpp
        src/drawing/painttable.h
        src/shapes/circle.cpp
        src/shapes/circle.h
        src/shapes/figure.cpp
        src/shapes/figure.h
        src/shapes/line.cpp
        src/shapes/line.h
        src/shapes/rectangle.cpp
        src/shapes/rectangle.h
        src/shapes/triangle.cpp
        src/shapes/triangle.h
        src/ui/about.cpp
        src/ui/about.h
        src/ui/messagedialog.cpp
        src/ui/messagedialog.h
        src/ui/paintwindow.cpp
        src/ui/paintwindow.h
        src/ui/welcomewindow.cpp
        src/ui/welcomewindow.h
        src/utils/commands.cpp
        src/utils/commands.h
        src/utils/json_utilities.cpp
        src/utils/json_utilities.h
)

set(UI_FILES
        src/ui/about.ui
        src/ui/messagedialog.ui
        src/ui/paintwindow.ui
        src/ui/welcomewindow.ui
)

qt6_wrap_ui(UI_HEADERS ${UI_FILES})
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES} ${UI_HEADERS})

target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Gui Qt6::Widgets)
target_include_directories(${PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
        ${PROJECT_SOURCE_DIR}/src
        ${PROJECT_SOURCE_DIR}/src/drawing
        ${PROJECT_SOURCE_DIR}/src/shapes
        ${PROJECT_SOURCE_DIR}/src/ui
        ${PROJECT_SOURCE_DIR}/src/utils
)

message("Current binary dir: ${CMAKE_CURRENT_BINARY_DIR}")
message("Current source dir: ${PROJECT_SOURCE_DIR}")

# For each UI file, print out its existence to help debug path issues
foreach(UI_FILE ${UI_FILES})
    if(EXISTS "${PROJECT_SOURCE_DIR}/${UI_FILE}")
        message(STATUS "UI file found: ${UI_FILE}")
    else()
        message(WARNING "UI file not found: ${UI_FILE}")
    endif()
endforeach()


# Optional: Set this if Qt6 is not in the default path
# set(CMAKE_PREFIX_PATH "path_to_your_qt6_installation")
message("Include directories:")
get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach(dir IN LISTS dirs)
    message(STATUS "dir='${dir}'")
endforeach()
set(CMAKE_PREFIX_PATH "/path_to_qt")
