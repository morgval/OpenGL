/*
 * Activity2.cpp
 *
 *  Created on: Jul 8, 2020
 *      Author: mvmcg
 */
#include <GL/glu.h>
#include <GL/freeglut.h> //include the header files

void displayGraphics() {
	/* Specify the background color for the buffer */
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	/*Pentagon Shape*/
	glBegin(GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f); //sets the color of the vertices to red

		/*Set vertices for Polygon*/
		glVertex2f(-0.5f, 0.0f); //top
		glVertex2f(-1.0f, -0.363f); //mid left
		glVertex2f(-0.809f, -0.951); //bot left
		glVertex2f(-0.191f, -0.951); //bot right
		glVertex2f(0.0f, -0.363f); //mid right
	glEnd();  //End the pentagon shape

	/*Septagon Shape*/
	glBegin(GL_POLYGON);
		glColor3f(0.0f, 1.0f, 0.0f); //sets the color of the vertices to green

		/*Set vertices for Polygon*/
		glVertex2f(0.5f, 0.975f); //top point, #1 and the rest continue counter-clockwise
		glVertex2f(0.099f, 0.782f); //#2
		glVertex2f(0.0f, 0.348f); //#3
		glVertex2f(0.277f, 0.0f); //#4
		glVertex2f(0.777f, 0.0f); //#5
		glVertex2f(1.0f, 0.348f); //#6
		glVertex2f(0.901f, 0.782f); //#7

	glEnd();  //End the septagon shape

/*	Star Shape  */
	glBegin(GL_POLYGON);
		glColor3f(0.0f, 0.0f, 1.0f);  //sets the color of the vertices to blue

		/* Set vertices for Polygon
		 * NOTE: like the septagon, the vertices start with the top point and
		 * 		proceed counter-clockwise */
		glVertex2f(-0.5, 0.951); //#1
		glVertex2f(-0.618, 0.588); //#2
		glVertex2f(-1.0, 0.588); //#3
		glVertex2f(-0.691, 0.363); //#4
		glVertex2f(-0.809, 0.0); //#5
		glVertex2f(-0.5, 0.224); //#6
		glVertex2f(-0.191, 0.0); //#7
		glVertex2f(-0.309, 0.363); //#8
		glVertex2f(0.0, 0.588); //#9
		glVertex2f(-0.382, 0.588); //#10

	glEnd(); //End the star shape


	glFlush(); //Empty all buffers, and executes all issued commands to be accepted by the redering engine
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



