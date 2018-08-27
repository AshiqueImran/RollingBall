float car_angle = 0.0;
float car_cameraAngle = 0.0;
float car_ang_tri = 0.0;
float car_move_x = -2.0;
float car_move_y = -.7;

float _car_color_r = 1.0;
float _car_color_g = 0.0;
float _car_color_b = 0.0;

//Draws the 3D scene
void drawCar() {
    glPushMatrix();
      glTranslatef(car_move_x, car_move_y, 0.0);
      glScalef(.7, .7, .7);
      glPushMatrix();
        glTranslatef(0.0, -0.2, 0.0);
        glColor3f(_car_color_r, 0.0, 1.0);
        glBegin(GL_LINES);
        //line
        glVertex3f(0.15, 0.5, 0.0);
        glVertex3f(0.70, 0.5, 0.0);
        glEnd();
      glPopMatrix();

      //tire 1
       glPushMatrix();
           glTranslatef(0.0, .35, 0.0);
           glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
           glColor3f(_car_color_r, _car_color_g, _car_color_b);
           glutSolidSphere(.15 ,20,20);
           glEnd();
       glPopMatrix();

       //tire 2
        glPushMatrix();
            glTranslatef(0.70, .35, 0.0);
            glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
            glColor3f(_car_color_r, _car_color_g, _car_color_b);
            glutSolidSphere(.15 ,20,20);
            glEnd();
        glPopMatrix();

        //car body
       glBegin(GL_POLYGON);
       glColor3f(0.0, 0.0, 0.0);
       //line 1
       glVertex3f(0.15, 0.3, 0.0);
       glVertex3f(0.15, 0.7, 0.0);
       // glEnd();
       //
       // glBegin(GL_LINES);
        //line 2
        glVertex3f(0.15, 0.7, 0.0);
        glVertex3f(0.60, 0.3, 0.0);
      glEnd();

    glPopMatrix();
}

void updateCar(int value) {
	car_angle += 2.0f;
	if (car_angle > 360) {
		car_angle -= 360;
	}
    car_move_x += 0.1f;
    if(car_move_x > 6.0){
        car_move_x = -7.0;
        _car_color_r = getRamdomNum(-1.0, 1.0, .5);
  			_car_color_g = getRamdomNum(-2.0, 2.0, .5);
  			_car_color_b = getRamdomNum(-2.0, 2.0, .5);
        car_move_y = getRamdomNum(-.5, -1.0, 0.5);
    }

	// glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(5, updateCar, 0);
}
