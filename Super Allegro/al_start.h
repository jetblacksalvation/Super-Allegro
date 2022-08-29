#pragma once
/*
* GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS *
* GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS * GLOBALS *
*/
#include <allegro5/allegro.h>
#include<allegro5\allegro_primitives.h>
#include<allegro5/allegro_image.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265359

ALLEGRO_DISPLAY* display;
ALLEGRO_EVENT_QUEUE* event_queue;
ALLEGRO_TIMER* timer;
ALLEGRO_TRANSFORM camera_transform;
ALLEGRO_STATE previous_state;

//calculation variables


float dist;//distance var
float angle = 0;//angle of player
float p_angle = 0;
void m_setup() {
	//initialize stuff
	al_init();
	al_install_keyboard();
	al_init_primitives_addon();
	al_init_image_addon();

	//set up game screen, event queue, and timer
	display = al_create_display(1000, 1000);
	event_queue = al_create_event_queue();
	timer = al_create_timer(1.0 / 30.0);
	//register stuff
	al_start_timer(timer);
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_keyboard_event_source());

	al_store_state(&previous_state, ALLEGRO_STATE_TRANSFORM);
	
};
void d_setup() {
	al_uninstall_keyboard();
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
	exit(0);
}
AL_FUNC(void,screen, );
