#ifndef SONGS_H_
#define SONGS_H_

#include "addons/buzzerspeaker.h"

// セガサターンの起動音（簡易版：上昇音から低音へ）
// 全体のスピードを速めるため 70ms に設定
Song configModeSong{
    70,
    {
        NOTE_C4, NOTE_G4, NOTE_C5, NOTE_G5, NOTE_C6, 
        NOTE_G6, NOTE_C7, PAUSE, NOTE_C3, NOTE_C2
    }
};

// メガドライブの「セガー」コール
// 「セ」を短く、「ガー」を長めにするため、同じ音を連続させて長さを調整しています
Song introSong{
    150,
    {
        NOTE_B4, NOTE_B4, // セ（短め）
        NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4 // ガー（長め）
    }
};

#endif
