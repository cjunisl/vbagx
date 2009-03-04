/****************************************************************************
 * Visual Boy Advance GX
 *
 * Tantric September 2008
 *
 * input.h
 *
 * Wii/Gamecube controller management
 ***************************************************************************/

#ifndef _INPUT_H_
#define _INPUT_H_

#include <gccore.h>

#define PI 					3.14159265f
#define PADCAL				50
#define MAXJP 				10

#define VBA_BUTTON_A		1
#define VBA_BUTTON_B		2
#define VBA_BUTTON_SELECT	4
#define VBA_BUTTON_START	8
#define VBA_RIGHT			16
#define VBA_LEFT			32
#define VBA_UP				64
#define VBA_DOWN			128
#define VBA_BUTTON_R		256
#define VBA_BUTTON_L		512
#define VBA_SPEED			1024
#define VBA_CAPTURE			2048

extern int rumbleRequest[4];

extern unsigned int gcpadmap[];
extern unsigned int wmpadmap[];
extern unsigned int ccpadmap[];
extern unsigned int ncpadmap[];
extern unsigned int kbpadmap[];

void ResetControls();
void ShutoffRumble();
void DoRumble(int i);
s8 WPAD_Stick(u8 chan,u8 right, int axis);
u32 GetJoy(int which);

#endif
