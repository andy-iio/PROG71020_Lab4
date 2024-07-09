#include "getTotalArea.h"
// Total area implementation

int getTotalArea(Shape* shapes[], int size) {
    int total_area = 0; // Initialize total area to 0
    for (int i = 0; i < size; i++) {
        int area = shapes[i]->calculateArea(); // Calculate the area of the current shape[i]
        total_area = total_area + area; // Add the area of the current shape to the total area
    }
    return total_area; // Return the total area of all the shapes
}