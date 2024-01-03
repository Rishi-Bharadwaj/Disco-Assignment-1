#include <stdio.h>

typedef struct Point {
    int x, y;
} Point;

int isRectangle(Point p1, Point p2, Point p3, Point p4) {
    // Check if the four points form a rectangle with sides parallel to the axes
    int x_values[4] = {p1.x, p2.x, p3.x, p4.x};
    int y_values[4] = {p1.y, p2.y, p3.y, p4.y};
    int distinct_x = 0, distinct_y = 0;

    for (int i = 0; i < 4; i++) 
    {
        int count_x = 0, count_y = 0;

        for (int j = 0; j < 4; j++) {
            if (x_values[i] == x_values[j]) {
                count_x++;
            }

            if (y_values[i] == y_values[j]) {
                count_y++;
            }
        }

        if (count_x == 2 && count_y == 2) {
            distinct_x++;
            distinct_y++;
        }
    }

    return (distinct_x == 4 && distinct_y == 4);
}

int main() {
    int n;
    scanf("%d", &n);

    Point points[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    int countRectangles = 0;

    // Iterate through all combinations of four points
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = k + 1; l < n; l++) {
                    if (isRectangle(points[i], points[j], points[k], points[l])) {
                        printf("(%d,%d) (%d,%d) (%d,%d) (%d,%d) \n",points[i].x,points[i].y,points[j].x,points[j].y,points[k].x,points[k].y,points[l].x,points[l].y);
                        countRectangles++;
                    }
                }
            }
        }
    }

    printf("%d\n", countRectangles);

    return 0;
}
