#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <pcl/common/transforms.h>
#include <Eigen/Dense>

pcl::PointCloud<pcl::PointXYZ>::Ptr applyTransformation(
  const pcl::PointCloud<pcl::PointXYZ>::Ptr& cloud, const Eigen::Matrix4f& transformation);

#endif
