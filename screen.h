#define UNICODE
enum COLORS{BLACK=30,RED,GREEN,YELLOW,BLUE,MAGENTA,CYAN,WHITE};
#define bg(c) (c+10)
#define COL 52
#define BAR "\u2588"

// function declarations
void clearScreen(void);
void setColors(short);
void resetColors(void);
void barChart(int [], char **, int );
