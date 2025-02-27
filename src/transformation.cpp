#include "../include/transformation.h"
#include <iostream>

// Apply transformation matrix to point cloud
pcl::PointCloud<pcl::PointXYZ>::Ptr applyTransformation(
  const pcl::PointCloud<pcl::PointXYZ>::Ptr& cloud, const Eigen::Matrix4f& transformation) {

  pcl::PointCloud<pcl::PointXYZ>::Ptr transformedCloud(new pcl::PointCloud<pcl::PointXYZ>);
  pcl::transformPointCloud(*cloud, *transformedCloud, transformation);

  std::cout << "Applied transformation." << std::endl;
  return transformedCloud;
}

