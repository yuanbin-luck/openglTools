
#include "./glad/include/glad/glad.h"
#include "./glad/include/KHR/khrplatform.h"

#include "./glfw/glfw/include/GLFW/glfw3.h"
#include "./glfw/glfw/include/GLFW/glfw3native.h"

#include "./glm/glm/glm.hpp"
#include "./glm/glm/gtc/matrix_transform.hpp"
#include "./glm/glm/gtc/type_ptr.hpp"

#if _DEBUG
#pragma comment(lib, "D:\\Tools\\Opengl\\glad\\lib\\gladd.lib")
#pragma comment(lib, "D:\\Tools\\Opengl\\glfw\\glfw\\lib\\glfw3.lib")
#pragma comment(lib, "D:\\Tools\\Opengl\\glm\\lib\\Debug\\glm_static.lib")

#else
#pragma comment(lib, "D:\\Tools\\Opengl\\glad\\lib\\glad.lib")
#pragma comment(lib, "D:\\Tools\\Opengl\\glfw\\glfw\\lib\\glfw3d.lib")
#pragma comment(lib, "D:\\Tools\\Opengl\\glm\\lib\\Release\\glm_static.lib")

#endif


//GLM对于矩阵数据类型的定义位于glm / glm.hpp头文件中。
//生成变换矩阵的函数位于glm / gtc / matrix_transform.hpp头文件中。
//生成投影矩阵的函数位于glm / ext / matrix_clip_space.hpp头文件中。
//将数组转换成矩阵的函数位于头文件glm / gtc / type_ptr.hpp中。
//glm::value_ptr函数位于头文件glm / gtc / type_ptr.hpp中