//INCLUDE EXTERNAL REFERENCES
#include "../Header/Framework.h"
#include <stdio.h>
#include <iostream>

using namespace std;

//INITILIZING FRAMEWORK
int Framework::Init()
{
	m_Window.Init();
	//RETURN VALID
	return 1;
}

//UPDATE FRAMEWORK EVERY FRAME
int Framework::Update()
{
	m_Window.Update();
	printf("Press F to close");
	char input;
	std::cin >> input;
	if (input == 'f')
	{
		return 1;
	}
	//RETURN VALID
	return 0;
}

//TERMINATE FRAMEWORK
int Framework::Terminate()
{
	m_Window.Terminate();
	//RETURN VALID
	return 1;
}
