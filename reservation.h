#ifndef RESERVATION_H
#define RESERVATION_H
//#include "main.h"

class Reservation
{
	int reservation_number;
	Room *the_room;
	Guest *the_guest;
	
public:
   Reservation();
   Reservation(Room *room, Guest *guest);
   void setReservationNumber(int res);
   int getReservationNumber();
};

#endif // RESERVATION_H
