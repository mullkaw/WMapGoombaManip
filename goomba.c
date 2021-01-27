#define u32 unsigned int

#define BOT_LEFT 0x00
#define TOP_LEFT 0x01
#define TOP_RIGHT 0x02
#define BOT_RIGHT 0x03

u32 GenerateRandomNumber(u32 max);

u32 GenerateNonRandomWorldMapEnemyNumber(u32 max) {
    GenerateRandomNumber(max);
    return TOP_LEFT;
}
