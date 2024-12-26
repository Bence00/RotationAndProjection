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


vector<Vec3> model_majom = {{1.0,-1.0,-1.0},{1.0,-1.0,1.0},{1.0,-1.0,0.8947368264198303},{1.0,-1.0,0.7894736528396606},{1.0,-1.0,0.684210479259491},{1.0,-1.0,0.5789473056793213},{1.0,-1.0,0.4736841320991516},{1.0,-1.0,0.3684209883213043},{1.0,-1.0,0.26315784454345703},{1.0,-1.0,0.15789468586444855},{1.0,-1.0,0.052631527185440063},{1.0,-1.0,-0.052631624042987823},{1.0,-1.0,-0.1578947752714157},{1.0,-1.0,-0.2631579339504242},{1.0,-1.0,-0.3684210777282715},{1.0,-1.0,-0.47368425130844116},{1.0,-1.0,-0.5789474248886108},{1.0,-1.0,-0.6842105388641357},{1.0,-1.0,-0.7894737124443054},{1.0,-1.0,-0.8947368860244751},{0.0,-1.0,-1.0},{0.11111108958721161,-1.0,-1.0},{0.2222222089767456,-1.0,-1.0},{0.3333333134651184,-1.0,-1.0},{0.4444444179534912,-1.0,-1.0},{0.555555522441864,-1.0,-1.0},{0.6666666269302368,-1.0,-1.0},{0.7777777314186096,-1.0,-1.0},{0.8888888359069824,-1.0,-1.0},{0.8888888955116272,-1.0,1.0},{0.7777777910232544,-1.0,1.0},{0.6666666865348816,-1.0,1.0},{0.5555555820465088,-1.0,1.0},{0.444444477558136,-1.0,1.0},{0.3333333730697632,-1.0,1.0},{0.2222222536802292,-1.0,1.0},{0.11111114174127579,-1.0,1.0},{0.0,-1.0,1.0},{0.0,-1.0,0.8947368860244751},{0.11111108958721161,-1.0,0.8947368860244751},{0.2222222089767456,-1.0,0.8947368860244751},{0.3333333134651184,-1.0,0.8947368860244751},{0.4444444179534912,-1.0,0.8947368860244751},{0.555555522441864,-1.0,0.8947368860244751},{0.6666666269302368,-1.0,0.8947368860244751},{0.7777777314186096,-1.0,0.8947368860244751},{0.8888888359069824,-1.0,0.8947368860244751},{0.8888888359069824,-1.0,0.7894736528396606},{0.8888888359069824,-1.0,0.6842105388641357},{0.8888888359069824,-1.0,0.5789473056793213},{0.8888888359069824,-1.0,0.4736841320991516},{0.8888888359069824,-1.0,0.3684210181236267},{0.8888888359069824,-1.0,0.26315784454345703},{0.8888888359069824,-1.0,0.15789470076560974},{0.8888888359069824,-1.0,0.05263153463602066},{0.8888888359069824,-1.0,-0.05263161659240723},{0.8888888359069824,-1.0,-0.15789476037025452},{0.8888888359069824,-1.0,-0.2631579041481018},{0.8888888359069824,-1.0,-0.3684210777282715},{0.8888888359069824,-1.0,-0.47368425130844116},{0.8888888359069824,-1.0,-0.5789474248886108},{0.8888888359069824,-1.0,-0.6842105388641357},{0.8888888359069824,-1.0,-0.7894736528396606},{0.0,-1.0,-0.8947368264198303},{0.11111108958721161,-1.0,-0.8947368264198303},{0.2222222089767456,-1.0,-0.8947368264198303},{0.3333333134651184,-1.0,-0.8947368264198303},{0.4444444179534912,-1.0,-0.8947368264198303},{0.555555522441864,-1.0,-0.8947368264198303},{0.6666666269302368,-1.0,-0.8947368264198303},{0.7777777314186096,-1.0,-0.8947368264198303},{0.8888888359069824,-1.0,-0.8947368860244751},{1.0,-0.8888888955116272,-1.0},{1.0,-0.7777777910232544,-1.0},{1.0,-0.6666666865348816,-1.0},{1.0,-0.5555555820465088,-1.0},{1.0,-0.444444477558136,-1.0},{1.0,-0.3333333730697632,-1.0},{1.0,-0.2222222536802292,-1.0},{1.0,-0.11111114174127579,-1.0},{1.0,0.0,-1.0},{1.0,0.0,1.0},{1.0,-0.11111108958721161,1.0},{1.0,-0.2222222089767456,1.0},{1.0,-0.3333333134651184,1.0},{1.0,-0.4444444179534912,1.0},{1.0,-0.555555522441864,1.0},{1.0,-0.6666666269302368,1.0},{1.0,-0.7777777314186096,1.0},{1.0,-0.8888888359069824,1.0},{1.0,0.0,-0.8947368860244751},{1.0,-0.11111108958721161,-0.8947368860244751},{1.0,-0.2222222089767456,-0.8947368860244751},{1.0,-0.3333333134651184,-0.8947368860244751},{1.0,-0.4444444179534912,-0.8947368860244751},{1.0,-0.555555522441864,-0.8947368860244751},{1.0,-0.6666666269302368,-0.8947368860244751},{1.0,-0.7777777314186096,-0.8947368860244751},{1.0,-0.8888888359069824,-0.8947368860244751},{1.0,-0.8888888359069824,-0.7894737124443054},{1.0,-0.8888888359069824,-0.6842105388641357},{1.0,-0.8888888359069824,-0.5789474248886108},{1.0,-0.8888888359069824,-0.47368425130844116},{1.0,-0.8888888359069824,-0.3684210777282715},{1.0,-0.8888888359069824,-0.2631579339504242},{1.0,-0.8888888359069824,-0.1578947752714157},{1.0,-0.8888888359069824,-0.052631624042987823},{1.0,-0.8888888359069824,0.052631527185440063},{1.0,-0.8888888359069824,0.15789468586444855},{1.0,-0.8888888359069824,0.26315784454345703},{1.0,-0.8888888359069824,0.3684209883213043},{1.0,-0.8888888359069824,0.4736841320991516},{1.0,-0.8888888359069824,0.5789473056793213},{1.0,-0.8888888359069824,0.684210479259491},{1.0,-0.8888888359069824,0.7894736528396606},{1.0,0.0,0.8947368264198303},{1.0,-0.11111108958721161,0.8947368264198303},{1.0,-0.2222222089767456,0.8947368264198303},{1.0,-0.3333333134651184,0.8947368264198303},{1.0,-0.4444444179534912,0.8947368264198303},{1.0,-0.555555522441864,0.8947368264198303},{1.0,-0.6666666269302368,0.8947368264198303},{1.0,-0.7777777314186096,0.8947368264198303},{1.0,-0.8888888359069824,0.8947368264198303},{0.0,-0.8888888359069824,-1.0},{0.11111108958721161,-0.8888888359069824,-1.0},{0.2222222089767456,-0.8888888359069824,-1.0},{0.3333333134651184,-0.8888888359069824,-1.0},{0.4444444179534912,-0.8888888359069824,-1.0},{0.5555555820465088,-0.8888888359069824,-1.0},{0.6666666269302368,-0.8888888359069824,-1.0},{0.7777777910232544,-0.8888888359069824,-1.0},{0.8888888955116272,0.0,-1.0},{0.8888888955116272,-0.11111108958721161,-1.0},{0.8888888955116272,-0.2222222089767456,-1.0},{0.8888888955116272,-0.3333333134651184,-1.0},{0.8888888955116272,-0.4444444179534912,-1.0},{0.8888888955116272,-0.555555522441864,-1.0},{0.8888888955116272,-0.6666666269302368,-1.0},{0.8888888955116272,-0.7777777314186096,-1.0},{0.8888888359069824,-0.8888888359069824,-1.0},{0.8888888359069824,0.0,1.0},{0.8888888359069824,-0.11111108958721161,1.0},{0.8888888359069824,-0.2222222089767456,1.0},{0.8888888359069824,-0.3333333134651184,1.0},{0.8888888359069824,-0.4444444179534912,1.0},{0.8888888359069824,-0.555555522441864,1.0},{0.8888888359069824,-0.6666666269302368,1.0},{0.8888888359069824,-0.7777777314186096,1.0},{0.8888888359069824,-0.8888888359069824,1.0},{0.7777777910232544,-0.8888888359069824,1.0},{0.6666666269302368,-0.8888888359069824,1.0},{0.5555555820465088,-0.8888888359069824,1.0},{0.444444477558136,-0.8888888359069824,1.0},{0.3333333730697632,-0.8888888359069824,1.0},{0.222222238779068,-0.8888888359069824,1.0},{0.11111113429069519,-0.8888888359069824,1.0},{0.0,-0.8888888359069824,1.0},{-1.0,-1.0,-1.0},{-1.0,-1.0,1.0},{-1.0,-1.0,0.8947368264198303},{-1.0,-1.0,0.7894736528396606},{-1.0,-1.0,0.684210479259491},{-1.0,-1.0,0.5789473056793213},{-1.0,-1.0,0.4736841320991516},{-1.0,-1.0,0.3684209883213043},{-1.0,-1.0,0.26315784454345703},{-1.0,-1.0,0.15789468586444855},{-1.0,-1.0,0.052631527185440063},{-1.0,-1.0,-0.052631624042987823},{-1.0,-1.0,-0.1578947752714157},{-1.0,-1.0,-0.2631579339504242},{-1.0,-1.0,-0.3684210777282715},{-1.0,-1.0,-0.47368425130844116},{-1.0,-1.0,-0.5789474248886108},{-1.0,-1.0,-0.6842105388641357},{-1.0,-1.0,-0.7894737124443054},{-1.0,-1.0,-0.8947368860244751},{-0.11111108958721161,-1.0,-1.0},{-0.2222222089767456,-1.0,-1.0},{-0.3333333134651184,-1.0,-1.0},{-0.4444444179534912,-1.0,-1.0},{-0.555555522441864,-1.0,-1.0},{-0.6666666269302368,-1.0,-1.0},{-0.7777777314186096,-1.0,-1.0},{-0.8888888359069824,-1.0,-1.0},{-0.8888888955116272,-1.0,1.0},{-0.7777777910232544,-1.0,1.0},{-0.6666666865348816,-1.0,1.0},{-0.5555555820465088,-1.0,1.0},{-0.444444477558136,-1.0,1.0},{-0.3333333730697632,-1.0,1.0},{-0.2222222536802292,-1.0,1.0},{-0.11111114174127579,-1.0,1.0},{-0.11111108958721161,-1.0,0.8947368860244751},{-0.2222222089767456,-1.0,0.8947368860244751},{-0.3333333134651184,-1.0,0.8947368860244751},{-0.4444444179534912,-1.0,0.8947368860244751},{-0.555555522441864,-1.0,0.8947368860244751},{-0.6666666269302368,-1.0,0.8947368860244751},{-0.7777777314186096,-1.0,0.8947368860244751},{-0.8888888359069824,-1.0,0.8947368860244751},{-0.8888888359069824,-1.0,0.7894736528396606},{-0.8888888359069824,-1.0,0.6842105388641357},{-0.8888888359069824,-1.0,0.5789473056793213},{-0.8888888359069824,-1.0,0.4736841320991516},{-0.8888888359069824,-1.0,0.3684210181236267},{-0.8888888359069824,-1.0,0.26315784454345703},{-0.8888888359069824,-1.0,0.15789470076560974},{-0.8888888359069824,-1.0,0.05263153463602066},{-0.8888888359069824,-1.0,-0.05263161659240723},{-0.8888888359069824,-1.0,-0.15789476037025452},{-0.8888888359069824,-1.0,-0.2631579041481018},{-0.8888888359069824,-1.0,-0.3684210777282715},{-0.8888888359069824,-1.0,-0.47368425130844116},{-0.8888888359069824,-1.0,-0.5789474248886108},{-0.8888888359069824,-1.0,-0.6842105388641357},{-0.8888888359069824,-1.0,-0.7894736528396606},{-0.11111108958721161,-1.0,-0.8947368264198303},{-0.2222222089767456,-1.0,-0.8947368264198303},{-0.3333333134651184,-1.0,-0.8947368264198303},{-0.4444444179534912,-1.0,-0.8947368264198303},{-0.555555522441864,-1.0,-0.8947368264198303},{-0.6666666269302368,-1.0,-0.8947368264198303},{-0.7777777314186096,-1.0,-0.8947368264198303},{-0.8888888359069824,-1.0,-0.8947368860244751},{-1.0,-0.8888888955116272,-1.0},{-1.0,-0.7777777910232544,-1.0},{-1.0,-0.6666666865348816,-1.0},{-1.0,-0.5555555820465088,-1.0},{-1.0,-0.444444477558136,-1.0},{-1.0,-0.3333333730697632,-1.0},{-1.0,-0.2222222536802292,-1.0},{-1.0,-0.11111114174127579,-1.0},{-1.0,0.0,-1.0},{-1.0,0.0,1.0},{-1.0,-0.11111108958721161,1.0},{-1.0,-0.2222222089767456,1.0},{-1.0,-0.3333333134651184,1.0},{-1.0,-0.4444444179534912,1.0},{-1.0,-0.555555522441864,1.0},{-1.0,-0.6666666269302368,1.0},{-1.0,-0.7777777314186096,1.0},{-1.0,-0.8888888359069824,1.0},{-1.0,0.0,-0.8947368860244751},{-1.0,-0.11111108958721161,-0.8947368860244751},{-1.0,-0.2222222089767456,-0.8947368860244751},{-1.0,-0.3333333134651184,-0.8947368860244751},{-1.0,-0.4444444179534912,-0.8947368860244751},{-1.0,-0.555555522441864,-0.8947368860244751},{-1.0,-0.6666666269302368,-0.8947368860244751},{-1.0,-0.7777777314186096,-0.8947368860244751},{-1.0,-0.8888888359069824,-0.8947368860244751},{-1.0,-0.8888888359069824,-0.7894737124443054},{-1.0,-0.8888888359069824,-0.6842105388641357},{-1.0,-0.8888888359069824,-0.5789474248886108},{-1.0,-0.8888888359069824,-0.47368425130844116},{-1.0,-0.8888888359069824,-0.3684210777282715},{-1.0,-0.8888888359069824,-0.2631579339504242},{-1.0,-0.8888888359069824,-0.1578947752714157},{-1.0,-0.8888888359069824,-0.052631624042987823},{-1.0,-0.8888888359069824,0.052631527185440063},{-1.0,-0.8888888359069824,0.15789468586444855},{-1.0,-0.8888888359069824,0.26315784454345703},{-1.0,-0.8888888359069824,0.3684209883213043},{-1.0,-0.8888888359069824,0.4736841320991516},{-1.0,-0.8888888359069824,0.5789473056793213},{-1.0,-0.8888888359069824,0.684210479259491},{-1.0,-0.8888888359069824,0.7894736528396606},{-1.0,0.0,0.8947368264198303},{-1.0,-0.11111108958721161,0.8947368264198303},{-1.0,-0.2222222089767456,0.8947368264198303},{-1.0,-0.3333333134651184,0.8947368264198303},{-1.0,-0.4444444179534912,0.8947368264198303},{-1.0,-0.555555522441864,0.8947368264198303},{-1.0,-0.6666666269302368,0.8947368264198303},{-1.0,-0.7777777314186096,0.8947368264198303},{-1.0,-0.8888888359069824,0.8947368264198303},{-0.11111108958721161,-0.8888888359069824,-1.0},{-0.2222222089767456,-0.8888888359069824,-1.0},{-0.3333333134651184,-0.8888888359069824,-1.0},{-0.4444444179534912,-0.8888888359069824,-1.0},{-0.5555555820465088,-0.8888888359069824,-1.0},{-0.6666666269302368,-0.8888888359069824,-1.0},{-0.7777777910232544,-0.8888888359069824,-1.0},{-0.8888888955116272,0.0,-1.0},{-0.8888888955116272,-0.11111108958721161,-1.0},{-0.8888888955116272,-0.2222222089767456,-1.0},{-0.8888888955116272,-0.3333333134651184,-1.0},{-0.8888888955116272,-0.4444444179534912,-1.0},{-0.8888888955116272,-0.555555522441864,-1.0},{-0.8888888955116272,-0.6666666269302368,-1.0},{-0.8888888955116272,-0.7777777314186096,-1.0},{-0.8888888359069824,-0.8888888359069824,-1.0},{-0.8888888359069824,0.0,1.0},{-0.8888888359069824,-0.11111108958721161,1.0},{-0.8888888359069824,-0.2222222089767456,1.0},{-0.8888888359069824,-0.3333333134651184,1.0},{-0.8888888359069824,-0.4444444179534912,1.0},{-0.8888888359069824,-0.555555522441864,1.0},{-0.8888888359069824,-0.6666666269302368,1.0},{-0.8888888359069824,-0.7777777314186096,1.0},{-0.8888888359069824,-0.8888888359069824,1.0},{-0.7777777910232544,-0.8888888359069824,1.0},{-0.6666666269302368,-0.8888888359069824,1.0},{-0.5555555820465088,-0.8888888359069824,1.0},{-0.444444477558136,-0.8888888359069824,1.0},{-0.3333333730697632,-0.8888888359069824,1.0},{-0.222222238779068,-0.8888888359069824,1.0},{-0.11111113429069519,-0.8888888359069824,1.0},{1.0,1.0,-1.0},{1.0,1.0,1.0},{1.0,1.0,0.8947368264198303},{1.0,1.0,0.7894736528396606},{1.0,1.0,0.684210479259491},{1.0,1.0,0.5789473056793213},{1.0,1.0,0.4736841320991516},{1.0,1.0,0.3684209883213043},{1.0,1.0,0.26315784454345703},{1.0,1.0,0.15789468586444855},{1.0,1.0,0.052631527185440063},{1.0,1.0,-0.052631624042987823},{1.0,1.0,-0.1578947752714157},{1.0,1.0,-0.2631579339504242},{1.0,1.0,-0.3684210777282715},{1.0,1.0,-0.47368425130844116},{1.0,1.0,-0.5789474248886108},{1.0,1.0,-0.6842105388641357},{1.0,1.0,-0.7894737124443054},{1.0,1.0,-0.8947368860244751},{0.0,1.0,-1.0},{0.11111108958721161,1.0,-1.0},{0.2222222089767456,1.0,-1.0},{0.3333333134651184,1.0,-1.0},{0.4444444179534912,1.0,-1.0},{0.555555522441864,1.0,-1.0},{0.6666666269302368,1.0,-1.0},{0.7777777314186096,1.0,-1.0},{0.8888888359069824,1.0,-1.0},{0.8888888955116272,1.0,1.0},{0.7777777910232544,1.0,1.0},{0.6666666865348816,1.0,1.0},{0.5555555820465088,1.0,1.0},{0.444444477558136,1.0,1.0},{0.3333333730697632,1.0,1.0},{0.2222222536802292,1.0,1.0},{0.11111114174127579,1.0,1.0},{0.0,1.0,1.0},{0.0,1.0,0.8947368860244751},{0.11111108958721161,1.0,0.8947368860244751},{0.2222222089767456,1.0,0.8947368860244751},{0.3333333134651184,1.0,0.8947368860244751},{0.4444444179534912,1.0,0.8947368860244751},{0.555555522441864,1.0,0.8947368860244751},{0.6666666269302368,1.0,0.8947368860244751},{0.7777777314186096,1.0,0.8947368860244751},{0.8888888359069824,1.0,0.8947368860244751},{0.8888888359069824,1.0,0.7894736528396606},{0.8888888359069824,1.0,0.6842105388641357},{0.8888888359069824,1.0,0.5789473056793213},{0.8888888359069824,1.0,0.4736841320991516},{0.8888888359069824,1.0,0.3684210181236267},{0.8888888359069824,1.0,0.26315784454345703},{0.8888888359069824,1.0,0.15789470076560974},{0.8888888359069824,1.0,0.05263153463602066},{0.8888888359069824,1.0,-0.05263161659240723},{0.8888888359069824,1.0,-0.15789476037025452},{0.8888888359069824,1.0,-0.2631579041481018},{0.8888888359069824,1.0,-0.3684210777282715},{0.8888888359069824,1.0,-0.47368425130844116},{0.8888888359069824,1.0,-0.5789474248886108},{0.8888888359069824,1.0,-0.6842105388641357},{0.8888888359069824,1.0,-0.7894736528396606},{0.0,1.0,-0.8947368264198303},{0.11111108958721161,1.0,-0.8947368264198303},{0.2222222089767456,1.0,-0.8947368264198303},{0.3333333134651184,1.0,-0.8947368264198303},{0.4444444179534912,1.0,-0.8947368264198303},{0.555555522441864,1.0,-0.8947368264198303},{0.6666666269302368,1.0,-0.8947368264198303},{0.7777777314186096,1.0,-0.8947368264198303},{0.8888888359069824,1.0,-0.8947368860244751},{1.0,0.8888888955116272,-1.0},{1.0,0.7777777910232544,-1.0},{1.0,0.6666666865348816,-1.0},{1.0,0.5555555820465088,-1.0},{1.0,0.444444477558136,-1.0},{1.0,0.3333333730697632,-1.0},{1.0,0.2222222536802292,-1.0},{1.0,0.11111114174127579,-1.0},{1.0,0.11111108958721161,1.0},{1.0,0.2222222089767456,1.0},{1.0,0.3333333134651184,1.0},{1.0,0.4444444179534912,1.0},{1.0,0.555555522441864,1.0},{1.0,0.6666666269302368,1.0},{1.0,0.7777777314186096,1.0},{1.0,0.8888888359069824,1.0},{1.0,0.11111108958721161,-0.8947368860244751},{1.0,0.2222222089767456,-0.8947368860244751},{1.0,0.3333333134651184,-0.8947368860244751},{1.0,0.4444444179534912,-0.8947368860244751},{1.0,0.555555522441864,-0.8947368860244751},{1.0,0.6666666269302368,-0.8947368860244751},{1.0,0.7777777314186096,-0.8947368860244751},{1.0,0.8888888359069824,-0.8947368860244751},{1.0,0.8888888359069824,-0.7894737124443054},{1.0,0.8888888359069824,-0.6842105388641357},{1.0,0.8888888359069824,-0.5789474248886108},{1.0,0.8888888359069824,-0.47368425130844116},{1.0,0.8888888359069824,-0.3684210777282715},{1.0,0.8888888359069824,-0.2631579339504242},{1.0,0.8888888359069824,-0.1578947752714157},{1.0,0.8888888359069824,-0.052631624042987823},{1.0,0.8888888359069824,0.052631527185440063},{1.0,0.8888888359069824,0.15789468586444855},{1.0,0.8888888359069824,0.26315784454345703},{1.0,0.8888888359069824,0.3684209883213043},{1.0,0.8888888359069824,0.4736841320991516},{1.0,0.8888888359069824,0.5789473056793213},{1.0,0.8888888359069824,0.684210479259491},{1.0,0.8888888359069824,0.7894736528396606},{1.0,0.11111108958721161,0.8947368264198303},{1.0,0.2222222089767456,0.8947368264198303},{1.0,0.3333333134651184,0.8947368264198303},{1.0,0.4444444179534912,0.8947368264198303},{1.0,0.555555522441864,0.8947368264198303},{1.0,0.6666666269302368,0.8947368264198303},{1.0,0.7777777314186096,0.8947368264198303},{1.0,0.8888888359069824,0.8947368264198303},{0.0,0.8888888359069824,-1.0},{0.11111108958721161,0.8888888359069824,-1.0},{0.2222222089767456,0.8888888359069824,-1.0},{0.3333333134651184,0.8888888359069824,-1.0},{0.4444444179534912,0.8888888359069824,-1.0},{0.5555555820465088,0.8888888359069824,-1.0},{0.6666666269302368,0.8888888359069824,-1.0},{0.7777777910232544,0.8888888359069824,-1.0},{0.8888888955116272,0.11111108958721161,-1.0},{0.8888888955116272,0.2222222089767456,-1.0},{0.8888888955116272,0.3333333134651184,-1.0},{0.8888888955116272,0.4444444179534912,-1.0},{0.8888888955116272,0.555555522441864,-1.0},{0.8888888955116272,0.6666666269302368,-1.0},{0.8888888955116272,0.7777777314186096,-1.0},{0.8888888359069824,0.8888888359069824,-1.0},{0.8888888359069824,0.11111108958721161,1.0},{0.8888888359069824,0.2222222089767456,1.0},{0.8888888359069824,0.3333333134651184,1.0},{0.8888888359069824,0.4444444179534912,1.0},{0.8888888359069824,0.555555522441864,1.0},{0.8888888359069824,0.6666666269302368,1.0},{0.8888888359069824,0.7777777314186096,1.0},{0.8888888359069824,0.8888888359069824,1.0},{0.7777777910232544,0.8888888359069824,1.0},{0.6666666269302368,0.8888888359069824,1.0},{0.5555555820465088,0.8888888359069824,1.0},{0.444444477558136,0.8888888359069824,1.0},{0.3333333730697632,0.8888888359069824,1.0},{0.222222238779068,0.8888888359069824,1.0},{0.11111113429069519,0.8888888359069824,1.0},{0.0,0.8888888359069824,1.0},{-1.0,1.0,-1.0},{-1.0,1.0,1.0},{-1.0,1.0,0.8947368264198303},{-1.0,1.0,0.7894736528396606},{-1.0,1.0,0.684210479259491},{-1.0,1.0,0.5789473056793213},{-1.0,1.0,0.4736841320991516},{-1.0,1.0,0.3684209883213043},{-1.0,1.0,0.26315784454345703},{-1.0,1.0,0.15789468586444855},{-1.0,1.0,0.052631527185440063},{-1.0,1.0,-0.052631624042987823},{-1.0,1.0,-0.1578947752714157},{-1.0,1.0,-0.2631579339504242},{-1.0,1.0,-0.3684210777282715},{-1.0,1.0,-0.47368425130844116},{-1.0,1.0,-0.5789474248886108},{-1.0,1.0,-0.6842105388641357},{-1.0,1.0,-0.7894737124443054},{-1.0,1.0,-0.8947368860244751},{-0.11111108958721161,1.0,-1.0},{-0.2222222089767456,1.0,-1.0},{-0.3333333134651184,1.0,-1.0},{-0.4444444179534912,1.0,-1.0},{-0.555555522441864,1.0,-1.0},{-0.6666666269302368,1.0,-1.0},{-0.7777777314186096,1.0,-1.0},{-0.8888888359069824,1.0,-1.0},{-0.8888888955116272,1.0,1.0},{-0.7777777910232544,1.0,1.0},{-0.6666666865348816,1.0,1.0},{-0.5555555820465088,1.0,1.0},{-0.444444477558136,1.0,1.0},{-0.3333333730697632,1.0,1.0},{-0.2222222536802292,1.0,1.0},{-0.11111114174127579,1.0,1.0},{-0.11111108958721161,1.0,0.8947368860244751},{-0.2222222089767456,1.0,0.8947368860244751},{-0.3333333134651184,1.0,0.8947368860244751},{-0.4444444179534912,1.0,0.8947368860244751},{-0.555555522441864,1.0,0.8947368860244751},{-0.6666666269302368,1.0,0.8947368860244751},{-0.7777777314186096,1.0,0.8947368860244751},{-0.8888888359069824,1.0,0.8947368860244751},{-0.8888888359069824,1.0,0.7894736528396606},{-0.8888888359069824,1.0,0.6842105388641357},{-0.8888888359069824,1.0,0.5789473056793213},{-0.8888888359069824,1.0,0.4736841320991516},{-0.8888888359069824,1.0,0.3684210181236267},{-0.8888888359069824,1.0,0.26315784454345703},{-0.8888888359069824,1.0,0.15789470076560974},{-0.8888888359069824,1.0,0.05263153463602066},{-0.8888888359069824,1.0,-0.05263161659240723},{-0.8888888359069824,1.0,-0.15789476037025452},{-0.8888888359069824,1.0,-0.2631579041481018},{-0.8888888359069824,1.0,-0.3684210777282715},{-0.8888888359069824,1.0,-0.47368425130844116},{-0.8888888359069824,1.0,-0.5789474248886108},{-0.8888888359069824,1.0,-0.6842105388641357},{-0.8888888359069824,1.0,-0.7894736528396606},{-0.11111108958721161,1.0,-0.8947368264198303},{-0.2222222089767456,1.0,-0.8947368264198303},{-0.3333333134651184,1.0,-0.8947368264198303},{-0.4444444179534912,1.0,-0.8947368264198303},{-0.555555522441864,1.0,-0.8947368264198303},{-0.6666666269302368,1.0,-0.8947368264198303},{-0.7777777314186096,1.0,-0.8947368264198303},{-0.8888888359069824,1.0,-0.8947368860244751},{-1.0,0.8888888955116272,-1.0},{-1.0,0.7777777910232544,-1.0},{-1.0,0.6666666865348816,-1.0},{-1.0,0.5555555820465088,-1.0},{-1.0,0.444444477558136,-1.0},{-1.0,0.3333333730697632,-1.0},{-1.0,0.2222222536802292,-1.0},{-1.0,0.11111114174127579,-1.0},{-1.0,0.11111108958721161,1.0},{-1.0,0.2222222089767456,1.0},{-1.0,0.3333333134651184,1.0},{-1.0,0.4444444179534912,1.0},{-1.0,0.555555522441864,1.0},{-1.0,0.6666666269302368,1.0},{-1.0,0.7777777314186096,1.0},{-1.0,0.8888888359069824,1.0},{-1.0,0.11111108958721161,-0.8947368860244751},{-1.0,0.2222222089767456,-0.8947368860244751},{-1.0,0.3333333134651184,-0.8947368860244751},{-1.0,0.4444444179534912,-0.8947368860244751},{-1.0,0.555555522441864,-0.8947368860244751},{-1.0,0.6666666269302368,-0.8947368860244751},{-1.0,0.7777777314186096,-0.8947368860244751},{-1.0,0.8888888359069824,-0.8947368860244751},{-1.0,0.8888888359069824,-0.7894737124443054},{-1.0,0.8888888359069824,-0.6842105388641357},{-1.0,0.8888888359069824,-0.5789474248886108},{-1.0,0.8888888359069824,-0.47368425130844116},{-1.0,0.8888888359069824,-0.3684210777282715},{-1.0,0.8888888359069824,-0.2631579339504242},{-1.0,0.8888888359069824,-0.1578947752714157},{-1.0,0.8888888359069824,-0.052631624042987823},{-1.0,0.8888888359069824,0.052631527185440063},{-1.0,0.8888888359069824,0.15789468586444855},{-1.0,0.8888888359069824,0.26315784454345703},{-1.0,0.8888888359069824,0.3684209883213043},{-1.0,0.8888888359069824,0.4736841320991516},{-1.0,0.8888888359069824,0.5789473056793213},{-1.0,0.8888888359069824,0.684210479259491},{-1.0,0.8888888359069824,0.7894736528396606},{-1.0,0.11111108958721161,0.8947368264198303},{-1.0,0.2222222089767456,0.8947368264198303},{-1.0,0.3333333134651184,0.8947368264198303},{-1.0,0.4444444179534912,0.8947368264198303},{-1.0,0.555555522441864,0.8947368264198303},{-1.0,0.6666666269302368,0.8947368264198303},{-1.0,0.7777777314186096,0.8947368264198303},{-1.0,0.8888888359069824,0.8947368264198303},{-0.11111108958721161,0.8888888359069824,-1.0},{-0.2222222089767456,0.8888888359069824,-1.0},{-0.3333333134651184,0.8888888359069824,-1.0},{-0.4444444179534912,0.8888888359069824,-1.0},{-0.5555555820465088,0.8888888359069824,-1.0},{-0.6666666269302368,0.8888888359069824,-1.0},{-0.7777777910232544,0.8888888359069824,-1.0},{-0.8888888955116272,0.11111108958721161,-1.0},{-0.8888888955116272,0.2222222089767456,-1.0},{-0.8888888955116272,0.3333333134651184,-1.0},{-0.8888888955116272,0.4444444179534912,-1.0},{-0.8888888955116272,0.555555522441864,-1.0},{-0.8888888955116272,0.6666666269302368,-1.0},{-0.8888888955116272,0.7777777314186096,-1.0},{-0.8888888359069824,0.8888888359069824,-1.0},{-0.8888888359069824,0.11111108958721161,1.0},{-0.8888888359069824,0.2222222089767456,1.0},{-0.8888888359069824,0.3333333134651184,1.0},{-0.8888888359069824,0.4444444179534912,1.0},{-0.8888888359069824,0.555555522441864,1.0},{-0.8888888359069824,0.6666666269302368,1.0},{-0.8888888359069824,0.7777777314186096,1.0},{-0.8888888359069824,0.8888888359069824,1.0},{-0.7777777910232544,0.8888888359069824,1.0},{-0.6666666269302368,0.8888888359069824,1.0},{-0.5555555820465088,0.8888888359069824,1.0},{-0.444444477558136,0.8888888359069824,1.0},{-0.3333333730697632,0.8888888359069824,1.0},{-0.222222238779068,0.8888888359069824,1.0},{-0.11111113429069519,0.8888888359069824,1.0}};
