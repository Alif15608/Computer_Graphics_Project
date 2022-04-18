#include <windows.h>  // for MS Windows
#include <iostream>
#include <GL/glut.h>
#include <math.h>>
using namespace std;
void shop() {
// left shop start
glBegin(GL_POLYGON); // body
glColor3ub(255, 255, 255);
glVertex2f(-1.95f, 0.5f);
glVertex2f(-1.95f, 0.75f);
glVertex2f(-1.55f, 0.75f);
glVertex2f(-1.55f, 0.5f);
glEnd();
glBegin(GL_POLYGON); // roof
glColor3ub(128, 0, 0);
glVertex2f(-1.95f, 0.75f);
glVertex2f(-1.95f, 0.85f);
glVertex2f(-1.55f, 0.85f);
glVertex2f(-1.55f, 0.75f);
glEnd(); glBegin(GL_POLYGON); // shelter
glColor3ub(255, 0, 0);
glVertex2f(-2.0f, 0.65f);
glVertex2f(-1.5f, 0.65f);
glVertex2f(-1.5f, 0.7f);
glVertex2f(-1.55f, 0.75f);
glVertex2f(-1.95f, 0.75f);
glVertex2f(-2.0f, 0.7f);
glEnd(); glBegin(GL_POLYGON); // door
glColor3ub(0, 230, 230);
glVertex2f(-1.9f, 0.5f);
glVertex2f(-1.9f, 0.62f);
glColor3ub(0, 153, 153);
glVertex2f(-1.82f, 0.62f);
glVertex2f(-1.82f, 0.5f);
glEnd(); glBegin(GL_POLYGON); // window
glColor3ub(0, 230, 230);
glVertex2f(-1.77f, 0.55f);
glVertex2f(-1.77f, 0.62f);
glColor3ub(0, 153, 153);
glVertex2f(-1.6f, 0.62f);
glVertex2f(-1.6f, 0.55f);
glEnd(); glBegin(GL_LINES);
glColor3ub(128, 0, 0);
glVertex2f(-1.52f, 0.5f);
glVertex2f(-1.98f, 0.5f); glVertex2f(-1.524f, 0.504f);
glVertex2f(-1.98f, 0.504f); glVertex2f(-1.9f, 0.5f); // door
glVertex2f(-1.9f, 0.62f); glVertex2f(-1.9f, 0.62f);
glVertex2f(-1.82f, 0.62f); glVertex2f(-1.82f, 0.62f);
glVertex2f(-1.82f, 0.5f); glVertex2f(-1.82f, 0.5f);
glVertex2f(-1.9f, 0.5f); glVertex2f(-1.82f, 0.55f);
glVertex2f(-1.9f, 0.55f); glVertex2f(-1.77f, 0.55f); // window
glVertex2f(-1.77f, 0.62f); glVertex2f(-1.77f, 0.62f);
glVertex2f(-1.6f, 0.62f); glVertex2f(-1.6f, 0.62f);
glVertex2f(-1.6f, 0.55f); glVertex2f(-1.6f, 0.55f);
glVertex2f(-1.77f, 0.55f);
glEnd(); glColor3f(1.0, 1.0, 1.0);
c="BFC";
glRasterPos2f(-1.8 , 0.78);
for(int i = 0; c[i] !='\0'; i++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c[i]);
// left shop end // right shop start
glBegin(GL_POLYGON); // body
glColor3ub(255, 204, 102);
glVertex2f(-0.75f, 0.5f);
glVertex2f(-0.75f, 0.8f);
glVertex2f(-0.2f, 0.8f);
glVertex2f(-0.2f, 0.5f);
glEnd(); glBegin(GL_POLYGON); // roof
glColor3ub(179, 89, 0);
glVertex2f(-0.75f, 0.85f);
glVertex2f(-0.75f, 0.8f);
glVertex2f(-0.2f, 0.8f);
glVertex2f(-0.2f, 0.85f);
glEnd();
glBegin(GL_POLYGON); // roof
glColor3ub(179, 89, 0);
glVertex2f(-0.3f, 0.85f);
glVertex2f(-0.35f, 0.9f);
glVertex2f(-0.6f, 0.9f);
glVertex2f(-0.66f, 0.85f);
glEnd(); glBegin(GL_POLYGON); // inside
glColor3ub(77, 38, 0);
glVertex2f(-0.73f, 0.6f);
glVertex2f(-0.73f, 0.75f);
glVertex2f(-0.22f, 0.75f);
glVertex2f(-0.22f, 0.6f);
glEnd(); glBegin(GL_POLYGON); // product
glColor3ub(255, 0, 0);
glVertex2f(-0.7f, 0.6f);
glVertex2f(-0.7f, 0.65f);
glVertex2f(-0.6f, 0.65f);
glVertex2f(-0.6f, 0.6f);
glEnd();
glBegin(GL_POLYGON); // product
glColor3ub(255, 204, 102);
glVertex2f(-0.65f, 0.65f);
glVertex2f(-0.65f, 0.68f);
glVertex2f(-0.6f, 0.68f);
glVertex2f(-0.6f, 0.65f);
glEnd();
glBegin(GL_POLYGON); // product
glColor3ub(255, 204, 102);
glVertex2f(-0.55f, 0.6f);
glVertex2f(-0.55f, 0.65f);
glVertex2f(-0.45f, 0.65f);
glVertex2f(-0.45f, 0.6f);
glEnd();
glBegin(GL_POLYGON); // product
glColor3ub(204, 0, 102);
glVertex2f(-0.4f, 0.6f);
glVertex2f(-0.4f, 0.65f);
glVertex2f(-0.35f, 0.6f);
glVertex2f(-0.35f, 0.65f);
glEnd();
glBegin(GL_POLYGON); // product
glColor3ub(255, 204, 102);
glVertex2f(-0.34f, 0.6f);
glVertex2f(-0.34f, 0.66f);
glVertex2f(-0.3f, 0.6f);
glVertex2f(-0.3f, 0.66f);
glEnd(); glBegin(GL_POLYGON); // table
glColor3ub(128, 64, 0);
glVertex2f(-0.73f, 0.5f);
glVertex2f(-0.73f, 0.6f);
glVertex2f(-0.22f, 0.6f);
glVertex2f(-0.22f, 0.5f);
glEnd(); glBegin(GL_POLYGON); // shelter
glColor3ub(230, 115, 0);
glVertex2f(-0.8f, 0.7f);
glVertex2f(-0.15f, 0.7f);
glVertex2f(-0.15f, 0.75f);
glVertex2f(-0.2f, 0.8f);
glVertex2f(-0.75f, 0.8f);
glVertex2f(-0.8f, 0.75f);
glEnd(); glBegin(GL_LINES);
glColor3ub(128, 0, 0);
glVertex2f(-0.17f, 0.5f);
glVertex2f(-0.77f, 0.5f); glVertex2f(-0.17f, 0.504f);
glVertex2f(-0.77f, 0.504f); glColor3ub(255, 153, 51);
glVertex2f(-0.73f, 0.6f);
glVertex2f(-0.22f, 0.6f);
glEnd(); glColor3ub(255, 255, 0);
c="Candy Shop";
glRasterPos2f(-0.6 , 0.84);
for(int i = 0; c[i] !='\0'; i++)
glutBitmapCharacter(GLUT_BITMAP_9_BY_15, c[i]);
// right shop end
}
