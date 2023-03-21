#define COLOR_WHITE         0xFFFFFFAA
#define COLOR_GREY          0xAFAFAFAA
#define COLOR_GREEN         0x33AA33AA
#define COLOR_LIGHTGREEN    0x9ACD32AA
#define COLOR_RED           0xAA3333AA
#define COLOR_LIGHTRED1     0xFF99AADD
#define COLOR_REALRED       0xFF0606FF
#define COLOR_LIGHTRED2     0xFF6347AA
#define COLOR_BLUE	        0x0000BBAA
#define COLOR_DARKBLUE      0x2641FEAA
#define COLOR_LIGHTBLUE     0x33CCFFAA
#define COLOR_LIGHTSKYBLUE  0x87CEFAFF
#define COLOR_ORANGE        0xFF8000FF
#define COLOR_YELLOW        0xFFFF00AA
#define COLOR_YELLOW2       0xF5DEB3AA
#define COLOR_PURPLE        0xC2A2DAAA
#define COLOR_MEDIUMPURPLE  0x9370DBFF
#define COLOR_PINK          0xFF66FFAA
#define COLOR_CYAN          0x00FFFFFF
#define COLOR_BLACK         0x000000AA

#define COLOR_GOLD1		    0xB8860BAA
#define COLOR_GRAYWHITE     0xEEEEFFC4
#define COLOR_GRAD1         0xB4B5B7FF
#define COLOR_GRAD2         0xBFC0C2FF
#define COLOR_GRAD3         0xCBCCCEFF
#define COLOR_GRAD4         0xD8D8D8FF
#define COLOR_GRAD5         0xE3E3E3FF
#define COLOR_GRAD6         0xF0F0F0FF
#define COLOR_FADE          0xC8C8C8C8
#define COLOR_FADE1         0xE6E6E6E6
#define COLOR_FADE2         0xE6E6E6E6
#define COLOR_FADE3         0xAAAAAAAA
#define COLOR_FADE4         0x8C8C8C8C
#define COLOR_FADE5         0x6E6E6E6E
#define COLOR_LIME          0x00FF00FF
#define COLOR_GOLD2         0xFFD700FF
#define COLOR_CRIMSON       0xDC143CFF

#define MAX_WORLD_ID    50


#define IsNull(%1) ((!(%1[0])) || (((%1[0]) == '\1') && (!(%1[1]))))
#define SEM(%0,%1) SendClientMessage(%0,COLOR_GREY,%1) 					