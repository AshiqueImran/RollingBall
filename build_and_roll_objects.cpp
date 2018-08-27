float _move_o1 = 4.0;
float _obj_color_r = 1.0;
float _obj_color_g = 0.0;
float _obj_color_b = 0.0;
float _obj_pos_y = -0.5;
float _obj_radius_in = 0.2;
float _obj_radius_out = 0.5;

void buildAndRollObjects(){
	glPushMatrix();
			glColor3f(_obj_color_r,_obj_color_g, _obj_color_b);
			glTranslatef(_move_o1, 0.0, 0.0);
			glTranslatef(0.0, _obj_pos_y, 0.0);
			glRotatef(-90, 1.0, 0.0, 0.0);
			glRotatef(_angle, 0.0, 0.0, 1.0);
			glutWireTorus(_obj_radius_in, _obj_radius_out, 20, 40);
	glPopMatrix();

	glPushMatrix();
			 glColor3f(1.0, 1.0, 1.0);
			 glTranslatef(0.0, 3.0, -1.0); //Move forward 5 units
			 glRotatef(-90, 1.0, 0.0, 0.0);
			 // glRotatef(_angle, 0.0, 0.0, 1.0);
			 glutWireTorus(0.2, 0.9, 20, 20);
	 glPopMatrix();
}

//update floating objects
void updateObjects(int value){
	_move_o1 += 0.06f;
	if(_move_o1 > 5.0){
			_move_o1 = -4.5;
			_obj_color_r = getRamdomNum(-1.0, 1.0, 1.0);
			_obj_color_g = getRamdomNum(-2.0, 2.0, 1.0);
			_obj_color_b = getRamdomNum(-2.0, 2.0, 1.0);
			_obj_pos_y = getRamdomNum(2.5, -2.0, 1.0);
			_obj_radius_in = getRamdomNum(0.1, 0.3, .1);
			_obj_radius_out = getRamdomNum(0.2, 0.5, .1);
	}
	glutTimerFunc(10, updateObjects, 0);
}
