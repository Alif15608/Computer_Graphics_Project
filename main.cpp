#include<windows.h>
#include<iostream>
#include<GL/glut.h>
using namespace std;

char *c;

void road_footpath() {
    // road
    glBegin(GL_POLYGON);
        glColor3ub(95, 96, 91);
        glVertex2f(-2.0f, 0.5f);
        glVertex2f(2.0f, 0.5f);
        glVertex2f(2.0f, -0.5f);
        glVertex2f(-2.0f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(95, 96, 91);
        glVertex2f(0.4f, 1.0f);
        glVertex2f(1.4f, 1.0f);
        glVertex2f(1.4f, -1.0f);
        glVertex2f(0.4f, -1.0f);
    glEnd();

    // footpath
    glBegin(GL_POLYGON);
        glColor3ub(176, 191, 189);
        glVertex2f(-2.0f, 0.5f);
        glVertex2f(-2.0f, 0.3f);
        glVertex2f(0.6f, 0.3f);
        glVertex2f(0.6f, 0.5f);
    glEnd();

    // road border
    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3ub(102, 102, 102);
        glVertex2f(-2.0f, 0.5f);
        glVertex2f(0.4f, 0.5f);

        glVertex2f(0.4f, 0.5f);
        glVertex2f(0.4f, 1.0f);

        glVertex2f(1.4f, 1.0f);
        glVertex2f(1.4f, 0.5f);

        glVertex2f(1.4f, 0.5f);
        glVertex2f(2.0f, 0.5f);

        glVertex2f(2.0f, -0.5f);
        glVertex2f(1.4f, -0.5f);

        glVertex2f(1.4f, -0.5f);
        glVertex2f(1.4f, -1.0f);

        glVertex2f(0.4f, -1.0f);
        glVertex2f(0.4f, -0.5f);

        glVertex2f(0.4f, -0.5f);
        glVertex2f(-2.0f, -0.5f);

        glColor3ub(230, 230, 230);
        glVertex2f(-2.0f, 0.3f);
        glVertex2f(0.6f, 0.3f);

        glVertex2f(0.6f, 0.3f);
        glVertex2f(0.6f, 1.0f);

        glVertex2f(1.2f, 1.0f);
        glVertex2f(1.2f, 0.3f);

        glVertex2f(1.2f, 0.3f);
        glVertex2f(2.0f, 0.3f);

        glVertex2f(2.0f, -0.3f);
        glVertex2f(1.2f, -0.3f);

        glVertex2f(1.2f, -0.3f);
        glVertex2f(1.2f, -1.0f);

        glVertex2f(0.6f, -1.0f);
        glVertex2f(0.6f, -0.3f);

        glVertex2f(0.6f, -0.3f);
        glVertex2f(-2.0f, -0.3f);
    glEnd();
}

void day() {
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    // Background
    glBegin(GL_POLYGON);
        glColor3ub(51, 204, 51);
        glVertex2f(2.0f, 1.0f);
        glVertex2f(2.0f, -1.0f);
        glVertex2f(-2.0f, -1.0f);
        glVertex2f(-2.0f, 1.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(51, 204, 51);
        glVertex2f(0.35f, -0.5f);
        glVertex2f(1.9f, -0.5f);
        glVertex2f(1.9f, -1.0f);
        glVertex2f(0.35f, -1.0f);
    glEnd();

	road_footpath();

    glFlush();
}


void start() {
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

    glBegin(GL_POLYGON);
        glColor3ub(255,255,0);
        glVertex2f(-2.0f, 2.0f);
        glColor3ub(147,112,219);
        glVertex2f(2.0f, 2.0f);
        glColor3ub(30,144,255);
        glVertex2f(2.0f, -2.0f);
        glColor3ub(70,130,180);
        glVertex2f(-2.0f, -2.0f);
    glEnd();

    glColor3ub(255, 255, 255);
    c="Traffic View In A Signal";
    glRasterPos2f(-0.3, 0.7);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);

    glColor3ub(255, 0, 0);
    c="Press F to START the project";
    glRasterPos2f(-0.3, -0.7);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);

    glFlush();
}

void button(unsigned char key, int x, int y) {

    switch (key) {
        case 'f':
            glutDisplayFunc(day);
            break;
    }

}

void inigl() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    gluOrtho2D(-2, 2, -1, 1); // Set range of axis of display (left, right, bottom, top)
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1430, 800); // Set the window's initial width & height
    glutInitWindowPosition(0, 0); // Set the window position
    glutCreateWindow("CG Project"); // Create a window with the given title

    glutDisplayFunc(start);
    inigl();
    glutKeyboardFunc(button);
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}
