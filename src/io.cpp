#include "../include/io.h"
#include <iostream>

// Load points from input PLY file
pcl::PointCloud<pcl::PointXYZ>::Ptr loadPLY(const std::string& filename) {
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);

  if (pcl::io::loadPLYFile<pcl::PointXYZ>(filename, *cloud) == -1) {
    std::cerr << "Error: Couldn't read file " << filename << "\n";
    return nullptr;
  }

  std::cout << "Loaded " << cloud->size() << " points from " << filename << "\n";
  return cloud;
}

// Save points to output PLY file
bool savePLY(const std::string& filename, const pcl::PointCloud<pcl::PointXYZ>::Ptr& cloud) {
  if (pcl::io::savePLYFileASCII<pcl::PointXYZ>(filename, *cloud) == -1) {
    std::cerr << "Error: Couldn't save to file" << filename << "\n";
    return false;
  }

  std::cout << "Saved transformation point cloud to " << filename << "\n";
  return true;
}
