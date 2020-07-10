//==================================================================================
// Name        : ActivityThree.cpp
// Author      : Morgana Parsons
// Version     :
// Copyright   : Your copyright notice
// Description : An OpenGL activity to practice making 3D shapes of different colors
//==================================================================================

#include <GL/glu.h>
#include <GL/freeglut.h> //include the header files

void applyDepthSettings() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.5f); //Sets background color
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glShadeModel(GL_SMOOTH);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void displayGraphics() {
	glClear(GL_COLOR_BUFFER_BIT); //Clears buffers
	glMatrixMode(GL_MODELVIEW); //Activates the Model_view matrix

	glLoadIdentity(); //Reset
	glTranslatef(0.0f, 0.0f, -8.0f); //Move model to the center of the world with a z depth of -7
	glRotatef(45.0f, 0.4f, -1.0f, -0.1f); //Rotate the model on x, y, and z

	/* Create Cube */
	glBegin(GL_QUADS);

		/* Front Face */

		/* Right Face */

		/* Top Face */

		/* Left Face */

		/* Back Face */

		/* Bottom Face */

}

int main(int argc, char** argv) {
	glutInit(&argc, argv); //initializes freeglut library
	glutCreateWindow("OpenGL Activity Two - Polygons"); //Create a window and title
	glutInitWindowSize(1280, 1280); //Specifies the window's width and height
	glutInitWindowPosition(100,100);  //Specifies the position of the window/s top-left corner
	glutDisplayFunc(displayGraphics);  //Sets the display callback for the current window
	glutMainLoop();  //Enters the GLUT event processing loop
	return 0;
}
