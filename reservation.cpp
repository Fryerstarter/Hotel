#include "main.h"

Reservation::Reservation()
{  

}

Reservation::Reservation(Room *room, Guest *guest)
{
	
	the_room = room;
	the_guest = guest;
	
}

void Reservation::setReservationNumber(int res)
{
	reservation_number = res;
	
}

int Reservation::getReservationNumber()
{
	return reservation_number;
}


