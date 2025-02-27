#ifndef FILTERING_H
#define FILTERING_H

#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <pcl/filters/voxel_grid.h>

pcl::PointCloud<pcl::PointXYZ>::Ptr applyVoxelGridFilter(
    const pcl::PointCloud<pcl::PointXYZ>::Ptr& cloud, float leaf_size);

#endif
