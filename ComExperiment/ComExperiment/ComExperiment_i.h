

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Oct 11 12:11:18 2013
 */
/* Compiler settings for ComExperiment.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ComExperiment_i_h__
#define __ComExperiment_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IServer1_FWD_DEFINED__
#define __IServer1_FWD_DEFINED__
typedef interface IServer1 IServer1;
#endif 	/* __IServer1_FWD_DEFINED__ */


#ifndef __Server1_FWD_DEFINED__
#define __Server1_FWD_DEFINED__

#ifdef __cplusplus
typedef class Server1 Server1;
#else
typedef struct Server1 Server1;
#endif /* __cplusplus */

#endif 	/* __Server1_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ComExperiment_0000_0000 */
/* [local] */ 

/* [uuid] */ struct  DECLSPEC_UUID("D3256DE7-C15A-407f-B88F-CBD226AD71A8") Position
    {
    double X;
    double Y;
    double Z;
    } ;
struct Pos1
    {
    int X;
    int Y;
    } ;

enum Enm
    {	E1	= 0,
	E2	= 1,
	E3	= 2
    } ;


extern RPC_IF_HANDLE __MIDL_itf_ComExperiment_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ComExperiment_0000_0000_v0_0_s_ifspec;

#ifndef __IServer1_INTERFACE_DEFINED__
#define __IServer1_INTERFACE_DEFINED__

/* interface IServer1 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IServer1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("407FBED6-BA49-4398-AF61-0FAD321813F7")
    IServer1 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSomething( 
            /* [out] */ struct Position *a_position) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReturnSomething( 
            /* [retval][out] */ struct Position **a_position) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConverEnum( 
            /* [in] */ enum Enm a_value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSomething( 
            /* [in] */ struct Position *a_position1,
            /* [in] */ struct Position *a_position2,
            /* [in] */ struct Position *a_position3,
            /* [in] */ struct Position *a_position4) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSomething1( 
            /* [in] */ struct Position a_position1,
            /* [in] */ struct Position a_position2,
            /* [in] */ struct Position a_position3,
            /* [in] */ struct Position a_position4) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSomething2( 
            /* [in] */ double a_x1,
            /* [in] */ double a_y1,
            /* [in] */ double a_z1,
            /* [in] */ double a_x2,
            /* [in] */ double a_y2,
            /* [in] */ double a_z2,
            /* [in] */ double a_x3,
            /* [in] */ double a_y3,
            /* [in] */ double a_z3,
            /* [in] */ double a_x4,
            /* [in] */ double a_y4,
            /* [in] */ double a_z4) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArray( 
            /* [out] */ long *a_p_i_size,
            /* [size_is][size_is][retval][out] */ struct Pos1 **a_p_positions) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IServer1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IServer1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IServer1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IServer1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IServer1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IServer1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IServer1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IServer1 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSomething )( 
            IServer1 * This,
            /* [out] */ struct Position *a_position);
        
        HRESULT ( STDMETHODCALLTYPE *ReturnSomething )( 
            IServer1 * This,
            /* [retval][out] */ struct Position **a_position);
        
        HRESULT ( STDMETHODCALLTYPE *ConverEnum )( 
            IServer1 * This,
            /* [in] */ enum Enm a_value);
        
        HRESULT ( STDMETHODCALLTYPE *SetSomething )( 
            IServer1 * This,
            /* [in] */ struct Position *a_position1,
            /* [in] */ struct Position *a_position2,
            /* [in] */ struct Position *a_position3,
            /* [in] */ struct Position *a_position4);
        
        HRESULT ( STDMETHODCALLTYPE *SetSomething1 )( 
            IServer1 * This,
            /* [in] */ struct Position a_position1,
            /* [in] */ struct Position a_position2,
            /* [in] */ struct Position a_position3,
            /* [in] */ struct Position a_position4);
        
        HRESULT ( STDMETHODCALLTYPE *SetSomething2 )( 
            IServer1 * This,
            /* [in] */ double a_x1,
            /* [in] */ double a_y1,
            /* [in] */ double a_z1,
            /* [in] */ double a_x2,
            /* [in] */ double a_y2,
            /* [in] */ double a_z2,
            /* [in] */ double a_x3,
            /* [in] */ double a_y3,
            /* [in] */ double a_z3,
            /* [in] */ double a_x4,
            /* [in] */ double a_y4,
            /* [in] */ double a_z4);
        
        HRESULT ( STDMETHODCALLTYPE *GetArray )( 
            IServer1 * This,
            /* [out] */ long *a_p_i_size,
            /* [size_is][size_is][retval][out] */ struct Pos1 **a_p_positions);
        
        END_INTERFACE
    } IServer1Vtbl;

    interface IServer1
    {
        CONST_VTBL struct IServer1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IServer1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IServer1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IServer1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IServer1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IServer1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IServer1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IServer1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IServer1_GetSomething(This,a_position)	\
    ( (This)->lpVtbl -> GetSomething(This,a_position) ) 

#define IServer1_ReturnSomething(This,a_position)	\
    ( (This)->lpVtbl -> ReturnSomething(This,a_position) ) 

#define IServer1_ConverEnum(This,a_value)	\
    ( (This)->lpVtbl -> ConverEnum(This,a_value) ) 

#define IServer1_SetSomething(This,a_position1,a_position2,a_position3,a_position4)	\
    ( (This)->lpVtbl -> SetSomething(This,a_position1,a_position2,a_position3,a_position4) ) 

#define IServer1_SetSomething1(This,a_position1,a_position2,a_position3,a_position4)	\
    ( (This)->lpVtbl -> SetSomething1(This,a_position1,a_position2,a_position3,a_position4) ) 

#define IServer1_SetSomething2(This,a_x1,a_y1,a_z1,a_x2,a_y2,a_z2,a_x3,a_y3,a_z3,a_x4,a_y4,a_z4)	\
    ( (This)->lpVtbl -> SetSomething2(This,a_x1,a_y1,a_z1,a_x2,a_y2,a_z2,a_x3,a_y3,a_z3,a_x4,a_y4,a_z4) ) 

#define IServer1_GetArray(This,a_p_i_size,a_p_positions)	\
    ( (This)->lpVtbl -> GetArray(This,a_p_i_size,a_p_positions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IServer1_INTERFACE_DEFINED__ */



#ifndef __ComExperimentLib_LIBRARY_DEFINED__
#define __ComExperimentLib_LIBRARY_DEFINED__

/* library ComExperimentLib */
/* [helpstring][version][uuid] */ 




EXTERN_C const IID LIBID_ComExperimentLib;

EXTERN_C const CLSID CLSID_Server1;

#ifdef __cplusplus

class DECLSPEC_UUID("5E9284D3-E31D-4BE5-9774-7616067598A6")
Server1;
#endif
#endif /* __ComExperimentLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


