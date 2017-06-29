#ifndef ROOM_H
#define ROOM_H
//#include "main.h"
#include <QString>

class Room
{
    QString room_number;
    QString room_quality;
public:
    Room();
    Room(QString num, QString qual);
    void setRoomNumber(QString theString);
    void setRoomQuality(QString theString);
    QString getRoomQuality();
    QString getRoomNumber();
};

#endif // ROOM_H
