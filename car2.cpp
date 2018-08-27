float car2_angle = 0.0;
float car2_cameraAngle = 0.0;
float car2_ang_tri = 0.0;
float car2_move_x = -2.0;
float car2_move_y = -1.7;

float _car2_color_r = 0.0;
float _car2_color_g = 0.0;
float _car2_color_b = 1.0;


//Draws the 3D scene
void drawCar2() {
    glPushMatrix();
      glTranslatef(car2_move_x, car2_move_y, 0.0);
      glScalef(.7, .7, .7);
      glPushMatrix();
        glTranslatef(0.0, -0.2, 0.0);
        glColor3f(_car2_color_r, 0.0, 1.0);
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
           glColor3f(_car2_color_b, _car2_color_r, _car2_color_g);
           glutSolidSphere(.15 ,20,20);
           glEnd();
       glPopMatrix();

       //tire 2
        glPushMatrix();
            glTranslatef(0.70, .35, 0.0);
            glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
            glColor3f(_car2_color_b, _car2_color_r, _car2_color_g);
            glutSolidSphere(.15 ,20,20);
            glEnd();
        glPopMatrix();

        //car body
       glBegin(GL_POLYGON);
       glColor3f(0.0, 0.0, 0.0);
        glVertex3f(0.15, 0.3, 0.0);
        glVertex3f(0.15, 0.7, 0.0);
        glVertex3f(0.15, 0.7, 0.0);
        glVertex3f(0.60, 0.3, 0.0);
      glEnd();

    glPopMatrix();
}


void updateCar2(int value) {
	car2_angle += 2.0f;
	if (car2_angle > 360) {
		car2_angle -= 360;
	}
    car2_move_x += 0.2f;
    if(car2_move_x > 6.0){
        car2_move_x = -7.0;
        _car2_color_r = getRamdomNum(-1.0, 1.0, .5);
  			_car2_color_g = getRamdomNum(-1.0, 1.0, .5);
  			_car2_color_b = getRamdomNum(-1.0, 1.0, .5);
        // car_move_y = getRamdomNum(-1.5, -1.0, 0.5);
    }

	glutTimerFunc(10, updateCar2, 0);
}
