#ifndef SONGS_H_
#define SONGS_H_

#include "addons/buzzerspeaker.h"

// セガの「セーガー」：高音から低音へ（完全4度）
// 1単位 50ms
Song introSong{
    50,
    {
        C5, C5, C5,          // 「セ」
        PAUSE,               // 切り替えのノイズ防止
        G4, G4, G4, G4, G4, G4, G4, G4, G4, G4, G4, G4 // 「ガー」
    }
};

// サターン風起動音：後半のノイズを抑え、透明感を出す設定
// 1単位 30ms（少し速めに設定して滑らかに）
Song configModeSong{
    30,
    {
        // 前半：上昇音
        C4, E4, G4, B4, C5, E5, G5, B5, C6, C6,
        PAUSE, PAUSE,
        // 後半：A2（低すぎる音）を避け、安定した和音の構成音(E5)で余韻を作る
        // これにより「ジジッ」という低音の割れを解消します
        E5, E5, E5, E5, E5, E5, E5, E5, E5, E5, E5, E5, E5, E5, E5, E5
    }
};

#endif
