#include <NativeEthernet.h>
#define APPLEMIDI_INITIATOR
#include <AppleMIDI.h>
#include <Bounce2.h>

byte mac[] = {};
//byte mac[] = teensyMAC
byte ip[] = {xxx, xxx, xxx, xxx};
byte dns[] = {};
byte gateway[] = {};
byte subnet[] = {};

unsigned long t1 = millis();
int8_t isConnected = 0;
//IntervalTimer connectedTimer;

APPLEMIDI_CREATE_DEFAULTSESSION_INSTANCE();

//void OnAppleMidiException(const APPLEMIDI_NAMESPACE::ssrc_t&, const APPLEMIDI_NAMESPACE::Exception&, const int32_t);
//APPLEMIDI_CREATE_DEFAULTSESSION_INSTANCE(); 

int led = 13;
int ledG = 36;
int ledB = 37;
int ledState = LOW;


Bounce push_button_1 = Bounce(); 
Bounce push_button_2 = Bounce();
Bounce push_button_3 = Bounce();
Bounce push_button_4 = Bounce();
Bounce push_button_5 = Bounce();
Bounce push_button_6 = Bounce();
Bounce push_button_7 = Bounce();
Bounce push_button_8 = Bounce();
Bounce push_button_9 = Bounce();
Bounce push_button_10 = Bounce();
Bounce push_button_11 = Bounce();
Bounce push_button_12 = Bounce();
Bounce push_button_13 = Bounce();
Bounce push_button_14 = Bounce();
Bounce push_button_15 = Bounce();
Bounce push_button_16 = Bounce();
Bounce push_button_17 = Bounce();
Bounce push_button_18 = Bounce();
Bounce push_button_19 = Bounce();
Bounce push_button_20 = Bounce();
Bounce push_button_21 = Bounce();
Bounce push_button_22 = Bounce();
Bounce push_button_23 = Bounce();
Bounce push_button_24 = Bounce();
Bounce push_button_25 = Bounce();
Bounce push_button_26 = Bounce();
Bounce push_button_27 = Bounce();


int push_button_pin_1 = 3; 
int push_button_pin_2 = 4;
int push_button_pin_3 = 5;
int push_button_pin_4 = 6;
int push_button_pin_5 = 7;
int push_button_pin_6 = 8;
int push_button_pin_7 = 9;
int push_button_pin_8 = 10;
int push_button_pin_9 = 11;
int push_button_pin_10 = 12;
int push_button_pin_11 = 14;
int push_button_pin_12 = 15;
int push_button_pin_13 = 16;
int push_button_pin_14 = 17;
int push_button_pin_15 = 18;
int push_button_pin_16 = 19;
int push_button_pin_17 = 20;
int push_button_pin_18 = 21;
int push_button_pin_19 = 22;
int push_button_pin_20 = 23;
int push_button_pin_21 = 24;
int push_button_pin_22 = 25;
int push_button_pin_23 = 26;
int push_button_pin_24 = 27;
int push_button_pin_25 = 28;
int push_button_pin_26 = 29;
int push_button_pin_27 = 30;
int debounce_time = 5; 
elapsedMillis ledOnMillis;

void setup()

{

  



  pinMode(push_button_pin_1, INPUT_PULLUP); 
  pinMode(push_button_pin_2, INPUT_PULLUP);
  pinMode(push_button_pin_3, INPUT_PULLUP);
  pinMode(push_button_pin_4, INPUT_PULLUP);
  pinMode(push_button_pin_5, INPUT_PULLUP);
  pinMode(push_button_pin_6, INPUT_PULLUP);
  pinMode(push_button_pin_7, INPUT_PULLUP);
  pinMode(push_button_pin_8, INPUT_PULLUP);
  pinMode(push_button_pin_9, INPUT_PULLUP);
  pinMode(push_button_pin_10, INPUT_PULLUP);
  pinMode(push_button_pin_11, INPUT_PULLUP);
  pinMode(push_button_pin_12, INPUT_PULLUP);
  pinMode(push_button_pin_13, INPUT_PULLUP);
  pinMode(push_button_pin_14, INPUT_PULLUP);
  pinMode(push_button_pin_15, INPUT_PULLUP);
  pinMode(push_button_pin_16, INPUT_PULLUP);
  pinMode(push_button_pin_17, INPUT_PULLUP);
  pinMode(push_button_pin_18, INPUT_PULLUP);
  pinMode(push_button_pin_19, INPUT_PULLUP);
  pinMode(push_button_pin_20, INPUT_PULLUP);
  pinMode(push_button_pin_21, INPUT_PULLUP);
  pinMode(push_button_pin_22, INPUT_PULLUP);
  pinMode(push_button_pin_23, INPUT_PULLUP);
  pinMode(push_button_pin_24, INPUT_PULLUP);
  pinMode(push_button_pin_25, INPUT_PULLUP);
  pinMode(push_button_pin_26, INPUT_PULLUP);
  pinMode(push_button_pin_27, INPUT_PULLUP);
  pinMode(13,OUTPUT); //LED
  pinMode(36,OUTPUT); //LED green
  pinMode(37,OUTPUT); //LED blue
  
  push_button_1.attach(push_button_pin_1); 
  push_button_1.interval(debounce_time);
  
  push_button_2.attach(push_button_pin_2); 
  push_button_2.interval(debounce_time); 

  push_button_3.attach(push_button_pin_3); 
  push_button_3.interval(debounce_time); 

  push_button_4.attach(push_button_pin_4); 
  push_button_4.interval(debounce_time); 
  
  push_button_5.attach(push_button_pin_5); 
  push_button_5.interval(debounce_time); 
  
  push_button_6.attach(push_button_pin_6); 
  push_button_6.interval(debounce_time); 
  
  push_button_7.attach(push_button_pin_7); 
  push_button_7.interval(debounce_time); 
  
  push_button_8.attach(push_button_pin_8); 
  push_button_8.interval(debounce_time); 
  
  push_button_9.attach(push_button_pin_9); 
  push_button_9.interval(debounce_time); 
  
  push_button_10.attach(push_button_pin_10); 
  push_button_10.interval(debounce_time); 
  
  push_button_11.attach(push_button_pin_11); 
  push_button_11.interval(debounce_time); 
  
  push_button_12.attach(push_button_pin_12); 
  push_button_12.interval(debounce_time); 
  
  push_button_13.attach(push_button_pin_13); 
  push_button_13.interval(debounce_time); 
  
  push_button_14.attach(push_button_pin_14); 
  push_button_14.interval(debounce_time); 
  
  push_button_15.attach(push_button_pin_15); 
  push_button_15.interval(debounce_time); 
  
  push_button_16.attach(push_button_pin_16); 
  push_button_16.interval(debounce_time); 
  
  push_button_17.attach(push_button_pin_17); 
  push_button_17.interval(debounce_time); 
  
  push_button_18.attach(push_button_pin_18); 
  push_button_18.interval(debounce_time);

  push_button_19.attach(push_button_pin_19); 
  push_button_19.interval(debounce_time); 
  
  push_button_20.attach(push_button_pin_20); 
  push_button_20.interval(debounce_time); 
  
  push_button_21.attach(push_button_pin_21); 
  push_button_21.interval(debounce_time); 
  
  push_button_22.attach(push_button_pin_22); 
  push_button_22.interval(debounce_time); 
  
  push_button_23.attach(push_button_pin_23); 
  push_button_23.interval(debounce_time); 
  
  push_button_24.attach(push_button_pin_24); 
  push_button_24.interval(debounce_time); 
  
  push_button_25.attach(push_button_pin_25); 
  push_button_25.interval(debounce_time); 
  
  push_button_26.attach(push_button_pin_26); 
  push_button_26.interval(debounce_time); 
  
  push_button_27.attach(push_button_pin_27); 
  push_button_27.interval(debounce_time); 

 /* void blinkLED() {
  if (ledState == LOW) {
    ledState = HIGH;
  //  blinkCount = blinkCount + 1;  // increase when LED turns on
  } else {
    ledState = LOW;
  }
  digitalWrite(led2, ledState);
  */
  
     digitalWriteFast(13, HIGH); // LED on
    delay(500);
    digitalWriteFast(13, LOW);
    delay(500);
    digitalWriteFast(13, HIGH);

  Ethernet.begin(mac,ip,dns,gateway,subnet);
   
   if (Ethernet.linkStatus() == Unknown) {
    digitalWriteFast(13, HIGH);
  }
  else if (Ethernet.linkStatus() == LinkON) {
    digitalWriteFast(13, LOW);
    analogWrite (ledB, 20);
  }
  else if (Ethernet.linkStatus() == LinkOFF) {
    digitalWriteFast(13, HIGH);
  }
  

  IPAddress remote(10, 3, 31, 10);
 // AppleMIDI.sendInvite(remote, DEFAULT_CONTROL_PORT); // port is 5004 by default
 AppleMIDI.sendInvite(remote, 5004); // port is 5004 by default

  AppleMIDI.setHandleConnected([](const APPLEMIDI_NAMESPACE::ssrc_t & ssrc, const char* name) {
    isConnected++;
    //digitalWriteFast (led2, HIGH); // LED on;
    analogWrite (ledB, LOW); // LED off;
    analogWrite (ledG, 20); // LED on;
  });
  

  MIDI.begin(MIDI_CHANNEL_OMNI); // listens on channel 1
}


void loop()
{



//if (client.connect(remote)) {
  
  // Listen to incoming notes
MIDI.read();

  push_button_1.update(); 
  push_button_2.update();
  push_button_3.update();
  push_button_4.update();
  push_button_5.update();
  push_button_6.update();
  push_button_7.update();
  push_button_8.update();
  push_button_9.update();
  push_button_10.update();
  push_button_11.update();
  push_button_12.update();
  push_button_13.update();
  push_button_14.update();
  push_button_15.update();
  push_button_16.update();
  push_button_17.update();
  push_button_18.update();
  push_button_19.update();
  push_button_20.update();
  push_button_21.update();
  push_button_22.update();
  push_button_23.update();
  push_button_24.update();
  push_button_25.update();
  push_button_26.update();
  push_button_27.update();

  if(push_button_1.fell() == true) {
    MIDI.sendNoteOn(1, 127, 1); // send note on
    digitalWrite(led, HIGH);
    
  }

  if(push_button_1.rose() == true) {
    MIDI.sendNoteOn(1, 0, 1); // send note off
    digitalWrite(led, LOW);
  }

  if(push_button_2.fell() == true) {
    MIDI.sendNoteOn(2, 127, 1);
    digitalWrite(led, HIGH);
    // send note on
  }

  if(push_button_2.rose() == true) {
    MIDI.sendNoteOn(2, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_3.fell() == true) {
    MIDI.sendNoteOn(3, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_3.rose() == true) {
    MIDI.sendNoteOn(3, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_4.fell() == true) {
    MIDI.sendNoteOn(4, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_4.rose() == true) {
    MIDI.sendNoteOn(4, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_5.fell() == true) {
    MIDI.sendNoteOn(5, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_5.rose() == true) {
    MIDI.sendNoteOn(5, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_6.fell() == true) {
    MIDI.sendNoteOn(6, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_6.rose() == true) {
    MIDI.sendNoteOn(6, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_7.fell() == true) {
    MIDI.sendNoteOn(7, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_7.rose() == true) {
    MIDI.sendNoteOn(7, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_8.fell() == true) {
    MIDI.sendNoteOn(8, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_8.rose() == true) {
    MIDI.sendNoteOn(8, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_9.fell() == true) {
    MIDI.sendNoteOn(9, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_9.rose() == true) {
    MIDI.sendNoteOn(9, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_10.fell() == true) {
    MIDI.sendNoteOn(10, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_10.rose() == true) {
    MIDI.sendNoteOn(10, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_11.fell() == true) {
    MIDI.sendNoteOn(11, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_11.rose() == true) {
    MIDI.sendNoteOn(11, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_12.fell() == true) {
    MIDI.sendNoteOn(12, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_12.rose() == true) {
    MIDI.sendNoteOn(12, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_13.fell() == true) {
    MIDI.sendNoteOn(13, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_13.rose() == true) {
    MIDI.sendNoteOn(13, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_14.fell() == true) {
    MIDI.sendNoteOn(14, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_14.rose() == true) {
    MIDI.sendNoteOn(14, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_15.fell() == true) {
    MIDI.sendNoteOn(15, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_15.rose() == true) {
    MIDI.sendNoteOn(15, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_16.fell() == true) {
    MIDI.sendNoteOn(16, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_16.rose() == true) {
    MIDI.sendNoteOn(16, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_17.fell() == true) {
    MIDI.sendNoteOn(17, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_17.rose() == true) {
    MIDI.sendNoteOn(17, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_18.fell() == true) {
    MIDI.sendNoteOn(18, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_18.rose() == true) {
    MIDI.sendNoteOn(18, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_19.fell() == true) {
    MIDI.sendNoteOn(19, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_19.rose() == true) {
    MIDI.sendNoteOn(19, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_20.fell() == true) {
    MIDI.sendNoteOn(20, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_20.rose() == true) {
    MIDI.sendNoteOn(20, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_21.fell() == true) {
    MIDI.sendNoteOn(21, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_21.rose() == true) {
    MIDI.sendNoteOn(21, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_22.fell() == true) {
    MIDI.sendNoteOn(22, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_22.rose() == true) {
    MIDI.sendNoteOn(22, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_23.fell() == true) {
    MIDI.sendNoteOn(23, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_23.rose() == true) {
    MIDI.sendNoteOn(23, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_24.fell() == true) {
    MIDI.sendNoteOn(24, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_24.rose() == true) {
    MIDI.sendNoteOn(24, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_25.fell() == true) {
    MIDI.sendNoteOn(25, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_25.rose() == true) {
    MIDI.sendNoteOn(25, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_26.fell() == true) {
    MIDI.sendNoteOn(26, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_26.rose() == true) {
    MIDI.sendNoteOn(26, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
  if(push_button_27.fell() == true) {
    MIDI.sendNoteOn(27, 127, 1); // send note on
    digitalWrite(led, HIGH);
  }

  if(push_button_27.rose() == true) {
    MIDI.sendNoteOn(27, 0, 1); // send note off
    digitalWrite(led, LOW);
  }
} 
//else {
    // if you didn't get a connection to the server:
  //    Ethernet.begin(mac,ip,dns,gateway,subnet);
    
//}
