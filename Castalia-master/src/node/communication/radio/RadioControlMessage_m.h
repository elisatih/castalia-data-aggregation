//
// Generated file, do not edit! Created by opp_msgc 4.5 from src/node/communication/radio/RadioControlMessage.msg.
//

#ifndef _RADIOCONTROLMESSAGE_M_H_
#define _RADIOCONTROLMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0405
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Enum generated from <tt>src/node/communication/radio/RadioControlMessage.msg</tt> by opp_msgc.
 * <pre>
 * enum RadioControlMessage_type {
 * 	CARRIER_SENSE_INTERRUPT = 1;
 * 	RADIO_BUFFER_FULL = 2;
 * }
 * </pre>
 */
enum RadioControlMessage_type {
    CARRIER_SENSE_INTERRUPT = 1,
    RADIO_BUFFER_FULL = 2
};

/**
 * Enum generated from <tt>src/node/communication/radio/RadioControlMessage.msg</tt> by opp_msgc.
 * <pre>
 * enum BasicState_type {
 * 	RX = 0;
 * 	TX = 1;
 * 	SLEEP = 2;
 * }
 * </pre>
 */
enum BasicState_type {
    RX = 0,
    TX = 1,
    SLEEP = 2
};

/**
 * Enum generated from <tt>src/node/communication/radio/RadioControlMessage.msg</tt> by opp_msgc.
 * <pre>
 * enum RadioControlCommand_type {
 * 	SET_STATE = 0;
 * 	SET_MODE = 1;
 * 	SET_TX_OUTPUT = 2;
 * 	SET_SLEEP_LEVEL = 3;
 * 	SET_CARRIER_FREQ = 4;
 * 	SET_CCA_THRESHOLD = 5;
 * 	SET_CS_INTERRUPT_ON = 6;
 * 	SET_CS_INTERRUPT_OFF = 7;
 * 	SET_ENCODING = 8;
 * 	SET_CHANNEL = 9;
 * }
 * </pre>
 */
enum RadioControlCommand_type {
    SET_STATE = 0,
    SET_MODE = 1,
    SET_TX_OUTPUT = 2,
    SET_SLEEP_LEVEL = 3,
    SET_CARRIER_FREQ = 4,
    SET_CCA_THRESHOLD = 5,
    SET_CS_INTERRUPT_ON = 6,
    SET_CS_INTERRUPT_OFF = 7,
    SET_ENCODING = 8,
    SET_CHANNEL = 9
};

/**
 * Class generated from <tt>src/node/communication/radio/RadioControlMessage.msg</tt> by opp_msgc.
 * <pre>
 * message RadioControlMessage {
 * 	int radioControlMessageKind enum (RadioControlMessage_type);
 * }
 * </pre>
 */
class RadioControlMessage : public ::cMessage
{
  protected:
    int radioControlMessageKind_var;

  private:
    void copy(const RadioControlMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RadioControlMessage&);

  public:
    RadioControlMessage(const char *name=NULL, int kind=0);
    RadioControlMessage(const RadioControlMessage& other);
    virtual ~RadioControlMessage();
    RadioControlMessage& operator=(const RadioControlMessage& other);
    virtual RadioControlMessage *dup() const {return new RadioControlMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getRadioControlMessageKind() const;
    virtual void setRadioControlMessageKind(int radioControlMessageKind);
};

inline void doPacking(cCommBuffer *b, RadioControlMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RadioControlMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/node/communication/radio/RadioControlMessage.msg</tt> by opp_msgc.
 * <pre>
 * message RadioControlCommand {
 * 	int radioControlCommandKind enum (RadioControlCommand_type);
 * 	int state enum (BasicState_type) = RX;	
 * 	double parameter = 0.0;	
 * 	string name = "";	
 * }
 * </pre>
 */
class RadioControlCommand : public ::cMessage
{
  protected:
    int radioControlCommandKind_var;
    int state_var;
    double parameter_var;
    opp_string name_var;

  private:
    void copy(const RadioControlCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RadioControlCommand&);

  public:
    RadioControlCommand(const char *name=NULL, int kind=0);
    RadioControlCommand(const RadioControlCommand& other);
    virtual ~RadioControlCommand();
    RadioControlCommand& operator=(const RadioControlCommand& other);
    virtual RadioControlCommand *dup() const {return new RadioControlCommand(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getRadioControlCommandKind() const;
    virtual void setRadioControlCommandKind(int radioControlCommandKind);
    virtual int getState() const;
    virtual void setState(int state);
    virtual double getParameter() const;
    virtual void setParameter(double parameter);
    virtual const char * getName() const;
    virtual void setName(const char * name);
};

inline void doPacking(cCommBuffer *b, RadioControlCommand& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RadioControlCommand& obj) {obj.parsimUnpack(b);}


#endif // _RADIOCONTROLMESSAGE_M_H_
