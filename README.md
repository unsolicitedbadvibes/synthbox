# synthbox
This is an Arduino wavetable synth based largely on DZL's design - https://github.com/dzlonline/the_synth.

The code for my design is highly reliant on what DZL did. Their code and easy-to-build circuit design is fantastic, and makes it an awesome synth project.

I was interested in making it a standalone synth with adjustable controls that could be adjusted live, on-the-fly.

So I added potentiometers and tweaked the code to control some of the parameters.

The values of the compnents I used were slightly different: a 2.2k resistor, a 100nf capacitor, and a 100uf capacitor. Feel free to experiment with values to get the sound you like. 

I honestly don't have my head fully wrapped around how DZL's original code works, I basically did a lot of trial and error until it started making sounds I liked.

The synth.h and tables.h files are entirely DZL's work. Basically 99.9% of the code is DZL's work, I just added some knobs.

Examples of the synth box: https://www.youtube.com/watch?v=XRZzHhUqOVE&list=PLXLuRihvl2G2o5c0YjR0Cg_p5rC3dF_Ll 

Photo of the guts: https://imgur.com/a/JazSWTr 
(power and ground connections to the potentiometers are all individually wired b/c I didn't know at first how many knobs I was going to use. My current test build has pots wired in parallel. Feel free to do as you see fit)
