#ifndef __KEY_CUR_CONTROL_H__
#define __KEY_CUR_CONTROL_H__

#include <conio.h>
#include <windows.h>
#include "point.h"

void RemoveCursor(void);
Point GetCurrentCursorPos(void);
void SetCurrentCursorPos(int x, int y);

#endif