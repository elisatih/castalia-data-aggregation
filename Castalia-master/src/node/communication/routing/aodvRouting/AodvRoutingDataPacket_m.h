//
// Generated file, do not edit! Created by opp_msgc 4.5 from src/node/communication/routing/aodvRouting/AodvRoutingDataPacket.msg.
//

#ifndef _AODVROUTINGDATAPACKET_M_H_
#define _AODVROUTINGDATAPACKET_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0405
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "PacketId_m.h"
// }}



/**
 * Class generated from <tt>src/node/communication/routing/aodvRouting/AodvRoutingDataPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet AodvDataPacket extends PacketId {
 * 	string destinationAodv;
 * }
 * </pre>
 */
class AodvDataPacket : public ::PacketId
{
  protected:
    opp_string destinationAodv_var;

  private:
    void copy(const AodvDataPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AodvDataPacket&);

  public:
    AodvDataPacket(const char *name=NULL, int kind=0);
    AodvDataPacket(const AodvDataPacket& other);
    virtual ~AodvDataPacket();
    AodvDataPacket& operator=(const AodvDataPacket& other);
    virtual AodvDataPacket *dup() const {return new AodvDataPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getDestinationAodv() const;
    virtual void setDestinationAodv(const char * destinationAodv);
};

inline void doPacking(cCommBuffer *b, AodvDataPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AodvDataPacket& obj) {obj.parsimUnpack(b);}


#endif // _AODVROUTINGDATAPACKET_M_H_
