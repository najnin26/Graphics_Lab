#include <GL/glu.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>

GLfloat position = 0.0f;

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2);
}

void memorial() {
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);

    glVertex2f(-0.01f, 0.7f);
    glVertex2f(0.01f, 0.7f);
    glVertex2f(0.0f, 0.75f);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(204, 204, 204);

    glVertex2f(-0.2f, -0.1f);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.0f, 0.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(150, 40, 27);

    glVertex2f(-0.2f, -0.1f);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.0f, 0.0f);

    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128, 128, 128);

	glVertex2f(0.0f, 0.0f);
	glVertex2d(0.125f, 0.2f);
	glVertex2f(0.0f, 0.4f);
	glVertex2f(-0.125f, 0.2f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(166, 166, 166);

	glVertex2f(-0.115f, 0.215f);
	glVertex2f(-0.125f, 0.2f);
	glVertex2f(-0.115f, 0.185f);
	glVertex2f(0.115f, 0.185f);
	glVertex2f(0.125f, 0.2f);
	glVertex2f(0.115f, 0.215f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.21f, -0.1f);
	glVertex2f(0.01f, 0.7f);
	glVertex2f(0.00f, 0.7f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.2f, -0.1f);
	glVertex2f(-0.21f, -0.1f);
	glVertex2f(-0.01f, 0.7f);
	glVertex2f(-0.00f, 0.7f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.21f, -0.1f);
	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.06f, 0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.21f, -0.1f);
	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.06f, 0.5f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.31f, -0.1f);
	glVertex2f(0.055f, 0.52f);
	glVertex2f(0.054f, 0.5f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.31f, -0.1f);
	glVertex2f(-0.055f, 0.52f);
	glVertex2f(-0.054f, 0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.31f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.1f, 0.4f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.31f, -0.1f);
	glVertex2f(-0.4f, -0.1f);
	glVertex2f(-0.1f, 0.4f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.41f, -0.1f);
	glVertex2f(0.095f, 0.42f);
	glVertex2f(0.1f, 0.4f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.4f, -0.1f);
	glVertex2f(-0.41f, -0.1f);
	glVertex2f(-0.095f, 0.42f);
	glVertex2f(-0.1f, 0.4f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.41f, -0.1f);
	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.167f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.41f, -0.1f);
	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.167f, 0.3f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.51f, -0.1f);
	glVertex2f(0.1568f, 0.316f);
	glVertex2f(0.16f, 0.3f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.51f, -0.1f);
	glVertex2f(-0.1568f, 0.316f);
	glVertex2f(-0.16f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.51f, -0.1f);
	glVertex2f(0.6f, -0.1f);
	glVertex2f(0.17f, 0.3f);

	glEnd();
}

void flag() {

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(0.3f, -1.0f); // Adjusted position for flagpole
    glVertex2f(0.32f, -1.0f);
    glVertex2f(0.32f, 0.05f);
    glVertex2f(0.3f, 0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 153, 51);
    glVertex2f(0.32f, 0.05f);
    glVertex2f(0.58f, 0.05f); // Adjusted position for flag
    glVertex2f(0.58f, -0.2f);
    glVertex2f(0.32f, -0.2f);
    glEnd();

    float x = 0.45f, y = -0.07f, r = 0.07;
    float twicePie = 2.0 * 3.1416;
    int trainglePoints = 20;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 0, 0);
    for (int i = 0; i <= trainglePoints; i++) {
        glVertex2f(x + r * cos(i * twicePie / trainglePoints),
                   y + r * sin(i * twicePie / trainglePoints));
    }
    glEnd();
}

void national_memorial() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    memorial();
    flag();
    glPopMatrix();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(840, 640);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("National Martyrs Memorial");
    init();
    glutDisplayFunc(national_memorial);
    glutMainLoop();
    return 0;
}
