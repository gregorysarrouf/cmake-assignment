# Point Cloud IO, Filtering and Transformation

## Build Instructions
Install CMake, PCL, Eigen3 and all of their 
dependencies system wide, then cd into the project's 
root directory (the one containing the CMakeLists.txt 
file) and run the following commands to build the 
project and create an executable in bin:

```
mkdir build/ bin/
cd build
cmake ..
make
```

An example data.ply file as well as output.ply file exist
in the data directory. To run the executable, cd into the
bin directory, then run:

```
./pointcloud_processor ../data/data.ply ../data/output.ply
```

The output will be stored inside of the output.ply file.
