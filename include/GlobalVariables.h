#pragma once
#include <string>
#include <vector>
#include "GlobalVariables.h"

using namespace std;

//MONITOR PROPERTIES
const int WIN_HEIGHT = 800;
const int WIN_WIDTH = 800;
const int WIN_CENTER = WIN_WIDTH / 2;
const int MONITOR_FRAME_RATE = 60;

//MODEL'S LOAD
//const std::string majom = "C:/Users/bnce2/Desktop/project_LinearAlgebra/majom.csv";

const std::string majom1 = "C:/Users/bnce2/Desktop/project_LinearAlgebra/Cube3D/assets/majom.csv";
const std::string majom = "C:/Users/bnce2/Desktop/project_LinearAlgebra/kocka.csv";
//const std::string model_auto3D = "C:/Users/bnce2/Desktop/project_LinearAlgebra/vertex_coords/auto3D.csv";

//const std::string wallpaper1 = "C:/Users/bnce2/Desktop/project_LinearAlgebra/wallpaper.csv";

//MODEL PROPERTIES
const int MODEL_SCALE = 150;

//ROTATIONS
inline vector<string> rotations = {"x","y","z"};
