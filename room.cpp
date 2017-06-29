#include "room.h"

Room::Room()
{

};

Room::Room(QString num, QString qual)
{
    room_number = num;
    room_quality = qual;

}

void Room::setRoomNumber(QString theString){
    this->room_number = theString;
}

void Room::setRoomQuality(QString theString){
    this->room_quality = theString;
}

QString Room::getRoomQuality()
{
    return room_quality;
}

QString Room::getRoomNumber()
{
    return room_number;
}
