// Arduino synth library modulation example

//Hardware connections:

//                    +10µF 
//PIN 11 ---[ 1k ]--+---||--->> Audio out
//                  |
//                 === 10nF
//                  |
//                 GND

// DZL 2014
// HTTP://dzlsevilgeniuslair.blogspot.dk
// HTTP://illutron.dk

//synthbox note - the values I used were 2.2k resistor, 100nf cap, and 100uf cap. 

int KONEX = 0;
int KTWOX = 0;
int KTHREEX = 0;
int KFOURX = 0;
int KFIVEX = 0;


int KPITCH = 0;
int KLNGTH = 0;
int KVOICE = 0;
int KNOTE = 0;
int KDELAY = 0;



#include "synth.h"

synth edgar;    //-Make a synth

void setup()
{
 

  edgar.begin();  //-Start it up

  //Set up a voice:
  //setupVoice( voice[0-3] , waveform[SINE,TRIANGLE,SQUARE,SAW,RAMP,NOISE] , pitch[0-127], envelope[ENVELOPE0-ENVELOPE3], length[0-127], mod[0-127, 64=no mod])


}

void loop()
{

KONEX = analogRead(A1);
KTWOX = analogRead(A2);
KTHREEX = analogRead(A3);
KFOURX = analogRead(A4);
KFIVEX = analogRead(A5);


KPITCH = map(KONEX, 0, 1023, 30, 100);
KLNGTH = map(KTWOX, 0, 1023, 30, 100);
KVOICE = map(KTHREEX, 0, 1023, 4, 0);
KNOTE = map(KFOURX, 0, 1023, 40, 123);
KDELAY = map(KFIVEX, 0, 1023, 50, 1400);




 //setupVoice( voice[0-3] , waveform[SINE,TRIANGLE,SQUARE,SAW,RAMP,NOISE] , pitch[0-127], envelope[ENVELOPE0-ENVELOPE3], length[0-127], mod[0-127, 64=no mod])

 
  edgar.setupVoice(0,SINE,KPITCH,ENVELOPE0,KLNGTH,64);
  edgar.setupVoice(1,TRIANGLE,KPITCH,ENVELOPE0,KLNGTH,64);
  edgar.setupVoice(2,RAMP,KPITCH,ENVELOPE0,KLNGTH,64);
  edgar.setupVoice(3,SQUARE,KPITCH,ENVELOPE0,KLNGTH,64);
 


 if (KVOICE == 0)
  {
        edgar.setMod(0,KNOTE);
      edgar.trigger(0);
      delay(KDELAY);
  }
  else if (KVOICE == 1)
  {

              edgar.setMod(1,KNOTE);
      edgar.trigger(1);
      delay(KDELAY);
  }
    else if (KVOICE == 2)
  {

      edgar.setMod(2,KNOTE);
      edgar.trigger(2);
      delay(KDELAY);
  }
    else if (KVOICE == 3)
  {

      edgar.setMod(3,KNOTE);
      edgar.trigger(3);
      delay(KDELAY);
  }

   else if (KVOICE == 4)
  {

      edgar.trigger(0);
      delay(KDELAY);
       edgar.trigger(1);
      delay(KDELAY);
       edgar.trigger(2);
      delay(KDELAY);
      edgar.trigger(3);
      delay(KDELAY);
  }
  
  
}
