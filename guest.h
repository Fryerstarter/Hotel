#ifndef GUEST_H
#define GUEST_H
//#include "main.h"

class Guest
{
  string first_name, last_name;
  Reservation guest_reservation;
    
  public:
    Guest();
    Guest(string first, string last);
};

#endif // GUEST_H
