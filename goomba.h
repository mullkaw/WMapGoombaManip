typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned int u32;

#define BOT_LEFT 0x00
#define TOP_LEFT 0x01
#define TOP_RIGHT 0x02
#define BOT_RIGHT 0x03

#define WM_KURIBO = 0x28F
#define WM_PUKU = 0x290
#define WM_PAKKUN = 0x291
#define WM_BROS = 0x292
#define WM_JUGEM = 0x293

u8 currentWorld;
u32 GenerateRandomNumber(u32 range);
void OSReport(const char *, ...);
