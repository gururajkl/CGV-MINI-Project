#include<glut.h>
#include<stdio.h>
#include<math.h>
//display variables
GLfloat w=500,h=500,zy1=65,zy2=430;

// car nano variables
GLfloat ay=0,by1=480,by2=480,by3=460,by4=460,by5=460,by6=460,by7=420,by8=420,by9=420,by10=420,by11=400,by12=400,ax=0,bx=0;
GLfloat by13=403,by14=403,by15=416,by16=416,by17=403,by18=403,by19=416,by20=416,by21=463,by22=463,by23=476,by24=476,by25=463,by26=463,by27=476,by28=476;

//car bmw variavles
GLfloat ay1=20,ay2=20,ay3=40,ay4=40,ay5=40,ay6=40,ay7=90,ay8=90,ay9=90,ay10=90,ay11=130,ay12=130;
GLfloat ay13=25,ay14=25,ay15=38,ay16=38,ay17=25,ay18=25,ay19=38,ay20=38,ay21=95,ay22=95,ay23=108,ay24=108,ay25=95,ay26=95,ay27=108,ay28=108;

//flag variables 
GLint flagd=0,flaga=0,flagc=0,color1=0,flagl=0,flag2=0,flagr=0,flag3=0;
GLfloat size=0.05,sizer=0.04,sizec=0.03;

//car 3 variables
GLfloat cy1=-20,cy2=-20,cy3=-40,cy4=-40,cy5=-40,cy6=-40,cy7=-90,cy8=-90,cy9=-90,cy10=-90,cy11=-110,cy12=-110,cy=5;//CAR 3
GLfloat cy13=-25,cy14=-25,cy15=-38,cy16=-38,cy17=-25,cy18=-25,cy19=-38,cy20=-38,cy21=-95,cy22=-95,cy23=-108,cy24=-108,cy25=-95,cy26=-95,cy27=-108,cy28=-108;

static void key(unsigned char key, int x, int y);

void display();
	void drawstring(float x,float y,float z,char *string)
	{
		 char *c;
		 glRasterPos3f(x,y,z);
		 for(c=string;*c!='\0';c++)
	 {
	  		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,*c);
	 }
	}
	void drawstring1(float x,float y,float z,char *string)
	{
		 char *c;
	 	glRasterPos3f(x,y,z);
	 	for(c=string;*c!='\0';c++)
	 	{
	  glutBitmapCharacter(GLUT_BITMAP_8_BY_13,*c);
		 }
	}
	void drawstring2(float x,float y,float z,char *string)
	{
		 char *c;
	 	glRasterPos3f(x,y,z);
	 	for(c=string;*c!='\0';c++)
	 	 {
	  		glutBitmapCharacter(GLUT_BITMAP_9_BY_15,*c);
		 }
	}

void mov()
{		
	if(flagl==0)
	{
	
		if(by9>380||by10>380||by11>380||by12>380)
		{
			
	
			by1=by1-sizer;
			by2=by2-sizer;
			by3=by3-sizer;
			by4=by4-sizer;
			by5=by5-sizer;
			by6=by6-sizer;
			by7=by7-sizer;
			by8=by8-sizer;
			by9=by9-sizer;
			by10=by10-sizer;
			by11=by11-sizer;
			by12=by12-sizer;
			by13=by13-sizer;//wheels
			by14=by14-sizer;
			by15=by15-sizer;
			by16=by16-sizer;
			by17=by17-sizer;
			by18=by18-sizer;
			by19=by19-sizer;
			by20=by20-sizer;
			by21=by21-sizer;
			by22=by22-sizer;
			by23=by23-sizer;
			by24=by24-sizer;
			by25=by25-sizer;
			by26=by26-sizer;
			by27=by27-sizer;
			by28=by28-sizer;
			zy2=zy2-sizer;
		}
	}
	if(flagl==1)
	{
		
		if(by9>1||by10>=1||by11>=1||by12>=1)
		{
			if(by1<270)
			flag2=0;	
			by1=by1-sizer;
			by2=by2-sizer;
			by3=by3-sizer;
			by4=by4-sizer;
			by5=by5-sizer;
			by6=by6-sizer;
			by7=by7-sizer;
			by8=by8-sizer;
			by9=by9-sizer;
			by10=by10-sizer;
			by11=by11-sizer;
			by12=by12-sizer;
			by13=by13-sizer;//wheel
			by14=by14-sizer;
			by15=by15-sizer;
			by16=by16-sizer;
			by17=by17-sizer;
			by18=by18-sizer;
			by19=by19-sizer;
			by20=by20-sizer;
			by21=by21-sizer;
			by22=by22-sizer;
			by23=by23-sizer;
			by24=by24-sizer;
			by25=by25-sizer;
			by26=by26-sizer;
			by27=by27-sizer;
			by28=by28-sizer;
			zy2=zy2-sizer;
		}
	else
	{
		
				
			flagl=0;
		
		by1=480;
		by2=480;
		by3=460;
		by4=460;
		by5=460;
		by6=460;
		by7=420;
		by8=420;
		by9=420;
		by10=420;
		by11=400;
		by12=400;	
		by13=403;//wheel
		by14=403;
		by15=416;
		by16=416;
		by17=403;
		by18=403;
		by19=416;
		by20=416;
		by21=463;
		by22=463;
		by23=476;
		by24=476;
		by25=463;
		by26=463;
		by27=476;
		by28=476;	
		zy2=430;
	}
	
}






//second car move

		if(flagr==0)
	{
	
		if(ay9<300||ay10<300||ay11<300||ay12<300)
		{
			
	
			ay1=ay1+size;
			ay2=ay2+size;
			ay3=ay3+size;
			ay4=ay4+size;
			ay5=ay5+size;
			ay6=ay6+size;
			ay7=ay7+size;
			ay8=ay8+size;
			ay9=ay9+size;
			ay10=ay10+size;
			ay11=ay11+size;
			ay12=ay12+size;
			ay13=ay13+size;//wheel
			ay14=ay14+size;
			ay15=ay15+size;
			ay16=ay16+size;
			ay17=ay17+size;
			ay18=ay18+size;
			ay19=ay19+size;
			ay20=ay20+size;
			ay21=ay21+size;
			ay22=ay22+size;
			ay23=ay23+size;
			ay24=ay24+size;
			ay25=ay25+size;
			ay26=ay26+size;
			ay27=ay27+size;
			ay28=ay28+size;
				cy=cy+size;
			zy1=zy1+size;
		
		}
	}
	if(flagr==1)
	{
		if(ay1<500||ay2<500||ay3<500||ay4<500)
		{
			if(ay1>370)
			flag3=0;	
			ay1=ay1+size;
			ay2=ay2+size;
			ay3=ay3+size;
			ay4=ay4+size;
			ay5=ay5+size;
			ay6=ay6+size;
			ay7=ay7+size;
			ay8=ay8+size;
			ay9=ay9+size;
			ay10=ay10+size;
			ay11=ay11+size;
			ay12=ay12+size;
			ay13=ay13+size;
			ay14=ay14+size;
			ay15=ay15+size;
			ay16=ay16+size;
			ay17=ay17+size;
			ay18=ay18+size;
			ay19=ay19+size;
			ay20=ay20+size;
			ay21=ay21+size;
			ay22=ay22+size;
			ay23=ay23+size;
			ay24=ay24+size;
			ay25=ay25+size;
			ay26=ay26+size;
			ay27=ay27+size;
			ay28=ay28+size;
				cy=cy+size;
			zy1=zy1+size;
		}
	
	}
			if(flagc==0)
	{	
		if(cy1<330 && cy1<cy)
		{
		
			cy1=cy1+sizec;
			cy2=cy2+sizec;
			cy3=cy3+sizec;
			cy4=cy4+sizec;
			cy5=cy5+sizec;
			cy6=cy6+sizec;
			cy7=cy7+sizec;
			cy8=cy8+sizec;
			cy9=cy9+sizec;
			cy10=cy10+sizec;
			cy11=cy11+sizec;
			cy12=cy12+sizec;
			cy13=cy13+sizec;//wheel
			cy14=cy14+sizec;
			cy15=cy15+sizec;
			cy16=cy16+sizec;
			cy17=cy17+sizec;
			cy18=cy18+sizec;
			cy19=cy19+sizec;
			cy20=cy20+sizec;
			cy21=cy21+sizec;
			cy22=cy22+sizec;
			cy23=cy23+sizec;
			cy24=cy24+sizec;
			cy25=cy25+sizec;
			cy26=cy26+sizec;
			cy27=cy27+sizec;
			cy28=cy28+sizec;
			}
	}
	if(flagc==1)
	{
		if(cy1>270)
			flag3=1;
		if(cy1<=499 && cy1<cy)
		{	
			if(cy12>370)
				flag3=0;
					cy1=cy1+sizec;
			cy2=cy2+sizec;
			cy3=cy3+sizec;
			cy4=cy4+sizec;
			cy5=cy5+sizec;
			cy6=cy6+sizec;
			cy7=cy7+sizec;
			cy8=cy8+sizec;
			cy9=cy9+sizec;
			cy10=cy10+sizec;
			cy11=cy11+sizec;
			cy12=cy12+sizec;
			cy13=cy13+sizec;//wheel
			cy14=cy14+sizec;
			cy15=cy15+sizec;
			cy16=cy16+sizec;
			cy17=cy17+sizec;
			cy18=cy18+sizec;
			cy19=cy19+sizec;
			cy20=cy20+sizec;
			cy21=cy21+sizec;
			cy22=cy22+sizec;
			cy23=cy23+sizec;
			cy24=cy24+sizec;
			cy25=cy25+sizec;
			cy26=cy26+sizec;
			cy27=cy27+sizec;
			cy28=cy28+sizec;
		}
		
	else
	{	flagc=0;
		flag3=0;
		color1=1;
		cy1=-20;
		cy2=-20;
		cy3=-40;
		cy4=-40;
		cy5=-40;
		cy6=-40;
		cy7=-90;
		cy8=-90;
		cy9=-90;
		cy10=-90;
		cy11=-110;
		cy12=-110;	
		cy13=-25;//wheel
		cy14=-25;
		cy15=-38;
		cy16=-38;
		cy17=-25;
		cy18=-25;
		cy19=-38;
		cy20=-38;
		cy21=-95;
		cy22=-95;
		cy23=-108;
		cy24=-108;
		cy25=-95;
		cy26=-95;
		cy27=-108;
		cy28=-108;
		
	}
	}


	glutPostRedisplay();
}

void mouse(int btn, int state, int x, int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
				flagr=1;
				flag3=1;
	
	if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
				flagl=1;
				flag2=1;
				
}


void reshape (int w, int h)
{


	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w<=h)
		gluOrtho2D(0.0,500.0,0.0*(GLfloat)h/(GLfloat)w, 500.0*(GLfloat)h/(GLfloat)w);
	else
		gluOrtho2D(0.0*(GLfloat)w/(GLfloat)h, 500.0*(GLfloat)w/(GLfloat)h, 0.0,500.0);
	glMatrixMode(GL_MODELVIEW);

}

void init(void)
{
	glClearColor(0.1, 0.5, 0.1, 0.0);
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc,char **argv)
{
        glutInit(&argc,argv);
        glutInitWindowSize(500,500);
		glutInitWindowPosition(300,200);
		glutCreateWindow("Patrol Booth");
		init();
		glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
		glutDisplayFunc(display);
		glutMouseFunc(mouse);
		glutReshapeFunc(reshape);
        glutIdleFunc(mov);
        glutKeyboardFunc(key);
        glutMainLoop();

}

static void key(unsigned char key1, int x, int y)
{
	switch(key1)
	{
		case 'Q': 
		case 'q':
			exit(0);
				
	
			break;
		
		case 'r':
		case 'R':
				flagl=1;
				flag2=1;
					break;
	
		case 'l':
		case 'L':
				flagr=1;
				 flag3=1;
		    		break;
		case 'z':
		case 'Z':		
				size=size*2;
					break;
		case 'x':
		case 'X':
				size=size/2;
					break;
		case 'n':
		case 'N':	
				sizer=sizer*2;
					break;
		case 'm':
		case 'M':
				sizer=sizer/2;
					break;
		case 'v':
		case 'V':
				sizec=sizec*2;
					break;
		case 'b':
		case 'B':
				sizec=sizec/2;
					break;
		case '1':flaga=1;
				break;
		case '2':flagd=1;
			break;		
		case '0':flagc=1;
		 		break;		
   	}
}
	void welcome()
	{		
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(0.0,0.0,0.0);
	 		drawstring(150,400,0.0,"WELCOME to our PROJECT");
			glColor3f(0.0,1.0,1.0);
	 		drawstring1(100,300,0.0,"Mini Project created by:");
	 		glColor3f(0.0,0.0,1.0);
	 		drawstring(180,260,0.0,"Gururaj KL and Jagadish TD");
	 		glColor3f(1.0,1.0,0.0);
	 		drawstring2(300,20,0.0,"For Next Press:1");
			 		
		
	}
	
		void frontscreen()
	{
			 glClear(GL_COLOR_BUFFER_BIT);
		
		glColor3f(1,0.0,1);
	 		drawstring(130,470,0.0,"cgv");
	 		drawstring(190,470,0.0,"mini");
	 		drawstring(260,470,0.0,"project");
	 	glColor3f(1.0,0.5,0.5);
	 		drawstring(70,410,0.0,"[BORDER ");
	 		drawstring(200,410,0.0," PATROL");
	 		drawstring(350,410,0.0,"BOOTH]");
	 	glColor3f(1.0,1.0,1.0);
	 		drawstring1(10,350,0.0,"submitted");
	 		drawstring1(115,350,0.0,"by:");
	 	glColor3f(0.0,0.0,0.0);
	 		drawstring1(20,320,0.0,"Gururaj KL Jagadish TD");
	 	glColor3f(0.0,0.0,1.0);
	 		drawstring2(20,265,0.0,"Gururaj KL 1RR18CS050");
	 		drawstring2(20,290,0.0,"Jagadish TD 1RR18CS054");
	 	glColor3f(1.0,1.0,1.0);
	 		drawstring1(10,230,0.0,"Under the Guidance of");
	 	glColor3f(0.0,1.0,0.0);
	 		drawstring2(20,200,0.0,"Ass.Prof. Pooja");
	 	glColor3f(0.0,0.0,0.0);
	 		drawstring1(20,90,0.0,"Year:- 2021 ");
		glColor3f(1.0,0.0,0.0);
	 		drawstring1(300,90,0.0,"For Next press: 2");
	
		glFlush();
	}
	void color()
	{	
		glColor3f(0.0,0.0,1.0);
		if(color1==1)
			glColor3f(0.7,0.2,0.5);
	}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	if(flaga==0)
	{
		welcome();
	}
	else
	{
		
		if(flagd==0)
			frontscreen();
		else
		{
		
		glClearColor(0.0,0.6,0.0,1.0);
		
		glColor3f(0.658824,0.658824,0.658824);	
	    	glBegin(GL_POLYGON);
	    		glVertex2f(100,500);
	    		glVertex2f(400,500);
	    		glVertex2f(400,0);
	    		glVertex2f(100,0);
		glEnd();
		glColor3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(100,365);
				glVertex2f(110,365);
				glVertex2f(110,330);
				glVertex2f(100,330);
			glEnd();
		glColor3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(390,365);
				glVertex2f(400,365);
				glVertex2f(400,330);
				glVertex2f(390,330);
			glEnd();
			glColor3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(245,365);
				glVertex2f(260,365);
				glVertex2f(260,330);
				glVertex2f(245,330);
			glEnd();			
		glColor3f(0.5,0.5,1.0);
		glBegin(GL_QUADS);
				glVertex2f(bx+290,by1);
				glVertex2f(bx+340,by2);
				glVertex2f(bx+340,by3);
				glVertex2f(bx+290,by4);
			glEnd();
		glBegin(GL_QUADS);
				glVertex2f(bx+280,by5);
				glVertex2f(bx+350,by6);
				glVertex2f(bx+350,by7);
				glVertex2f(bx+280,by8);
			glEnd();
			glBegin(GL_QUADS);
				glVertex2f(bx+290,by9);
				glVertex2f(bx+340,by10);
				glVertex2f(bx+340,by11);
				glVertex2f(bx+290,by12);
			glEnd();
				glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(bx+285,by13);//rt cr tp lft wl
				glVertex2f(bx+290,by14);
				glVertex2f(bx+290,by15);
				glVertex2f(bx+285,by16);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(bx+340,by17);//rt cr tp rt wl
				glVertex2f(bx+345,by18);
				glVertex2f(bx+345,by19);
				glVertex2f(bx+340,by20);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(bx+285,by21);//rt cr btm lft wel
				glVertex2f(bx+290,by22);
				glVertex2f(bx+290,by23);
				glVertex2f(bx+285,by24);
			glEnd();
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(bx+340,by25);//rt cr btm rt wel
				glVertex2f(bx+345,by26);
				glVertex2f(bx+345,by27);
				glVertex2f(bx+340,by28);
			glEnd();
					//car name
				glColor3f(1.0,1.0,1.0);
				drawstring1(bx+300,zy2,0,"NANO");
		
			//left side car
			glColor3f(1.0,1.0,1.0);
			glBegin(GL_QUADS);
			
				glVertex2f(ax+140,ay1);
				glVertex2f(ax+190,ay2);
				glVertex2f(ax+190,ay3);
				glVertex2f(ax+140,ay4);
			glEnd();
			glBegin(GL_QUADS);
				glVertex2f(ax+130,ay5);
				glVertex2f(ax+200,ay6);
				glVertex2f(ax+200,ay7);
				glVertex2f(ax+130,ay8);
			glEnd();
			glBegin(GL_QUADS);
				glVertex2f(ax+140,ay9);
				glVertex2f(ax+190,ay10);
				glVertex2f(ax+190,ay11);
				glVertex2f(ax+140,ay12);
			glEnd();
			//left car name
				glColor3f(1.0,0.0,1.0);
				drawstring1(ax+155,zy1,0,"BMW");
	
		//wheel
			glBegin(GL_QUADS);
			glColor3f(0.0,0.0,0.0);
				glVertex2f(ax+135,ay13);//lft cr btm 
				glVertex2f(ax+140,ay14);//lt wel
				glVertex2f(ax+140,ay15);
				glVertex2f(ax+135,ay16);
			glEnd();   
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(ax+190,ay17);//lft cr btm rt wel
				glVertex2f(ax+195,ay18);
				glVertex2f(ax+195,ay19);
				glVertex2f(ax+190,ay20);
			glEnd();
		
	        glBegin(GL_QUADS);
	        	glColor3f(0.0,0.0,0.0);
				glVertex2f(ax+135,ay21);//left cr top 
				glVertex2f(ax+140,ay22);//lft wel
				glVertex2f(ax+140,ay23);
				glVertex2f(ax+135,ay24);
			glEnd();   
			glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
				glVertex2f(ax+190,ay25);//lft car top rt wel
				glVertex2f(ax+195,ay26);
				glVertex2f(ax+195,ay27);
				glVertex2f(ax+190,ay28);
			glEnd();
				// car3
		//color();
				
		color();
		glBegin(GL_QUADS);
		
			glVertex2f(ax+140,cy1);
			glVertex2f(ax+190,cy2);
			glVertex2f(ax+190,cy3);
			glVertex2f(ax+140,cy4);
		glEnd();
			glBegin(GL_QUADS);
			glVertex2f(ax+130,cy5);
			glVertex2f(ax+200,cy6);
			glVertex2f(ax+200,cy7);
			glVertex2f(ax+130,cy8);
		glEnd();
		glBegin(GL_QUADS);
			glVertex2f(ax+140,cy9);
			glVertex2f(ax+190,cy10);
			glVertex2f(ax+190,cy11);
			glVertex2f(ax+140,cy12);
		glEnd();
		//wheel
		glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.0);
			glVertex2f(ax+135,cy13);//lft cr btm 
			glVertex2f(ax+140,cy14);//lt wel
			glVertex2f(ax+140,cy15);
			glVertex2f(ax+135,cy16);
		glEnd();   
		glBegin(GL_QUADS);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(ax+190,cy17);//lft cr btm rt wel
			glVertex2f(ax+195,cy18);
			glVertex2f(ax+195,cy19);
			glVertex2f(ax+190,cy20);
		glEnd();
	
        glBegin(GL_QUADS);
        	glColor3f(0.0,0.0,0.0);
			glVertex2f(ax+135,cy21);//left cr top 
			glVertex2f(ax+140,cy22);//lft wel
			glVertex2f(ax+140,cy23);
			glVertex2f(ax+135,cy24);
		glEnd();
		glBegin(GL_QUADS);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(ax+190,cy25);//lft car top rt wel
			glVertex2f(ax+195,cy26);
			glVertex2f(ax+195,cy27);
			glVertex2f(ax+190,cy28);
		glEnd();
	
			// display instruction for left car
				
				glColor3f(0.0,0.0,0.0);
				drawstring1(ax+0,140,0,"Car Blue");
				drawstring1(ax+0,130,0,"instructions:");
		 		drawstring1(ax+0,120,0,"0:open barrier"); 
		 		drawstring1(ax+0,110,0,"v:speed up");
				drawstring1(ax+0,100,0,"b:speed down");
			//display instructions for car nano
				glColor3f(0.0,0.0,0.0);
				drawstring1(ax+0,60,0,"Car BMW");
				drawstring1(ax+0,50,0,"instructions:");
		 		drawstring1(ax+0,40,0,"l:open barrier"); 
		 		drawstring1(ax+0,30,0,"z:speed up");
				drawstring1(ax+0,20,0,"x:speed down");
			// display instruction for left car
				
				glColor3f(0.0,0.0,0.0);
				drawstring1(ax+390,60,0,"Car nano");
				drawstring1(ax+390,50,0,"instructions:");
		 		drawstring1(ax+390,40,0,"r:open barrier"); 
		 		drawstring1(ax+390,30,0,"n:speed up");
				drawstring1(ax+390,20,0,"m:speed down");
		
			if(flagl==0||flag2==0)
			{
			
		//BARRIER 1
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(260,355);
				glVertex2f(390,355);
				glVertex2f(390,345);
				glVertex2f(260,345);
			glEnd();
			glPointSize(20.0);
			glColor3f(1.0,0.0,0.0);
			glBegin(GL_POINTS);
			glVertex2f(420,345);
			glEnd();
			
			
	 					drawstring(437,340,0,"STOP");
	 					 	
		}
	     else
	     {
	     	glColor3f(0.0,1.5,0.0);
	     	glPointSize(20.0);
			
			glBegin(GL_POINTS);
			glVertex2f(420,345);
			glEnd();
	 					drawstring(450,340,0,"GO");
	     }
		
		//BARRIER 2
		
			if(flagr==0||flag3==0)
			{	
		glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glVertex2f(110,355);
				glVertex2f(245,355);
				glVertex2f(245,345);
				glVertex2f(110,345);
			glEnd();
			glPointSize(20.0);
			glColor3f(1.0,0.0,0.0);
			glBegin(GL_POINTS);
			glVertex2f(80,345);
			glEnd();
			drawstring(8,330,0,"STOP");
			}
			else
	     {
	     		glPointSize(20.0);
			glColor3f(0.0,1.5,0.0);
			glBegin(GL_POINTS);
			glVertex2f(80,345);
			glEnd();
	     		     	
	 					drawstring(10,330,0,"GO");
	     }	
	 					 	
		}
	 }
	   
	 	glFlush();  
}

