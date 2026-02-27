#ifndef SONGS_H_
#define SONGS_H_

#include "addons/buzzerspeaker.h"

// セガの「セーガー」：50ms × 3(150ms) と 50ms × 16(800ms)
Song introSong{
    50,
    {
        B4, B4, B4, 
        PAUSE, 
        G4, G4, G4, G4, G4, G4, G4, G4, G4, G4, G4, G4, G4, G4, G4, G4
    }
};

// サターン風起動音（上昇から低音）
Song configModeSong{
    40,
    {
        C4, E4, G4, B4, C5, E5, G5, B5, C6, C6, C6, C6, 
        PAUSE, PAUSE,
        A2, A2, A2, A2, A2, A2, A2, A2, A2, A2, A2, A2
    }
};

#endif
