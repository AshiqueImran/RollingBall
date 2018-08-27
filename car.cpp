float car_angle = 0.0;
float car_cameraAngle = 0.0;
float car_ang_tri = 0.0;

float car_move = 0.0;

//Draws the 3D scene
void drawCar() {
	// glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  //   glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	// glLoadIdentity(); //Reset the drawing perspective
	// glRotatef(-car_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	// glTranslatef(-3.5, -3.0, -7.0); //Move forward 5 units

    glPushMatrix();
      glTranslatef(car_move, 0.0, 0.0);
      glScalef(1.9, 1.9, 1.0);
      glPushMatrix(); //Save the transformations performed thus far
          glTranslatef(1.0, 1.0, 0.0);
          glColor3f(1.0, 1.0, 1.0);
          glBegin(GL_LINES);
          //line
          glVertex3f(0.15, 0.5, 0.0);
          glVertex3f(0.85, 0.5, 0.0);
          glEnd();

          //tire 1
          glPushMatrix();
              glTranslatef(0.0, 0.5, 0.0);
              glRotatef(car_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
              glBegin(GL_LINES);
              glColor3f(1.0, 0.0, 0.0);
              for(int i=0;i<200;i++)
              {
                  float pi=3.1416;
                  float A=(i*2*pi)/100;
                  float r=0.15;
                  float x = r * cos(A);
                  float y = r * sin(A);
                  glVertex2f(x,y );
              }

              glEnd();
          glPopMatrix();

          //tire 2
          glPushMatrix();
              glTranslatef(1.0, 0.5, 0.0);
              glRotatef(car_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
              glBegin(GL_LINES);
              glColor3f(1.0, 0.0, 0.0);
              for(int i=0;i<200;i++)
              {
                  float pi=3.1416;
                  float A=(i*2*pi)/100;
                  float r=0.15;
                  float x = r * cos(A);
                  float y = r * sin(A);
                  glVertex2f(x,y );
              }
          glEnd();
          glPopMatrix();

          //car body
          glBegin(GL_LINES);
          glColor3f(0.0, 1.0, 0.0);
          //line 1
          glVertex3f(0.15, 0.5, 0.0);
          glVertex3f(0.15, 0.9, 0.0);
          glEnd();

          glBegin(GL_LINES);
          //line 2
          glVertex3f(0.15, 0.9, 0.0);
          glVertex3f(0.25, 0.9, 0.0);
          glEnd();

          glBegin(GL_LINES);
          //line 3
          glVertex3f(0.25, 0.9, 0.0);
          glVertex3f(0.40, 1.0, 0.0);
          glEnd();

          glBegin(GL_LINES);
          //line 4
          glVertex3f(0.40, 1.0, 0.0);
          glVertex3f(0.70, 1.0, 0.0);
          glEnd();

          glBegin(GL_LINES);
          //line 5
          glVertex3f(0.70, 1.0, 0.0);
          glVertex3f(0.85, 0.9, 0.0);
          glEnd();

          glBegin(GL_LINES);
          //line 6
          glVertex3f(0.85, 0.9, 0.0);
          glVertex3f(0.85, 0.5, 0.0);
          glEnd();


      glPopMatrix(); //Undo the move to the center of the trapezoid
    glPopMatrix();
	glutSwapBuffers();
}

void updateCar(int value) {
	car_angle += 2.0f;
	if (car_angle > 360) {
		car_angle -= 360;
	}

    car_move += 0.01f;
    if(car_move > 5.0){
        car_move = -3.2;
    }

	// glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(5, updateCar, 0);
}
