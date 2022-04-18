#include <windows.h>  // for MS Windows
#include <iostream>
#include <GL/glut.h>
#include <math.h>>
using namespace std;

#define PI 3.14159265358979323846
int triangleAmount;
GLfloat position_s = 1.6f; // for smoke
GLfloat speed_s = 0.01f;

void factory() {
    // funnel
    glBegin(GL_POLYGON);
        glColor3ub(163, 136, 151);
        glVertex2f(1.5f, -0.8f);
        glVertex2f(1.55f, -0.4f);
        glVertex2f(1.65f, -0.4f);
        glVertex2f(1.7f, -0.8f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(231, 222, 225);
        glVertex2f(1.54f, -0.5f);
        glVertex2f(1.55f, -0.45f);
        glVertex2f(1.65f, -0.45f);
        glVertex2f(1.66f, -0.5f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(128, 0, 0);
        glVertex2f(1.5f, -0.8f);
        glVertex2f(1.55f, -0.4f);

        glVertex2f(1.55f, -0.4f);
        glVertex2f(1.65f, -0.4f);

        glVertex2f(1.65f, -0.4f);
        glVertex2f(1.7f, -0.8f);

        glVertex2f(1.7f, -0.8f);
        glVertex2f(1.5f, -0.8f);
    glEnd();

    // smoke
    glPushMatrix();
	glTranslatef(position_s, -0.05f, 0.0f);

    x=0.0f; y=-0.21f; radius =.05f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(217, 217, 217);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=0.07f; y=-0.25f; radius =.05f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(217, 217, 217);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=0.0f; y=-0.28f; radius =.05f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(217, 217, 217);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();

void start() {
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    factory();

    glPushMatrix();
        windmill();
    glPopMatrix();



void update_smoke(int value) {
    if(position_s > 2.1)
        position_s = 1.6f;

    position_s += speed_s;

	glutPostRedisplay();
	glutTimerFunc(100, update_smoke, 0);
}
void inigl() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    gluOrtho2D(-2, 2, -1, 1); // Set range of axis of display (left, right, bottom, top)
}
int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT

    inigl();
        glutTimerFunc(100, update_smoke, 0);



    return 0;
}
