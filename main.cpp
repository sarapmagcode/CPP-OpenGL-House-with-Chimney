#include <GL/glut.h>
#include <GL/freeglut_ext.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void display();

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGL Setup Test");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	// chimney
	glColor3ub(76, 63, 145);
	glBegin(GL_POLYGON);
	
	glVertex2f(-0.23, 0.2);
	glVertex2f(-0.23, 0.61);
	glVertex2f(-0.16, 0.61);
	glVertex2f(-0.16, 0.2);
	
	glEnd();
	
	// structure of the house
	glColor3ub(238, 230, 206);
	glBegin(GL_POLYGON);
	
	glVertex2f(-0.3, -0.35);
	glVertex2f(-0.3, 0.2);
	glVertex2f(0, 0.65);
	glVertex2f(0.3, 0.2);
	glVertex2f(0.3, -0.35);
	
	glEnd();
	
	// house outline
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(5.0);
	glBegin(GL_LINE_STRIP);
	
	glVertex2f(-0.3, -0.35);
	glVertex2f(-0.3, 0.2);
	glVertex2f(0, 0.65);
	glVertex2f(0.3, 0.2);
	glVertex2f(0.3, -0.35);
	
	glEnd();
	
	// door
	glColor3ub(49, 53, 82);
	glBegin(GL_POLYGON);
	
	glVertex2f(-0.15, -0.35);
	glVertex2f(-0.15, 0.1);
	glVertex2f(0.15, 0.1);
	glVertex2f(0.15, -0.35);
	
	glEnd();
	
	// door outline
	glColor3ub(184, 64, 94);
	glLineWidth(3.0);
	glBegin(GL_LINE_STRIP);
	
	glVertex2f(-0.15, -0.35);
	glVertex2f(-0.15, 0.1);
	glVertex2f(0.15, 0.1);
	glVertex2f(0.15, -0.35);
	
	glEnd();
	
	// door middle line
	glColor3ub(184, 64, 94);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	
	glVertex2f(0, -0.35);
	glVertex2f(0, 0.1);
	
	glEnd();
	
	// door handles
	glColor3ub(241, 208, 10);
	glBegin(GL_QUADS);
	
	// left handle
	glVertex2f(-0.06, -0.14);
	glVertex2f(-0.06, -0.1);
	glVertex2f(-0.02, -0.1);
	glVertex2f(-0.02, -0.14);
	
	// right handle
	glVertex2f(0.02, -0.14);
	glVertex2f(0.02, -0.1);
	glVertex2f(0.06, -0.1);
	glVertex2f(0.06, -0.14);
	
	glEnd();
	
	// left handle outline
	glColor3ub(184, 64, 94);
	glLineWidth(2.0);
	glBegin(GL_LINE_LOOP);
	
	glVertex2f(-0.06, -0.14);
	glVertex2f(-0.06, -0.1);
	glVertex2f(-0.02, -0.1);
	glVertex2f(-0.02, -0.14);	
	
	glEnd();
	
	// right handle outline
	glColor3ub(184, 64, 94);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	
	glVertex2f(0.02, -0.14);
	glVertex2f(0.02, -0.1);
	glVertex2f(0.06, -0.1);
	glVertex2f(0.06, -0.14);
	
	glEnd();
	
	
	glFlush();
}
