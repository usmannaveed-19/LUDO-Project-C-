#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
//#include "Board.h"
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) 
{
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


/*
 * Main Canvas drawing function.
 * */
//Board *b;
void GameDisplay()/**/
{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Fire Gun
	//DrawSquare( 400 , 20 ,40,colors[RED]); 
	//Mushroom
	//DrawSquare( 250 , 250 ,20,colors[GREEN]); 
	//Display Score
	//DrawString( 50, 800, "Score=0", colors[MISTY_ROSE]);
	//Spider
	//DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[MISTY_ROSE] ); 
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	//DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );	
	
	//DrawCircle(50,670,10,colors[RED]);
	//DrawCircle(70,670,10,colors[RED]);
	//DrawCircle(90,670,10,colors[RED]);

    //// 4 main squares
	DrawSquare( 0 , 0 ,364,colors[RED]); 
	DrawSquare( 0 , 549 ,364,colors[BLUE]); 
	DrawSquare( 549, 549 ,364,colors[FOREST_GREEN]);
	DrawSquare( 549 , 0 ,364,colors[YELLOW]);

    //// small squares Red PLayer
	DrawSquare( 366 , 0 ,59,colors[WHITE]); 
	DrawSquare( 427 , 0 ,59,colors[WHITE]); 
	DrawSquare( 488 , 0 ,59,colors[WHITE]); 

	DrawSquare( 366 , 61 ,59,colors[RED]);
	DrawSquare( 427 , 61 ,59,colors[RED]);
	DrawSquare( 488 , 61 ,59,colors[WHITE]);

	DrawSquare( 366 , 122 ,59,colors[WHITE]);
	DrawSquare( 427 , 122 ,59,colors[RED]);
	DrawSquare( 488 , 122 ,59,colors[RED]);

	DrawSquare( 366 , 183 ,59,colors[WHITE]);
	DrawSquare( 427 , 183 ,59,colors[RED]);
	DrawSquare( 488 , 183 ,59,colors[WHITE]);

	DrawSquare( 366 , 244 ,59,colors[WHITE]);
	DrawSquare( 427 , 244 ,59,colors[RED]);
	DrawSquare( 488 , 244 ,59,colors[WHITE]);

	DrawSquare( 366 , 305 ,59,colors[WHITE]);
	DrawSquare( 427 , 305 ,59,colors[RED]);
	DrawSquare( 488 , 305 ,59,colors[WHITE]);
    
	//// small squares Blue Player
	DrawSquare( 0 , 366 ,59,colors[WHITE]);
	DrawSquare( 0 , 427 ,59,colors[WHITE]);
	DrawSquare( 0 , 488 ,59,colors[WHITE]);

	DrawSquare( 61 , 366 ,59,colors[BLUE]);
	DrawSquare( 61 , 427 ,59,colors[BLUE]);
	DrawSquare( 61 , 488 ,59,colors[WHITE]);

	DrawSquare( 122 , 366 ,59,colors[WHITE]);
	DrawSquare( 122 , 427 ,59,colors[BLUE]);
	DrawSquare( 122 , 488 ,59,colors[BLUE]);

	DrawSquare( 183 , 366 ,59,colors[WHITE]);
	DrawSquare( 183 , 427 ,59,colors[BLUE]);
	DrawSquare( 183 , 488 ,59,colors[WHITE]);

	DrawSquare( 244 , 366 ,59,colors[WHITE]);
	DrawSquare( 244 , 427 ,59,colors[BLUE]);
	DrawSquare( 244 , 488 ,59,colors[WHITE]);

	DrawSquare( 305 , 366 ,59,colors[WHITE]);
	DrawSquare( 305 , 427 ,59,colors[BLUE]);
	DrawSquare( 305 , 488 ,59,colors[WHITE]);

	//// small squares for Green Player
	DrawSquare( 366 , 549 ,59,colors[WHITE]);
	DrawSquare( 427 , 549 ,59,colors[FOREST_GREEN]);
	DrawSquare( 488 , 549 ,59,colors[WHITE]);

	DrawSquare( 366 , 610 ,59,colors[WHITE]);
	DrawSquare( 427 , 610 ,59,colors[FOREST_GREEN]);
	DrawSquare( 488 , 610 ,59,colors[WHITE]);

	DrawSquare( 366 , 671 ,59,colors[WHITE]);
	DrawSquare( 427 , 671 ,59,colors[FOREST_GREEN]);
	DrawSquare( 488 , 671 ,59,colors[WHITE]);

	DrawSquare( 366 , 732 ,59,colors[FOREST_GREEN]);
	DrawSquare( 427 , 732 ,59,colors[FOREST_GREEN]);
	DrawSquare( 488 , 732 ,59,colors[WHITE]);

	DrawSquare( 366 , 793 ,59,colors[WHITE]);
	DrawSquare( 427 , 793 ,59,colors[FOREST_GREEN]);
	DrawSquare( 488 , 793 ,59,colors[FOREST_GREEN]);

	DrawSquare( 366 , 854 ,59,colors[WHITE]);
	DrawSquare( 427 , 854 ,59,colors[WHITE]);
	DrawSquare( 488 , 854 ,59,colors[WHITE]);

	//// small squares for Yellow Player
	DrawSquare( 549 , 366 ,59,colors[WHITE]);
	DrawSquare( 549 , 427 ,59,colors[YELLOW]);
	DrawSquare( 549 , 488 ,59,colors[WHITE]);

	DrawSquare( 610 , 366 ,59,colors[WHITE]);
	DrawSquare( 610 , 427 ,59,colors[YELLOW]);
	DrawSquare( 610 , 488 ,59,colors[WHITE]);

	DrawSquare( 671 , 366 ,59,colors[WHITE]);
	DrawSquare( 671 , 427 ,59,colors[YELLOW]);
	DrawSquare( 671 , 488 ,59,colors[WHITE]);

	DrawSquare( 732 , 366 ,59,colors[WHITE]);
	DrawSquare( 732 , 427 ,59,colors[YELLOW]);
	DrawSquare( 732 , 488 ,59,colors[YELLOW]);

	DrawSquare( 793 , 427 ,59,colors[YELLOW]);
	DrawSquare( 793 , 488 ,59,colors[WHITE]);

	DrawSquare( 854 , 366 ,59,colors[WHITE]);
	DrawSquare( 854 , 427 ,59,colors[WHITE]);
	DrawSquare( 854 , 488 ,59,colors[WHITE]);

    // drawing triangles
    DrawTriangle( 365, 365 , 548 , 365 , 454 , 454, colors[RED]);
	DrawTriangle( 365, 548 , 365 , 365 , 454 , 454, colors[BLUE]);
	DrawTriangle( 365, 548 , 548 , 548 , 454 , 454, colors[FOREST_GREEN]);
	DrawTriangle( 548, 548 , 548 , 365 , 454 , 454, colors[YELLOW]);
    
	glutSwapBuffers(); // do not modify this line..

}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {

	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	//b = new Board(60, 60); // create a new board object to use in the Display Function ...

	int width = 1200, height = 1000; // i have set my window size to be 800 x 600
	//b->InitalizeBoard(width, height);
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("PF Project"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
