#include <iostream>
#include <stdlib.h>
#include <math.h>

#include <GL/gl.h>
#include <GL/glut.h>

//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;

float car_move = 0.0;

//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, -3.0, -7.0); //Move forward 5 units

  // plane body
  glColor3f(0,0,1);
  glBegin(GL_POLYGON);
  glVertex3f(0.5,2.4,0);
  glVertex3f(1.5,2.4,0);
  glVertex3f(2.0,2.55,0);
  glVertex3f(1.5,2.7,0);
  glVertex3f(0.5,2.7,0);
  glEnd();

  // plane wing bottom
  glPushMatrix();
    glTranslatef(0.0,0.1,0.0);
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.0,2.3,0);
    glVertex3f(0.7,2.0,0);
    glVertex3f(0.7,1.5,0);
    glVertex3f(1.3,2.3,0);
    glEnd();
  glPopMatrix();

  // plane wing up
  glPushMatrix();
    glTranslatef(0.0,1.2,0.0);
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.0,2.6,0);
		glVertex3f(0.7,2.3,0);
		glVertex3f(0.7,1.8,0);
		glVertex3f(1.3,2.6,0);
    glEnd();
  glPopMatrix();

	glutSwapBuffers();
}

void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	    /*
	_ang_tri += 2.0f;
	if (_ang_tri > 360) {
		_ang_tri -= 360;
	}
	*/

    car_move += 0.01f;
    if(car_move > 5.0){
        car_move = -3.2;
    }

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(5, update, 0);
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(700, 600);
	glutInitWindowPosition(200,100);

	//Create the window
	glutCreateWindow("Plane");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	// glutTimerFunc(5, update, 0); //Add a timer

	glutMainLoop();
	return 0;
}
