#ifndef SETUP_H
#define SETUP_H

#include <stdint.h>
#include <ncurses.h>
#include "panel.h"

#define SETUP_WIN_HEIGHT 10
#define SETUP_WIN_WIDTH  60

#define CONFIG_NAME "spmon.conf"

extern uint8_t numPanels;

void drawSetup(WINDOW* win);

void moveSetupCursorLR(bool left);

uint16_t getRefreshInterval();
PanelType* getPanelTypes();

uint8_t saveConfig();
uint8_t loadConfig();
void setInitialConfig();
void quitSetup();

#endif