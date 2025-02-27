#include "filtering.cpp"
#include "transformation.cpp"
#include "io.cpp"
#include <cstdlib>
#include <iostream>

int main(int argc, char** argv) {
  if (argc < 3) {
    std::cerr << "Usage: " << argv[0] << " <input.ply> <output.ply>\n";
    return EXIT_FAILURE;
  }

  std::string inputFile = argv[1];
  std::string outputFile = argv[2];

  auto cloud = loadPLY(inputFile);
  if (!cloud) return EXIT_FAILURE;

  auto filteredCloud = applyVoxelGridFilter(cloud, 0.01f);

  // Define a translation matrix
  Eigen::Matrix4f transformation = Eigen::Matrix4f::Identity();
  transformation(0, 3) = 0.1f;
  transformation(1, 3) = 0.2f;
  transformation(2, 3) = 0.3f;

  auto transformedCloud = applyTransformation(filteredCloud, transformation);

  if (!savePLY(outputFile, transformedCloud)) return EXIT_FAILURE;

  return EXIT_SUCCESS;
}
