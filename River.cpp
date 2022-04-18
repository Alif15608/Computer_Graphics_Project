#include <windows.h>  // for MS Windows
#include <iostream>
#include <GL/glut.h>
#include <math.h>>
using namespace std;
#define PI 3.14159265358979323846

GLfloat x, y, radius, twicePi; // for circle
int triangleAmount;


void river() {
    glBegin(GL_POLYGON);
        glColor3ub(51, 204, 255);
        glVertex2f(-2.0f, -1.0f);
        glVertex2f(-2.0f, -0.55f);
        glVertex2f(0.35f, -0.55f);
        glVertex2f(0.35f, -2.0f);
    glEnd();

    glPushMatrix();
	glTranslatef(position_r,0.0f, 0.0f);

    x=1.0f; y=-1.3f; radius =0.6f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(0, 191, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=0.5f; y=-1.3f; radius =0.6f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(0, 191, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    x=0.0f; y=-1.3f; radius =0.6f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(0, 191, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.5f; y=-1.3f; radius =0.6f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(0, 191, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-1.0f; y=-1.3f; radius =0.6f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(0, 191, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-1.5f; y=-1.3f; radius =0.6f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(0, 191, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-2.0f; y=-1.3f; radius =0.6f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(0, 191, 255);
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
}


void start() {
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

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


    river();
    glBegin(GL_POLYGON);
        glColor3ub(51, 204, 51);
        glVertex2f(0.35f, -0.5f);
        glVertex2f(1.9f, -0.5f);
        glVertex2f(1.9f, -1.0f);
        glVertex2f(0.35f, -1.0f);
    glEnd();
void night() {
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    // Background
    glBegin(GL_POLYGON);
        glColor3ub(41, 163, 41);
        glVertex2f(2.0f, 1.0f);
        glVertex2f(2.0f, -1.0f);
        glVertex2f(-2.0f, -1.0f);
        glVertex2f(-2.0f, 1.0f);
    glEnd();


    river();
    glBegin(GL_POLYGON);
        glColor3ub(41, 163, 41);
        glVertex2f(0.35f, -0.5f);
        glVertex2f(1.9f, -0.5f);
        glVertex2f(1.9f, -1.0f);
        glVertex2f(0.35f, -1.0f);
    glEnd();


      void update_river(int value) {
    if(position_r < -0.5)
        position_r = 0.0f;

    position_r -= speed_r;

	glutPostRedisplay();
	glutTimerFunc(100, update_river, 0);
}
int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    inigl();

    glutTimerFunc(100, update_river, 0);
     return 0;
}


