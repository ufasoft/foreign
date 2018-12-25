//
// corecrt_wstdlib.h
//
//      Copyright (c) Microsoft Corporation. All rights reserved.
//
// This file declares the wide character (wchar_t) C Standard Library functions
// that are declared by both <stdlib.h> and <wchar.h>.
//
#pragma once

#include <corecrt.h>

_CRT_BEGIN_C_HEADER



_Check_return_wat_
_ACRTIMP errno_t __cdecl _itow_s(
    _In_                         int      _Value,
    _Out_writes_z_(_SizeInWords) wchar_t* _DstBuf,
    _In_                         size_t   _SizeInWords,
    _In_                         int      _Radix
    );

__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(
    errno_t, _itow_s,
    _In_ int,     _Value,
         wchar_t, _Dest,
    _In_ int,     _Radix
    )

__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _itow,
    _In_                    int,     _Value,
    _Pre_notnull_ _Post_z_, wchar_t, _Dest,
    _In_                    int,     _Radix
    )

_Check_return_wat_
_ACRTIMP errno_t __cdecl _ltow_s(
    _In_                         long     _Value,
    _Out_writes_z_(_SizeInWords) wchar_t* _DstBuf,
    _In_                         size_t   _SizeInWords,
    _In_                         int      _Radix
    );

__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(
    errno_t, _ltow_s,
    _In_ long,    _Value,
         wchar_t, _Dest,
    _In_ int,     _Radix
    )

__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _ltow,
    _In_                    long,    _Value,
    _Pre_notnull_ _Post_z_, wchar_t, _Dest,
    _In_                    int,     _Radix
    )

_Check_return_wat_
_ACRTIMP errno_t __cdecl _ultow_s(
    _In_                         unsigned long _Value,
    _Out_writes_z_(_SizeInWords) wchar_t*      _DstBuf,
    _In_                         size_t        _SizeInWords,
    _In_                         int           _Radix
    );

__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(
    errno_t, _ultow_s,
    _In_ unsigned long, _Value,
         wchar_t,       _Dest,
    _In_ int,           _Radix
    )

__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(
    wchar_t*, __RETURN_POLICY_DST, _ACRTIMP, _ultow,
    _In_                    unsigned long, _Value,
    _Pre_notnull_ _Post_z_, wchar_t,       _Dest,
    _In_                    int,           _Radix
    )

_Check_return_
_ACRTIMP double __cdecl wcstod(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr
    );

_Check_return_
_ACRTIMP double __cdecl _wcstod_l(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_opt_                 _locale_t      _Locale
    );

_Check_return_
_ACRTIMP long __cdecl wcstol(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix
    );

_Check_return_
_ACRTIMP long __cdecl _wcstol_l(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix,
    _In_opt_                 _locale_t      _Locale
    );

_Check_return_
_ACRTIMP long long __cdecl wcstoll(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix
    );

_Check_return_
_ACRTIMP long long __cdecl _wcstoll_l(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix,
    _In_opt_                 _locale_t      _Locale
    );

_Check_return_
_ACRTIMP unsigned long __cdecl wcstoul(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix
    );

_Check_return_
_ACRTIMP unsigned long __cdecl _wcstoul_l(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix,
    _In_opt_                 _locale_t      _Locale
    );

_Check_return_
_ACRTIMP unsigned long long __cdecl wcstoull(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix
    );

_Check_return_
_ACRTIMP unsigned long long __cdecl _wcstoull_l(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix,
    _In_opt_                 _locale_t      _Locale
    );

_Check_return_
_ACRTIMP long double __cdecl wcstold(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr
    );

_Check_return_
_ACRTIMP long double __cdecl _wcstold_l(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_opt_                 _locale_t      _Locale
    );

_Check_return_
_ACRTIMP float __cdecl wcstof(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr
    );

_Check_return_
_ACRTIMP float __cdecl _wcstof_l(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_opt_                 _locale_t      _Locale
    );

_Check_return_
_ACRTIMP double __cdecl _wtof(
    _In_z_ wchar_t const* _String
    );

_Check_return_
_ACRTIMP double __cdecl _wtof_l(
    _In_z_   wchar_t const* _String,
    _In_opt_ _locale_t      _Locale
    );

_Check_return_
_ACRTIMP int __cdecl _wtoi(
    _In_z_ wchar_t const* _String
    );

_Check_return_
_ACRTIMP int __cdecl _wtoi_l(
    _In_z_   wchar_t const* _String,
    _In_opt_ _locale_t      _Locale
    );

_Check_return_
_ACRTIMP long __cdecl _wtol(
    _In_z_ wchar_t const* _String
    );

_Check_return_
_ACRTIMP long __cdecl _wtol_l(
    _In_z_   wchar_t const* _String,
    _In_opt_ _locale_t      _Locale
    );

_Check_return_
_ACRTIMP long long __cdecl _wtoll(
    _In_z_ wchar_t const* _String
    );

_Check_return_
_ACRTIMP long long __cdecl _wtoll_l(
    _In_z_   wchar_t const* _String,
    _In_opt_ _locale_t      _Locale
    );

_Check_return_wat_
_ACRTIMP errno_t __cdecl _i64tow_s(
    _In_                         __int64  _Value,
    _Out_writes_z_(_SizeInWords) wchar_t* _DstBuf,
    _In_                         size_t   _SizeInWords,
    _In_                         int      _Radix
    );

_CRT_INSECURE_DEPRECATE(_i64tow_s)
_ACRTIMP wchar_t* __cdecl _i64tow(
    _In_                   __int64  _Value,
    _Pre_notnull_ _Post_z_ wchar_t* _DstBuf,
    _In_                   int      _Radix
    );

_Check_return_wat_
_ACRTIMP errno_t __cdecl _ui64tow_s(
    _In_                         unsigned __int64 _Value,
    _Out_writes_z_(_SizeInWords) wchar_t*         _DstBuf,
    _In_                         size_t           _SizeInWords,
    _In_                         int              _Radix
    );

_CRT_INSECURE_DEPRECATE(_ui64tow_s)
_ACRTIMP wchar_t* __cdecl _ui64tow(
    _In_                   unsigned __int64 _Value,
    _Pre_notnull_ _Post_z_ wchar_t*         _DstBuf,
    _In_                   int              _Radix
    );

_Check_return_
_ACRTIMP __int64 __cdecl _wtoi64(
    _In_z_ wchar_t const* _String
    );

_Check_return_
_ACRTIMP __int64 __cdecl _wtoi64_l(
    _In_z_   wchar_t const* _String,
    _In_opt_ _locale_t      _Locale
    );

_Check_return_
_ACRTIMP __int64 __cdecl _wcstoi64(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix
    );

_Check_return_
_ACRTIMP __int64 __cdecl _wcstoi64_l(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix,
    _In_opt_                 _locale_t      _Locale
    );

_Check_return_
_ACRTIMP unsigned __int64 __cdecl _wcstoui64(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix
    );

_Check_return_
_ACRTIMP unsigned __int64 __cdecl _wcstoui64_l(
    _In_z_                   wchar_t const* _String,
    _Out_opt_ _Deref_post_z_ wchar_t**      _EndPtr,
    _In_                     int            _Radix,
    _In_opt_                 _locale_t      _Locale
    );

#pragma push_macro("_wfullpath")
#undef _wfullpath

_Check_return_
_ACRTIMP _CRTALLOCATOR wchar_t* __cdecl _wfullpath(
    _Out_writes_opt_z_(_SizeInWords) wchar_t*       _FullPath,
    _In_z_                           wchar_t const* _Path,
    _In_                             size_t         _SizeInWords
    );

#pragma pop_macro("_wfullpath")

_Check_return_wat_
_ACRTIMP errno_t __cdecl _wmakepath_s(
    _Out_writes_z_(_Size) wchar_t*       _PathResult,
    _In_                  size_t         _Size,
    _In_opt_z_            wchar_t const* _Drive,
    _In_opt_z_            wchar_t const* _Dir,
    _In_opt_z_            wchar_t const* _Filename,
    _In_opt_z_            wchar_t const* _Ext
    );

__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(
    errno_t, _wmakepath_s,
               wchar_t,        _ResultPath,
    _In_opt_z_ wchar_t const*, _Drive,
    _In_opt_z_ wchar_t const*, _Dir,
    _In_opt_z_ wchar_t const*, _Filename,
    _In_opt_z_ wchar_t const*, _Ext
    )

__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(
    void, __RETURN_POLICY_VOID, _ACRTIMP, _wmakepath,
    _Pre_notnull_ _Post_z_, wchar_t,        _ResultPath,
    _In_opt_z_              wchar_t const*, _Drive,
    _In_opt_z_              wchar_t const*, _Dir,
    _In_opt_z_              wchar_t const*, _Filename,
    _In_opt_z_              wchar_t const*, _Ext
    )

_ACRTIMP void __cdecl _wperror(
    _In_opt_z_ wchar_t const* _ErrMsg
    );

_CRT_INSECURE_DEPRECATE(_wsplitpath_s)
_ACRTIMP void __cdecl _wsplitpath(
    _In_z_                   wchar_t const* _FullPath,
    _Pre_maybenull_ _Post_z_ wchar_t*       _Drive,
    _Pre_maybenull_ _Post_z_ wchar_t*       _Dir,
    _Pre_maybenull_ _Post_z_ wchar_t*       _Filename,
    _Pre_maybenull_ _Post_z_ wchar_t*       _Ext
    );

_ACRTIMP errno_t __cdecl _wsplitpath_s(
    _In_z_                            wchar_t const* _FullPath,
    _Out_writes_opt_z_(_DriveSize)    wchar_t*       _Drive,
    _In_                              size_t         _DriveSize,
    _Out_writes_opt_z_(_DirSize)      wchar_t*       _Dir,
    _In_                              size_t         _DirSize,
    _Out_writes_opt_z_(_FilenameSize) wchar_t*       _Filename,
    _In_                              size_t         _FilenameSize,
    _Out_writes_opt_z_(_ExtSize)      wchar_t*       _Ext,
    _In_                              size_t         _ExtSize
    );

__DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(
    errno_t, _wsplitpath_s,
    wchar_t, _Path
    )



#ifdef _CRT_USE_WINAPI_FAMILY_DESKTOP_APP

    #pragma push_macro("_wdupenv_s")
    #undef _wdupenv_s

    _Check_return_wat_
    _DCRTIMP errno_t __cdecl _wdupenv_s(
        _Outptr_result_buffer_maybenull_(*_BufferSizeInWords) _Outptr_result_z_ wchar_t**      _Buffer,
        _Out_opt_                                                               size_t*        _BufferSizeInWords,
        _In_z_                                                                  wchar_t const* _VarName
        );

    #pragma pop_macro("_wdupenv_s")

    _Check_return_ _CRT_INSECURE_DEPRECATE(_wdupenv_s)
    _DCRTIMP wchar_t* __cdecl _wgetenv(
        _In_z_ wchar_t const* _VarName
        );

    _Check_return_wat_
    _DCRTIMP errno_t __cdecl _wgetenv_s(
        _Out_                               size_t*        _ReturnSize,
        _Out_writes_opt_z_(_DstSizeInWords) wchar_t*       _DstBuf,
        _In_                                size_t         _DstSizeInWords,
        _In_z_                              wchar_t const* _VarName
        );

    __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(
        errno_t, _wgetenv_s,
        _Out_  size_t*,        _ReturnSize,
               wchar_t,        _Dest,
        _In_z_ wchar_t const*, _VarName
        )

    _Check_return_
    _DCRTIMP int __cdecl _wputenv(
        _In_z_ wchar_t const* _EnvString
        );

    _Check_return_wat_
    _DCRTIMP errno_t __cdecl _wputenv_s(
        _In_z_ wchar_t const* _Name,
        _In_z_ wchar_t const* _Value
        );
    
    _DCRTIMP errno_t __cdecl _wsearchenv_s(
        _In_z_                       wchar_t const* _Filename,
        _In_z_                       wchar_t const* _EnvVar,
        _Out_writes_z_(_SizeInWords) wchar_t*       _ResultPath,
        _In_                         size_t         _SizeInWords
        );
    
    __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(
        errno_t, _wsearchenv_s,
        _In_z_ wchar_t const*, _Filename,
        _In_z_ wchar_t const*, _EnvVar,
               wchar_t,        _ResultPath
               )
    
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0(
        void, __RETURN_POLICY_VOID, _DCRTIMP, _wsearchenv,
        _In_z_                  wchar_t const*, _Filename,
        _In_z_                  wchar_t const*, _EnvVar,
        _Pre_notnull_ _Post_z_, wchar_t,        _ResultPath
        )

    _DCRTIMP int __cdecl _wsystem(
        _In_opt_z_ wchar_t const* _Command
        );

#endif // _CRT_USE_WINAPI_FAMILY_DESKTOP_APP



_CRT_END_C_HEADER
