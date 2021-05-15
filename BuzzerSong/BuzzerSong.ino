#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_D5, NOTE_E5,
  NOTE_E5, NOTE_D5, NOTE_B5, NOTE_B5, NOTE_A5,
  NOTE_A5, NOTE_G5, NOTE_D5, NOTE_G5, NOTE_G5,
  NOTE_G5, NOTE_D5, NOTE_E5, NOTE_E5, NOTE_D5,
  NOTE_B5, NOTE_B5, NOTE_A5, NOTE_A5, NOTE_G5
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4, 4,
  4, 2, 4, 4, 4,
  4, 2, 4, 4, 4,
  4, 4, 4, 4, 4,
  2, 4, 4, 4, 4
};

int freq = 2000;
int channel = 0;
int resolution = 8;

void setup() {
  ledcSetup(channel, freq, resolution);
  ledcAttachPin(BUZZER_BUILTIN, channel);
}

void loop() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 25; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    ledcWriteTone(channel, melody[thisNote]);
    delay(noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
  }
}
