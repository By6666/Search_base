#ifndef _MAP
#define _MAP

#include <iostream>
#include <queue>
#include <map>



//char Map[10][10] = { 1,1,1,1,1,1,1,1,1,1,
//					1,0,1,1,1,1,1,1,1,1,
//					1,0,0,0,0,0,0,0,1,1,
//					1,1,0,0,1,1,1,0,1,1,
//					1,1,0,0,1,0,1,0,0,1,
//					1,1,0,0,1,1,1,0,0,1,
//					1,1,0,0,0,0,0,0,1,1,
//					1,1,1,1,1,1,1,0,1,1,
//					1,1,0,0,0,0,0,0,0,1,
//					1,1,1,1,1,1,1,1,1,1 };

//char Map[10][10] = { 1,1,1,1,1,1,1,1,1,1,
//					1,0,0,1,0,1,1,1,1,1,
//					1,1,0,1,0,1,1,1,1,1,
//					1,1,0,1,0,0,0,0,0,1,
//					1,1,0,0,0,0,1,1,0,1,
//					1,1,0,1,1,0,1,1,0,1,
//					1,1,0,1,1,0,1,1,0,1,
//					1,1,0,1,1,0,1,1,0,1,
//					1,1,0,0,0,0,0,1,0,1,
//					1,1,1,1,1,1,1,1,1,1 };

//char Map[10][10] = { 1,1,1,1,1,1,1,1,1,1,
//					1,0,0,0,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,0,1,
//					1,1,1,1,1,1,1,1,1,1 };

//char Map[10][10] = { 1,1,1,1,1,1,1,1,1,1,
//					1,0,0,1,1,1,1,1,0,1,
//					1,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,1,0,1,
//					1,0,1,1,1,1,1,1,0,1,
//					1,0,0,0,0,0,0,0,0,1,
//					1,1,1,1,1,1,1,1,1,1 };

//#define Max_length 15
//#define End_I   Max_length-2
//#define End_II  Max_length-2
//char Map[15][15] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
//					1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
//					1,0,0,0,0,0,1,1,1,1,1,1,1,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
//					1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };

//char Map[15][15] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
//					1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
//					1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
//					1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };

#define Max_length 32
#define Start_I   1
#define Start_II  1
#define End_I   Max_length-7
#define End_II  Max_length-2
char Map[Max_length][Max_length] = { 
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
1,0,0,0,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
1,0,0,0,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
1,0,0,0,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
1,0,0,0,1,1,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
1,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
1,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,1,1,1,0,0,0,0,1,0,0,1,
1,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,1,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,0,0,1,0,0,1,
1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,1,1,1,0,0,1,1,1,1,0,0,0,1,0,0,1,
1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,0,1,1,0,0,0,0,1,0,0,1,
1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,1,
1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,0,0,1,
1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
};
//char Map[Max_length][Max_length] = {
//1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,1,1,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,1,1,1,0,0,0,0,1,0,0,1,
//1,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
//1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,1,
//1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,0,0,1,
//1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
//1,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
//1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
//1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
//};

#define Up         Map[buff.first - 1][buff.second]
#define Down       Map[buff.first + 1][buff.second]
#define Left       Map[buff.first][buff.second - 1]
#define Right      Map[buff.first][buff.second + 1]
#define Right_Up   Map[buff.first - 1][buff.second + 1]
#define Left_Up    Map[buff.first - 1][buff.second - 1]
#define Left_Down  Map[buff.first + 1][buff.second - 1]
#define Right_Down Map[buff.first + 1][buff.second + 1]

#endif // !_MAP

