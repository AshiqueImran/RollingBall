void buildSceneAndBall() {
		//ball
		glPushMatrix();
		glTranslatef(ballPlace,ballUp,0);
		glRotatef(90,1,0,0);
		glRotatef(_angle,0,1,0);
		glColor3f(0,1,0);
		glutSolidSphere(.3 ,20,20);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(pixel,0,0);

		glPushMatrix();
		glTranslatef(0,.2,0);

		//purple building
		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.7,0.2,0);
		glVertex3f(-2.4,0.2,0);
		glVertex3f(-2.4,0.5,0);
		glVertex3f(-2.7,0.5,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.1,0.2,0);
		glVertex3f(-1.8,0.2,0);
		glVertex3f(-1.8,0.5,0);
		glVertex3f(-2.1,0.5,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.7,0.8,0);
		glVertex3f(-2.4,0.8,0);
		glVertex3f(-2.4,1.1,0);
		glVertex3f(-2.7,1.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.1,0.8,0);
		glVertex3f(-1.8,0.8,0);
		glVertex3f(-1.8,1.1,0);
		glVertex3f(-2.1,1.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.7,1.4,0);
		glVertex3f(-2.4,1.4,0);
		glVertex3f(-2.4,1.7,0);
		glVertex3f(-2.7,1.7,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.1,1.4,0);
		glVertex3f(-1.8,1.4,0);
		glVertex3f(-1.8,1.7,0);
		glVertex3f(-2.1,1.7,0);
		glEnd();

		glColor3f(1,0,1);
		glBegin(GL_POLYGON);
		glVertex3f(-3,0,0);
		glVertex3f(-1.5,0,0);
		glVertex3f(-1.5,2,0);
		glVertex3f(-3,2,0);
		glEnd();

		//magenta building

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-1.6,1,0);
		glVertex3f(-1.3,1,0);
		glVertex3f(-1.3,1.3,0);
		glVertex3f(-1.6,1.3,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-1.6,1.6,0);
		glVertex3f(-1.3,1.6,0);
		glVertex3f(-1.3,1.9,0);
		glVertex3f(-1.6,1.9,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-1.6,2.2,0);
		glVertex3f(-1.3,2.2,0);
		glVertex3f(-1.3,2.5,0);
		glVertex3f(-1.6,2.5,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.2,1,0);
		glVertex3f(-1.9,1,0);
		glVertex3f(-1.9,1.3,0);
		glVertex3f(-2.2,1.3,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.2,1.6,0);
		glVertex3f(-1.9,1.6,0);
		glVertex3f(-1.9,1.9,0);
		glVertex3f(-2.2,1.9,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.2,2.2,0);
		glVertex3f(-1.9,2.2,0);
		glVertex3f(-1.9,2.5,0);
		glVertex3f(-2.2,2.5,0);
		glEnd();



		glColor3f(1,0,0.25);
		glBegin(GL_POLYGON);
		glVertex3f(-2.5,0.7,0);
		glVertex3f(-1,0.7,0);
		glVertex3f(-1,2.8,0);
		glVertex3f(-2.5,2.8,0);
		glEnd();


		//blue building
		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.9,0.3,0);
		glVertex3f(1.2,0.3,0);
		glVertex3f(1.2,0.6,0);
		glVertex3f(0.9,0.6,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,0.3,0);
		glVertex3f(1.9,0.3,0);
		glVertex3f(1.9,0.6,0);
		glVertex3f(1.6,0.6,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.9,0.9,0);
		glVertex3f(1.2,0.9,0);
		glVertex3f(1.2,1.2,0);
		glVertex3f(0.9,1.2,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,0.9,0);
		glVertex3f(1.9,0.9,0);
		glVertex3f(1.9,1.2,0);
		glVertex3f(1.6,1.2,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.9,1.5,0);
		glVertex3f(1.2,1.5,0);
		glVertex3f(1.2,1.8,0);
		glVertex3f(0.9,1.8,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,1.5,0);
		glVertex3f(1.9,1.5,0);
		glVertex3f(1.9,1.8,0);
		glVertex3f(1.6,1.8,0);
		glEnd();


		glColor3f(0.28,0.23,0.54);
		glBegin(GL_POLYGON);
		glVertex3f(0.5,0,0);
		glVertex3f(2.3,0,0);
		glVertex3f(2.3,2.1,0);
		glVertex3f(0.5,2.1,0);
		glEnd();

		//green building

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-0.1,1.2,0);
		glVertex3f(0.2,1.2,0);
		glVertex3f(0.2,1.5,0);
		glVertex3f(-0.1,1.5,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.8,1.2,0);
		glVertex3f(1.1,1.2,0);
		glVertex3f(1.1,1.5,0);
		glVertex3f(0.8,1.5,0);
		glEnd();




		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-0.1,1.8,0);
		glVertex3f(0.2,1.8,0);
		glVertex3f(0.2,2.1,0);
		glVertex3f(-0.1,2.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.8,1.8,0);
		glVertex3f(1.1,1.8,0);
		glVertex3f(1.1,2.1,0);
		glVertex3f(0.8,2.1,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-0.1,2.4,0);
		glVertex3f(0.2,2.4,0);
		glVertex3f(0.2,2.7,0);
		glVertex3f(-0.1,2.7,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.8,2.4,0);
		glVertex3f(1.1,2.4,0);
		glVertex3f(1.1,2.7,0);
		glVertex3f(0.8,2.7,0);
		glEnd();



		glColor3f(0.196,0.803,0.196);
		glBegin(GL_POLYGON);
		glVertex3f(-0.5,0.9,0);
		glVertex3f(1.5,0.9,0);
		glVertex3f(1.5,3,0);
		glVertex3f(-0.5,3,0);
		glEnd();

		//orange building

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.9,1.2,0);
		glVertex3f(2.2,1.2,0);
		glVertex3f(2.2,1.5,0);
		glVertex3f(1.9,1.5,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(2.5,1.2,0);
		glVertex3f(2.8,1.2,0);
		glVertex3f(2.8,1.5,0);
		glVertex3f(2.5,1.5,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.9,1.8,0);
		glVertex3f(2.2,1.8,0);
		glVertex3f(2.2,2.1,0);
		glVertex3f(1.9,2.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(2.5,1.8,0);
		glVertex3f(2.8,1.8,0);
		glVertex3f(2.8,2.1,0);
		glVertex3f(2.5,2.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.9,2.4,0);
		glVertex3f(2.2,2.4,0);
		glVertex3f(2.2,2.7,0);
		glVertex3f(1.9,2.7,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(2.5,2.4,0);
		glVertex3f(2.8,2.4,0);
		glVertex3f(2.8,2.7,0);
		glVertex3f(2.5,2.7,0);
		glEnd();


		glColor3f(1,0.27,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,0.9,0);
		glVertex3f(3.1,0.9,0);
		glVertex3f(3.1,3,0);
		glVertex3f(1.6,3,0);
		glEnd();

		//road

		//zebra start

		glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.1,-2.6,0);
		glVertex3f(-3.7,-2.5,0);
		glVertex3f(-3.7,-2.2,0);
		glVertex3f(-4.1,-2.3,0);
		glEnd();

	 glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.1,-2,0);
		glVertex3f(-3.7,-1.9,0);
		glVertex3f(-3.7,-1.6,0);
		glVertex3f(-4.1,-1.7,0);
		glEnd();

	 glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.1,-1.4,0);
		glVertex3f(-3.7,-1.3,0);
		glVertex3f(-3.7,-1,0);
		glVertex3f(-4.1,-1.1,0);
		glEnd();


		glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.1,-0.8,0);
		glVertex3f(-3.7,-0.7,0);
		glVertex3f(-3.7,-0.4,0);
		glVertex3f(-4.1,-0.5,0);
		glEnd();


		glColor3f(1,1,1);
		glBegin(GL_POLYGON);
		glVertex3f(-4.2,-2.7,0);
		glVertex3f(-3.6,-2.7,0);
		glVertex3f(-3.6,-0.39,0);
		glVertex3f(-4.2,-0.4,0);
		glEnd();

		//zebra end


		glColor3f(0.803,0.77,0.74);
		glBegin(GL_POLYGON);
		glVertex3f(-3.9,-2.1,0);
		glVertex3f(-1.9,-2,0);
		glVertex3f(-1.9,-1.35,0);
		glVertex3f(-3.9,-1.45,0);
		glEnd();

		glColor3f(0.803,0.77,0.74);
		glBegin(GL_POLYGON);
		glVertex3f(-1.2,-2,0);
		glVertex3f(0.7,-1.9,0);
		glVertex3f(0.7,-1.25,0);
		glVertex3f(-1.2,-1.35,0);
		glEnd();


		glColor3f(0.803,0.77,0.74);
		glBegin(GL_POLYGON);
		glVertex3f(1.4,-1.9,0);
		glVertex3f(3.4,-1.8,0);
		glVertex3f(3.4,-1.15,0);
		glVertex3f(1.4,-1.25,0);
		glEnd();




		glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4,-2.7,0);
		glVertex3f(4,-2.5,0);
		glVertex3f(4,-0.2,0);
		glVertex3f(-4,-0.4,0);
		glEnd();



		//sand

		glColor3f(0.93,0.86,0.5);
		glBegin(GL_POLYGON);
		glVertex3f(-4,-0.4,0);
		glVertex3f(4,-0.4,0);
		glVertex3f(4,1.8,0);
		glVertex3f(-4,1.6,0);
		glEnd();

		//sky

		glColor3f(0,0.74,1);
		glBegin(GL_POLYGON);
		glVertex3f(-4,1.5,0);
		glVertex3f(4,1.5,0);
		glVertex3f(4,3,0);
		glVertex3f(-4,3,0);
		glEnd();





		glPopMatrix();




		//2nd scenery
		glPushMatrix();
		glTranslatef(-8,0,0);

		//purple building
		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.7,0.2,0);
		glVertex3f(-2.4,0.2,0);
		glVertex3f(-2.4,0.5,0);
		glVertex3f(-2.7,0.5,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.1,0.2,0);
		glVertex3f(-1.8,0.2,0);
		glVertex3f(-1.8,0.5,0);
		glVertex3f(-2.1,0.5,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.7,0.8,0);
		glVertex3f(-2.4,0.8,0);
		glVertex3f(-2.4,1.1,0);
		glVertex3f(-2.7,1.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.1,0.8,0);
		glVertex3f(-1.8,0.8,0);
		glVertex3f(-1.8,1.1,0);
		glVertex3f(-2.1,1.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.7,1.4,0);
		glVertex3f(-2.4,1.4,0);
		glVertex3f(-2.4,1.7,0);
		glVertex3f(-2.7,1.7,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.1,1.4,0);
		glVertex3f(-1.8,1.4,0);
		glVertex3f(-1.8,1.7,0);
		glVertex3f(-2.1,1.7,0);
		glEnd();

		glColor3f(1,0,1);
		glBegin(GL_POLYGON);
		glVertex3f(-3,0,0);
		glVertex3f(-1.5,0,0);
		glVertex3f(-1.5,2,0);
		glVertex3f(-3,2,0);
		glEnd();

		//magenta building

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-1.6,1,0);
		glVertex3f(-1.3,1,0);
		glVertex3f(-1.3,1.3,0);
		glVertex3f(-1.6,1.3,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-1.6,1.6,0);
		glVertex3f(-1.3,1.6,0);
		glVertex3f(-1.3,1.9,0);
		glVertex3f(-1.6,1.9,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-1.6,2.2,0);
		glVertex3f(-1.3,2.2,0);
		glVertex3f(-1.3,2.5,0);
		glVertex3f(-1.6,2.5,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.2,1,0);
		glVertex3f(-1.9,1,0);
		glVertex3f(-1.9,1.3,0);
		glVertex3f(-2.2,1.3,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.2,1.6,0);
		glVertex3f(-1.9,1.6,0);
		glVertex3f(-1.9,1.9,0);
		glVertex3f(-2.2,1.9,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.2,2.2,0);
		glVertex3f(-1.9,2.2,0);
		glVertex3f(-1.9,2.5,0);
		glVertex3f(-2.2,2.5,0);
		glEnd();



		glColor3f(1,0,0.25);
		glBegin(GL_POLYGON);
		glVertex3f(-2.5,0.7,0);
		glVertex3f(-1,0.7,0);
		glVertex3f(-1,2.8,0);
		glVertex3f(-2.5,2.8,0);
		glEnd();


		//blue building
		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.9,0.3,0);
		glVertex3f(1.2,0.3,0);
		glVertex3f(1.2,0.6,0);
		glVertex3f(0.9,0.6,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,0.3,0);
		glVertex3f(1.9,0.3,0);
		glVertex3f(1.9,0.6,0);
		glVertex3f(1.6,0.6,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.9,0.9,0);
		glVertex3f(1.2,0.9,0);
		glVertex3f(1.2,1.2,0);
		glVertex3f(0.9,1.2,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,0.9,0);
		glVertex3f(1.9,0.9,0);
		glVertex3f(1.9,1.2,0);
		glVertex3f(1.6,1.2,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.9,1.5,0);
		glVertex3f(1.2,1.5,0);
		glVertex3f(1.2,1.8,0);
		glVertex3f(0.9,1.8,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,1.5,0);
		glVertex3f(1.9,1.5,0);
		glVertex3f(1.9,1.8,0);
		glVertex3f(1.6,1.8,0);
		glEnd();


		glColor3f(0.28,0.23,0.54);
		glBegin(GL_POLYGON);
		glVertex3f(0.5,0,0);
		glVertex3f(2.3,0,0);
		glVertex3f(2.3,2.1,0);
		glVertex3f(0.5,2.1,0);
		glEnd();

		//green building

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-0.1,1.2,0);
		glVertex3f(0.2,1.2,0);
		glVertex3f(0.2,1.5,0);
		glVertex3f(-0.1,1.5,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.8,1.2,0);
		glVertex3f(1.1,1.2,0);
		glVertex3f(1.1,1.5,0);
		glVertex3f(0.8,1.5,0);
		glEnd();




		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-0.1,1.8,0);
		glVertex3f(0.2,1.8,0);
		glVertex3f(0.2,2.1,0);
		glVertex3f(-0.1,2.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.8,1.8,0);
		glVertex3f(1.1,1.8,0);
		glVertex3f(1.1,2.1,0);
		glVertex3f(0.8,2.1,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-0.1,2.4,0);
		glVertex3f(0.2,2.4,0);
		glVertex3f(0.2,2.7,0);
		glVertex3f(-0.1,2.7,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.8,2.4,0);
		glVertex3f(1.1,2.4,0);
		glVertex3f(1.1,2.7,0);
		glVertex3f(0.8,2.7,0);
		glEnd();



		glColor3f(0.196,0.803,0.196);
		glBegin(GL_POLYGON);
		glVertex3f(-0.5,0.9,0);
		glVertex3f(1.5,0.9,0);
		glVertex3f(1.5,3,0);
		glVertex3f(-0.5,3,0);
		glEnd();

		//orange building

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.9,1.2,0);
		glVertex3f(2.2,1.2,0);
		glVertex3f(2.2,1.5,0);
		glVertex3f(1.9,1.5,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(2.5,1.2,0);
		glVertex3f(2.8,1.2,0);
		glVertex3f(2.8,1.5,0);
		glVertex3f(2.5,1.5,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.9,1.8,0);
		glVertex3f(2.2,1.8,0);
		glVertex3f(2.2,2.1,0);
		glVertex3f(1.9,2.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(2.5,1.8,0);
		glVertex3f(2.8,1.8,0);
		glVertex3f(2.8,2.1,0);
		glVertex3f(2.5,2.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.9,2.4,0);
		glVertex3f(2.2,2.4,0);
		glVertex3f(2.2,2.7,0);
		glVertex3f(1.9,2.7,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(2.5,2.4,0);
		glVertex3f(2.8,2.4,0);
		glVertex3f(2.8,2.7,0);
		glVertex3f(2.5,2.7,0);
		glEnd();


		glColor3f(1,0.27,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,0.9,0);
		glVertex3f(3.1,0.9,0);
		glVertex3f(3.1,3,0);
		glVertex3f(1.6,3,0);
		glEnd();

		//road


		//zebra start

		glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.1,-2.6,0);
		glVertex3f(-3.7,-2.5,0);
		glVertex3f(-3.7,-2.2,0);
		glVertex3f(-4.1,-2.3,0);
		glEnd();

	 glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.1,-2,0);
		glVertex3f(-3.7,-1.9,0);
		glVertex3f(-3.7,-1.6,0);
		glVertex3f(-4.1,-1.7,0);
		glEnd();

	 glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.1,-1.4,0);
		glVertex3f(-3.7,-1.3,0);
		glVertex3f(-3.7,-1,0);
		glVertex3f(-4.1,-1.1,0);
		glEnd();


		glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.1,-0.8,0);
		glVertex3f(-3.7,-0.7,0);
		glVertex3f(-3.7,-0.4,0);
		glVertex3f(-4.1,-0.5,0);
		glEnd();


		glColor3f(1,1,1);
		glBegin(GL_POLYGON);
		glVertex3f(-4.2,-2.7,0);
		glVertex3f(-3.6,-2.7,0);
		glVertex3f(-3.6,-0.39,0);
		glVertex3f(-4.2,-0.4,0);
		glEnd();

		//zebra end



		glColor3f(0.803,0.77,0.74);
		glBegin(GL_POLYGON);
		glVertex3f(-3.9,-2.1,0);
		glVertex3f(-1.9,-2,0);
		glVertex3f(-1.9,-1.35,0);
		glVertex3f(-3.9,-1.45,0);
		glEnd();

		glColor3f(0.803,0.77,0.74);
		glBegin(GL_POLYGON);
		glVertex3f(-1.2,-2,0);
		glVertex3f(0.7,-1.9,0);
		glVertex3f(0.7,-1.25,0);
		glVertex3f(-1.2,-1.35,0);
		glEnd();


		glColor3f(0.803,0.77,0.74);
		glBegin(GL_POLYGON);
		glVertex3f(1.4,-1.9,0);
		glVertex3f(3.4,-1.8,0);
		glVertex3f(3.4,-1.15,0);
		glVertex3f(1.4,-1.25,0);
		glEnd();




		glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4,-2.5,0);
		glVertex3f(4,-2.5,0);
		glVertex3f(4,-0.2,0);
		glVertex3f(-4,-0.4,0);
		glEnd();



		//sand

		glColor3f(0.93,0.86,0.5);
		glBegin(GL_POLYGON);
		glVertex3f(-4,-0.4,0);
		glVertex3f(4,-0.2,0);
		glVertex3f(4,1.8,0);
		glVertex3f(-4,1.5,0);
		glEnd();

		//sky

		glColor3f(0,0.74,1);
		glBegin(GL_POLYGON);
		glVertex3f(-4,1.5,0);
		glVertex3f(4,1.5,0);
		glVertex3f(4,3,0);
		glVertex3f(-4,3,0);
		glEnd();


		glPopMatrix();

		//3rd scenery

		glPushMatrix();
		glTranslatef(-16,0,0);

		//purple building

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.7,0.2,0);
		glVertex3f(-2.4,0.2,0);
		glVertex3f(-2.4,0.5,0);
		glVertex3f(-2.7,0.5,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.1,0.2,0);
		glVertex3f(-1.8,0.2,0);
		glVertex3f(-1.8,0.5,0);
		glVertex3f(-2.1,0.5,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.7,0.8,0);
		glVertex3f(-2.4,0.8,0);
		glVertex3f(-2.4,1.1,0);
		glVertex3f(-2.7,1.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.1,0.8,0);
		glVertex3f(-1.8,0.8,0);
		glVertex3f(-1.8,1.1,0);
		glVertex3f(-2.1,1.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.7,1.4,0);
		glVertex3f(-2.4,1.4,0);
		glVertex3f(-2.4,1.7,0);
		glVertex3f(-2.7,1.7,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.1,1.4,0);
		glVertex3f(-1.8,1.4,0);
		glVertex3f(-1.8,1.7,0);
		glVertex3f(-2.1,1.7,0);
		glEnd();

		glColor3f(1,0,1);
		glBegin(GL_POLYGON);
		glVertex3f(-3,0,0);
		glVertex3f(-1.5,0,0);
		glVertex3f(-1.5,2,0);
		glVertex3f(-3,2,0);
		glEnd();

		//magenta building

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-1.6,1,0);
		glVertex3f(-1.3,1,0);
		glVertex3f(-1.3,1.3,0);
		glVertex3f(-1.6,1.3,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-1.6,1.6,0);
		glVertex3f(-1.3,1.6,0);
		glVertex3f(-1.3,1.9,0);
		glVertex3f(-1.6,1.9,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-1.6,2.2,0);
		glVertex3f(-1.3,2.2,0);
		glVertex3f(-1.3,2.5,0);
		glVertex3f(-1.6,2.5,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.2,1,0);
		glVertex3f(-1.9,1,0);
		glVertex3f(-1.9,1.3,0);
		glVertex3f(-2.2,1.3,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.2,1.6,0);
		glVertex3f(-1.9,1.6,0);
		glVertex3f(-1.9,1.9,0);
		glVertex3f(-2.2,1.9,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-2.2,2.2,0);
		glVertex3f(-1.9,2.2,0);
		glVertex3f(-1.9,2.5,0);
		glVertex3f(-2.2,2.5,0);
		glEnd();



		glColor3f(1,0,0.25);
		glBegin(GL_POLYGON);
		glVertex3f(-2.5,0.7,0);
		glVertex3f(-1,0.7,0);
		glVertex3f(-1,2.8,0);
		glVertex3f(-2.5,2.8,0);
		glEnd();


		//blue building
		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.9,0.3,0);
		glVertex3f(1.2,0.3,0);
		glVertex3f(1.2,0.6,0);
		glVertex3f(0.9,0.6,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,0.3,0);
		glVertex3f(1.9,0.3,0);
		glVertex3f(1.9,0.6,0);
		glVertex3f(1.6,0.6,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.9,0.9,0);
		glVertex3f(1.2,0.9,0);
		glVertex3f(1.2,1.2,0);
		glVertex3f(0.9,1.2,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,0.9,0);
		glVertex3f(1.9,0.9,0);
		glVertex3f(1.9,1.2,0);
		glVertex3f(1.6,1.2,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.9,1.5,0);
		glVertex3f(1.2,1.5,0);
		glVertex3f(1.2,1.8,0);
		glVertex3f(0.9,1.8,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,1.5,0);
		glVertex3f(1.9,1.5,0);
		glVertex3f(1.9,1.8,0);
		glVertex3f(1.6,1.8,0);
		glEnd();


		glColor3f(0.28,0.23,0.54);
		glBegin(GL_POLYGON);
		glVertex3f(0.5,0,0);
		glVertex3f(2.3,0,0);
		glVertex3f(2.3,2.1,0);
		glVertex3f(0.5,2.1,0);
		glEnd();

			//green building

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-0.1,1.2,0);
		glVertex3f(0.2,1.2,0);
		glVertex3f(0.2,1.5,0);
		glVertex3f(-0.1,1.5,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.8,1.2,0);
		glVertex3f(1.1,1.2,0);
		glVertex3f(1.1,1.5,0);
		glVertex3f(0.8,1.5,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-0.1,1.8,0);
		glVertex3f(0.2,1.8,0);
		glVertex3f(0.2,2.1,0);
		glVertex3f(-0.1,2.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.8,1.8,0);
		glVertex3f(1.1,1.8,0);
		glVertex3f(1.1,2.1,0);
		glVertex3f(0.8,2.1,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(-0.1,2.4,0);
		glVertex3f(0.2,2.4,0);
		glVertex3f(0.2,2.7,0);
		glVertex3f(-0.1,2.7,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(0.8,2.4,0);
		glVertex3f(1.1,2.4,0);
		glVertex3f(1.1,2.7,0);
		glVertex3f(0.8,2.7,0);
		glEnd();



		glColor3f(0.196,0.803,0.196);
		glBegin(GL_POLYGON);
		glVertex3f(-0.5,0.9,0);
		glVertex3f(1.5,0.9,0);
		glVertex3f(1.5,3,0);
		glVertex3f(-0.5,3,0);
		glEnd();

		//orange building

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.9,1.2,0);
		glVertex3f(2.2,1.2,0);
		glVertex3f(2.2,1.5,0);
		glVertex3f(1.9,1.5,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(2.5,1.2,0);
		glVertex3f(2.8,1.2,0);
		glVertex3f(2.8,1.5,0);
		glVertex3f(2.5,1.5,0);
		glEnd();


		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.9,1.8,0);
		glVertex3f(2.2,1.8,0);
		glVertex3f(2.2,2.1,0);
		glVertex3f(1.9,2.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(2.5,1.8,0);
		glVertex3f(2.8,1.8,0);
		glVertex3f(2.8,2.1,0);
		glVertex3f(2.5,2.1,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.9,2.4,0);
		glVertex3f(2.2,2.4,0);
		glVertex3f(2.2,2.7,0);
		glVertex3f(1.9,2.7,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(2.5,2.4,0);
		glVertex3f(2.8,2.4,0);
		glVertex3f(2.8,2.7,0);
		glVertex3f(2.5,2.7,0);
		glEnd();


	 glColor3f(1,0.27,0);
		glBegin(GL_POLYGON);
		glVertex3f(1.6,0.9,0);
		glVertex3f(3.1,0.9,0);
		glVertex3f(3.1,3,0);
		glVertex3f(1.6,3,0);
		glEnd();

		//road


		//zebra start

		glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.5,-2.6,0);
		glVertex3f(-4,-2.5,0);
		glVertex3f(-4,-2.2,0);
		glVertex3f(-4.5,-2.3,0);
		glEnd();

	 glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.5,-2,0);
		glVertex3f(-4,-1.9,0);
		glVertex3f(-4,-1.6,0);
		glVertex3f(-4.5,-1.7,0);
		glEnd();

	 glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.5,-1.4,0);
		glVertex3f(-4,-1.3,0);
		glVertex3f(-4,-1,0);
		glVertex3f(-4.5,-1.1,0);
		glEnd();


		glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4.5,-0.8,0);
		glVertex3f(-4,-0.7,0);
		glVertex3f(-4,-0.4,0);
		glVertex3f(-4.5,-0.5,0);
		glEnd();


		glColor3f(1,1,1);
		glBegin(GL_POLYGON);
		glVertex3f(-4.6,-2.7,0);
		glVertex3f(-4,-2.6,0);
		glVertex3f(-4,-0.39,0);
		glVertex3f(-4.6,-0.4,0);
		glEnd();

			//zebra end



		glColor3f(0.803,0.77,0.74);
		glBegin(GL_POLYGON);
		glVertex3f(-3.9,-2.1,0);
		glVertex3f(-1.9,-2,0);
		glVertex3f(-1.9,-1.35,0);
		glVertex3f(-3.9,-1.45,0);
		glEnd();

		glColor3f(0.803,0.77,0.74);
		glBegin(GL_POLYGON);
		glVertex3f(-1.2,-2,0);
		glVertex3f(0.7,-1.9,0);
		glVertex3f(0.7,-1.25,0);
		glVertex3f(-1.2,-1.35,0);
		glEnd();


		glColor3f(0.803,0.77,0.74);
		glBegin(GL_POLYGON);
		glVertex3f(1.4,-1.9,0);
		glVertex3f(3.4,-1.8,0);
		glVertex3f(3.4,-1.15,0);
		glVertex3f(1.4,-1.25,0);
		glEnd();



		glColor3f(0.54,0.52,0.509);
		glBegin(GL_POLYGON);
		glVertex3f(-4,-2.5,0);
		glVertex3f(4,-2.5,0);
		glVertex3f(4,-0.4,0);
		glVertex3f(-4,-0.4,0);
		glEnd();



		//sand

		glColor3f(0.93,0.86,0.5);
		glBegin(GL_POLYGON);
		glVertex3f(-4,-0.4,0);
		glVertex3f(4,-0.4,0);
		glVertex3f(4,1.5,0);
		glVertex3f(-4,1.5,0);
		glEnd();

		//sky

		glColor3f(0,0.74,1);
		glBegin(GL_POLYGON);
		glVertex3f(-4,1.5,0);
		glVertex3f(4,1.5,0);
		glVertex3f(4,3,0);
		glVertex3f(-4,3,0);
		glEnd();


		glPopMatrix();
		glPopMatrix();
}
