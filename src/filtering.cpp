#include "../include/filtering.h"
#include <iostream>

// Filter point cloud with voxel grid filter
pcl::PointCloud<pcl::PointXYZ>::Ptr applyVoxelGridFilter(
  const pcl::PointCloud<pcl::PointXYZ>::Ptr& cloud, float leaf_size) {

  pcl::PointCloud<pcl::PointXYZ>::Ptr filteredCloud(new pcl::PointCloud<pcl::PointXYZ>);
  pcl::VoxelGrid<pcl::PointXYZ> voxelFilter;
  voxelFilter.setInputCloud(cloud);
  voxelFilter.setLeafSize(leaf_size, leaf_size, leaf_size);
  voxelFilter.filter(*filteredCloud);

  std::cout << "Filtered point cloud size: " << filteredCloud->size() << " points" << std::endl;
  return filteredCloud;
}
