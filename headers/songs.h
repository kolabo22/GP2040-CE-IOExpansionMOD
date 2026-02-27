#ifndef SONGS_H_
#define SONGS_H_

#include "addons/buzzerspeaker.h"

// セガの「セーガー」
// 音程：G5(ソ) -> C5(ド) の本物に近い落差
Song introSong{
    60, // 1音を少し長めに設定
    {
        PAUSE, PAUSE,
        G5, G5, G5, G5, G5, G5, G5, G5, G5,  // 「セ」
        PAUSE, PAUSE,                 // 音の分離を良くする
        C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, PAUSE // 「ガー」
    }
};

// サターン起動音（ロングエコー版）
// 1単位を短く(25ms)して、音の密度を上げています
Song configModeSong{
    40,
    {
        PAUSE, 
        F4, F4, F4, F4, F4, F4, F4, F4, F4, F4, F4, F4, PAUSE, // 最初の重厚な響き（溜め）
        
        // 前半：上昇アルペジオ
        F4, F4, F4, A4, A4, A4, C5, C5, C5, F5, F5, F5, A5, A5, A5, C6, C6, C6,
        PAUSE, PAUSE, PAUSE, // 独特の「溜め」

        // 後半：広がる余韻（A2ではなくA3に変更してノイズを回避）
        // 音数を増やすことで、終わるのを遅くしています
        C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, C5, PAUSE
    }
};

#endif
