// ComExperiment.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "ComExperiment_i.h"
#include "dlldatax.h"


class CComExperimentModule : public CAtlExeModuleT< CComExperimentModule >
{
public :
	DECLARE_LIBID(LIBID_ComExperimentLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMEXPERIMENT, "{D0C1B09C-6BD4-463E-B14D-A369EA237492}")
};

CComExperimentModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
                                LPTSTR /*lpCmdLine*/, int nShowCmd)
{
    return _AtlModule.WinMain(nShowCmd);
}

