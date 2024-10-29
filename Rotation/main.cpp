#include<GL/glut.h>
#include<GL/gl.h>

using namespace std;

static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;
    }
}
void init()
{
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0,1.0,0.0,1.0,-10.0,10.0);
}

//Called when the window is resized
static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

float _angle = 30.0f;
float _cameraAngle = 0.0f;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glRotatef(-_cameraAngle,0.0f,1.0f,0.0f);
    glTranslatef(0.0f,0.0f,-5.0f);

    glPushMatrix();
    glTranslatef(0.0f,-1.0f,0.0f);
    glRotatef(_angle,0.0f,0.0f,-1.0f);
    glColor3f(1.0,1.0,1.0);
    //Rectangle
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-0.7f, -0.5f, 0.0f);
	glVertex3f(0.7f, -0.5f, 0.0f);
	glVertex3f(0.7f, 0.5f, 0.0f);
	glVertex3f(-0.7f, 0.5f, 0.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.0f,1.0f,0.0f);
    glRotatef(_angle,0.0f,1.0f,0.0f);
    // Pentagon
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-0.5f, -0.5f, 0.0f);
    glVertex3f(0.5f, -0.5f, 0.0f);
    glVertex3f(0.5f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.50f, 0.0f);
    glVertex3f(-0.5f, 0.0f, 0.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.0f,1.0f,0.0f);
    glRotatef(_angle,1.0f,0.0f,0.0f);
    // Triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-0.50f, -0.5f, 0.0f);
    glVertex3f(0.50f, -0.5f, 0.0f);
    glVertex3f(0.0f, 0.5f, 0.0f);
    glEnd();
    glPopMatrix();

    glutSwapBuffers();
}

void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}

	glutPostRedisplay(); ////Tell GLUT that the scene has changed
	glutTimerFunc(25, update, 0);
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);

    glutInitWindowSize(600,600);

    //Create the window
    glutCreateWindow("Window-1");
    init();

    //Set handler functions
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutReshapeFunc(resize);

    glutTimerFunc(25,update,0);

    glutMainLoop();
    return 0;
}
