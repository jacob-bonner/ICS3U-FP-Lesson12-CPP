// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: December 2019
// Splashscreen for the GameBoy

#include <stdio.h>
#include <gb/gb.h>
#include "menu_data.c"
#include "menu_map.c"

void main() {
    // Splash screen on the GameBoy

    set_bkg_data(0, 39, menu_data);
    set_bkg_tiles(0, 0, 20, 18, menu_map);

    SHOW_BKG;
    DISPLAY_ON;

    waitpad(J_START);

    printf("Start of my Game");
}
