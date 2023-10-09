#include <stdio.h>

// 3 Lamp Signal Head
struct SIG_HEAD_3 {
    int red;
    int yellow;
    int green;
};

// 5 Lamp Signal Head
struct SIG_HEAD_5 {
    int red;
    int yellow;
    int green;
    int yellow_arrow;
    int green_arrow;
};

// 8 Phase Intersection - 4x4 Lanes
struct INT_P8 {
    // Signal Heads - NSEW
    struct SIG_HEAD_5 NL;
    struct SIG_HEAD_3 N;
    struct SIG_HEAD_5 SL;
    struct SIG_HEAD_3 S;
    struct SIG_HEAD_5 EL;
    struct SIG_HEAD_3 E;
    struct SIG_HEAD_5 WL;
    struct SIG_HEAD_3 W;

    // Phase Calls


    // Pedistrian Calls
};

int setup() {
    // Read in configuration
        // Identify intersection type
        // Enumerate signal heads
    // Enable all reds; disable everything else
    // Go to startup state (flashing red usually)
}

int main() {
    struct INT_P8 s;
    s.NL.red = 1;

    printf("State: %i\n", s.NL.red);
    printf("State: %i\n", s.NL.green);

    return 0;
}