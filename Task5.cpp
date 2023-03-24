// Drwaing a circle

#include<stdio.h>
#include<glut.h>
#include<math.h>

#define PI 3.142857

// function to initialize
void myInit(void)
{
    // making background color black as first 
    // 3 arguments all are 0.0
    glClearColor(1.0, 1.0, 1.0, 1.0);

    // Blue drawing color 0.004, 0.529, 0.925
    glColor3f(0.004, 0.529, 0.925);

    // breadth of picture boundary is 1 pixel
    glPointSize(3.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // setting window dimension in X- and Y- direction
    gluOrtho2D(-600, 600, -600, 600);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    float x, y, i;

    // iterate y up to 2*pi, i.e., 360 degree
    // with small increment in angle as
    // glVertex2i just draws a point on specified co-ordinate
    for (i = 0; i < (2 * PI); i += 0.001)
    {
        // let 200 is radius of circle and as,
        // circle is defined as x=r*cos(i) and y=r*sin(i)
        x = 200 * cos(i);
        y = 200 * sin(i);

        glVertex2i(x, y);
    }
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // Sets the window size
    glutInitWindowSize(800, 800);
    
    // Sets the window position
    glutInitWindowPosition(0, 0);

    // Giving name to window
    glutCreateWindow("Task 5 (Create a circle)");
    myInit();

    glutDisplayFunc(display);
    glutMainLoop();
}