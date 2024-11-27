#include <stdio.h>
#include <math.h>

struct point {
    double x;
    double y;
};

double Distance(struct point p1, struct point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int isPointInsideRectangle(struct point p, struct point bottomLeft, struct point topRight) {
    if (p.x >= bottomLeft.x && p.x <= topRight.x && p.y >= bottomLeft.y && p.y <= topRight.y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct point p1, p2, bottomLeft, topRight;

    // Input coordinates for the points
    printf("Enter coordinates for Point 1 (x y): ");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Enter coordinates for Point 2 (x y): ");
    scanf("%lf %lf", &p2.x, &p2.y);

    // Calculate and print distance between points
    double distance = Distance(p1, p2);
    printf("Distance between Point 1 and Point 2: %.2lf\n", distance);

    // Input coordinates for the bottom-left and top-right corners of the rectangle
    printf("Enter coordinates for the bottom-left corner of the rectangle (x y): ");
    scanf("%lf %lf", &bottomLeft.x, &bottomLeft.y);

    printf("Enter coordinates for the top-right corner of the rectangle (x y): ");
    scanf("%lf %lf", &topRight.x, &topRight.y);

    // Check if Point 1 is inside the rectangle
    if (isPointInsideRectangle(p1, bottomLeft, topRight)) {
        printf("Point 1 is inside the rectangle.\n");
    } else {
        printf("Point 1 is outside the rectangle.\n");
    }

    // Check if Point 2 is inside the rectangle
    if (isPointInsideRectangle(p2, bottomLeft, topRight)) {
        printf("Point 2 is inside the rectangle.\n");
    } else {
        printf("Point 2 is outside the rectangle.\n");
    }

    return 0;
}
