#include<GL/glut.h>
#include<GL/gl.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    //Trapijoid
    glBegin(GL_QUADS);

    glColor3f(1.0,0.0,0.0);

    glVertex3f(0.05f,0.05f,0.0f);
    glVertex3f(0.35f,0.05f,0.0f);
    glVertex3f(0.40f,0.35f,0.0f);
    glVertex3f(0.00f,0.35f,0.0f);

    glEnd();

    // Pentagon
    glBegin(GL_POLYGON);

    glColor3f(0.0,1.0,0.0);

    glVertex3f(0.5f, 0.05f, 0.0f);
    glVertex3f(0.75f, 0.05f, 0.0f);
    glVertex3f(0.75f, 0.35f, 0.0f);
    glVertex3f(0.63f, 0.50f, 0.0f);
    glVertex3f(0.5f, 0.35f, 0.0f);
    glEnd();

    // Triangle
    glBegin(GL_TRIANGLES);

    glColor3f(0.0,0.0,1.0);

    glVertex3f(0.30f, 0.65f, 0.0f);
    glVertex3f(0.60f, 0.65f, 0.0f);
    glVertex3f(0.45f, 0.85f, 0.0f);
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0,1.0,0.0,1.0,-10.0,10.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);

    glutCreateWindow("Window-1");
    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
