#include <windows.h>  // for MS Windows
#include <iostream>
#include <GL/glut.h>
#include <math.h>>
using namespace std;

#define PI 3.14159265358979323846



void fence() {
    glBegin(GL_LINES);
        glColor3ub(204, 0, 0);
        glVertex2f(-2.0f, 0.6f); // left
        glVertex2f(0.39f, 0.6f);

        glVertex2f(-2.0f, 0.53f);
        glVertex2f(0.39f, 0.53f);

        glVertex2f(-1.98f, 0.5f);
        glVertex2f(-1.98f, 0.63f);

        glVertex2f(-1.5f, 0.5f);
        glVertex2f(-1.5f, 0.63f);

        glVertex2f(-1.45f, 0.5f);
        glVertex2f(-1.45f, 0.63f);

        glVertex2f(-0.4f, 0.5f);
        glVertex2f(-0.4f, 0.63f);

        glVertex2f(-0.85f, 0.5f);
        glVertex2f(-0.85f, 0.63f);

        glVertex2f(-0.8f, 0.5f);
        glVertex2f(-0.8f, 0.63f);

        glVertex2f(-0.17f, 0.5f);
        glVertex2f(-0.17f, 0.63f);

        glVertex2f(0.37f, 0.5f);
        glVertex2f(0.37f, 0.63f);

        glVertex2f(2.0f, 0.6f); // right
        glVertex2f(1.42f, 0.6f);

        glVertex2f(2.0f, 0.53f);
        glVertex2f(1.42f, 0.53f);

        glVertex2f(1.95f, 0.5f);
        glVertex2f(1.95f, 0.63f);

        glVertex2f(1.9f, 0.5f);
        glVertex2f(1.9f, 0.63f);

        glVertex2f(1.85f, 0.5f);
        glVertex2f(1.85f, 0.63f);

        glVertex2f(1.8f, 0.5f);
        glVertex2f(1.8f, 0.63f);

        glVertex2f(1.75f, 0.5f);
        glVertex2f(1.75f, 0.63f);

        glVertex2f(1.7f, 0.5f);
        glVertex2f(1.7f, 0.63f);

        glVertex2f(1.65f, 0.5f);
        glVertex2f(1.65f, 0.63f);

        glVertex2f(1.6f, 0.5f);
        glVertex2f(1.6f, 0.63f);

        glVertex2f(1.55f, 0.5f);
        glVertex2f(1.55f, 0.63f);

        glVertex2f(1.5f, 0.5f);
        glVertex2f(1.5f, 0.63f);

        glVertex2f(1.45f, 0.5f);
        glVertex2f(1.45f, 0.63f);
    glEnd();
}

void start() {
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();

    return 0;
}


