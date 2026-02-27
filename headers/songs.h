#ifndef SONGS_H_
#define SONGS_H_

#include "addons/buzzerspeaker.h"

// セガサターンの起動音（簡易版：上昇音から低音へ）
// 全体のスピードを速めるため 70ms に設定
Song configModeSong{
    150,
    {
        C4, G4, C5, G5, C6, 
        G6, C7, PAUSE, C3, C2
    }
};

// メガドライブの「セガー」コール
// 「セ」を短く、「ガー」を長めにするため、同じ音を連続させて長さを調整しています
Song introSong{
    150,
    {
        B4, B4, // セ（短め）
        G4, G4, G4, G4, G4 // ガー（長め）
    }
};

#endif
