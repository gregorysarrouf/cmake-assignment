#ifndef IO_H
#define IO_H

#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <pcl/io/ply_io.h>
#include <string>

pcl::PointCloud<pcl::PointXYZ>::Ptr loadPLY(const std::string& filename);
bool savePLY(const std::string& filename, const pcl::PointCloud<pcl::PointXYZ>::Ptr& cloud);

#endif
