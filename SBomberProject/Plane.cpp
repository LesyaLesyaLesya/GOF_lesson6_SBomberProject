
#include <iostream>

#include "Plane.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

/*void Plane::Draw() const
{
    MyTools::SetColor(CC_LightBlue);
    GotoXY(x, y);
    cout << "=========>";
    GotoXY(x - 2, y - 1);
    cout << "===";
    GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\";
    GotoXY(x + 3, y + 1);
    cout << "////";
}*/
void ColorPlane::Draw() const
{
    /*MyTools::SetColor(CC_LightBlue);
    GotoXY(x, y);
    cout << "=========>";
    GotoXY(x - 2, y - 1);
    cout << "===";
    GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\";
    GotoXY(x + 3, y + 1);
    cout << "////";*/
    
    DrawBody();
    DrawWings();
    DrawTail();
}

void ColorPlane::DrawTail() const
{
    MyTools::SetColor(CC_LightBlue);
    //GotoXY(x, y);
   // cout << "=========>";
    GotoXY(x - 2, y - 1);
    cout << "===";
    //GotoXY(x + 3, y - 1);
    //cout << "\\\\\\\\";
   // GotoXY(x + 3, y + 1);
    //cout << "////";
}

void ColorPlane::DrawBody() const
{
    MyTools::SetColor(CC_LightMagenta);
    GotoXY(x, y);
    cout << "=========>";
    //GotoXY(x - 2, y - 1);
   // cout << "===";
    //GotoXY(x + 3, y - 1);
    //cout << "\\\\\\\\";
   // GotoXY(x + 3, y + 1);
   // cout << "////";
}

void ColorPlane::DrawWings() const
{
    MyTools::SetColor(CC_Yellow);
    //GotoXY(x, y);
   // cout << "=========>";
   //GotoXY(x - 2, y - 1);
    //cout << "===";
    GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\";
    GotoXY(x + 3, y + 1);
    cout << "////";
}

void BigPlane::Draw() const
{
    //получилось какое-то чудовище)))))

    DrawBody();
    DrawWings();
    DrawTail();
}

void BigPlane::DrawTail() const
{
    MyTools::SetColor(CC_LightMagenta);
    //GotoXY(x, y);
   // cout << "=========>";
    GotoXY(x - 2, y - 1);
    cout << ">>>=====";
    //GotoXY(x + 3, y - 1);
    //cout << "\\\\\\\\";
   // GotoXY(x + 3, y + 1);
    //cout << "////";
}

void BigPlane::DrawBody() const
{
    MyTools::SetColor(CC_LightMagenta);
    GotoXY(x, y);
    cout << "@@@@=========>";
    //GotoXY(x - 2, y - 1);
   // cout << "===";
    //GotoXY(x + 3, y - 1);
    //cout << "\\\\\\\\";
   // GotoXY(x + 3, y + 1);
   // cout << "////";
}

void BigPlane::DrawWings() const
{
    MyTools::SetColor(CC_LightMagenta);
    //GotoXY(x, y);
   // cout << "=========>";
   //GotoXY(x - 2, y - 1);
    //cout << "===";
    GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\////";
    GotoXY(x + 3, y + 1);
    cout << "////\\\\";
}