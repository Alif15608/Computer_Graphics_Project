#include <windows.h>  // for MS Windows
#include <iostream>
#include <GL/glut.h>
#include <math.h>>
using namespace std;
int frameNumber = 1; // for windmill
void windmill(){
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    glTranslatef(1.6, 0.3, 0.0);
    glColor3ub(255, 102, 102); //base
    glBegin(GL_POLYGON);
        glVertex2f(-0.80f, 0.275f);
        glVertex2f(-0.80f, 0.25f);
        glVertex2f(-0.65f, 0.25f);
        glVertex2f(-0.65f, 0.275f);

    glEnd();

    glColor3ub(255, 255, 255); //body
    glBegin(GL_POLYGON);
        glVertex2f(-0.775f, 0.5f);
        glVertex2f(-0.79f, 0.275f);
        glVertex2f(-0.66f, 0.275f);
        glVertex2f(-0.675f, 0.5f);

    glEnd();

    glColor3ub(51, 153, 255); //door
    glBegin(GL_POLYGON);
        glVertex2f(-0.71f, 0.35f);
        glVertex2f(-0.71f, 0.275f);
        glVertex2f(-0.74f, 0.275f);
        glVertex2f(-0.74f, 0.35f);

    glEnd();

    glColor3ub(51, 153, 255); //window
    glBegin(GL_POLYGON);
        glVertex2f(-0.71f, 0.45f);
        glVertex2f(-0.71f, 0.4f);
        glVertex2f(-0.74f, 0.4f);
        glVertex2f(-0.74f, 0.45f);

    glEnd();

    glColor3ub(00, 102, 204); //head
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.79f, 0.5f);
        glVertex2f(-0.725f, 0.63f);
        glVertex2f(-0.66f, 0.5f);

    glEnd();

    glTranslatef(-0.725f, 0.55f, 0.0f);
    glRotated(frameNumber * (-180.0/500), 0, 0, 1);

    glColor3ub(204, 229, 255);//wing1
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(0.20f, 0.00f);
        glVertex2f(0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(0.03f, 0.05f);
        glVertex2f(0.03f, 0.01f);
        glVertex2f(0.20f, 0.01f);
        glVertex2f(0.20f, 0.05f);
    glEnd();

    glColor3ub(204, 229, 255); //wing2
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(-0.20f, 0.00f);
        glVertex2f(-0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(-0.03f, -0.04f);
        glVertex2f(-0.03f, -0.00f);
        glVertex2f(-0.20f, -0.00f);
        glVertex2f(-0.20f, -0.04f);
    glEnd();

    glRotatef(90,0.0f, 0.0f, 1.0f);
    glColor3ub(204, 229, 255); //wing3
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(0.20f, 0.00f);
        glVertex2f(0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(0.03f, 0.05f);
        glVertex2f(0.03f, 0.01f);
        glVertex2f(0.20f, 0.01f);
        glVertex2f(0.20f, 0.05f);
    glEnd();

    glColor3ub(204, 229, 255); //wing4
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(-0.20f, 0.00f);
        glVertex2f(-0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(-0.03f, -0.04f);
        glVertex2f(-0.03f, -0.00f);
        glVertex2f(-0.20f, -0.00f);
        glVertex2f(-0.20f, -0.04f);
    glEnd();

    x=-0.0f; y=0.0f; radius =.02f;
	triangleAmount = 50;
	twicePi = 2.0f * PI;
	glColor3ub(255, 51, 51);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glLoadIdentity();
}
