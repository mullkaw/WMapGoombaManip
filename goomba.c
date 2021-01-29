#include "goomba.h"

u32 GenerateNonRandomWorldMapEnemyNumber(u32 range) {
    u32 value;

    OSReport("Current World: %d\n", (int)currentWorld);

    switch ((int)currentWorld) {
        case 0:
            value = GenerateRandomNumber(range);
            value = TOP_LEFT;
            break;
        default:
            value = GenerateRandomNumber(range);
    }

    return value;
}
