// ComExperimentClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <atlbase.h>

#include <iostream>
using namespace std;

#import "..\ComExperiment\Debug\ComExperiment.tlb"

#include <atlcomtime.h>

#define OUTPUT_TIMING(F) cout << "Time elapsed by " #F ": " << (COleDateTime::GetCurrentTime() - dt_before).GetTotalSeconds() << "\n";

int _tmain(int argc, _TCHAR* argv[])
{
  ::CoInitialize(NULL);


  {
  CComPtr<ComExperimentLib::IServer1> cp_server;

  GUID guid_SERVER = __uuidof(ComExperimentLib::Server1);

  cp_server.CoCreateInstance(__uuidof(ComExperimentLib::Server1));

  long i;
  ComExperimentLib::Pos1* p_pos;

  ::MessageBoxW(NULL, L"aaa", NULL, NULL);
  p_pos = cp_server->GetArray(&i);

  cout << p_pos[1].X;
  }

  //ComExperimentLib::Position pos;
  //pos.X = 111;
  //pos.Y = 222;
  //pos.Z = 333;

  //int i_steps = 100000;

  //{
  //  COleDateTime dt_before = COleDateTime::GetCurrentTime();

  //  for (int i=0; i<i_steps; i++) {
  //    cp_server->SetSomething(&pos, &pos, &pos, &pos);
  //  }

  //  OUTPUT_TIMING(SetSomething);
  //}

  ////---------------------------------------------------------------------------
  //{
  //  COleDateTime dt_before = COleDateTime::GetCurrentTime();

  //  for (int i=0; i<i_steps; i++) {
  //    cp_server->SetSomething1(pos, pos, pos, pos);
  //  }

  //  OUTPUT_TIMING(SetSomething1);
  //}

  ////---------------------------------------------------------------------------
  //{
  //  COleDateTime dt_before = COleDateTime::GetCurrentTime();

  //  for (int i=0; i<i_steps; i++) {
  //    cp_server->SetSomething2(
  //      pos.X, pos.Y, pos.Z,
  //      pos.X, pos.Y, pos.Z,
  //      pos.X, pos.Y, pos.Z,
  //      pos.X, pos.Y, pos.Z
  //    );
  //  }

  //  OUTPUT_TIMING(SetSomething2);
  //}

  ::CoUninitialize();
	
  return 0;
}

