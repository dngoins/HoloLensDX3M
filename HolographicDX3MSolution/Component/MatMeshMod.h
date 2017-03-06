

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for C:\Users\dngoi\AppData\Local\Temp\MatMeshMod.idl-e1421d38:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0620 
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
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __MatMeshMod_h__
#define __MatMeshMod_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIIterator_1_MatMeshMod__CIMesh_FWD_DEFINED__
#define ____FIIterator_1_MatMeshMod__CIMesh_FWD_DEFINED__
typedef interface __FIIterator_1_MatMeshMod__CIMesh __FIIterator_1_MatMeshMod__CIMesh;

#endif 	/* ____FIIterator_1_MatMeshMod__CIMesh_FWD_DEFINED__ */


#ifndef ____FIIterable_1_MatMeshMod__CIMesh_FWD_DEFINED__
#define ____FIIterable_1_MatMeshMod__CIMesh_FWD_DEFINED__
typedef interface __FIIterable_1_MatMeshMod__CIMesh __FIIterable_1_MatMeshMod__CIMesh;

#endif 	/* ____FIIterable_1_MatMeshMod__CIMesh_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_MatMeshMod__CIMesh_FWD_DEFINED__
#define ____FIVectorView_1_MatMeshMod__CIMesh_FWD_DEFINED__
typedef interface __FIVectorView_1_MatMeshMod__CIMesh __FIVectorView_1_MatMeshMod__CIMesh;

#endif 	/* ____FIVectorView_1_MatMeshMod__CIMesh_FWD_DEFINED__ */


#ifndef ____FIIterator_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__
#define ____FIIterator_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__
typedef interface __FIIterator_1_MatMeshMod__CIModelMaterial __FIIterator_1_MatMeshMod__CIModelMaterial;

#endif 	/* ____FIIterator_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__ */


#ifndef ____FIIterable_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__
#define ____FIIterable_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__
typedef interface __FIIterable_1_MatMeshMod__CIModelMaterial __FIIterable_1_MatMeshMod__CIModelMaterial;

#endif 	/* ____FIIterable_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__
#define ____FIVectorView_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__
typedef interface __FIVectorView_1_MatMeshMod__CIModelMaterial __FIVectorView_1_MatMeshMod__CIModelMaterial;

#endif 	/* ____FIVectorView_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__ */


#ifndef ____x_ABI_CMatMeshMod_CIModel_FWD_DEFINED__
#define ____x_ABI_CMatMeshMod_CIModel_FWD_DEFINED__
typedef interface __x_ABI_CMatMeshMod_CIModel __x_ABI_CMatMeshMod_CIModel;

#ifdef __cplusplus
namespace ABI {
    namespace MatMeshMod {
        interface IModel;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CMatMeshMod_CIModel_FWD_DEFINED__ */


#ifndef ____x_ABI_CMatMeshMod_CIModelFactory_FWD_DEFINED__
#define ____x_ABI_CMatMeshMod_CIModelFactory_FWD_DEFINED__
typedef interface __x_ABI_CMatMeshMod_CIModelFactory __x_ABI_CMatMeshMod_CIModelFactory;

#ifdef __cplusplus
namespace ABI {
    namespace MatMeshMod {
        interface IModelFactory;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CMatMeshMod_CIModelFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CMatMeshMod_CIModelMaterial_FWD_DEFINED__
#define ____x_ABI_CMatMeshMod_CIModelMaterial_FWD_DEFINED__
typedef interface __x_ABI_CMatMeshMod_CIModelMaterial __x_ABI_CMatMeshMod_CIModelMaterial;

#ifdef __cplusplus
namespace ABI {
    namespace MatMeshMod {
        interface IModelMaterial;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CMatMeshMod_CIModelMaterial_FWD_DEFINED__ */


#ifndef ____x_ABI_CMatMeshMod_CIModelMaterialFactory_FWD_DEFINED__
#define ____x_ABI_CMatMeshMod_CIModelMaterialFactory_FWD_DEFINED__
typedef interface __x_ABI_CMatMeshMod_CIModelMaterialFactory __x_ABI_CMatMeshMod_CIModelMaterialFactory;

#ifdef __cplusplus
namespace ABI {
    namespace MatMeshMod {
        interface IModelMaterialFactory;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CMatMeshMod_CIModelMaterialFactory_FWD_DEFINED__ */


#ifndef ____FIIterator_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define ____FIIterator_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
typedef interface __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 __FIIterator_1_Windows__CFoundation__CNumerics__CVector3;

#endif 	/* ____FIIterator_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define ____FIIterable_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
typedef interface __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 __FIIterable_1_Windows__CFoundation__CNumerics__CVector3;

#endif 	/* ____FIIterable_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define ____FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
typedef interface __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3;

#endif 	/* ____FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__ */


#ifndef ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
typedef interface __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3;

#endif 	/* ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__ */


#ifndef ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
typedef interface __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3;

#endif 	/* ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__ */


#ifndef ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
typedef interface __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3;

#endif 	/* ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__ */


#ifndef ____FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define ____FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
typedef interface __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion;

#endif 	/* ____FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define ____FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
typedef interface __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion;

#endif 	/* ____FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define ____FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
typedef interface __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion;

#endif 	/* ____FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__ */


#ifndef ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
typedef interface __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion;

#endif 	/* ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__ */


#ifndef ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
typedef interface __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion;

#endif 	/* ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__ */


#ifndef ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
typedef interface __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion;

#endif 	/* ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__ */


#ifndef ____x_ABI_CMatMeshMod_CIMesh_FWD_DEFINED__
#define ____x_ABI_CMatMeshMod_CIMesh_FWD_DEFINED__
typedef interface __x_ABI_CMatMeshMod_CIMesh __x_ABI_CMatMeshMod_CIMesh;

#ifdef __cplusplus
namespace ABI {
    namespace MatMeshMod {
        interface IMesh;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CMatMeshMod_CIMesh_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "windows.ui.core.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_MatMeshMod_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
namespace ABI {
namespace MatMeshMod {
interface IMesh;
} /*MatMeshMod*/
}
#endif


/* interface __MIDL_itf_MatMeshMod_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3106 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3106 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3106_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3106_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_MatMeshMod__CIMesh_USE
#define DEF___FIIterator_1_MatMeshMod__CIMesh_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fddfe530-ebd7-5b53-83da-cbb511babb60"))
IIterator<ABI::MatMeshMod::IMesh*> : IIterator_impl<ABI::MatMeshMod::IMesh*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<MatMeshMod.IMesh>"; }
};
typedef IIterator<ABI::MatMeshMod::IMesh*> __FIIterator_1_MatMeshMod__CIMesh_t;
#define ____FIIterator_1_MatMeshMod__CIMesh_FWD_DEFINED__
#define __FIIterator_1_MatMeshMod__CIMesh ABI::Windows::Foundation::Collections::__FIIterator_1_MatMeshMod__CIMesh_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_MatMeshMod__CIMesh_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3107 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3107 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3107_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_MatMeshMod__CIMesh_USE
#define DEF___FIIterable_1_MatMeshMod__CIMesh_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c30659e1-29f3-50d9-8461-f5e91d818fb1"))
IIterable<ABI::MatMeshMod::IMesh*> : IIterable_impl<ABI::MatMeshMod::IMesh*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<MatMeshMod.IMesh>"; }
};
typedef IIterable<ABI::MatMeshMod::IMesh*> __FIIterable_1_MatMeshMod__CIMesh_t;
#define ____FIIterable_1_MatMeshMod__CIMesh_FWD_DEFINED__
#define __FIIterable_1_MatMeshMod__CIMesh ABI::Windows::Foundation::Collections::__FIIterable_1_MatMeshMod__CIMesh_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_MatMeshMod__CIMesh_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3108 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3108 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3108_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0003 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_MatMeshMod__CIMesh_USE
#define DEF___FIVectorView_1_MatMeshMod__CIMesh_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("513c80de-dc6f-59d5-85d8-a531b6ff0e10"))
IVectorView<ABI::MatMeshMod::IMesh*> : IVectorView_impl<ABI::MatMeshMod::IMesh*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<MatMeshMod.IMesh>"; }
};
typedef IVectorView<ABI::MatMeshMod::IMesh*> __FIVectorView_1_MatMeshMod__CIMesh_t;
#define ____FIVectorView_1_MatMeshMod__CIMesh_FWD_DEFINED__
#define __FIVectorView_1_MatMeshMod__CIMesh ABI::Windows::Foundation::Collections::__FIVectorView_1_MatMeshMod__CIMesh_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_MatMeshMod__CIMesh_USE */

#ifdef __cplusplus
namespace ABI {
namespace MatMeshMod {
interface IModelMaterial;
} /*MatMeshMod*/
}
#endif


/* interface __MIDL_itf_MatMeshMod_0000_0003 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3109 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3109 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3109_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0004 */
/* [local] */ 

#ifndef DEF___FIIterator_1_MatMeshMod__CIModelMaterial_USE
#define DEF___FIIterator_1_MatMeshMod__CIModelMaterial_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("360a185f-1fc1-50f1-8339-2fee473b0b13"))
IIterator<ABI::MatMeshMod::IModelMaterial*> : IIterator_impl<ABI::MatMeshMod::IModelMaterial*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<MatMeshMod.IModelMaterial>"; }
};
typedef IIterator<ABI::MatMeshMod::IModelMaterial*> __FIIterator_1_MatMeshMod__CIModelMaterial_t;
#define ____FIIterator_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__
#define __FIIterator_1_MatMeshMod__CIModelMaterial ABI::Windows::Foundation::Collections::__FIIterator_1_MatMeshMod__CIModelMaterial_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_MatMeshMod__CIModelMaterial_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3110 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3110 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3110_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0005 */
/* [local] */ 

#ifndef DEF___FIIterable_1_MatMeshMod__CIModelMaterial_USE
#define DEF___FIIterable_1_MatMeshMod__CIModelMaterial_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ea08b211-178c-5d55-94ed-1a8cc2751c07"))
IIterable<ABI::MatMeshMod::IModelMaterial*> : IIterable_impl<ABI::MatMeshMod::IModelMaterial*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<MatMeshMod.IModelMaterial>"; }
};
typedef IIterable<ABI::MatMeshMod::IModelMaterial*> __FIIterable_1_MatMeshMod__CIModelMaterial_t;
#define ____FIIterable_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__
#define __FIIterable_1_MatMeshMod__CIModelMaterial ABI::Windows::Foundation::Collections::__FIIterable_1_MatMeshMod__CIModelMaterial_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_MatMeshMod__CIModelMaterial_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3111 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3111 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3111_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0006 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_MatMeshMod__CIModelMaterial_USE
#define DEF___FIVectorView_1_MatMeshMod__CIModelMaterial_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1971778c-90e0-5d7f-8624-5771efae48d6"))
IVectorView<ABI::MatMeshMod::IModelMaterial*> : IVectorView_impl<ABI::MatMeshMod::IModelMaterial*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<MatMeshMod.IModelMaterial>"; }
};
typedef IVectorView<ABI::MatMeshMod::IModelMaterial*> __FIVectorView_1_MatMeshMod__CIModelMaterial_t;
#define ____FIVectorView_1_MatMeshMod__CIModelMaterial_FWD_DEFINED__
#define __FIVectorView_1_MatMeshMod__CIModelMaterial ABI::Windows::Foundation::Collections::__FIVectorView_1_MatMeshMod__CIModelMaterial_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_MatMeshMod__CIModelMaterial_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3112 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3112 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3112_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3112_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0007 */
/* [local] */ 

#ifndef DEF___FIIterator_1_byte_USE
#define DEF___FIIterator_1_byte_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("40556131-a2a1-5fab-aaee-5f35268ca26b"))
IIterator<byte> : IIterator_impl<byte> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<UInt8>"; }
};
typedef IIterator<byte> __FIIterator_1_byte_t;
#define ____FIIterator_1_byte_FWD_DEFINED__
#define __FIIterator_1_byte ABI::Windows::Foundation::Collections::__FIIterator_1_byte_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_byte_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3113 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3113 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3113_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0008 */
/* [local] */ 

#ifndef DEF___FIIterable_1_byte_USE
#define DEF___FIIterable_1_byte_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("88318266-f3fd-50fc-8f08-b823a41b60c1"))
IIterable<byte> : IIterable_impl<byte> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<UInt8>"; }
};
typedef IIterable<byte> __FIIterable_1_byte_t;
#define ____FIIterable_1_byte_FWD_DEFINED__
#define __FIIterable_1_byte ABI::Windows::Foundation::Collections::__FIIterable_1_byte_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_byte_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0008 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3114 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3114 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3114_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0009 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_byte_USE
#define DEF___FIVectorView_1_byte_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6d05fb29-7885-544e-9382-a1ad391a3fa4"))
IVectorView<byte> : IVectorView_impl<byte> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<UInt8>"; }
};
typedef IVectorView<byte> __FIVectorView_1_byte_t;
#define ____FIVectorView_1_byte_FWD_DEFINED__
#define __FIVectorView_1_byte ABI::Windows::Foundation::Collections::__FIVectorView_1_byte_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_byte_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
namespace Numerics {
struct Vector3;
} /*Numerics*/
} /*Foundation*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_MatMeshMod_0000_0009 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0009_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3115 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3115 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3115_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0010 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CFoundation__CNumerics__CVector3_USE
#define DEF___FIIterator_1_Windows__CFoundation__CNumerics__CVector3_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e107793e-538c-5cc6-8ce6-1802e91b9ba5"))
IIterator<struct ABI::Windows::Foundation::Numerics::Vector3> : IIterator_impl<struct ABI::Windows::Foundation::Numerics::Vector3> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Numerics.Vector3>"; }
};
typedef IIterator<struct ABI::Windows::Foundation::Numerics::Vector3> __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_t;
#define ____FIIterator_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CFoundation__CNumerics__CVector3_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Windows__CFoundation__CNumerics__CVector3_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0010 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3116 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3116 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3116_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3116_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0011 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CFoundation__CNumerics__CVector3_USE
#define DEF___FIIterable_1_Windows__CFoundation__CNumerics__CVector3_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f89aa9d0-2b80-506f-85f7-757b90413a52"))
IIterable<struct ABI::Windows::Foundation::Numerics::Vector3> : IIterable_impl<struct ABI::Windows::Foundation::Numerics::Vector3> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Numerics.Vector3>"; }
};
typedef IIterable<struct ABI::Windows::Foundation::Numerics::Vector3> __FIIterable_1_Windows__CFoundation__CNumerics__CVector3_t;
#define ____FIIterable_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CFoundation__CNumerics__CVector3_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Windows__CFoundation__CNumerics__CVector3_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0011 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0011_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3117 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3117 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3117_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3117_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0012 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE
#define DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3040460a-395b-5662-9da2-0cba2c9d9ad1"))
IVectorView<struct ABI::Windows::Foundation::Numerics::Vector3> : IVectorView_impl<struct ABI::Windows::Foundation::Numerics::Vector3> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Numerics.Vector3>"; }
};
typedef IVectorView<struct ABI::Windows::Foundation::Numerics::Vector3> __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_t;
#define ____FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0012 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0012_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3118 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3118 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3118_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3118_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0013 */
/* [local] */ 

#ifndef DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE
#define DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("40deb5ad-f225-55e1-a754-e9bb515455f6"))
IIterator<__FIVectorView_1_Windows__CFoundation__CNumerics__CVector3*> : IIterator_impl<__FIVectorView_1_Windows__CFoundation__CNumerics__CVector3*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Numerics.Vector3>>"; }
};
typedef IIterator<__FIVectorView_1_Windows__CFoundation__CNumerics__CVector3*> __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_t;
#define ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::Collections::__FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0013 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0013_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3119 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3119 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3119_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3119_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0014 */
/* [local] */ 

#ifndef DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE
#define DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("727d7974-d7f6-5b6f-831b-7f2b091b1639"))
IIterable<__FIVectorView_1_Windows__CFoundation__CNumerics__CVector3*> : IIterable_impl<__FIVectorView_1_Windows__CFoundation__CNumerics__CVector3*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Numerics.Vector3>>"; }
};
typedef IIterable<__FIVectorView_1_Windows__CFoundation__CNumerics__CVector3*> __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_t;
#define ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::Collections::__FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0014 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0014_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3120 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3120 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3120_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3120_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0015 */
/* [local] */ 

#ifndef DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE
#define DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("124a4e42-d1f9-5405-8cf4-78ecb56d57e9"))
IVectorView<__FIVectorView_1_Windows__CFoundation__CNumerics__CVector3*> : IVectorView_impl<__FIVectorView_1_Windows__CFoundation__CNumerics__CVector3*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Numerics.Vector3>>"; }
};
typedef IVectorView<__FIVectorView_1_Windows__CFoundation__CNumerics__CVector3*> __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_t;
#define ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_FWD_DEFINED__
#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::Collections::__FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
namespace Numerics {
struct Quaternion;
} /*Numerics*/
} /*Foundation*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_MatMeshMod_0000_0015 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0015_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3121 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3121 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3121_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3121_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0016 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#define DEF___FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3d11f83c-e516-5fbc-96f9-be9330bedb0a"))
IIterator<struct ABI::Windows::Foundation::Numerics::Quaternion> : IIterator_impl<struct ABI::Windows::Foundation::Numerics::Quaternion> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Numerics.Quaternion>"; }
};
typedef IIterator<struct ABI::Windows::Foundation::Numerics::Quaternion> __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_t;
#define ____FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0016 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0016_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3122 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3122 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3122_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3122_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0017 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#define DEF___FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f4def91a-2386-5064-af03-5771cab12a39"))
IIterable<struct ABI::Windows::Foundation::Numerics::Quaternion> : IIterable_impl<struct ABI::Windows::Foundation::Numerics::Quaternion> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Numerics.Quaternion>"; }
};
typedef IIterable<struct ABI::Windows::Foundation::Numerics::Quaternion> __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_t;
#define ____FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0017 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0017_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3123 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3123 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3123_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3123_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0018 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#define DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2772d7a0-b9c1-575e-9b6f-cefa25843609"))
IVectorView<struct ABI::Windows::Foundation::Numerics::Quaternion> : IVectorView_impl<struct ABI::Windows::Foundation::Numerics::Quaternion> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Numerics.Quaternion>"; }
};
typedef IVectorView<struct ABI::Windows::Foundation::Numerics::Quaternion> __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_t;
#define ____FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0018 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0018_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3124 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3124 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3124_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3124_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0019 */
/* [local] */ 

#ifndef DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#define DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("397922a1-19cf-50bc-95ab-774d40d8cf4a"))
IIterator<__FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion*> : IIterator_impl<__FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Numerics.Quaternion>>"; }
};
typedef IIterator<__FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion*> __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_t;
#define ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion ABI::Windows::Foundation::Collections::__FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0019 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0019_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3125 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3125 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3125_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3125_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0020 */
/* [local] */ 

#ifndef DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#define DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("97a929b7-6512-51f0-9ef1-4d7568ab38a1"))
IIterable<__FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion*> : IIterable_impl<__FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Numerics.Quaternion>>"; }
};
typedef IIterable<__FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion*> __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_t;
#define ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion ABI::Windows::Foundation::Collections::__FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0020 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0020_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3126 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3126 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3126_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3126_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0021 */
/* [local] */ 

#ifndef DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#define DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2040f7a8-d95d-5301-9c9d-f150b60516b8"))
IVectorView<__FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion*> : IVectorView_impl<__FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Numerics.Quaternion>>"; }
};
typedef IVectorView<__FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion*> __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_t;
#define ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_FWD_DEFINED__
#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion ABI::Windows::Foundation::Collections::__FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0021 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0021_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3127 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3127 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3127_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3127_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0022 */
/* [local] */ 

#ifndef DEF___FIIterator_1_UINT32_USE
#define DEF___FIIterator_1_UINT32_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f06a2739-9443-5ef0-b284-dc5aff3e7d10"))
IIterator<UINT32> : IIterator_impl<UINT32> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<UInt32>"; }
};
typedef IIterator<UINT32> __FIIterator_1_UINT32_t;
#define ____FIIterator_1_UINT32_FWD_DEFINED__
#define __FIIterator_1_UINT32 ABI::Windows::Foundation::Collections::__FIIterator_1_UINT32_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_UINT32_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0022 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0022_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3128 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3128 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3128_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3128_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0023 */
/* [local] */ 

#ifndef DEF___FIIterable_1_UINT32_USE
#define DEF___FIIterable_1_UINT32_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("421d4b91-b13b-5f37-ae54-b5249bd80539"))
IIterable<UINT32> : IIterable_impl<UINT32> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<UInt32>"; }
};
typedef IIterable<UINT32> __FIIterable_1_UINT32_t;
#define ____FIIterable_1_UINT32_FWD_DEFINED__
#define __FIIterable_1_UINT32 ABI::Windows::Foundation::Collections::__FIIterable_1_UINT32_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_UINT32_USE */


/* interface __MIDL_itf_MatMeshMod_0000_0023 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0023_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3129 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3129 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3129_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3129_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0024 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_UINT32_USE
#define DEF___FIVectorView_1_UINT32_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e5ce1a07-8d33-5007-ba64-7d2508ccf85c"))
IVectorView<UINT32> : IVectorView_impl<UINT32> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<UInt32>"; }
};
typedef IVectorView<UINT32> __FIVectorView_1_UINT32_t;
#define ____FIVectorView_1_UINT32_FWD_DEFINED__
#define __FIVectorView_1_UINT32 ABI::Windows::Foundation::Collections::__FIVectorView_1_UINT32_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_UINT32_USE */
#ifdef __cplusplus
namespace ABI {
namespace MatMeshMod {
class Model;
} /*MatMeshMod*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace MatMeshMod {
class Mesh;
} /*MatMeshMod*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace MatMeshMod {
class ModelMaterial;
} /*MatMeshMod*/
}
#endif


/* interface __MIDL_itf_MatMeshMod_0000_0024 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0024_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3130 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3130 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3130_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3130_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0025 */
/* [local] */ 

#ifndef DEF___FIIterator_1_MatMeshMod__CIMesh
#define DEF___FIIterator_1_MatMeshMod__CIMesh
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0025 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0025_v0_0_s_ifspec;

#ifndef ____FIIterator_1_MatMeshMod__CIMesh_INTERFACE_DEFINED__
#define ____FIIterator_1_MatMeshMod__CIMesh_INTERFACE_DEFINED__

/* interface __FIIterator_1_MatMeshMod__CIMesh */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_MatMeshMod__CIMesh */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_MatMeshMod__CIMesh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fddfe530-ebd7-5b53-83da-cbb511babb60")
    __FIIterator_1_MatMeshMod__CIMesh : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ ABI::MatMeshMod::IMesh **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ ABI::MatMeshMod::IMesh **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_MatMeshMod__CIMeshVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterator_1_MatMeshMod__CIMesh * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterator_1_MatMeshMod__CIMesh * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterator_1_MatMeshMod__CIMesh * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterator_1_MatMeshMod__CIMesh * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterator_1_MatMeshMod__CIMesh * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterator_1_MatMeshMod__CIMesh * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __FIIterator_1_MatMeshMod__CIMesh * This,
            /* [retval][out] */ __x_ABI_CMatMeshMod_CIMesh **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __FIIterator_1_MatMeshMod__CIMesh * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __FIIterator_1_MatMeshMod__CIMesh * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIIterator_1_MatMeshMod__CIMesh * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CMatMeshMod_CIMesh **items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_MatMeshMod__CIMeshVtbl;

    interface __FIIterator_1_MatMeshMod__CIMesh
    {
        CONST_VTBL struct __FIIterator_1_MatMeshMod__CIMeshVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_MatMeshMod__CIMesh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_MatMeshMod__CIMesh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_MatMeshMod__CIMesh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_MatMeshMod__CIMesh_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_MatMeshMod__CIMesh_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_MatMeshMod__CIMesh_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_MatMeshMod__CIMesh_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_MatMeshMod__CIMesh_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_MatMeshMod__CIMesh_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_MatMeshMod__CIMesh_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_MatMeshMod__CIMesh_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0026 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_MatMeshMod__CIMesh */


/* interface __MIDL_itf_MatMeshMod_0000_0026 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0026_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3131 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3131 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3131_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3131_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0027 */
/* [local] */ 

#ifndef DEF___FIIterable_1_MatMeshMod__CIMesh
#define DEF___FIIterable_1_MatMeshMod__CIMesh
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0027 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0027_v0_0_s_ifspec;

#ifndef ____FIIterable_1_MatMeshMod__CIMesh_INTERFACE_DEFINED__
#define ____FIIterable_1_MatMeshMod__CIMesh_INTERFACE_DEFINED__

/* interface __FIIterable_1_MatMeshMod__CIMesh */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_MatMeshMod__CIMesh */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_MatMeshMod__CIMesh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c30659e1-29f3-50d9-8461-f5e91d818fb1")
    __FIIterable_1_MatMeshMod__CIMesh : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __FIIterator_1_MatMeshMod__CIMesh **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_MatMeshMod__CIMeshVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterable_1_MatMeshMod__CIMesh * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterable_1_MatMeshMod__CIMesh * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterable_1_MatMeshMod__CIMesh * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterable_1_MatMeshMod__CIMesh * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterable_1_MatMeshMod__CIMesh * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterable_1_MatMeshMod__CIMesh * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __FIIterable_1_MatMeshMod__CIMesh * This,
            /* [retval][out] */ __FIIterator_1_MatMeshMod__CIMesh **first);
        
        END_INTERFACE
    } __FIIterable_1_MatMeshMod__CIMeshVtbl;

    interface __FIIterable_1_MatMeshMod__CIMesh
    {
        CONST_VTBL struct __FIIterable_1_MatMeshMod__CIMeshVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_MatMeshMod__CIMesh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_MatMeshMod__CIMesh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_MatMeshMod__CIMesh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_MatMeshMod__CIMesh_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_MatMeshMod__CIMesh_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_MatMeshMod__CIMesh_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_MatMeshMod__CIMesh_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_MatMeshMod__CIMesh_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0028 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_MatMeshMod__CIMesh */


/* interface __MIDL_itf_MatMeshMod_0000_0028 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0028_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3132 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3132 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3132_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3132_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0029 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_MatMeshMod__CIMesh
#define DEF___FIVectorView_1_MatMeshMod__CIMesh
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0029 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0029_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_MatMeshMod__CIMesh_INTERFACE_DEFINED__
#define ____FIVectorView_1_MatMeshMod__CIMesh_INTERFACE_DEFINED__

/* interface __FIVectorView_1_MatMeshMod__CIMesh */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_MatMeshMod__CIMesh */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_MatMeshMod__CIMesh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("513c80de-dc6f-59d5-85d8-a531b6ff0e10")
    __FIVectorView_1_MatMeshMod__CIMesh : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ ABI::MatMeshMod::IMesh **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ ABI::MatMeshMod::IMesh *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ ABI::MatMeshMod::IMesh **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_MatMeshMod__CIMeshVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIVectorView_1_MatMeshMod__CIMesh * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIVectorView_1_MatMeshMod__CIMesh * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIVectorView_1_MatMeshMod__CIMesh * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIVectorView_1_MatMeshMod__CIMesh * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIVectorView_1_MatMeshMod__CIMesh * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIVectorView_1_MatMeshMod__CIMesh * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __FIVectorView_1_MatMeshMod__CIMesh * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __x_ABI_CMatMeshMod_CIMesh **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __FIVectorView_1_MatMeshMod__CIMesh * This,
            /* [retval][out] */ unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __FIVectorView_1_MatMeshMod__CIMesh * This,
            /* [in] */ __x_ABI_CMatMeshMod_CIMesh *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIVectorView_1_MatMeshMod__CIMesh * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CMatMeshMod_CIMesh **items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_MatMeshMod__CIMeshVtbl;

    interface __FIVectorView_1_MatMeshMod__CIMesh
    {
        CONST_VTBL struct __FIVectorView_1_MatMeshMod__CIMeshVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_MatMeshMod__CIMesh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_MatMeshMod__CIMesh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_MatMeshMod__CIMesh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_MatMeshMod__CIMesh_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_MatMeshMod__CIMesh_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_MatMeshMod__CIMesh_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_MatMeshMod__CIMesh_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_MatMeshMod__CIMesh_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_MatMeshMod__CIMesh_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_MatMeshMod__CIMesh_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_MatMeshMod__CIMesh_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0030 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_MatMeshMod__CIMesh */


/* interface __MIDL_itf_MatMeshMod_0000_0030 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0030_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3133 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3133 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3133_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3133_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0031 */
/* [local] */ 

#ifndef DEF___FIIterator_1_MatMeshMod__CIModelMaterial
#define DEF___FIIterator_1_MatMeshMod__CIModelMaterial
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0031 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0031_v0_0_s_ifspec;

#ifndef ____FIIterator_1_MatMeshMod__CIModelMaterial_INTERFACE_DEFINED__
#define ____FIIterator_1_MatMeshMod__CIModelMaterial_INTERFACE_DEFINED__

/* interface __FIIterator_1_MatMeshMod__CIModelMaterial */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_MatMeshMod__CIModelMaterial */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_MatMeshMod__CIModelMaterial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("360a185f-1fc1-50f1-8339-2fee473b0b13")
    __FIIterator_1_MatMeshMod__CIModelMaterial : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ ABI::MatMeshMod::IModelMaterial **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ ABI::MatMeshMod::IModelMaterial **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_MatMeshMod__CIModelMaterialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterator_1_MatMeshMod__CIModelMaterial * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterator_1_MatMeshMod__CIModelMaterial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterator_1_MatMeshMod__CIModelMaterial * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterator_1_MatMeshMod__CIModelMaterial * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterator_1_MatMeshMod__CIModelMaterial * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterator_1_MatMeshMod__CIModelMaterial * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __FIIterator_1_MatMeshMod__CIModelMaterial * This,
            /* [retval][out] */ __x_ABI_CMatMeshMod_CIModelMaterial **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __FIIterator_1_MatMeshMod__CIModelMaterial * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __FIIterator_1_MatMeshMod__CIModelMaterial * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIIterator_1_MatMeshMod__CIModelMaterial * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CMatMeshMod_CIModelMaterial **items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_MatMeshMod__CIModelMaterialVtbl;

    interface __FIIterator_1_MatMeshMod__CIModelMaterial
    {
        CONST_VTBL struct __FIIterator_1_MatMeshMod__CIModelMaterialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_MatMeshMod__CIModelMaterial_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_MatMeshMod__CIModelMaterial_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_MatMeshMod__CIModelMaterial_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_MatMeshMod__CIModelMaterial_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_MatMeshMod__CIModelMaterial_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_MatMeshMod__CIModelMaterial_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_MatMeshMod__CIModelMaterial_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_MatMeshMod__CIModelMaterial_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_MatMeshMod__CIModelMaterial_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_MatMeshMod__CIModelMaterial_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_MatMeshMod__CIModelMaterial_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0032 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_MatMeshMod__CIModelMaterial */


/* interface __MIDL_itf_MatMeshMod_0000_0032 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0032_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3134 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3134 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3134_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3134_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0033 */
/* [local] */ 

#ifndef DEF___FIIterable_1_MatMeshMod__CIModelMaterial
#define DEF___FIIterable_1_MatMeshMod__CIModelMaterial
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0033 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0033_v0_0_s_ifspec;

#ifndef ____FIIterable_1_MatMeshMod__CIModelMaterial_INTERFACE_DEFINED__
#define ____FIIterable_1_MatMeshMod__CIModelMaterial_INTERFACE_DEFINED__

/* interface __FIIterable_1_MatMeshMod__CIModelMaterial */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_MatMeshMod__CIModelMaterial */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_MatMeshMod__CIModelMaterial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ea08b211-178c-5d55-94ed-1a8cc2751c07")
    __FIIterable_1_MatMeshMod__CIModelMaterial : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __FIIterator_1_MatMeshMod__CIModelMaterial **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_MatMeshMod__CIModelMaterialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterable_1_MatMeshMod__CIModelMaterial * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterable_1_MatMeshMod__CIModelMaterial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterable_1_MatMeshMod__CIModelMaterial * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterable_1_MatMeshMod__CIModelMaterial * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterable_1_MatMeshMod__CIModelMaterial * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterable_1_MatMeshMod__CIModelMaterial * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __FIIterable_1_MatMeshMod__CIModelMaterial * This,
            /* [retval][out] */ __FIIterator_1_MatMeshMod__CIModelMaterial **first);
        
        END_INTERFACE
    } __FIIterable_1_MatMeshMod__CIModelMaterialVtbl;

    interface __FIIterable_1_MatMeshMod__CIModelMaterial
    {
        CONST_VTBL struct __FIIterable_1_MatMeshMod__CIModelMaterialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_MatMeshMod__CIModelMaterial_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_MatMeshMod__CIModelMaterial_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_MatMeshMod__CIModelMaterial_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_MatMeshMod__CIModelMaterial_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_MatMeshMod__CIModelMaterial_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_MatMeshMod__CIModelMaterial_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_MatMeshMod__CIModelMaterial_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_MatMeshMod__CIModelMaterial_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0034 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_MatMeshMod__CIModelMaterial */


/* interface __MIDL_itf_MatMeshMod_0000_0034 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0034_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3135 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3135 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3135_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3135_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0035 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_MatMeshMod__CIModelMaterial
#define DEF___FIVectorView_1_MatMeshMod__CIModelMaterial
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0035 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0035_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_MatMeshMod__CIModelMaterial_INTERFACE_DEFINED__
#define ____FIVectorView_1_MatMeshMod__CIModelMaterial_INTERFACE_DEFINED__

/* interface __FIVectorView_1_MatMeshMod__CIModelMaterial */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_MatMeshMod__CIModelMaterial */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_MatMeshMod__CIModelMaterial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1971778c-90e0-5d7f-8624-5771efae48d6")
    __FIVectorView_1_MatMeshMod__CIModelMaterial : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ ABI::MatMeshMod::IModelMaterial **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ ABI::MatMeshMod::IModelMaterial *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ ABI::MatMeshMod::IModelMaterial **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_MatMeshMod__CIModelMaterialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIVectorView_1_MatMeshMod__CIModelMaterial * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIVectorView_1_MatMeshMod__CIModelMaterial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIVectorView_1_MatMeshMod__CIModelMaterial * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIVectorView_1_MatMeshMod__CIModelMaterial * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIVectorView_1_MatMeshMod__CIModelMaterial * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIVectorView_1_MatMeshMod__CIModelMaterial * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __FIVectorView_1_MatMeshMod__CIModelMaterial * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __x_ABI_CMatMeshMod_CIModelMaterial **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __FIVectorView_1_MatMeshMod__CIModelMaterial * This,
            /* [retval][out] */ unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __FIVectorView_1_MatMeshMod__CIModelMaterial * This,
            /* [in] */ __x_ABI_CMatMeshMod_CIModelMaterial *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIVectorView_1_MatMeshMod__CIModelMaterial * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CMatMeshMod_CIModelMaterial **items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_MatMeshMod__CIModelMaterialVtbl;

    interface __FIVectorView_1_MatMeshMod__CIModelMaterial
    {
        CONST_VTBL struct __FIVectorView_1_MatMeshMod__CIModelMaterialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_MatMeshMod__CIModelMaterial_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_MatMeshMod__CIModelMaterial_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_MatMeshMod__CIModelMaterial_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_MatMeshMod__CIModelMaterial_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_MatMeshMod__CIModelMaterial_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_MatMeshMod__CIModelMaterial_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_MatMeshMod__CIModelMaterial_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_MatMeshMod__CIModelMaterial_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_MatMeshMod__CIModelMaterial_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_MatMeshMod__CIModelMaterial_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_MatMeshMod__CIModelMaterial_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0036 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_MatMeshMod__CIModelMaterial */
#if !defined(____x_ABI_CMatMeshMod_CIModel_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_MatMeshMod_IModel[] = L"MatMeshMod.IModel";
#endif /* !defined(____x_ABI_CMatMeshMod_CIModel_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_MatMeshMod_0000_0036 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0036_v0_0_s_ifspec;

#ifndef ____x_ABI_CMatMeshMod_CIModel_INTERFACE_DEFINED__
#define ____x_ABI_CMatMeshMod_CIModel_INTERFACE_DEFINED__

/* interface __x_ABI_CMatMeshMod_CIModel */
/* [uuid][object] */ 



/* interface ABI::MatMeshMod::IModel */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CMatMeshMod_CIModel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace MatMeshMod {
            
            MIDL_INTERFACE("f0cd5b84-e86e-4efb-a08a-437bd308f992")
            IModel : public IInspectable
            {
            public:
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasMeshes( 
                    /* [out][retval] */ boolean *hasMeshes) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasMaterials( 
                    /* [out][retval] */ boolean *hasMaterials) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasAnimations( 
                    /* [out][retval] */ boolean *hasAnimations) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Meshes( 
                    /* [out][retval] */ __FIVectorView_1_MatMeshMod__CIMesh **meshes) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Materials( 
                    /* [out][retval] */ __FIVectorView_1_MatMeshMod__CIModelMaterial **materials) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IModel = __uuidof(IModel);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CMatMeshMod_CIModelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CMatMeshMod_CIModel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CMatMeshMod_CIModel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CMatMeshMod_CIModel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CMatMeshMod_CIModel * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CMatMeshMod_CIModel * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CMatMeshMod_CIModel * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasMeshes )( 
            __x_ABI_CMatMeshMod_CIModel * This,
            /* [out][retval] */ boolean *hasMeshes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasMaterials )( 
            __x_ABI_CMatMeshMod_CIModel * This,
            /* [out][retval] */ boolean *hasMaterials);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasAnimations )( 
            __x_ABI_CMatMeshMod_CIModel * This,
            /* [out][retval] */ boolean *hasAnimations);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meshes )( 
            __x_ABI_CMatMeshMod_CIModel * This,
            /* [out][retval] */ __FIVectorView_1_MatMeshMod__CIMesh **meshes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Materials )( 
            __x_ABI_CMatMeshMod_CIModel * This,
            /* [out][retval] */ __FIVectorView_1_MatMeshMod__CIModelMaterial **materials);
        
        END_INTERFACE
    } __x_ABI_CMatMeshMod_CIModelVtbl;

    interface __x_ABI_CMatMeshMod_CIModel
    {
        CONST_VTBL struct __x_ABI_CMatMeshMod_CIModelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CMatMeshMod_CIModel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CMatMeshMod_CIModel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CMatMeshMod_CIModel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CMatMeshMod_CIModel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CMatMeshMod_CIModel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CMatMeshMod_CIModel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CMatMeshMod_CIModel_get_HasMeshes(This,hasMeshes)	\
    ( (This)->lpVtbl -> get_HasMeshes(This,hasMeshes) ) 

#define __x_ABI_CMatMeshMod_CIModel_get_HasMaterials(This,hasMaterials)	\
    ( (This)->lpVtbl -> get_HasMaterials(This,hasMaterials) ) 

#define __x_ABI_CMatMeshMod_CIModel_get_HasAnimations(This,hasAnimations)	\
    ( (This)->lpVtbl -> get_HasAnimations(This,hasAnimations) ) 

#define __x_ABI_CMatMeshMod_CIModel_get_Meshes(This,meshes)	\
    ( (This)->lpVtbl -> get_Meshes(This,meshes) ) 

#define __x_ABI_CMatMeshMod_CIModel_get_Materials(This,materials)	\
    ( (This)->lpVtbl -> get_Materials(This,materials) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CMatMeshMod_CIModel_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0037 */
/* [local] */ 

#if !defined(____x_ABI_CMatMeshMod_CIModelFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_MatMeshMod_IModelFactory[] = L"MatMeshMod.IModelFactory";
#endif /* !defined(____x_ABI_CMatMeshMod_CIModelFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_MatMeshMod_0000_0037 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0037_v0_0_s_ifspec;

#ifndef ____x_ABI_CMatMeshMod_CIModelFactory_INTERFACE_DEFINED__
#define ____x_ABI_CMatMeshMod_CIModelFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CMatMeshMod_CIModelFactory */
/* [uuid][object] */ 



/* interface ABI::MatMeshMod::IModelFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CMatMeshMod_CIModelFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace MatMeshMod {
            
            MIDL_INTERFACE("698a2f11-041d-4c4a-891f-d5e5f9b4c42e")
            IModelFactory : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateModel( 
                    /* [in] */ __FIVectorView_1_byte *modelFileData,
                    /* [in] */ boolean flipUVs,
                    /* [out][retval] */ ABI::MatMeshMod::IModel **instance) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IModelFactory = __uuidof(IModelFactory);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CMatMeshMod_CIModelFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CMatMeshMod_CIModelFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CMatMeshMod_CIModelFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CMatMeshMod_CIModelFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CMatMeshMod_CIModelFactory * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CMatMeshMod_CIModelFactory * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CMatMeshMod_CIModelFactory * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateModel )( 
            __x_ABI_CMatMeshMod_CIModelFactory * This,
            /* [in] */ __FIVectorView_1_byte *modelFileData,
            /* [in] */ boolean flipUVs,
            /* [out][retval] */ __x_ABI_CMatMeshMod_CIModel **instance);
        
        END_INTERFACE
    } __x_ABI_CMatMeshMod_CIModelFactoryVtbl;

    interface __x_ABI_CMatMeshMod_CIModelFactory
    {
        CONST_VTBL struct __x_ABI_CMatMeshMod_CIModelFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CMatMeshMod_CIModelFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CMatMeshMod_CIModelFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CMatMeshMod_CIModelFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CMatMeshMod_CIModelFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CMatMeshMod_CIModelFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CMatMeshMod_CIModelFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CMatMeshMod_CIModelFactory_CreateModel(This,modelFileData,flipUVs,instance)	\
    ( (This)->lpVtbl -> CreateModel(This,modelFileData,flipUVs,instance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CMatMeshMod_CIModelFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0038 */
/* [local] */ 

#if !defined(____x_ABI_CMatMeshMod_CIModelMaterial_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_MatMeshMod_IModelMaterial[] = L"MatMeshMod.IModelMaterial";
#endif /* !defined(____x_ABI_CMatMeshMod_CIModelMaterial_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_MatMeshMod_0000_0038 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0038_v0_0_s_ifspec;

#ifndef ____x_ABI_CMatMeshMod_CIModelMaterial_INTERFACE_DEFINED__
#define ____x_ABI_CMatMeshMod_CIModelMaterial_INTERFACE_DEFINED__

/* interface __x_ABI_CMatMeshMod_CIModelMaterial */
/* [uuid][object] */ 



/* interface ABI::MatMeshMod::IModelMaterial */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CMatMeshMod_CIModelMaterial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace MatMeshMod {
            
            MIDL_INTERFACE("a7393375-38bd-42db-adb3-72d9b0e6ad61")
            IModelMaterial : public IInspectable
            {
            public:
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Model( 
                    /* [out][retval] */ ABI::MatMeshMod::IModel **currentModel) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IModelMaterial = __uuidof(IModelMaterial);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CMatMeshMod_CIModelMaterialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CMatMeshMod_CIModelMaterial * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CMatMeshMod_CIModelMaterial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CMatMeshMod_CIModelMaterial * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CMatMeshMod_CIModelMaterial * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CMatMeshMod_CIModelMaterial * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CMatMeshMod_CIModelMaterial * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Model )( 
            __x_ABI_CMatMeshMod_CIModelMaterial * This,
            /* [out][retval] */ __x_ABI_CMatMeshMod_CIModel **currentModel);
        
        END_INTERFACE
    } __x_ABI_CMatMeshMod_CIModelMaterialVtbl;

    interface __x_ABI_CMatMeshMod_CIModelMaterial
    {
        CONST_VTBL struct __x_ABI_CMatMeshMod_CIModelMaterialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CMatMeshMod_CIModelMaterial_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CMatMeshMod_CIModelMaterial_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CMatMeshMod_CIModelMaterial_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CMatMeshMod_CIModelMaterial_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CMatMeshMod_CIModelMaterial_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CMatMeshMod_CIModelMaterial_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CMatMeshMod_CIModelMaterial_get_Model(This,currentModel)	\
    ( (This)->lpVtbl -> get_Model(This,currentModel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CMatMeshMod_CIModelMaterial_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0039 */
/* [local] */ 

#if !defined(____x_ABI_CMatMeshMod_CIModelMaterialFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_MatMeshMod_IModelMaterialFactory[] = L"MatMeshMod.IModelMaterialFactory";
#endif /* !defined(____x_ABI_CMatMeshMod_CIModelMaterialFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_MatMeshMod_0000_0039 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0039_v0_0_s_ifspec;

#ifndef ____x_ABI_CMatMeshMod_CIModelMaterialFactory_INTERFACE_DEFINED__
#define ____x_ABI_CMatMeshMod_CIModelMaterialFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CMatMeshMod_CIModelMaterialFactory */
/* [uuid][object] */ 



/* interface ABI::MatMeshMod::IModelMaterialFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CMatMeshMod_CIModelMaterialFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace MatMeshMod {
            
            MIDL_INTERFACE("7e82f800-e959-4376-b52a-0b86a2ea3d34")
            IModelMaterialFactory : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateModelMaterial( 
                    /* [in] */ ABI::MatMeshMod::IModel *model,
                    /* [out][retval] */ ABI::MatMeshMod::IModelMaterial **instance) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IModelMaterialFactory = __uuidof(IModelMaterialFactory);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CMatMeshMod_CIModelMaterialFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CMatMeshMod_CIModelMaterialFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CMatMeshMod_CIModelMaterialFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CMatMeshMod_CIModelMaterialFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CMatMeshMod_CIModelMaterialFactory * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CMatMeshMod_CIModelMaterialFactory * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CMatMeshMod_CIModelMaterialFactory * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateModelMaterial )( 
            __x_ABI_CMatMeshMod_CIModelMaterialFactory * This,
            /* [in] */ __x_ABI_CMatMeshMod_CIModel *model,
            /* [out][retval] */ __x_ABI_CMatMeshMod_CIModelMaterial **instance);
        
        END_INTERFACE
    } __x_ABI_CMatMeshMod_CIModelMaterialFactoryVtbl;

    interface __x_ABI_CMatMeshMod_CIModelMaterialFactory
    {
        CONST_VTBL struct __x_ABI_CMatMeshMod_CIModelMaterialFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CMatMeshMod_CIModelMaterialFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CMatMeshMod_CIModelMaterialFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CMatMeshMod_CIModelMaterialFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CMatMeshMod_CIModelMaterialFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CMatMeshMod_CIModelMaterialFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CMatMeshMod_CIModelMaterialFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CMatMeshMod_CIModelMaterialFactory_CreateModelMaterial(This,model,instance)	\
    ( (This)->lpVtbl -> CreateModelMaterial(This,model,instance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CMatMeshMod_CIModelMaterialFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3136 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3136 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3136_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3136_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0041 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CFoundation__CNumerics__CVector3
#define DEF___FIIterator_1_Windows__CFoundation__CNumerics__CVector3
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0041 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0041_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__
#define ____FIIterator_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__

/* interface __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CNumerics__CVector3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e107793e-538c-5cc6-8ce6-1802e91b9ba5")
    __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ struct ABI::Windows::Foundation::Numerics::Vector3 *current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ struct ABI::Windows::Foundation::Numerics::Vector3 *items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Windows__CFoundation__CNumerics__CVector3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Windows__CFoundation__CNumerics__CVector3Vtbl;

    interface __FIIterator_1_Windows__CFoundation__CNumerics__CVector3
    {
        CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CVector3_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0042 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Windows__CFoundation__CNumerics__CVector3 */


/* interface __MIDL_itf_MatMeshMod_0000_0042 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0042_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3137 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3137 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3137_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3137_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0043 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CFoundation__CNumerics__CVector3
#define DEF___FIIterable_1_Windows__CFoundation__CNumerics__CVector3
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0043 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0043_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__
#define ____FIIterable_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__

/* interface __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CNumerics__CVector3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f89aa9d0-2b80-506f-85f7-757b90413a52")
    __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Windows__CFoundation__CNumerics__CVector3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ __FIIterator_1_Windows__CFoundation__CNumerics__CVector3 **first);
        
        END_INTERFACE
    } __FIIterable_1_Windows__CFoundation__CNumerics__CVector3Vtbl;

    interface __FIIterable_1_Windows__CFoundation__CNumerics__CVector3
    {
        CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Windows__CFoundation__CNumerics__CVector3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CFoundation__CNumerics__CVector3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CFoundation__CNumerics__CVector3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CFoundation__CNumerics__CVector3_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CFoundation__CNumerics__CVector3_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CFoundation__CNumerics__CVector3_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CFoundation__CNumerics__CVector3_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0044 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Windows__CFoundation__CNumerics__CVector3 */


/* interface __MIDL_itf_MatMeshMod_0000_0044 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0044_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3138 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3138 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3138_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3138_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0045 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
#define DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0045 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0045_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__
#define ____FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3040460a-395b-5662-9da2-0cba2c9d9ad1")
    __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ struct ABI::Windows::Foundation::Numerics::Vector3 *item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ struct ABI::Windows::Foundation::Numerics::Vector3 item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ struct ABI::Windows::Foundation::Numerics::Vector3 *items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl;

    interface __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
    {
        CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0046 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */


/* interface __MIDL_itf_MatMeshMod_0000_0046 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0046_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3139 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3139 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3139_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3139_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0047 */
/* [local] */ 

#ifndef DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
#define DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0047 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0047_v0_0_s_ifspec;

#ifndef ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__
#define ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__

/* interface __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40deb5ad-f225-55e1-a754-e9bb515455f6")
    __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl;

    interface __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
    {
        CONST_VTBL struct __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0048 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */


/* interface __MIDL_itf_MatMeshMod_0000_0048 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0048_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3140 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3140 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3140_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3140_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0049 */
/* [local] */ 

#ifndef DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
#define DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0049 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0049_v0_0_s_ifspec;

#ifndef ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__
#define ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__

/* interface __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("727d7974-d7f6-5b6f-831b-7f2b091b1639")
    __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **first);
        
        END_INTERFACE
    } __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl;

    interface __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
    {
        CONST_VTBL struct __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0050 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */


/* interface __MIDL_itf_MatMeshMod_0000_0050 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0050_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3141 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3141 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3141_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3141_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0051 */
/* [local] */ 

#ifndef DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
#define DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0051 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0051_v0_0_s_ifspec;

#ifndef ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__
#define ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__

/* interface __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("124a4e42-d1f9-5405-8cf4-78ecb56d57e9")
    __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [retval][out] */ unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl;

    interface __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3
    {
        CONST_VTBL struct __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0052 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 */


/* interface __MIDL_itf_MatMeshMod_0000_0052 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0052_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3142 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3142 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3142_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3142_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0053 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion
#define DEF___FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0053 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0053_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__
#define ____FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__

/* interface __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3d11f83c-e516-5fbc-96f9-be9330bedb0a")
    __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ struct ABI::Windows::Foundation::Numerics::Quaternion *current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ struct ABI::Windows::Foundation::Numerics::Quaternion *items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [retval][out] */ struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion *current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion *items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternionVtbl;

    interface __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion
    {
        CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0054 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion */


/* interface __MIDL_itf_MatMeshMod_0000_0054 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0054_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3143 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3143 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3143_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3143_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0055 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion
#define DEF___FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0055 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0055_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0055_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__
#define ____FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__

/* interface __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f4def91a-2386-5064-af03-5771cab12a39")
    __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [retval][out] */ __FIIterator_1_Windows__CFoundation__CNumerics__CQuaternion **first);
        
        END_INTERFACE
    } __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternionVtbl;

    interface __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion
    {
        CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0056 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Windows__CFoundation__CNumerics__CQuaternion */


/* interface __MIDL_itf_MatMeshMod_0000_0056 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0056_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3144 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3144 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3144_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3144_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0057 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
#define DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0057 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0057_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__
#define ____FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2772d7a0-b9c1-575e-9b6f-cefa25843609")
    __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ struct ABI::Windows::Foundation::Numerics::Quaternion *item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ struct ABI::Windows::Foundation::Numerics::Quaternion item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ struct ABI::Windows::Foundation::Numerics::Quaternion *items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion *item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [retval][out] */ unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion *items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl;

    interface __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
    {
        CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0058 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */


/* interface __MIDL_itf_MatMeshMod_0000_0058 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0058_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3145 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3145 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3145_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3145_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0059 */
/* [local] */ 

#ifndef DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
#define DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0059 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0059_v0_0_s_ifspec;

#ifndef ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__
#define ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__

/* interface __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("397922a1-19cf-50bc-95ab-774d40d8cf4a")
    __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [retval][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl;

    interface __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
    {
        CONST_VTBL struct __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0060 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */


/* interface __MIDL_itf_MatMeshMod_0000_0060 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0060_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0060_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3146 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3146 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3146_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3146_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0061 */
/* [local] */ 

#ifndef DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
#define DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0061 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0061_v0_0_s_ifspec;

#ifndef ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__
#define ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__

/* interface __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("97a929b7-6512-51f0-9ef1-4d7568ab38a1")
    __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [retval][out] */ __FIIterator_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **first);
        
        END_INTERFACE
    } __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl;

    interface __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
    {
        CONST_VTBL struct __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0062 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */


/* interface __MIDL_itf_MatMeshMod_0000_0062 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0062_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3147 */




/* interface __MIDL_itf_MatMeshMod2Eidl_0000_3147 */




extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3147_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod2Eidl_0000_3147_v0_0_s_ifspec;

/* interface __MIDL_itf_MatMeshMod_0000_0063 */
/* [local] */ 

#ifndef DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
#define DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_MatMeshMod_0000_0063 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0063_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0063_v0_0_s_ifspec;

#ifndef ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__
#define ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__

/* interface __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2040f7a8-d95d-5301-9c9d-f150b60516b8")
    __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [retval][out] */ unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl;

    interface __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion
    {
        CONST_VTBL struct __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0064 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion */
#if !defined(____x_ABI_CMatMeshMod_CIMesh_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_MatMeshMod_IMesh[] = L"MatMeshMod.IMesh";
#endif /* !defined(____x_ABI_CMatMeshMod_CIMesh_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_MatMeshMod_0000_0064 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0064_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0064_v0_0_s_ifspec;

#ifndef ____x_ABI_CMatMeshMod_CIMesh_INTERFACE_DEFINED__
#define ____x_ABI_CMatMeshMod_CIMesh_INTERFACE_DEFINED__

/* interface __x_ABI_CMatMeshMod_CIMesh */
/* [uuid][object] */ 



/* interface ABI::MatMeshMod::IMesh */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CMatMeshMod_CIMesh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace MatMeshMod {
            
            MIDL_INTERFACE("71d484b8-8a81-4200-b208-2b734541ea96")
            IMesh : public IInspectable
            {
            public:
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Model( 
                    /* [out][retval] */ ABI::MatMeshMod::IModel **currentModel) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ModelMaterial( 
                    /* [out][retval] */ ABI::MatMeshMod::IModelMaterial **currentMaterial) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
                    /* [out][retval] */ HSTRING *name) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Vertices( 
                    /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **vertices) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Normals( 
                    /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **normals) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Tangents( 
                    /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **tangents) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BiNormals( 
                    /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **binormals) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TextureCoordinates( 
                    /* [out][retval] */ __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **textureCoordinates) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_VertexColors( 
                    /* [out][retval] */ __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **vertexColors) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Indices( 
                    /* [out][retval] */ __FIVectorView_1_UINT32 **indices) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FaceCount( 
                    /* [out][retval] */ unsigned int *faceCount) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasMeshes( 
                    /* [out][retval] */ boolean *hasMeshes) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasMaterials( 
                    /* [out][retval] */ boolean *hasMaterials) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasAnimations( 
                    /* [out][retval] */ boolean *hasAnimations) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Meshes( 
                    /* [out][retval] */ __FIVectorView_1_MatMeshMod__CIMesh **meshes) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Materials( 
                    /* [out][retval] */ __FIVectorView_1_MatMeshMod__CIModelMaterial **materials) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IMesh = __uuidof(IMesh);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CMatMeshMod_CIMeshVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CMatMeshMod_CIMesh * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CMatMeshMod_CIMesh * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Model )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __x_ABI_CMatMeshMod_CIModel **currentModel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModelMaterial )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __x_ABI_CMatMeshMod_CIModelMaterial **currentMaterial);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ HSTRING *name);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vertices )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **vertices);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Normals )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **normals);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tangents )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **tangents);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BiNormals )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **binormals);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TextureCoordinates )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **textureCoordinates);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VertexColors )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **vertexColors);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Indices )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __FIVectorView_1_UINT32 **indices);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaceCount )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ unsigned int *faceCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasMeshes )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ boolean *hasMeshes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasMaterials )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ boolean *hasMaterials);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasAnimations )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ boolean *hasAnimations);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meshes )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __FIVectorView_1_MatMeshMod__CIMesh **meshes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Materials )( 
            __x_ABI_CMatMeshMod_CIMesh * This,
            /* [out][retval] */ __FIVectorView_1_MatMeshMod__CIModelMaterial **materials);
        
        END_INTERFACE
    } __x_ABI_CMatMeshMod_CIMeshVtbl;

    interface __x_ABI_CMatMeshMod_CIMesh
    {
        CONST_VTBL struct __x_ABI_CMatMeshMod_CIMeshVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CMatMeshMod_CIMesh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CMatMeshMod_CIMesh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CMatMeshMod_CIMesh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CMatMeshMod_CIMesh_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CMatMeshMod_CIMesh_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CMatMeshMod_CIMesh_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CMatMeshMod_CIMesh_get_Model(This,currentModel)	\
    ( (This)->lpVtbl -> get_Model(This,currentModel) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_ModelMaterial(This,currentMaterial)	\
    ( (This)->lpVtbl -> get_ModelMaterial(This,currentMaterial) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_Name(This,name)	\
    ( (This)->lpVtbl -> get_Name(This,name) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_Vertices(This,vertices)	\
    ( (This)->lpVtbl -> get_Vertices(This,vertices) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_Normals(This,normals)	\
    ( (This)->lpVtbl -> get_Normals(This,normals) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_Tangents(This,tangents)	\
    ( (This)->lpVtbl -> get_Tangents(This,tangents) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_BiNormals(This,binormals)	\
    ( (This)->lpVtbl -> get_BiNormals(This,binormals) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_TextureCoordinates(This,textureCoordinates)	\
    ( (This)->lpVtbl -> get_TextureCoordinates(This,textureCoordinates) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_VertexColors(This,vertexColors)	\
    ( (This)->lpVtbl -> get_VertexColors(This,vertexColors) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_Indices(This,indices)	\
    ( (This)->lpVtbl -> get_Indices(This,indices) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_FaceCount(This,faceCount)	\
    ( (This)->lpVtbl -> get_FaceCount(This,faceCount) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_HasMeshes(This,hasMeshes)	\
    ( (This)->lpVtbl -> get_HasMeshes(This,hasMeshes) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_HasMaterials(This,hasMaterials)	\
    ( (This)->lpVtbl -> get_HasMaterials(This,hasMaterials) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_HasAnimations(This,hasAnimations)	\
    ( (This)->lpVtbl -> get_HasAnimations(This,hasAnimations) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_Meshes(This,meshes)	\
    ( (This)->lpVtbl -> get_Meshes(This,meshes) ) 

#define __x_ABI_CMatMeshMod_CIMesh_get_Materials(This,materials)	\
    ( (This)->lpVtbl -> get_Materials(This,materials) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CMatMeshMod_CIMesh_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MatMeshMod_0000_0065 */
/* [local] */ 

#ifndef RUNTIMECLASS_MatMeshMod_Model_DEFINED
#define RUNTIMECLASS_MatMeshMod_Model_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_MatMeshMod_Model[] = L"MatMeshMod.Model";
#endif
#ifndef RUNTIMECLASS_MatMeshMod_ModelMaterial_DEFINED
#define RUNTIMECLASS_MatMeshMod_ModelMaterial_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_MatMeshMod_ModelMaterial[] = L"MatMeshMod.ModelMaterial";
#endif
#ifndef RUNTIMECLASS_MatMeshMod_Mesh_DEFINED
#define RUNTIMECLASS_MatMeshMod_Mesh_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_MatMeshMod_Mesh[] = L"MatMeshMod.Mesh";
#endif


/* interface __MIDL_itf_MatMeshMod_0000_0065 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0065_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MatMeshMod_0000_0065_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


