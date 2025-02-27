cmake_minimum_required(VERSION 3.10)
project(pointcloud_processor)

# Set the output directory for executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# Locate necessary packages
# Abort in case missing 
find_package(Boost REQUIRED)
if(NOT Boost_FOUND)
    message(FATAL_ERROR "Boost not found. Please install it.")
endif()

find_package(PCL REQUIRED)
if(NOT PCL_FOUND)
    message(FATAL_ERROR "PCL not found. Please install it.")
endif()

find_package(Eigen3 REQUIRED)
if(NOT Eigen3_FOUND)
    message(FATAL_ERROR "Eigen3 not found. Please install it.")
endif()

# Locate header files
include_directories(${PCL_INCLUDE_DIRS})

# Create executable
add_executable(pointcloud_processor src/main.cpp)

target_link_libraries(pointcloud_processor ${PCL_LIBRARIES} ${Boost_LIBRARIES} ${Eigen3_LIBRARIES})
target_include_directories(pointcloud_processor PRIVATE include)

add_definitions(${PCL_DEFINITIONS})
