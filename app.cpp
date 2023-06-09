// ������������ ������ 4. �������� ��������� ����� ����������� ������� ���������� ���������.
// ������� 4. ������� ������ ���� y, x, ��������� ���������.
// ������ 6 ���������.

#include <cmath>

#include "graphics.h"
#include "surface.h"
#include "app.h"

bool App::running_ = false;

Surface surface(-2, 2, -2, 2, [](float x, float z) { return x * z * (x + z) * (x - z); });




//��� �������� ���������� ���� 
//��� �������������� �������� 
//�������� �����
//��� � ��� ���� ��������� �����
// ��� ������� ����� up � down
void App::Run()
{

}

void App::Draw()
{
	Graphics g;

	// surface - �����������
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

		Draw();//���
}

void App::Init()
{
	Camera::LookAt(0, 0, -1);
	Camera::Ortho(Graphics::width / 2, Graphics::height / 2, 1);

	surface.SetAngles(15, 45);

	//Draw();
}
