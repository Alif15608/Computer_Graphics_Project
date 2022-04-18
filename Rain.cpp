#include <windows.h>  // for MS Windows
#include <iostream>
#include <GL/glut.h>
#include <math.h>>
using namespace std;

GLfloat position_rain = 0.0f; // for rain
GLfloat speed_rain = 0.05f;
GLfloat position_rain2 = 2.0f; // for rain
GLfloat speed_rain2 = 0.05f;

int cnt = 0, flag = 0, r = 0;


void rain() {
    glPushMatrix();
    glTranslatef(position_rain2, position_rain, 0.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.05f, 0.85f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.7f);
        glVertex2f(0.05f, 0.65f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.05f, 0.45f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.3f);
        glVertex2f(0.05f, 0.25f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.1f);
        glVertex2f(0.05f, 0.05f);
    glEnd();

    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.9f);
        glVertex2f(0.0f, -0.85f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.7f);
        glVertex2f(0.0f, -0.65f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.5f);
        glVertex2f(0.0f, -0.45f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.3f);
        glVertex2f(0.0f, -0.25f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.1f);
        glVertex2f(0.0f, -0.05f);
    glEnd();

    for(int i = 0; i < 100; i++) {
        glTranslatef(-0.2, 0.0, 0.0f);
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.9f);
            glVertex2f(0.05f, 0.85f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.7f);
            glVertex2f(0.05f, 0.65f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.5f);
            glVertex2f(0.05f, 0.45f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.3f);
            glVertex2f(0.05f, 0.25f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.1f);
            glVertex2f(0.05f, 0.05f);
        glEnd();

        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.9f);
            glVertex2f(0.0f, -0.85f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.7f);
            glVertex2f(0.0f, -0.65f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.5f);
            glVertex2f(0.0f, -0.45f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.3f);
            glVertex2f(0.0f, -0.25f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.1f);
            glVertex2f(0.0f, -0.05f);
        glEnd();
    }

    for(int i = 0; i < 100; i++) {
        glTranslatef(0.2, 0.0, 0.0f);
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.9f);
            glVertex2f(0.05f, 0.85f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.7f);
            glVertex2f(0.05f, 0.65f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.5f);
            glVertex2f(0.05f, 0.45f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.3f);
            glVertex2f(0.05f, 0.25f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.1f);
            glVertex2f(0.05f, 0.05f);
        glEnd();

        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.9f);
            glVertex2f(0.0f, -0.85f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.7f);
            glVertex2f(0.0f, -0.65f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.5f);
            glVertex2f(0.0f, -0.45f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.3f);
            glVertex2f(0.0f, -0.25f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.1f);
            glVertex2f(0.0f, -0.05f);
        glEnd();
    }
    glPopMatrix();
}


void start() {
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);


void update_rain(int value) {
    if(position_rain < -0.1)
        position_rain = 0.3f;

    position_rain -= speed_rain;

    if(position_rain2 > 2.0)
        position_rain2 = 1.8f;

    position_rain2 += speed_rain2;

	glutPostRedisplay();
	glutTimerFunc(100, update_rain, 0);
}


void rain_button(int button, int state, int x, int y) {
    if(button == GLUT_LEFT_BUTTON) {
        r++;
        PlaySound("rain.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    }
    if(button == GLUT_RIGHT_BUTTON) {
        r = 0;
        PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT

 inigl();
   glutTimerFunc(100, update_rain, 0);

    glutKeyboardFunc(button);
    glutMouseFunc(rain_button);

    glutMainLoop(); // Enter the event-processing loop

    return 0;
}
