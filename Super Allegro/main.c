#include "al_func.h"
/*
*			al_func will be end of include path, make sure to call it in main
	
	OVERVIEW -- Dont create a function that holds/is the game loop	
	if possible simplify allegro



	INCLUDE PATH -- 
	MAIN get
	al_start passed to al_structs passed to al_func passed to main

	PURPOSE --
	al_start - Initializes allegro variables with m_setup function. All variables are set as globals

	al_structs - Initializes and Defines position structs
	initializes color structs

	al_func - Defines essential functions 

	TODO -- create a draw queue, update queue, and get physics working right 

*/
_Bool keys[6] = { false,false,false,false,false,false };
int main(void) {
	m_setup();
	//sets up allegro, automatically sets up keyboard
	while (_exit == false) {
		//input(keys);
		//wait for event

		dist = distance(player, object);
		projection = temp_ret(player, object);//assign the values of shape to projection 

		//drawing section 
		if (al_is_event_queue_empty(event_queue)) {
			al_clear_to_color(al_map_rgb(0, 0, 0));//clears screen

			al_draw_filled_rectangle(projection.x, projection.y, 100 + projection.x, 100 + projection.y, red);
			//makes a square with origin of projcection, with width and height of 100,100

			al_flip_display();//actuall draws stuff

		}


	}

	d_setup();
}

