#include <GL/glut.h>
#include <stdlib.h>
#include<stdio.h>
float x1,x2,y1,y2,m,p,i,j;
float dx,dy;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glEnd();

    glColor3f(0.0,1.0,0.0);

    glBegin(GL_POINTS);

    p=2*dy-dx;

    for(i=x1,j=y1;i<=x2,j<=y2;)
    {
        if(p>=0)
        {
            i=i+1;
            j=j+1;
            if(i>x2|j>y2){
                break;
            }
            printf("%f %f\n",i,j);
            glVertex3f((i/100),(j/100),0.0);
            p=p+2*(dy-dx);
        }
        else if(p<0)
        {
            i=i+1;
            if(i>x2|j>y2){
                break;
            }
            printf("%f %f\n",i,j);
            glVertex3f((i/100),(j/100),0.0);
            p=p+2*dy;
        }

    }
    glEnd();
    glFlush();
}

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
}

int main(int argc, char *argv[])
{
    printf("Enter value of X1 :");
    scanf("%f",&x1);
    printf("Enter value of y1 :");
    scanf("%f",&y1);
    printf("Enter value of X2 :");
    scanf("%f",&x2);
    printf("Enter value of Y2 :");
    scanf("%f",&y2);
    dx=x2-x1;
    dy=y2-y1;

    glutInit(&argc, argv);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH);
    glutCreateWindow("Bresenhum Line");
    init();
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
