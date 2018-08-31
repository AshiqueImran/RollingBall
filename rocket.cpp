float rocket_move_x = -7.0;
float rocket_move_y = -.3;

float _rocket_color_r = 1.0;
float _rocket_color_g = 0.0;
float _rocket_color_b = 0.0;
//Draws the 3D scene
void drawRocket() {
	glPushMatrix();
		glTranslatef(rocket_move_x, rocket_move_y, 0.0);
		glScalef(0.8,0.8,0.8);
	  // plane body
	  glColor3f(_rocket_color_b, _rocket_color_g, _rocket_color_r);
	  glBegin(GL_POLYGON);
	  glVertex3f(0.5,2.4,0);
	  glVertex3f(1.5,2.4,0);
	  glVertex3f(2.0,2.5,0);
	  glVertex3f(1.5,2.6,0);
	  glVertex3f(0.5,2.6,0);
	  glEnd();

	  // plane wing bottom
	  glColor3f(0,0,0);
	  glBegin(GL_POLYGON);
	  glVertex3f(1.2,2.4,0);
	  glVertex3f(1.2,2.0,0);
	  glVertex3f(1.3,2.0,0);
	  glVertex3f(1.3,2.4,0);
	  glEnd();

	  // plane wing up
	  glColor3f(0,0,0);
	  glBegin(GL_POLYGON);
	  glVertex3f(1.2,2.6,0);
	  glVertex3f(1.2,3.0,0);
	  glVertex3f(1.3,3.0,0);
	  glVertex3f(1.3,2.6,0);
	  glEnd();

	  // plane wing bottom behind
	  glColor3f(0,0,0);
	  glBegin(GL_POLYGON);
	  glVertex3f(0.7,2.4,0);
	  glVertex3f(0.7,2.2,0);
	  glVertex3f(0.8,2.2,0);
	  glVertex3f(0.8,2.4,0);
	  glEnd();

	  // plane wing up behind
	  glColor3f(0,0,0);
	  glBegin(GL_POLYGON);
	  glVertex3f(0.7,2.6,0);
	  glVertex3f(0.7,2.8,0);
	  glVertex3f(0.8,2.8,0);
	  glVertex3f(0.8,2.6,0);
	  glEnd();

	glPopMatrix();
}

void updateRocket(int value) {
    rocket_move_x += 0.13f;
    if(rocket_move_x > 15.0){
        rocket_move_x = -15.0;
				rocket_move_y = getRamdomNum(-.5, -1.5, .5);
				_rocket_color_r = getRamdomNum(-2.0, 2.0, .5);
  			_rocket_color_g = getRamdomNum(-2.0, 2.0, .5);
  			_rocket_color_b = getRamdomNum(-2.0, 2.0, .5);
    }

	glutPostRedisplay();

	glutTimerFunc(15, updateRocket, 0);
}
