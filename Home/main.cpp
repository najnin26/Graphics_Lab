#include<windows.h>
#include<GL/freeglut.h>

void init()
{
    glClearColor(0.2, 0.6, 0.0, 0.6);

    glMatrixMode(GL_PROJECTION);

    gluOrtho2D(0.0, 900, 0.0, 600);
}
void home()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.3, 0.4, 0.5);

    glBegin(GL_POLYGON);
    glVertex2i(200, 500);
    glVertex2i(600, 500);
    glVertex2i(700, 350);
    glVertex2i(300, 350);
    glEnd();

    glColor3f(0.6, 0.0, 0.9);
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 500);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glEnd();

    glColor3f(0.1, 0.3, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glVertex2i(300, 100);
    glVertex2i(100, 100);
    glEnd();

    glColor3f(0.5, 0.2, 0.4);
    glBegin(GL_POLYGON);
    glVertex2i(150, 250);
    glVertex2i(250, 250);
    glVertex2i(250, 100);
    glVertex2i(150, 100);
    glEnd();

    glColor3f(0.1, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(300, 350);
    glVertex2i(700, 350);
    glVertex2i(700, 100);
    glVertex2i(300, 100);
    glEnd();

    glColor3f(0.0, 0.4, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(330, 320);
    glVertex2i(450, 320);
    glVertex2i(450, 230);
    glVertex2i(330, 230);
    glEnd();

    glColor3f(0.7, 0.3, 0.7);
    glLineWidth(8);
    glBegin(GL_LINES);
    glVertex2i(390, 320);
    glVertex2i(390, 230);
    glVertex2i(330, 273);
    glVertex2i(450, 273);
    glEnd();

    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(530, 320);
    glVertex2i(650, 320);
    glVertex2i(650, 230);
    glVertex2i(530, 230);
    glEnd();

    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(590, 320);
    glVertex2i(590, 230);
    glVertex2i(530, 273);
    glVertex2i(650, 273);
    glEnd();

    glFlush();
}
int main(int argc, char ** argv)
{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(100, 100);

    glutInitWindowSize(1000, 600);

    glutCreateWindow("2D House in OpenGL ");

    init();

    glutDisplayFunc(home);

    glutMainLoop();
}

