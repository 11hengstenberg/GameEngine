#include <iostream>
#include <math.h>

#include <GLFW/glfw3.h>

GLFWwindow *window;

int main(int argc, const char * argv[]) {
    std::cout << "Hello World!" << std::endl;

    !glfwInit();
    window = glfwCreateWindow(300, 300, "Sample", NULL, NULL);

    while(!glfwWindowShouldClose(window))
    {
      glfwSwapBuffers(window);
      glfwPollEvents();
    }



    return 0;
} 

