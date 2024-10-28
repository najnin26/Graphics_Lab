#include <GL/glut.h>
#include <stdlib.h>
#include<stdio.h>
float x=0,y,p;
float r;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glEnd();

    glColor3f(0.0,1.0,0.0);

    glBegin(GL_POINTS);
    p=1-r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            y=y;
            printf("%f %f\n",x,y);
            p=p+(2*x)+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            printf("%f %f\n",x,y);
            p=p+(2*x)+1-(2*y);
        }
        glVertex3f (((x/100)), ((y/100)), 0.0);
        glVertex3f (((y/100)), ((x/100)), 0.0);
        glVertex3f ((-(x/100)), (-(y/100)), 0.0);
        glVertex3f ((-(x/100)), ((y/100)), 0.0);
        glVertex3f (((x/100)), (-(y/100)), 0.0);
        glVertex3f (((y/100)), (-(x/100)), 0.0);
        glVertex3f ((-(y/100)), (-(x/100)), 0.0);
        glVertex3f ((-(y/100)), ((x/100)), 0.0);
    }

    glEnd();
    glFlush();
}

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1,1.0,-1,1.0,-1.0,1.0);
}

int main(int argc, char *argv[])
{
    printf("Enter value of r :");
    scanf("%f",&r);
    y=r;

    glutInit(&argc, argv);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Mid Point Circle Drawing");
    init();
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
