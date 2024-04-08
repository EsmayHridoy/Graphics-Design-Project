#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

int main() {
    // Set initial positions of planets and moons
    int m=0, v=260, eh=300, mr=100, j=10, s=230, u=190, n=20;
    float pi=3.1424,a,b,c,d,e,f,g,h,z;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    /*animation*/
    while(1) {
        // Change the displacement
        a=(pi/180)*m++;
        b=(pi/180)*v++;
        c=(pi/180)*eh++;
        d=(pi/180)*mr++;
        e=(pi/180)*j++;
        f=(pi/180)*s++;
        g=(pi/180)*u++;
        h=(pi/180)*n++;
        n++;

        cleardevice();

        // Draw the Circle and ellipse with axes

        // Draw ellipses representing planet paths

        // SUN
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(320,240,20);
        floodfill(320, 240, YELLOW);

        // Ellipse representing Mercury's path
        setcolor(WHITE);
        ellipse(320, 240, 0, 360, 60, 35);

        // Ellipse representing Venus's path
        setcolor(WHITE);
        ellipse(320, 240, 0, 360, 100, 60);

        // Ellipse representing Earth's path
        setcolor(WHITE);
        ellipse(320, 240, 0, 360, 130, 80);

        // Ellipse representing Mars's path
        setcolor(WHITE);
        ellipse(320, 240, 0, 360, 170, 100);

        // Ellipse representing Jupiter's path
        setcolor(WHITE);
        ellipse(320, 240, 0, 360, 200, 130);

        // Ellipse representing Saturn's path
        setcolor(WHITE);
        ellipse(320, 240, 0, 360, 230, 155);

        // Ellipse representing Uranus's path
        setcolor(WHITE);
        ellipse(320, 240, 0, 360, 260, 180);

        // Ellipse representing Neptune's path
        setcolor(WHITE);
        ellipse(320, 240, 0, 360, 280, 200);

        // Draw the planets
        //Mercury
        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        circle(320+60*sin(a),240-35*cos(a),8);
        floodfill(320+60*sin(a), 240-35*cos(a), LIGHTGRAY);
        outtextxy(320+60*sin(a) - 20, 240-35*cos(a) - 20, "Mercury");

        //Venus
        setcolor(LIGHTRED);
        setfillstyle(SOLID_FILL, LIGHTRED);
        circle(320+100*sin(b),240-60*cos(b),12);
        floodfill(320+100*sin(b), 240-60*cos(b), LIGHTRED);
        outtextxy(320+100*sin(b) - 20, 240-60*cos(b) - 20, "Venus");

        //Earth
        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL, LIGHTBLUE);
        circle(320+130*sin(c),240-80*cos(c),10);
        floodfill(320+130*sin(c), 240-80*cos(c), LIGHTBLUE);
        outtextxy(320+130*sin(c) - 20, 240-80*cos(c) - 20, "Earth");

        //Mars
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        circle(320+170*sin(d),240-100*cos(d),11);
        floodfill(320+170*sin(d), 240-100*cos(d), RED);
        outtextxy(320+170*sin(d) - 15, 240-100*cos(d) - 15, "Mars");

        //Jupiter
        setcolor(LIGHTMAGENTA);
        setfillstyle(SOLID_FILL, LIGHTMAGENTA);
        circle(320+200*sin(e),240-130*cos(e),14);
        floodfill(320+200*sin(e), 240-130*cos(e), LIGHTMAGENTA);
        outtextxy(320+200*sin(e) - 20, 240-130*cos(e) - 20, "Jupiter");

        //Saturn
        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        circle(320+230*sin(f),240-155*cos(f),12);
        floodfill(320+230*sin(f), 240-155*cos(f), LIGHTGRAY);
        outtextxy(320+230*sin(f) - 20, 240-155*cos(f) - 20, "Saturn");

        // Draw rings for Saturn
        setcolor(LIGHTGRAY);
        ellipse(320+230*sin(f), 240-155*cos(f), 0, 360, 60, 10);

        //Uranus
        setcolor(LIGHTCYAN);
        setfillstyle(SOLID_FILL, LIGHTCYAN);
        circle(320+260*sin(g),240-180*cos(g),9);
        floodfill(320+260*sin(g), 240-180*cos(g), LIGHTCYAN);
        outtextxy(320+260*sin(g) - 20, 240-180*cos(g) - 20, "Uranus");

        //Neptune
        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL, LIGHTBLUE);
        circle(320+280*sin(h),240-200*cos(h),9);
        floodfill(320+280*sin(h), 240-200*cos(h), LIGHTBLUE);
        outtextxy(320+280*sin(h) - 20, 240-200*cos(h) - 20, "Neptune");

        // Draw moons for each planet
        //Moon for Earth
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        circle(320+130*sin(c) + 20*sin(c*2), 240-80*cos(c) + 20*cos(c*2), 4);
        floodfill(320+130*sin(c) + 20*sin(c*2), 240-80*cos(c) + 20*cos(c*2), WHITE);

        //Moon for Mars
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        circle(320+170*sin(d) + 18*sin(d*2), 240-100*cos(d) + 18*cos(d*2), 3);
        floodfill(320+170*sin(d) + 18*sin(d*2), 240-100*cos(d) + 18*cos(d*2), WHITE);

        //Moon for Jupiter
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        circle(320+200*sin(e) + 30*sin(e*2), 240-130*cos(e) + 30*cos(e*2), 5);
        floodfill(320+200*sin(e) + 30*sin(e*2), 240-130*cos(e) + 30*cos(e*2), WHITE);

        //Moon for Saturn
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        circle(320+230*sin(f) + 25*sin(f*2), 240-155*cos(f) + 25*cos(f*2), 4);
        floodfill(320+230*sin(f) + 25*sin(f*2), 240-155*cos(f) + 25*cos(f*2), WHITE);

        //Moon for Uranus
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        circle(320+260*sin(g) + 22*sin(g*2), 240-180*cos(g) + 22*cos(g*2), 3);
        floodfill(320+260*sin(g) + 22*sin(g*2), 240-180*cos(g) + 22*cos(g*2), WHITE);

        //Moon for Neptune
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        circle(320+280*sin(h) + 20*sin(h*2), 240-200*cos(h) + 20*cos(h*2), 3);
        floodfill(320+280*sin(h) + 20*sin(h*2), 240-200*cos(h) + 20*cos(h*2), WHITE);

        // Draw comets without lines
        int comet_y[] = {100, 200, 300, 150, 250, 350, 120, 220, 320, 170, 90, 180, 270, 140, 260, 370, 130, 230, 330, 180, 110, 210, 310, 160, 240, 350, 100, 200, 300, 150, 250, 360, 120, 220, 320, 170, 90, 200, 310, 140, 250, 360, 130, 230, 330, 170, 100, 210, 320, 150}; // Y-coordinates of comets
        int comet_radius[] = {5, 4, 3, 4, 6, 8, 4, 6, 5, 3, 5, 4, 3, 4, 6, 8, 4, 6, 5, 3, 5, 4, 3, 4, 6, 8, 4, 6, 5, 3, 5, 4, 3, 4, 6, 8, 4, 6, 5, 3, 5, 4, 3, 4, 6, 8, 4, 6, 5, 3}; // Radii of comets
        for(int i = 0; i < 50; i++) {
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL, YELLOW);
            ellipse(50+(m*i)%600, comet_y[i], 0, 360, comet_radius[i], comet_radius[i] / 2); // comet body
            floodfill(50+(m*i)%600, comet_y[i], YELLOW);
        }

        delay(50); // Slower speed
    }
    getch();
}
