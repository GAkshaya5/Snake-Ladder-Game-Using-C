\#include\<graphics.h\> 

\#include\<conio.h\> 

\#include\<dos.h\> 

void main(){ 

int gd=DETECT,gm,i,j,l; 

initgraph(\&gd,\&gm,"c://tc//bgi"); //1 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(0,430,40,475); 

floodfill(1,431,GREEN); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(5,431,"1"); 

//2 

 setcolor(YELLOW); 

setfillstyle(1,YELLOW); 

rectangle(40,430,80,475); 

floodfill(41,431,YELLOW); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(45,431,"2"); 

//3 

setcolor(RED);  
setfillstyle(1,RED); 

rectangle(80,430,120,475); floodfill(81,431,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(85,431,"3"); //4 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(120,430,160,475); floodfill(121,431,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(125,431,"4"); //5 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(160,430,200,475); floodfill(161,431,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(165,431,"5"); //6 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(200,430,240,475); floodfill(201,431,GREEN); setcolor(BLACK); 

settextstyle(3,0,3);  
outtextxy(205,431,"6"); //7 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(240,430,280,475); floodfill(241,431,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(245,431,"7"); //8 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(280,430,320,475); floodfill(281,431,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(285,431,"8"); //9 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(320,430,360,475); floodfill(321,431,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(325,431,"9"); //10 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(360,430,400,475);  
floodfill(361,431,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(365,431,"10"); //16 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(0,390,40,430); floodfill(1,391,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(5,391,"20"); //17 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(40,390,80,430); floodfill(41,391,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(45,391,"19"); //18 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(80,390,120,430); floodfill(81,391,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(85,391,"18"); //19  
setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(120,390,160,430); floodfill(121,391,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(125,391,"17"); //20 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(160,390,200,430); floodfill(161,391,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(165,391,"16"); //21 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(200,390,240,430); floodfill(201,391,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(205,391,"15"); //22 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(240,390,280,430); floodfill(241,391,RED); setcolor(BLACK);  
settextstyle(3,0,3); 

outtextxy(245,391,"14"); //23 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(280,390,320,430); floodfill(281,391,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(285,391,"13"); //24 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(320,390,360,430); floodfill(321,391,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(325,391,"12"); //25 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(360,390,400,430); floodfill(361,391,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(365,391,"11"); //31 

setcolor(RED); 

setfillstyle(1,RED);  
rectangle(0,350,40,390); floodfill(1,351,RED); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(5,351,"21"); //32 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(40,350,80,390); floodfill(41,351,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(45,351,"22"); //33 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(80,350,120,390); floodfill(81,351,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(85,351,"23"); //34 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(120,350,160,390); floodfill(121,351,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(125,351,"24");  
//35 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(160,350,200,390); floodfill(161,351,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(165,351,"25"); //36 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(200,350,240,390); floodfill(201,351,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(205,351,"26"); //37 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(240,350,280,390); floodfill(241,351,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(245,351,"27"); //38 

 setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(280,350,320,390); floodfill(281,351,WHITE);  
setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(285,351,"28"); //39 

 setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(320,350,360,390); floodfill(321,351,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(325,351,"29"); //40 

 setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(360,350,400,390); floodfill(361,351,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(365,351,"30"); //46 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(0,310,40,350); floodfill(1,311,BLUE); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(5,311,"31"); //47 

setcolor(WHITE);  
setfillstyle(1,WHITE); 

rectangle(40,310,80,350); floodfill(41,311,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(45,311,"32"); //48 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(80,310,120,350); floodfill(81,311,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(85,311,"33"); //49 

 setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(120,310,160,350); floodfill(121,311,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(125,311,"34"); //50 

 setcolor(RED); 

setfillstyle(1,RED); 

rectangle(160,310,200,350); floodfill(161,311,RED); setcolor(BLACK); 

settextstyle(3,0,3);  
outtextxy(165,311,"35"); //51 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(200,310,240,350); floodfill(201,311,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(205,311,"36"); //52 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(240,310,280,350); floodfill(241,311,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(245,311,"37"); //53 

 setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(280,310,320,350); floodfill(281,311,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(285,311,"38"); //54 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(320,310,360,350);  
floodfill(321,311,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(325,311,"39"); //55 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(360,310,400,350); floodfill(361,311,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(365,311,"40"); //61 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(0,270,40,310); floodfill(1,271,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(1,271,"50"); //62 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(40,270,80,310); floodfill(41,271,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(41,271,"49"); //63  
setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(80,270,120,310); floodfill(81,271,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(81,271,"48"); //64 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(120,270,160,310); floodfill(121,271,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(121,271,"47"); //65 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(160,270,200,310); floodfill(161,271,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(161,271,"46"); //66 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(200,270,240,310); floodfill(201,271,WHITE); setcolor(BLACK);  
settextstyle(3,0,3); 

outtextxy(201,271,"45"); //67 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(240,270,280,310); floodfill(241,271,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(241,271,"44"); //68 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(280,270,320,310); floodfill(281,271,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(281,271,"43"); //69 

 setcolor(RED); 

setfillstyle(1,RED); 

rectangle(320,270,360,310); floodfill(321,271,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(321,271,"42"); //70 

 setcolor(BLUE); 

setfillstyle(1,BLUE);  
rectangle(360,270,400,310); floodfill(361,271,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(361,271,"41"); //76 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(0,230,40,270); floodfill(1,231,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(1,231,"51"); //77 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(40,230,80,270); floodfill(41,231,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(41,231,"52"); //78 

 setcolor(RED); 

setfillstyle(1,RED); 

rectangle(80,230,120,270); floodfill(81,231,RED); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(81,231,"53");  
//79 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(120,230,160,270); floodfill(121,231,BLUE); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(121,231,"54"); //80 

 setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(160,230,200,270); floodfill(161,231,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(161,231,"55"); //81 

 setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(200,230,240,270); floodfill(201,231,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(201,231,"56"); //82 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(240,230,280,270);  
floodfill(241,231,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(241,231,"57"); //83 

 setcolor(RED); 

setfillstyle(1,RED); 

rectangle(280,230,320,270); floodfill(281,231,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(281,231,"58"); //84 

 setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(320,230,360,270); floodfill(321,231,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(321,231,"59"); //85 

 setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(360,230,400,270); floodfill(361,231,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(361,231,"60"); //61  
setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(0,190,40,230); floodfill(1,191,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(1,191,"70"); //62 

 setcolor(RED); 

setfillstyle(1,RED); 

rectangle(40,190,80,230); floodfill(41,191,RED); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(41,191,"69"); //63 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(80,190,120,230); floodfill(81,191,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(81,191,"68"); //64 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(120,190,160,230); floodfill(121,191,WHITE); setcolor(BLACK);  
settextstyle(3,0,3); 

outtextxy(121,191,"67"); //65 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(160,190,200,230); floodfill(161,191,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(161,191,"66"); //66 

 setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(200,190,240,230); floodfill(201,191,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(201,191,"65"); //67 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(240,190,280,230); floodfill(241,191,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(241,191,"64"); //68 

 setcolor(BLUE); 

setfillstyle(1,BLUE);  
rectangle(280,190,320,230); floodfill(281,191,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(281,191,"63"); //69 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(320,190,360,230); floodfill(321,191,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(321,191,"62"); //70 

 setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(360,190,400,230); floodfill(361,191,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(361,191,"61"); //71 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(0,150,40,190); floodfill(1,151,RED); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(1,151,"71");  
//72 

 setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(40,150,80,190); floodfill(41,151,BLUE); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(41,151,"72"); //73 

 setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(80,150,120,190); floodfill(81,151,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(81,151,"73"); //74 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(120,150,160,190); floodfill(121,151,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(121,151,"74"); //75 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(160,150,200,190);  
floodfill(161,151,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(161,151,"75"); //76 

 setcolor(RED); 

setfillstyle(1,RED); 

rectangle(200,150,240,190); floodfill(201,151,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(201,151,"76"); //77 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(240,150,280,190); floodfill(241,151,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(241,151,"77"); //78 

 setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(280,150,320,190); floodfill(281,151,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(281,151,"78"); //79  
 setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(320,150,360,190); floodfill(321,151,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(321,151,"79"); //80 

 setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(360,150,400,190); floodfill(361,151,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(361,151,"80"); //81 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(0,110,40,150); floodfill(1,111,BLUE); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(1,111,"90"); //82 

 setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(40,110,80,150); floodfill(41,111,WHITE); setcolor(BLACK);  
settextstyle(3,0,3); 

outtextxy(41,111,"89"); //83 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(80,110,120,150); floodfill(81,111,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(81,111,"88"); //84 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(120,110,160,150); floodfill(121,111,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(121,111,"87"); //85 

 setcolor(RED); 

setfillstyle(1,RED); 

rectangle(160,110,200,150); floodfill(161,111,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(161,111,"86"); //86 

 setcolor(BLUE); 

setfillstyle(1,BLUE);  
rectangle(200,110,240,150); floodfill(201,111,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(201,111,"85"); //87 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(240,110,280,150); floodfill(241,111,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(241,111,"84"); //88 

setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(280,110,320,150); floodfill(281,111,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(281,111,"83"); //89 

 setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(320,110,360,150); floodfill(321,111,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(321,111,"82");  
//90 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(360,110,400,150); floodfill(361,111,RED); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(361,111,"81"); //91 

setcolor(WHITE); 

setfillstyle(1,WHITE); 

rectangle(0,70,40,110); floodfill(1,71,WHITE); 

setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(1,71,"91"); 

//92 

 setcolor(GREEN); 

setfillstyle(1,GREEN); 

rectangle(40,70,80,110); floodfill(41,71,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(41,71,"92"); //93 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(80,70,120,110);  
floodfill(81,71,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(81,71,"93"); //94 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(120,70,160,110); floodfill(121,71,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(121,71,"94"); //95 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(160,70,200,110); floodfill(161,71,BLUE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(161,71,"95"); //96 

setcolor(WHITE); 

setfillstyle(1,WHITE); rectangle(200,70,240,110); floodfill(201,71,WHITE); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(201,71,"96"); //97  
setcolor(GREEN); 

setfillstyle(1,GREEN); rectangle(240,70,280,110); floodfill(241,71,GREEN); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(241,71,"97"); //98 

setcolor(YELLOW); 

setfillstyle(1,YELLOW); rectangle(280,70,320,110); floodfill(281,71,YELLOW); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(281,71,"98"); //99 

setcolor(RED); 

setfillstyle(1,RED); 

rectangle(320,70,360,110); floodfill(321,71,RED); setcolor(BLACK); 

settextstyle(3,0,3); 

outtextxy(321,71,"99"); //100 

setcolor(BLUE); 

setfillstyle(1,BLUE); 

rectangle(360,70,400,110); floodfill(361,71,BLUE); setcolor(BLACK);  
settextstyle(3,0,3); 

outtextxy(357,71,"100"); //LADDER1 

line(220,180,340,400); line(219,180,339,400); line(218,180,338,400); line(240,170,360,390); 

 line(241,170,361,390); line(242,170,362,390); line(220,185,240,175); line(221,185,241,175); line(235,210,257,198); 

 line(235,211,257,199); line(247,233,268,223); line(247,234,268,224); line(259,257,279,245); line(260,257,280,245); line(272,280,293,270); line(272,281,293,271); line(289,305,310,295); line(289,304,310,294); line(300,328,320,317); line(300,329,320,318); line(315,351,333,342); line(315,352,333,343); line(327,380,347,370); line(327,381,347,371); //ladder2 

line(20,395,60,250);  
line(21,395,61,250); line(50,400,90,260); line(51,400,91,260); line(24,380,54,390); line(24,381,54,391); line(33,350,60,360); line(33,351,60,361); line(43,320,71,330); line(43,321,71,331); line(53,290,79,300); line(54,290,80,300); line(60,261,88,271); line(60,260,88,270); //ladder3 

line(60,130,125,224); line(61,130,125,224); line(90,130,150,220); line(91,130,151,220); line(67,142,90,130); 

line(67,143,90,131); line(79,160,102,150); line(79,161,102,151); line(93,179,115,167); line(93,180,115,168); 

line(107,197,128,186); line(107,198,128,187); line(121,217,140,207); 

 line(121,218,140,208); setcolor(13);  
settextstyle(1,0,2); 

outtextxy(130,30,"SNAKE LADDER"); 

setcolor(10); 

settextstyle(2,0,6); 

outtextxy(420,120,"NAME:AKSHAYA GUNDETI"); setcolor(10); 

settextstyle(2,0,6); 

outtextxy(420,140,"SOFTWARE:C PROGRAMMING"); setcolor(10); 
  j=-300; 

 while(\!kbhit()){ 

 for(int i=0;i\<=6;i++){ 

 setcolor(8); 

 ellipse(300,130,70,180,20+i,40+i); 

 ellipse(255,130,260,360,20+i,150+i);  setcolor(10); 

 ellipse(30,300,360,100,15+i,100+i); 

 ellipse(80,320,160,300,30+i,90+i); 

 setcolor(12); 

 ellipse(190,370,320,120,13+i,70+i); 

 ellipse(215,427,115,290,10+i,40+i); 

 } 

 if(j==600){ 

 j=-300; 

 } 

 else{ 

 j=j+15;  
 } 

} 

getch(); 

}

