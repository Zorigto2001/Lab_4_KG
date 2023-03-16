// Ћабораторна€ работа 4. ”даление невидимых линий поверхности методом плавающего горизонта.
// ¬ариант 4. ѕоворот вокруг осей y, x, рисование отрезками.
// «адача 6 пропеллер.

#include <cmath>

#include "graphics.h"
#include "surface.h"
#include "app.h"

bool App::running_ = false;

Surface surface(-2, 2, -2, 2, [](float x, float z) { return x * z * (x + z) * (x - z); });




//√де читаетс€ полуразмер окна 
//где уставанвливаем горзонты 
//показать циклы
//где у нас тест видимости точек
// где раздаем новые up и down
void App::Run()
{

}

void App::Draw()
{
	Graphics g;

	// surface - поверхность
	surface.Draw(g);
}

void App::Update()
{
	
		static int32_t a = 0; // angle
		static int32_t i = 1; // increment

		surface.SetAngles(25, a);

		a += i;

		if (a >= 60 || a <= -60)
		{
			i = -i;
		}

		Draw();//вра
}

void App::Init()
{
	Camera::LookAt(0, 0, -1);
	Camera::Ortho(Graphics::width / 2, Graphics::height / 2, 1);

	surface.SetAngles(15, 45);

	//Draw();
}
