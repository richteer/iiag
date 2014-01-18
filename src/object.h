//
// object.h
//

#ifndef OBJECT_H
#define OBJECT_H

#include "form.h"

#define FL_NOFREE 1

struct zone;
struct inventory;

typedef struct object{//generic object
	unsigned flags;//boolean statements
	int x, y, i;//x for x coordinate y for y coordinate and i for index of inventory
	int health;//health of object
	struct zone * z;//for the zone the object is in
	form * f;//the form of the object
	struct inventory * inv;//inventory of the object
}object;

object * obj_new(form *);//pointer to a new object of a specific form pointer
void obj_free(object *);
int  obj_move(object *, int, int);
void obj_tele(object *, int, int, struct zone *);

#endif
