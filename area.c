#include <stdio.h>
#include <stdlib.h>

float findArea(float width, float height)
{
    float area;
    area = width*height;
    return area;
}

int main()
{
    float heightRectangle, widthRectangle;
    float area;
    printf("Enter height: ");
    scanf("%f", &heightRectangle);
    printf("Enter width: ");
    scanf("%f", &widthRectangle);
    area = findArea (widthRectangle, heightRectangle);
    printf("The area of the rectangle is: %f\n", area);
    
    return 0;
}
