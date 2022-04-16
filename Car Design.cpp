#include <windows.h>  // for MS Windows
#include <iostream>
#include <GL/glut.h>
#include <math.h>>
using namespace std;
GLfloat position_c1 = 1.6f; // for car 1
GLfloat speed_c1 = 0.01f;

GLfloat position_c2 = 2.4f; // for car 2
GLfloat speed_c2 = 0.01f;

GLfloat position_c3 = -0.9f; // for car 3
GLfloat speed_c3 = 0.01f;

GLfloat position_c4 = 0.9f; // for car 4
GLfloat speed_c4 = 0.01f;

int flag = 0;
void car1() {
    glPushMatrix();
	glTranslatef(position_c1, 0.0f, 0.0f);
    glBegin(GL_POLYGON); // body
        glColor3ub(230, 0, 0);
        glVertex2f(-0.2f, 0.25f);
        glVertex2f(0.07f, 0.25f);
        glVertex2f(0.15f, 0.23f);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.15f, 0.07f);
        glVertex2f(0.07f, 0.05f);
        glVertex2f(-0.2f, 0.05f);
        glVertex2f(-0.22f, 0.07f);
        glVertex2f(-0.22f, 0.23f);
    glEnd();

    glBegin(GL_POLYGON); // window
        glColor3ub(0, 0, 0);
        glVertex2f(0.07f, 0.24f);
        glVertex2f(0.07f, 0.06f);
        glVertex2f(-0.18f, 0.06f);
        glVertex2f(-0.18f, 0.24f);
    glEnd();
    glBegin(GL_POLYGON); // roof
        glColor3ub(230, 0, 0);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.03f, 0.21f);
        glVertex2f(-0.15f, 0.21f);
        glVertex2f(-0.15f, 0.09f);
    glEnd();

    glBegin(GL_POLYGON); // light
        glColor3ub(242, 242, 242);
        glVertex2f(0.15f, 0.23f);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.14f, 0.2f);
        glVertex2f(0.14f, 0.23f);
    glEnd();
    glBegin(GL_POLYGON); // light
        glColor3ub(242, 242, 242);
        glVertex2f(0.15f, 0.07f);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.14f, 0.1f);
        glVertex2f(0.14f, 0.07f);
    glEnd();

    if(flag != 0) {
        glBegin(GL_POLYGON); // head-light
            glColor3ub(255, 255, 204);
            glVertex2f(0.17f, 0.2f);
            glVertex2f(0.14f, 0.23f);
            glVertex2f(0.45f, 0.3f);
            glVertex2f(0.45f, 0.1f);
        glEnd();
        glBegin(GL_POLYGON); // head-light
            glColor3ub(255, 255, 204);
            glVertex2f(0.17f, 0.1f);
            glVertex2f(0.14f, 0.07f);
            glVertex2f(0.45f, 0.0f);
            glVertex2f(0.45f, 0.2f);
        glEnd();
    }

    glBegin(GL_LINES);
        glColor3ub(230, 0, 0);
        glVertex2f(0.07f, 0.24f);
        glVertex2f(0.03f, 0.21f);

        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.07f, 0.06f);

        glVertex2f(-0.18f, 0.06f);
        glVertex2f(-0.15f, 0.09f);

        glVertex2f(-0.15f, 0.21f);
        glVertex2f(-0.18f, 0.24f);

        glVertex2f(-0.06f, 0.24f);
        glVertex2f(-0.06f, 0.21f);

        glVertex2f(-0.06f, 0.09f);
        glVertex2f(-0.06f, 0.06f);
    glEnd();

    glPopMatrix();
}

void car2() {
    glPushMatrix();
	glTranslatef(position_c2, 0.0f, 0.0f);
	glRotatef(180, 0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON); // body
        glColor3ub(255, 204, 0);
        glVertex2f(-0.04f, 0.25f);
        glVertex2f(0.07f, 0.25f);
        glVertex2f(0.15f, 0.23f);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.15f, 0.07f);
        glVertex2f(0.07f, 0.05f);
        glVertex2f(-0.04f, 0.05f);
    glEnd();

    glBegin(GL_POLYGON); // window
        glColor3ub(0, 0, 0);
        glVertex2f(0.07f, 0.24f);
        glVertex2f(0.07f, 0.06f);
        glVertex2f(-0.03f, 0.06f);
        glVertex2f(-0.03f, 0.24f);
    glEnd();
    glBegin(GL_POLYGON); // roof
        glColor3ub(255, 204, 0);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.03f, 0.21f);
        glVertex2f(-0.07f, 0.21f);
        glVertex2f(-0.07f, 0.09f);
    glEnd();

    glBegin(GL_POLYGON); // light
        glColor3ub(242, 242, 242);
        glVertex2f(0.15f, 0.23f);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.14f, 0.2f);
        glVertex2f(0.14f, 0.23f);
    glEnd();
    glBegin(GL_POLYGON); // light
        glColor3ub(242, 242, 242);
        glVertex2f(0.15f, 0.07f);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.14f, 0.1f);
        glVertex2f(0.14f, 0.07f);
    glEnd();

    if(flag != 0) {
        glBegin(GL_POLYGON); // head-light
            glColor3ub(255, 255, 204);
            glVertex2f(0.17f, 0.2f);
            glVertex2f(0.14f, 0.23f);
            glVertex2f(0.45f, 0.3f);
            glVertex2f(0.45f, 0.1f);
        glEnd();
        glBegin(GL_POLYGON); // head-light
            glColor3ub(255, 255, 204);
            glVertex2f(0.17f, 0.1f);
            glVertex2f(0.14f, 0.07f);
            glVertex2f(0.45f, 0.0f);
            glVertex2f(0.45f, 0.2f);
        glEnd();
    }

    glBegin(GL_POLYGON); // lorry
        glColor3ub(242, 242, 242);
        glVertex2f(-0.06f, 0.25f);
        glVertex2f(-0.06f, 0.05f);
        glVertex2f(-0.5f, 0.05f);
        glVertex2f(-0.5f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
        glColor3ub(255, 204, 0);
        glVertex2f(0.07f, 0.24f);
        glVertex2f(0.03f, 0.21f);

        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.07f, 0.06f);

        glVertex2f(-0.03f, 0.24f);
        glVertex2f(-0.03f, 0.21f);

        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.03f, 0.06f);

        glColor3ub(217, 217, 217);
        glVertex2f(-0.06f, 0.25f);
        glVertex2f(-0.06f, 0.05f);

        glVertex2f(-0.06f, 0.05f);
        glVertex2f(-0.5f, 0.05f);

        glVertex2f(-0.5f, 0.05f);
        glVertex2f(-0.5f, 0.25f);

        glVertex2f(-0.5f, 0.25f);
        glVertex2f(-0.06f, 0.25f);
    glEnd();

    glPopMatrix();
}

void car3() {
    glPushMatrix();
	glTranslatef(0.9, position_c3, 0.0f);
	glRotatef(90, 0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON); // body
        glColor3ub(255, 255, 255);
        glVertex2f(-0.13f, 0.25f);
        glVertex2f(0.07f, 0.25f);
        glVertex2f(0.15f, 0.23f);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.15f, 0.07f);
        glVertex2f(0.07f, 0.05f);
        glVertex2f(-0.13f, 0.05f);
        glVertex2f(-0.15f, 0.07f);
        glVertex2f(-0.15f, 0.23f);
    glEnd();

    glBegin(GL_POLYGON); // window
        glColor3ub(0, 0, 0);
        glVertex2f(0.07f, 0.24f);
        glVertex2f(0.07f, 0.06f);
        glVertex2f(-0.13f, 0.06f);
        glVertex2f(-0.13f, 0.24f);
    glEnd();
    glBegin(GL_POLYGON); // roof
        glColor3ub(255, 255, 255);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.03f, 0.21f);
        glVertex2f(-0.1f, 0.21f);
        glVertex2f(-0.1f, 0.09f);
    glEnd();

    glBegin(GL_POLYGON); // light
        glColor3ub(242, 242, 242);
        glVertex2f(0.15f, 0.23f);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.14f, 0.2f);
        glVertex2f(0.14f, 0.23f);
    glEnd();
    glBegin(GL_POLYGON); // light
        glColor3ub(242, 242, 242);
        glVertex2f(0.15f, 0.07f);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.14f, 0.1f);
        glVertex2f(0.14f, 0.07f);
    glEnd();

    if(flag != 0) {
        glBegin(GL_POLYGON); // head-light
            glColor3ub(255, 255, 204);
            glVertex2f(0.17f, 0.2f);
            glVertex2f(0.14f, 0.23f);
            glVertex2f(0.45f, 0.3f);
            glVertex2f(0.45f, 0.1f);
        glEnd();
        glBegin(GL_POLYGON); // head-light
            glColor3ub(255, 255, 204);
            glVertex2f(0.17f, 0.1f);
            glVertex2f(0.14f, 0.07f);
            glVertex2f(0.45f, 0.0f);
            glVertex2f(0.45f, 0.2f);
        glEnd();
    }

    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.07f, 0.24f);
        glVertex2f(0.03f, 0.21f);

        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.07f, 0.06f);

        glVertex2f(-0.13f, 0.06f);
        glVertex2f(-0.1f, 0.09f);

        glVertex2f(-0.1f, 0.21f);
        glVertex2f(-0.13f, 0.24f);

        glVertex2f(-0.03f, 0.24f);
        glVertex2f(-0.03f, 0.21f);

        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.03f, 0.06f);
    glEnd();

    glPopMatrix();
}

void car4() {
    glPushMatrix();
	glTranslatef(0.9f, position_c4, 0.0f);
	glRotatef(270 ,0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON); // body
        glColor3ub(51, 102, 255);
        glVertex2f(-0.13f, 0.25f);
        glVertex2f(0.07f, 0.25f);
        glVertex2f(0.15f, 0.23f);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.15f, 0.07f);
        glVertex2f(0.07f, 0.05f);
        glVertex2f(-0.13f, 0.05f);
        glVertex2f(-0.15f, 0.07f);
        glVertex2f(-0.15f, 0.23f);
    glEnd();

    glBegin(GL_POLYGON); // window
        glColor3ub(0, 0, 0);
        glVertex2f(0.07f, 0.24f);
        glVertex2f(0.07f, 0.06f);
        glVertex2f(-0.13f, 0.06f);
        glVertex2f(-0.13f, 0.24f);
    glEnd();
    glBegin(GL_POLYGON); // roof
        glColor3ub(51, 102, 255);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.03f, 0.21f);
        glVertex2f(-0.1f, 0.21f);
        glVertex2f(-0.1f, 0.09f);
    glEnd();

    glBegin(GL_POLYGON); // light
        glColor3ub(242, 242, 242);
        glVertex2f(0.15f, 0.23f);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.14f, 0.2f);
        glVertex2f(0.14f, 0.23f);
    glEnd();
    glBegin(GL_POLYGON); // light
        glColor3ub(242, 242, 242);
        glVertex2f(0.15f, 0.07f);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.14f, 0.1f);
        glVertex2f(0.14f, 0.07f);
    glEnd();

    if(flag != 0) {
        glBegin(GL_POLYGON); // head-light
            glColor3ub(255, 255, 204);
            glVertex2f(0.17f, 0.2f);
            glVertex2f(0.14f, 0.23f);
            glVertex2f(0.45f, 0.3f);
            glVertex2f(0.45f, 0.1f);
        glEnd();
        glBegin(GL_POLYGON); // head-light
            glColor3ub(255, 255, 204);
            glVertex2f(0.17f, 0.1f);
            glVertex2f(0.14f, 0.07f);
            glVertex2f(0.45f, 0.0f);
            glVertex2f(0.45f, 0.2f);
        glEnd();
    }

    glBegin(GL_LINES);
        glColor3ub(51, 102, 255);
        glVertex2f(0.07f, 0.24f);
        glVertex2f(0.03f, 0.21f);

        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.07f, 0.06f);

        glVertex2f(-0.13f, 0.06f);
        glVertex2f(-0.1f, 0.09f);

        glVertex2f(-0.1f, 0.21f);
        glVertex2f(-0.13f, 0.24f);

        glVertex2f(-0.03f, 0.24f);
        glVertex2f(-0.03f, 0.21f);

        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.03f, 0.06f);
    glEnd();

    glPopMatrix();
}
