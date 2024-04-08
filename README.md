**README**

### Solar System Simulation

This program is a graphical simulation of the solar system implemented in C using the graphics.h library. It provides an animated representation of the movement of planets and moons along their orbits, as well as the appearance of comets.

## Setup Instructions

### 1. Install Code::Blocks

Ensure that Code::Blocks IDE is installed on your machine. If not, download and install it from [here](http://sourceforge.net/projects/codeblocks/files/Binaries/16.01/Windows/codeblocks-16.01mingw-setup.exe).

### 2. Download Required Header Files

Download the necessary header files from this repository: [Graphics Library](https://github.com/SagarGaniga/Graphics-Library).

### 3. Include `graphics.h` and `winbgim.h`

Copy and paste the `graphics.h` and `winbgim.h` files into the `include` folder of the Code::Blocks directory. The typical path for this folder is:

```
C:\Program Files (x86)\CodeBlocks\MinGW\include
```

### 4. Include `libbgi.a`

Copy and paste the `libbgi.a` file into the `lib` folder of Code::Blocks. The typical path for this folder is:

```
C:\Program Files (x86)\CodeBlocks\MinGW\lib
```

### 5. Add Link Libraries in Linker Settings

- Open the Code::Blocks application and navigate to `Settings > Compiler`.
- In the Global Compiler setting, click on `Linker Settings`.
- Under Link Libraries, click `Add` and navigate to `C:\Program Files (x86)\CodeBlocks\MinGW\lib\`. Select `libbgi.a`.
- Add the following line in the `Other Linker Option` tab of Linker Settings (on the right-hand side):

```
-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
```

- Save the settings and restart the application.

## Running a Sample Graphics Program

To test the setup, copy and paste any computer graphics code from [this repository](https://github.com/SagarGaniga/computer-graphics) into your Code::Blocks IDE and run it.

```c
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

int main() {
    // Your graphics program code here
}
```

## Disclaimer

This setup guide is provided for educational purposes. The graphics library used may have limitations or compatibility issues with certain systems. It is recommended to verify and test the setup thoroughly before relying on it for production purposes.

For any issues or queries, please refer to the respective documentation or seek assistance from the community forums.


### Description

- **Graphics Initialization**: The program initializes the graphics environment using `initgraph()` function from `graphics.h`.
- **Animation Loop**: The main part of the program is an infinite loop (`while(1)`) that continuously updates the positions of planets and moons and redraws them on the screen.
- **Planet Paths**: Ellipses are drawn to represent the paths of each planet around the sun.
- **Planets and Moons**: Circles filled with appropriate colors represent planets, and smaller circles represent moons. Their positions are calculated based on simple trigonometric functions to simulate orbiting motion.
- **Comets**: The program also simulates comets moving across the screen. These are represented by yellow ellipses with varying radii and positions.

### Controls

- The animation runs indefinitely until the program is terminated manually.
- No user input or interaction is required during the simulation.

### Notes

- The simulation is not to scale and does not accurately represent the relative sizes or distances of the planets in the solar system.
- This program is intended for educational purposes to demonstrate basic graphics programming concepts in C.

### License

- This program is provided under an open-source license. See the source code file for details.

### Disclaimer

- This program is a basic simulation and should not be used for scientific or astronomical purposes. It does not provide accurate data or representations of celestial bodies.
