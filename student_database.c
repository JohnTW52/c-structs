#include <stdio.h>

struct Dimensions {
            float length;
            float width;
            float height;
        };

struct Box {
        char label[50];
        float weight;
        struct Dimensions size;
    };

float calcVolume(struct Box b){
    return b.size.length * b.size.width * b.size.height;
}

float calcDensity(struct Box b, float vol){
    return b.weight / vol;
}

int main(){
    
    struct Box b1 = {
        "Box of Rocks",
        30.0,
        {9.1, 12.45, 12.5231}
    };

    float vol1 = calcVolume(b1);

    printf("Volume: %.3f ft^3\n", vol1);
    printf("Density: %.3f g/cm^3\n", calcDensity(b1, vol1));

    return 0;
}

