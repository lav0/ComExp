// Server1.h : Declaration of the CServer1

#pragma once
#include "resource.h"       // main symbols

#include "ComExperiment_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CServer1

class ATL_NO_VTABLE CServer1 :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CServer1, &CLSID_Server1>,
	public ISupportErrorInfo,
	public IDispatchImpl<IServer1, &IID_IServer1, &LIBID_ComExperimentLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CServer1()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SERVER1)

DECLARE_NOT_AGGREGATABLE(CServer1)

BEGIN_COM_MAP(CServer1)
	COM_INTERFACE_ENTRY(IServer1)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

  STDMETHOD(GetSomething)(Position* a_position);

  STDMETHOD(ReturnSomething)(
    Position** a_position
  );

  STDMETHOD(ConverEnum)(
    Enm a_value
  );

  STDMETHOD(SetSomething)(
    Position* a_position1,
    Position* a_position2,
    Position* a_position3,
    Position* a_position4
  );

  STDMETHOD(SetSomething1)(
    Position a_position1,
    Position a_position2,
    Position a_position3,
    Position a_position4
  );

  STDMETHOD(SetSomething2)(
    double a_x1, double a_y1, double a_z1,
    double a_x2, double a_y2, double a_z2,
    double a_x3, double a_y3, double a_z3,
    double a_x4, double a_y4, double a_z4
  );

  STDMETHOD(GetArray)(
    long* a_p_i_size,
    Pos1** a_p_positions
  );

  Position m_position;
};

OBJECT_ENTRY_AUTO(__uuidof(Server1), CServer1)
