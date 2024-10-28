#include <GL/glut.h>
#include <cmath>

// Function to draw a circle for the red backdrop
void drawCircle(float x, float y, float radius) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.0, 0.0); // Red color
    glVertex2f(x, y);         // Center of circle
    for (int i = 0; i <= 50; i++) {
        float angle = 2 * M_PI * i / 50;
        float dx = radius * cos(angle);
        float dy = radius * sin(angle);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}

// Function to draw a rectangular pillar
void drawPillar(float x, float y, float width, float height) {
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5); // Gray color
    glVertex2f(x, y);
    glVertex2f(x + width, y);
    glVertex2f(x + width, y + height);
    glVertex2f(x, y + height);
    glEnd();

    // Draw lines inside the pillar
    glColor3f(0.0, 0.0, 0.0); // Black color for lines
    glBegin(GL_LINES);
    for (float i = x + width * 0.2; i < x + width * 0.8; i += 0.02) {
        glVertex2f(i, y);
        glVertex2f(i, y + height);
    }
    glEnd();
}

// Function to draw the base rectangle below the pillars
void drawBase(float x, float y, float width, float height) {
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6); // Slightly darker gray for the base
    glVertex2f(x, y);
    glVertex2f(x + width, y);
    glVertex2f(x + width, y + height);
    glVertex2f(x, y + height);
    glEnd();
}

// Display function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw red circle background
    drawCircle(0.5f, 0.4f, 0.2f);

    // Draw base below pillars
    drawBase(0.2f, 0.15f, 0.6f, 0.05f); // Positioned slightly below pillars

    // Draw pillars (central pillar and two on each side) with increased spacing
    drawPillar(0.25f, 0.2f, 0.03f, 0.3f); // Far left
    drawPillar(0.35f, 0.2f, 0.05f, 0.4f); // Left middle
    drawPillar(0.45f, 0.2f, 0.1f, 0.5f);  // Center main pillar
    drawPillar(0.60f, 0.2f, 0.05f, 0.4f); // Right middle
    drawPillar(0.70f, 0.2f, 0.03f, 0.3f); // Far right

    glFlush();
}

// Initialization function
void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Set background color to white
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0); // Set coordinate system
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Martyrs' Memorial");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
