// Server1.cpp : Implementation of CServer1

#include "stdafx.h"
#include "Server1.h"


// CServer1

STDMETHODIMP CServer1::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IServer1
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CServer1::GetSomething(Position* a_position)
{
  a_position->X = 777;
  a_position->Y = 888;
  a_position->Z = 999;

  return S_OK;
}

STDMETHODIMP CServer1::ReturnSomething(
  Position** a_position
)
{
  *a_position = (Position*)::CoTaskMemAlloc(sizeof(Position));
  (*a_position)->X = 222;
  (*a_position)->Y = 111;
  (*a_position)->Z = 444;
  return S_OK;
}

STDMETHODIMP CServer1::ConverEnum(
  Enm a_value
)
{
  return S_OK;
}

STDMETHODIMP CServer1::SetSomething(
  Position* a_position1,
  Position* a_position2,
  Position* a_position3,
  Position* a_position4
)
{
  m_position.X = a_position1->X;
  m_position.Y = a_position1->Y;
  m_position.Z = a_position1->Z;

  m_position.X = a_position2->X;
  m_position.Y = a_position2->Y;
  m_position.Z = a_position3->Z;

  m_position.X = a_position3->X;
  m_position.Y = a_position3->Y;
  m_position.Z = a_position3->Z;

  m_position.X = a_position4->X;
  m_position.Y = a_position4->Y;
  m_position.Z = a_position4->Z;

  return S_OK;
}

STDMETHODIMP CServer1::SetSomething1(
  Position a_position1,
  Position a_position2,
  Position a_position3,
  Position a_position4
)
{
  m_position.X = a_position1.X;
  m_position.Y = a_position1.Y;
  m_position.Z = a_position1.Z;

  m_position.X = a_position2.X;
  m_position.Y = a_position2.Y;
  m_position.Z = a_position2.Z;

  m_position.X = a_position3.X;
  m_position.Y = a_position3.Y;
  m_position.Z = a_position3.Z;

  m_position.X = a_position4.X;
  m_position.Y = a_position4.Y;
  m_position.Z = a_position4.Z;

  return S_OK;
}

STDMETHODIMP CServer1::SetSomething2(
  double a_x1, double a_y1, double a_z1,
  double a_x2, double a_y2, double a_z2,
  double a_x3, double a_y3, double a_z3,
  double a_x4, double a_y4, double a_z4
)
{
  m_position.X = a_x1;
  m_position.Y = a_y1;
  m_position.Z = a_z1;

  m_position.X = a_x2;
  m_position.Y = a_y2;
  m_position.Z = a_z2;

  m_position.X = a_x3;
  m_position.Y = a_y3;
  m_position.Z = a_z3;

  m_position.X = a_x4;
  m_position.Y = a_y4;
  m_position.Z = a_z4;

  return S_OK;
}

STDMETHODIMP CServer1::GetArray(
  long* a_p_i_size,
  Pos1** a_p_positions
)
{
  *a_p_i_size = 3;
  *a_p_positions = (Pos1*)::CoTaskMemAlloc(24);

  (*a_p_positions)[0].X = 1;
  (*a_p_positions)[0].Y = 2;

  (*a_p_positions)[1].X = 11;
  (*a_p_positions)[1].Y = 21;

  (*a_p_positions)[2].X = 111;
  (*a_p_positions)[2].Y = 211;

  return S_OK;
}
