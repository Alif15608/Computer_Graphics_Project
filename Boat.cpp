#include <windows.h>  // for MS Windows
#include <iostream>
#include <GL/glut.h>
#include <math.h>>
using namespace std;

GLfloat position_b1 = -0.5f; // for boat1
GLfloat speed_b1 = 0.002f;

GLfloat position_b2 = -1.5f; // for boat2
GLfloat speed_b2 = 0.002f;


void boat1() {
    glPushMatrix();
	glTranslatef(position_b1,0.0f, 0.0f);

    glBegin(GL_POLYGON);
        glColor3ub(255, 140, 26);
        glVertex2f(-0.05f, -0.75f);
        glVertex2f(-0.05f, -0.8f);
        glVertex2f(0.1f, -0.8f);
        glVertex2f(0.1f, -0.75f);
    glEnd();

    x=0.1f; y=-0.8f; radius =.05f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(255, 140, 26);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-0.05f; y=-0.8f; radius =.05f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(179, 89, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(102, 51, 0);
        glVertex2f(-0.25f, -0.8f);
        glVertex2f(0.25f, -0.8f);
        glVertex2f(0.15f, -0.85f);
        glVertex2f(-0.15f, -0.85f);
    glEnd();
    glPopMatrix();
}

void boat2() {
    glPushMatrix();
	glTranslatef(position_b2,0.0f, 0.0f);

    glBegin(GL_POLYGON);
        glColor3ub(230, 230, 0);
        glVertex2f(-0.05f, -0.6f);
        glVertex2f(-0.05f, -0.65f);
        glVertex2f(0.1f, -0.65f);
        glVertex2f(0.1f, -0.6f);
    glEnd();

    x=0.1f; y=-0.65f; radius =.05f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(153, 153, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-0.05f; y=-0.65f; radius =.05f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(230, 230, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0);
        glVertex2f(-0.25f, -0.65f);
        glVertex2f(0.25f, -0.65f);
        glVertex2f(0.15f, -0.7f);
        glVertex2f(-0.15f, -0.7f);
    glEnd();

    glPopMatrix();
}

void start() {
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);



void update_boat1(int value) {
    if(position_b1 < -2.0)
        position_b1 = 0.0f;

    position_b1 -= speed_b1;

	glutPostRedisplay();
	glutTimerFunc(100, update_boat1, 0);
}

void update_boat2(int value) {
    if(position_b2 > 0.0)
        position_b2 = -2.0f;

    position_b2 += speed_b2;

	glutPostRedisplay();
	glutTimerFunc(100, update_boat2, 0);
}


void inigl() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    gluOrtho2D(-2, 2, -1, 1); // Set range of axis of display (left, right, bottom, top)
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
inigl();

    glutTimerFunc(100, update_boat1,0);
    glutTimerFunc(100, update_boat2, 0);

    glutMainLoop(); // Enter the event-processing loop

    return 0;
}
