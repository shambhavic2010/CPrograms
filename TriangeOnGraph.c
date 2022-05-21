#include <stdio.h>
#include <math.h>

float FindingAreaWithCoordinates( float x1, float z1, float x2, float z2, float x3, float z3);

int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4, side1, side2, side3, AreaTri, s, s1, s2, s3, s_1, s_2, s_3, area1, area2, area3;
    printf("enter x of the first point: ");
    scanf("%f", &x1);
    printf("enter y of the first point: ");
    scanf("%f", &y1);
    printf("enter x of the second point: ");
    scanf("%f", &x2);
    printf("enter y of the second point: ");
    scanf("%f", &y2);
    printf("enter x of the third point: ");
    scanf("%f", &x3);
    printf("enter y of the third point: ");
    scanf("%f", &y3);

    //finding sides of the triangle
    /*side1= sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
    side2= sqrt(pow((x2-x3), 2) + pow((y2-y3), 2));
    side3= sqrt(pow((x3-x1), 2) + pow((y3-y1), 2));
    printf("side 1= %f\n", side1);
    printf("side 2= %f\n", side2);
    printf("side 3= %f\n", side3); */


    //finding area of the triangle
    /*s= (side1+side2+side3)/2;
    AreaTri= sqrt(s*(s-side1)*(s-side2)*(s-side3));
    printf("area of triangle= %f\n", AreaTri);*/
    AreaTri = FindingAreaWithCoordinates( x1, y1, x2, y2, x3, y3);
    printf("area of triangle= %f\n", AreaTri);

    printf("enter x of extra point on graph: ");
    scanf("%f", &x4);
    printf("enter y of extra point on graph: ");
    scanf("%f", &y4);

    //finding the lenght of the lines made by connecting the extra point and the points on the triangle
    //s1= sqrt(pow((x4-x1), 2) + pow((y4-y1), 2));
    s2= sqrt(pow((x4-x2), 2) + pow((y4-y2), 2));
    s3= sqrt(pow((x4-x3), 2) + pow((y4-y3), 2));

    printf("side 1 of extra pt= %f\n", s1);
    printf("side 2 of extra pt= %f\n", s2);
    printf("side 3 of extra pt= %f\n", s3);
    //finding area of the first triangle by the lines s1, s2, and side1
    //s_1= (s1+s2+side1)/2;
    //printf("s_1= %f", s_1);
    //area1= sqrt(s_1*(s_1-side1)*(s_1-s2)*(s_1-s1));
    area1= FindingAreaWithCoordinates( x4, y4, x1, y1, x2, y2);

    printf("\narea= %f", area1);
    //finding area of the second triangle by the lines s2, s3, and side2
    /*s_2= (s3+s2+side2)/2;
    area2= sqrt(s_2*(s_2-side2)*(s_2-s2)*(s_2-s3));
    //finding area of the third triangle by the lines s1, s3, and side3
    s_3= (s1+s3+side3)/2;
    area3= sqrt(s_3*(s_3-side3)*(s_3-s3)*(s_3-s1));*/
    area2= FindingAreaWithCoordinates( x4, y4, x2, y2, x3, y3);

    printf("\narea= %f", area2);

    area3= FindingAreaWithCoordinates( x4, y4, x1, y1, x3, y3);

    printf("\narea= %f", area3);

    //finding whether point is in triangle or not

    if ((AreaTri-(area1+area2+area3))/AreaTri <= 0.001 )
    {
        printf("\nthe point is in the triangle.");
    }

    else if ((AreaTri-(area1+area2+area3))/AreaTri > 0.001)
    {
        printf("\nthe point is not in the triangle.");
    }

    return 0;
}

float FindingAreaWithCoordinates( float x1, float z1, float x2, float z2, float x3, float z3)
{
    float s, side1, side2, side3, area;
    side1=sqrt(pow((x1-x2), 2) + pow((z1-z2), 2));
    side2= sqrt(pow((x2-x3), 2) + pow((z2-z3), 2));
    side3= sqrt(pow((x3-x1), 2) + pow((z3-z1), 2));

    s= (side1+side2+side3)/2;
    area= sqrt(s*(s-side1)*(s-side2)*(s-side3));

    return area;
}