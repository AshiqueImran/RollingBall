#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <ctime>

#include <GL/glu.h>
#include <GL/glut.h>


//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}


void drawScene() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
  glLoadIdentity(); //Reset the drawing perspective
  glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera

  glColor3f(1,1,0);
  glBegin(GL_LINES);
  glVertex3f(-2.7,0.2,0);
  glVertex3f(-2.4,0.2,0);
  glEnd();


}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(200,100);

	//Create the window
	glutCreateWindow("Dino");

	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	//glutReshapeFunc(handleResize);

	//glutTimerFunc(25, update, 0); //Add a timer
  //glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
