#include <GL/gluh.h>
#include "solarsystem.hpp"

#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

SolarSystem solarsystem;

void onDisplay(void)
{
	solarsystem.onDisplay();
}

void onUpdate(void)
{
	solarsystem.onUpdate();
}

void onKeyBoard(void)
{
	solarsystem.onKeyboard();
}

int main(int argc, char *argv[])
{
	glutInit(argc, argv);
	glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE);
	glutInitWindowPosition(WINDOW_X_POS, WINDOW_Y_POX);
	glutCreateWindow("SolarSystem at ShiYanLou");
	glutDisplayFunc(onDisplay);
	glutIdleFunc(onUpdate);
	glutKeyBoardFunc(onKeyboard);
	glutMainLoop();
	return 0;
}

