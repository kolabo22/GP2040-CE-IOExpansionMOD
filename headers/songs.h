#ifndef SONGS_H_
#define SONGS_H_

#include "addons/buzzerspeaker.h"

// セガの「セーガー」
// 音程：G5(ソ) -> C5(ド) の本物に近い落差
Song introSong{
    60, // 1音を少し長めに設定
    {
        G5, G5, G5, G5, G5, G5,       // 「セ」
        PAUSE, PAUSE, PAUSE,          // 音の分離を良くする
        C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, PAUSE // 「ガー」
    }
};

// サターン起動音（ロングエコー版）
// 1単位を短く(25ms)して、音の密度を上げています
Song configModeSong{
    25,
    {
        F4, F4, F4, F4, F4,F4, F4, F4, F4, F4, PAUSE, PAUSE, // 最初の重厚な響き（溜め）
        
        // 前半：上昇アルペジオ
        C4, C4, E4, E4, G4, G4, B4, B4, C5, C5, E5, E5, G5, G5, B5, B5, C6, C6, D6, D6, E6, E6,
        PAUSE, PAUSE, PAUSE, PAUSE, // 独特の「溜め」

        // 後半：広がる余韻（A2ではなくA3に変更してノイズを回避）
        // 音数を増やすことで、終わるのを遅くしています
        A3, A3, A3, A3, A3, A3, A3, A3, A3, A3, A3, A3,
        A3, A3, A3, A3, A3, A3, A3, A3, A3, A3, A3, A3,
        A3, A3, A3, A3, A3, A3, A3, A3, A3, A3, A3, A3
    }
};

#endif
