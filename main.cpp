#include<windows.h>
#include<iostream>
#include<GL/glut.h>
using namespace std;

char *c;

void road_footpath()
{
    // road start
    glBegin(GL_POLYGON); //Horizontal road
        glColor3ub(95, 96, 91);
        glVertex2f(-2.0f, 0.5f);
        glVertex2f(2.0f, 0.5f);
        glVertex2f(2.0f, -0.5f);
        glVertex2f(-2.0f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON); //Vertical Road
        glColor3ub(95, 96, 91);
        glVertex2f(0.4f, 1.0f);
        glVertex2f(1.4f, 1.0f);
        glVertex2f(1.4f, -1.0f);
        glVertex2f(0.4f, -1.0f);
    glEnd();
    //road end

    // footpath start
    glBegin(GL_POLYGON); //Left Upper Footpath
        glColor3ub(255, 179, 102);
        glVertex2f(-2.0f, 0.5f);
        glVertex2f(-2.0f, 0.3f);
        glVertex2f(0.6f, 0.3f);
        glVertex2f(0.6f, 0.5f);
    glEnd();
    glBegin(GL_POLYGON); //Left Down Footpath
        glColor3ub(255, 179, 102);
        glVertex2f(-2.0f, -0.5f);
        glVertex2f(-2.0f, -0.3f);
        glVertex2f(0.6f, -0.3f);
        glVertex2f(0.6f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON); //Right Down Footpath
        glColor3ub(255, 179, 102);
        glVertex2f(2.0f, -0.5f);
        glVertex2f(2.0f, -0.3f);
        glVertex2f(1.2f, -0.3f);
        glVertex2f(1.2f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON); //Right Upper Footpath
        glColor3ub(255, 179, 102);
        glVertex2f(2.0f, 0.5f);
        glVertex2f(2.0f, 0.3f);
        glVertex2f(1.2f, 0.3f);
        glVertex2f(1.2f, 0.5f);
    glEnd();
    glBegin(GL_POLYGON); //Left Down Vertical Footpath
        glColor3ub(255, 179, 102);
        glVertex2f(0.4f, -1.0f);
        glVertex2f(0.6f, -1.0f);
        glVertex2f(0.6f, -0.3f);
        glVertex2f(0.4f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON); //Right Down Vertical Footpath
        glColor3ub(255, 179, 102);
        glVertex2f(1.2f, -1.0f);
        glVertex2f(1.4f, -1.0f);
        glVertex2f(1.4f, -0.3f);
        glVertex2f(1.2f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON); //Right Upper Vertical Footpath
        glColor3ub(255, 179, 102);
        glVertex2f(1.2f, 1.0f);
        glVertex2f(1.4f, 1.0f);
        glVertex2f(1.4f, 0.3f);
        glVertex2f(1.2f, 0.3f);
    glEnd();
    glBegin(GL_POLYGON); //Left Upper Vertical Footpath
        glColor3ub(255, 179, 102);
        glVertex2f(0.4f, 1.0f);
        glVertex2f(0.6f, 1.0f);
        glVertex2f(0.6f, 0.3f);
        glVertex2f(0.4f, 0.3f);
    glEnd();
    //footpath end

    // divider start
    glLineWidth(3.0f); //line divider wide
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255); //white color
        glVertex2f(-2.0f, 0.0f); //start from left
        glVertex2f(-1.8f, 0.0f); //1st divider

        glVertex2f(-1.7f, 0.0f); //2nd divider
        glVertex2f(-1.5f, 0.0f);

        glVertex2f(-1.4f, 0.0f); //3rd divider
        glVertex2f(-1.2f, 0.0f);

        glVertex2f(-1.1f, 0.0f); //4th divider
        glVertex2f(-0.9f, 0.0f);

        glVertex2f(-0.8f, 0.0f); //5th divider
        glVertex2f(-0.6f, 0.0f);

        glVertex2f(-0.5f, 0.0f); //6th divider
        glVertex2f(-0.3f, 0.0f);

        glVertex2f(-0.2f, 0.0f); //7th divider
        glVertex2f(0.0f, 0.0f);

        glVertex2f(1.7f, 0.0f); //Right side divider
        glVertex2f(1.9f, 0.0f);

        glVertex2f(0.9f, 0.8f); //Upper divider
        glVertex2f(0.9f, 0.97f);

        glVertex2f(0.9f, -0.97f); //Down divider
        glVertex2f(0.9f, -0.8f);
    glEnd();
        //divider end

        // zebra-crossing start
    glLineWidth(5.0f); //zebra crossing line width
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255); //white color
        glVertex2f(0.2f, 0.3f); //Left side 1st line
        glVertex2f(0.2f, -0.3f);

        glVertex2f(0.4f, -0.3f); //left side 2nd line
        glVertex2f(0.4f, 0.3f);

        glVertex2f(0.6f, 0.5f); //Upper side down line
        glVertex2f(1.2f, 0.5f);

        glVertex2f(0.6f, 0.7f); //Upper side upper line
        glVertex2f(1.2f, 0.7f);

        glVertex2f(1.4f, 0.3f); //Right side 1st line
        glVertex2f(1.4f, -0.3f);

        glVertex2f(1.6f, 0.3f); //Right side 2nd line
        glVertex2f(1.6f, -0.3f);

        glVertex2f(0.6f, -0.5f); //Down side upper line
        glVertex2f(1.2f, -0.5f);

        glVertex2f(0.6f, -0.7f); //Down side down line
        glVertex2f(1.2f, -0.7f);

        // left cross
        glVertex2f(0.2f, 0.3f); //start from upper 1st cross
        glVertex2f(0.4f, 0.2f);

        glVertex2f(0.2f, 0.2f); //2nd cross
        glVertex2f(0.4f, 0.1f);

        glVertex2f(0.2f, 0.1f); //3rd cross
        glVertex2f(0.4f, 0.0f);

        glVertex2f(0.2f, 0.0f); //4th cross
        glVertex2f(0.4f, -0.1f);

        glVertex2f(0.2f, -0.1f); //5th cross
        glVertex2f(0.4f, -0.2f);

        glVertex2f(0.2f, -0.2f); //6th cross
        glVertex2f(0.4f, -0.3f);

        // right cross
        glVertex2f(1.4f, 0.3f); //start from upper 1st cross
        glVertex2f(1.6f, 0.2f);

        glVertex2f(1.4f, 0.2f); //2nd cross
        glVertex2f(1.6f, 0.1f);

        glVertex2f(1.4f, 0.1f); //3rd cross
        glVertex2f(1.6f, 0.0f);

        glVertex2f(1.4f, 0.0f); //4th cross
        glVertex2f(1.6f, -0.1f);

        glVertex2f(1.4f, -0.1f); //5th cross
        glVertex2f(1.6f, -0.2f);

        glVertex2f(1.4f, -0.2f); //6th cross
        glVertex2f(1.6f, -0.3f);

        // bottom cross
        glVertex2f(0.7f, -0.5f); //start from left 1st cross
        glVertex2f(0.6f, -0.7f);

        glVertex2f(0.8f, -0.5f); //2nd cross
        glVertex2f(0.7f, -0.7f);

        glVertex2f(0.9f, -0.5f); //3rd cross
        glVertex2f(0.8f, -0.7f);

        glVertex2f(1.0f, -0.5f); //4th cross
        glVertex2f(0.9f, -0.7f);

        glVertex2f(1.1f, -0.5f); //5th cross
        glVertex2f(1.0f, -0.7f);

        glVertex2f(1.2f, -0.5f); //6th cross
        glVertex2f(1.1f, -0.7f);

        // top cross
        glVertex2f(0.6f, 0.5f); //start from left 1st cross
        glVertex2f(0.7f, 0.7f);

        glVertex2f(0.7f, 0.5f); //2nd cross
        glVertex2f(0.8f, 0.7f);

        glVertex2f(0.8f, 0.5f); //3rd cross
        glVertex2f(0.9f, 0.7f);

        glVertex2f(0.9f, 0.5f); //4th cross
        glVertex2f(1.0f, 0.7f);

        glVertex2f(1.0f, 0.5f); //5th cross
        glVertex2f(1.1f, 0.7f);

        glVertex2f(1.1f, 0.5f); //6th cross
        glVertex2f(1.2f, 0.7f);
    glEnd();
    //zebra crossing end

    glLineWidth(8.0f); // Footpath border width
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255); //white color

    // road border start
    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255); //white color between footpath and green ground
        glVertex2f(-2.0f, 0.5f); //left upper border
        glVertex2f(0.4f, 0.5f);

        glVertex2f(0.4f, 0.5f); //vertical upper left border
        glVertex2f(0.4f, 1.0f);

        glVertex2f(1.4f, 1.0f); //vertical upper right border
        glVertex2f(1.4f, 0.5f);

        glVertex2f(1.4f, 0.5f); //Right upper border
        glVertex2f(2.0f, 0.5f);

        glVertex2f(2.0f, -0.5f); //Right down border
        glVertex2f(1.4f, -0.5f);

        glVertex2f(1.4f, -0.5f); //vertical down right border
        glVertex2f(1.4f, -1.0f);

        glVertex2f(0.4f, -1.0f); //vertical down left border
        glVertex2f(0.4f, -0.5f);

        glVertex2f(0.4f, -0.5f); //Left Down border
        glVertex2f(-2.0f, -0.5f);

        glColor3ub(230, 230, 230); //next to white color between footpath and road
        glVertex2f(-2.0f, 0.3f); //left upper white border
        glVertex2f(0.6f, 0.3f);

        glVertex2f(0.6f, 0.3f); //vertical upper left white border
        glVertex2f(0.6f, 1.0f);

        glVertex2f(1.2f, 1.0f); //vertical upper Right white border
        glVertex2f(1.2f, 0.3f);

        glVertex2f(1.2f, 0.3f); //Right upper white border
        glVertex2f(2.0f, 0.3f);

        glVertex2f(2.0f, -0.3f); //Right down white border
        glVertex2f(1.2f, -0.3f);

        glVertex2f(1.2f, -0.3f); //vertical down right white border
        glVertex2f(1.2f, -1.0f);

        glVertex2f(0.6f, -1.0f); //vertical down left white border
        glVertex2f(0.6f, -0.3f);

        glVertex2f(0.6f, -0.3f); //Left Down white border
        glVertex2f(-2.0f, -0.3f);
    glEnd();
    //road border end
}
//road_footpath function end

void day()
{
	glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    // Background
    glBegin(GL_POLYGON); //color the left up and down and right upper part
        glColor3ub(51, 204, 51); //light green color
        glVertex2f(2.0f, 1.0f);
        glVertex2f(2.0f, -1.0f);
        glVertex2f(-2.0f, -1.0f);
        glVertex2f(-2.0f, 1.0f);
    glEnd();

    glBegin(GL_POLYGON); //color rest of the portion
        glColor3ub(51, 204, 51);
        glVertex2f(0.35f, -0.5f);
        glVertex2f(1.9f, -0.5f);
        glVertex2f(1.9f, -1.0f);
        glVertex2f(0.35f, -1.0f);
    glEnd();

	road_footpath();

    glFlush();
}


void start()
{
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

    glBegin(GL_POLYGON); //set the 1st Project start window size and mixed color
        glColor3ub(255,255,0);
        glVertex2f(-2.0f, 2.0f);
        glColor3ub(147,112,219);
        glVertex2f(2.0f, 2.0f);
        glColor3ub(30,144,255);
        glVertex2f(2.0f, -2.0f);
        glColor3ub(70,130,180);
        glVertex2f(-2.0f, -2.0f);
    glEnd();

    glColor3ub(255, 255, 255); // color of "Traffic View of a signal"
    c="Traffic View of A Signal";
    glRasterPos2f(-0.3, 0.7);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);

    glColor3ub(255, 0, 0); //color of "Press F to start the project"
    c="Press S to START the project";
    glRasterPos2f(-0.3, -0.7);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);

    glFlush();
}

void button(unsigned char key, int x, int y) {

    switch (key) {
        case 's':
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
