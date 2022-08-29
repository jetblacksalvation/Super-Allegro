#pragma once
#include "al_start.h" // al_start -> al_structs -> al_main
//struct carries x,y values of constructs, the player is set as the origin 
struct point {
	float x, y;
}player = { 500,500 };
struct point object = { 750,750 };

struct point projection;
//distance formula 
float distance(struct point p1, struct point p2) {
	return sqrtf(
		powf(p1.x - p2.x, 2) + powf(p1.y - p2.y, 2)
	);

}
//function is not necessary in allegro projects 
struct point temp_ret(struct point p1, struct point p2) {
	struct point temp;
	//define pangle
	//
	dist = distance(p1, p2);
	p_angle = atan2(
		(p2.y - p1.y), (p2.x - p1.x)
	);
	if (p2.x > p1.x) {
		

		p_angle = PI*2;
		temp.x = p1.x + (cosf( angle) *dist);
		temp.y = p1.y + (sinf( angle) *dist);
		return temp;
	 }


	temp.x = p1.x + (cosf(angle) * dist);
	temp.y = p1.y + (sinf(angle) * dist);
	return temp;
};
//colors
ALLEGRO_COLOR white = { 255.f,255.f,255.f,0.f };
ALLEGRO_COLOR blue = { 0.f,0.f,255.f,0.f };
ALLEGRO_COLOR green = { 0.f,255.f,0.f,0.f };
ALLEGRO_COLOR red = { 255.f,0.f,0.f,0.f };