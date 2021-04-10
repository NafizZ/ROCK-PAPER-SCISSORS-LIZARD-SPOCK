# include "iGraphics.h"


#define screenWidth 1000
#define screenHight 729


int r1, r2;
bool musicOn = true;

/* 
	function iDraw() is called again and again by the system.
*/

int x = 0, y = 0;
int r = 255, g = 255, b = 255;
int flag = 0;


void iDraw()
{
	//place your drawing codes here	
	iClear();
		
	iShowBMP(60, 52, "image\\home.bmp");

	if (flag == 1){
		iShowBMP(220, 110, "image\\youWin.bmp");
		if (r1 == 1){
			iShowBMP(650, 370, "image\\rock.bmp");
		}
		if (r1 == 2){
			iShowBMP(650, 370, "image\\paper.bmp");
		}
		if (r1 == 3){
			iShowBMP(650, 370, "image\\Scissors.bmp");
		}
		if (r1 == 4){
			iShowBMP(650, 370, "image\\lizard.bmp");
		}
		if (r1 == 5){
			iShowBMP(650, 370, "image\\Spocks.bmp");
		}
		if (r2 == 1){
			iShowBMP(75, 367, "image\\rock.bmp");
		}
		if (r2 == 2){
			iShowBMP(75, 367, "image\\paper.bmp");
		}
		if (r2 == 3){
			iShowBMP(75, 367, "image\\Scissors.bmp");
		}
		if (r2 == 4){
			iShowBMP(75, 367, "image\\lizard.bmp");
		}
		if (r2 == 5){
			iShowBMP(75, 367, "image\\Spocks.bmp");
		}
	}
	if (flag == 2){
		iShowBMP(220, 110, "image\\youLose.bmp");
		if (r1 == 1){
			iShowBMP(650, 370, "image\\rock.bmp");
		}
		if (r1 == 2){
			iShowBMP(650, 370, "image\\paper.bmp");
		}
		if (r1 == 3){
			iShowBMP(650, 370, "image\\Scissors.bmp");
		}
		if (r1 == 4){
			iShowBMP(650, 370, "image\\lizard.bmp");
		}
		if (r1 == 5){
			iShowBMP(650, 370, "image\\Spocks.bmp");
		}
		if (r2 == 1){
			iShowBMP(75, 367, "image\\rock.bmp");
		}
		if (r2 == 2){
			iShowBMP(75, 367, "image\\paper.bmp");
		}
		if (r2 == 3){
			iShowBMP(75, 367, "image\\Scissors.bmp");
		}
		if (r2 == 4){
			iShowBMP(75, 367, "image\\lizard.bmp");
		}
		if (r2 == 5){
			iShowBMP(75, 367, "image\\Spocks.bmp");
		}
	}
	if (flag == 3){
		iShowBMP(220, 110, "image\\draw.bmp");
		if (r1 == 1){
			iShowBMP(650, 370, "image\\rock.bmp");
		}
		if (r1 == 2){
			iShowBMP(650, 370, "image\\paper.bmp");
		}
		if (r1 == 3){
			iShowBMP(650, 370, "image\\Scissors.bmp");
		}
		if (r1 == 4){
			iShowBMP(650, 370, "image\\lizard.bmp");
		}
		if (r1 == 5){
			iShowBMP(650, 370, "image\\Spocks.bmp");
		}
		if (r2 == 1){
			iShowBMP(75, 370, "image\\rock.bmp");
		}
		if (r2 == 2){
			iShowBMP(75, 367, "image\\paper.bmp");
		}
		if (r2 == 3){
			iShowBMP(75, 367, "image\\Scissors.bmp");
		}
		if (r2 == 4){
			iShowBMP(75, 367, "image\\lizard.bmp");
		}
		if (r2 == 5){
			iShowBMP(75, 367, "image\\Spocks.bmp");
		}
	}

	
}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if (key == '1')
	{
		r2 = 1;
		if (r2 == r1){
			flag = 3;
		}
		if (r2 == 1 && (r1 == 2 || r1 == 5)){
			flag = 2;
		}
		if (r2 == 1 && (r1 == 3 || r1 == 4)){
			flag = 1;
		}
	}
	if (key == '2')
	{
	     r2 = 2;
		if (r2 == r1){
			flag = 3;
		}
		if (r2 == 2 && (r1 == 3 || r1 == 4)){
			flag = 2;
		}
		if (r2 == 2 && (r1 == 1 || r1 == 5)){
			flag = 1;
		}
	}
	if (key == '3')
	{
		 r2 = 3;
		if (r2 == r1){
			flag = 3;
		}
		if (r2 == 3 && (r1 == 1 || r1 == 5)){
			flag = 2;
		}
		if (r2 == 3 && (r1 == 2 || r1 == 4)){
			flag = 1;
		}
	}
	if (key == '4')
	{
		r2 = 4;
		if (r2 == r1){
			flag = 3;
		}
		if (r2 == 4 && (r1 == 1 || r1 == 3)){
			flag = 2;
		}
		if (r2 == 4 && (r1 == 2 || r1 == 5)){
			flag = 1;
		}
	}
	if (key == '5')
	{
	    r2 = 5;
		if (r2 == r1){
			flag = 3;
		}
		if (r2 == 5 && (r1 == 2 || r1 == 4)){
			flag = 2;
		}
		if (r2 == 5 && (r1 == 1 || r1 == 3)){
			flag = 1;
		}
	}
	
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	if (key == GLUT_KEY_F1)
	{
		
		if (musicOn){
			musicOn = false;
			PlaySound(0, 0, 0);
		}
		else{
			musicOn = true;
			PlaySound("music\\The_Big_Bang_Theory.wav", NULL, SND_ASYNC);
		}
	}
	//place your codes for other keys here
}

int main()
{
	if (musicOn)
		PlaySound("music\\The_Big_Bang_Theory.wav", NULL, SND_ASYNC);
	


	srand(time(NULL));
	r1 = (rand() % 5) + 1;

	//place your own initialization codes here. 
	iInitialize(screenWidth, screenHight, "iGraphics 1");

	return 0;
}	