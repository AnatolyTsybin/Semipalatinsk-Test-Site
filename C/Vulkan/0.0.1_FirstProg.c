/*
 *  Program that makes a window with nothing in it.
 */

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <stdio.h>

int main()
{
    int succeed = 0;

    succeed = glfwInit();

    if(succeed == GLFW_FALSE)
    {
        fprintf(stderr, "ERROR: glfwInit() returned FALSE\n");
        return 1;
    }

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan window", NULL, NULL);

    if(window == NULL)
    {
        fprintf(stderr, "ERROR: glfwCreateWindow() returned NULL\n");
        return 2;
    }

    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(NULL, &extensionCount, NULL);

    printf("%d extensions supported\n", extensionCount);

    while(!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}

