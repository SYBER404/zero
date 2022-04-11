

/* BEGIN: Cython Metadata
{
    "distutils": {
        "name": "dump",
        "sources": [
            "dump.py"
        ]
    },
    "module_name": "dump"
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

#define __PYX_HAVE__dump
#define __PYX_HAVE_API__dump

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
  "dump.py",
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


static CYTHON_INLINE int __Pyx_PySequence_ContainsTF(PyObject* item, PyObject* seq, int eq) {
    int result = PySequence_Contains(seq, item);
    return unlikely(result < 0) ? result : (result == (eq == Py_EQ));
}


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


#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw);
#else
#define __Pyx_PyObject_Call(func, arg, kw) PyObject_Call(func, arg, kw)
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


#if CYTHON_FAST_PYCCALL
static CYTHON_INLINE PyObject *__Pyx_PyCFunction_FastCall(PyObject *func, PyObject **args, Py_ssize_t nargs);
#else
#define __Pyx_PyCFunction_FastCall(func, args, nargs)  (assert(0), NULL)
#endif


static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);


static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);


static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject **argnames[],\
    PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args,\
    const char* function_name);


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


static CYTHON_UNUSED PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);


#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg);
#endif


static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);


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
#define __Pyx_GetException(type, value, tb)  __Pyx__GetException(__pyx_tstate, type, value, tb)
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb);
#endif


#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_ExceptionMatches(err) __Pyx_PyErr_ExceptionMatchesInState(__pyx_tstate, err)
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err);
#else
#define __Pyx_PyErr_ExceptionMatches(err)  PyErr_ExceptionMatches(err)
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


#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSwap(type, value, tb)  __Pyx__ExceptionSwap(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject **type, PyObject **value, PyObject **tb);
#endif


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


#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_AddObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceAdd(op1, op2) : PyNumber_Add(op1, op2))
#endif


#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_SubtractObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_SubtractObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceSubtract(op1, op2) : PyNumber_Subtract(op1, op2))
#endif


#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject* key);
#else
#define __Pyx_PyObject_GetItem(obj, key)  PyObject_GetItem(obj, key)
#endif


static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals);


static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals);


static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname);


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


static int __Pyx_check_binary_version(void);


static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);



#define __Pyx_MODULE_NAME "dump"
extern int __pyx_module_is_main_dump;
int __pyx_module_is_main_dump = 0;


static PyObject *__pyx_builtin_KeyError;
static PyObject *__pyx_builtin_exit;
static PyObject *__pyx_builtin_print;
static PyObject *__pyx_builtin_input;
static PyObject *__pyx_builtin_open;
static PyObject *__pyx_builtin_KeyboardInterrupt;
static PyObject *__pyx_builtin_range;
static PyObject *__pyx_builtin_IOError;
static PyObject *__pyx_builtin_TypeError;
static PyObject *__pyx_builtin_ValueError;
static const char __pyx_k_0[] = "0 ";
static const char __pyx_k_1[] = "1";
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
static const char __pyx_k_a[] = "a";
static const char __pyx_k_d[] = "d";
static const char __pyx_k_e[] = "e";
static const char __pyx_k_g[] = "g";
static const char __pyx_k_i[] = "i";
static const char __pyx_k_n[] = "n";
static const char __pyx_k_r[] = "r";
static const char __pyx_k_s[] = "s";
static const char __pyx_k_t[] = "t";
static const char __pyx_k_w[] = "\\w+";
static const char __pyx_k_x[] = "x";
static const char __pyx_k_z[] = "z";
static const char __pyx_k_01[] = "01";
static const char __pyx_k_02[] = "02";
static const char __pyx_k_03[] = "03";
static const char __pyx_k_04[] = "04";
static const char __pyx_k_05[] = "05";
static const char __pyx_k_06[] = "06";
static const char __pyx_k_07[] = "07";
static const char __pyx_k_08[] = "08";
static const char __pyx_k_0m[] = "\033[0m";
static const char __pyx_k_16[] = "16";
static const char __pyx_k_ID[] = "] ID = ";
static const char __pyx_k__3[] = "<=>";
static const char __pyx_k__5[] = "";
static const char __pyx_k_h3[] = "h3";
static const char __pyx_k_id[] = "id";
static const char __pyx_k_no[] = "no";
static const char __pyx_k_os[] = "os";
static const char __pyx_k_re[] = "re";
static const char __pyx_k_td[] = "td";
static const char __pyx_k_te[] = "te";
static const char __pyx_k_xf[] = "xf";
static const char __pyx_k_xx[] = "xx";
static const char __pyx_k_0_2[] = "0";
static const char __pyx_k__12[] = ",";
static const char __pyx_k__13[] = "(.*?)\\<";
static const char __pyx_k__16[] = " ";
static const char __pyx_k__19[] = ">";
static const char __pyx_k__20[] = " > ";
static const char __pyx_k__23[] = "[";
static const char __pyx_k__26[] = "=";
static const char __pyx_k__27[] = "  [";
static const char __pyx_k__33[] = " : ";
static const char __pyx_k__45[] = "&";
static const char __pyx_k__46[] = "  ";
static const char __pyx_k__47[] = "/";
static const char __pyx_k_amp[] = "amp;";
static const char __pyx_k_ask[] = "ask";
static const char __pyx_k_bcj[] = "bcj";
static const char __pyx_k_bs4[] = "bs4";
static const char __pyx_k_cok[] = "cok";
static const char __pyx_k_css[] = "css";
static const char __pyx_k_get[] = "get";
static const char __pyx_k_idg[] = "idg";
static const char __pyx_k_ids[] = "ids";
static const char __pyx_k_idt[] = "idt";
static const char __pyx_k_idx[] = "idx";
static const char __pyx_k_img[] = "\"><img";
static const char __pyx_k_isi[] = "isi";
static const char __pyx_k_iso[] = "iso";
static const char __pyx_k_jum[] = "jum";
static const char __pyx_k_kue[] = "kue";
static const char __pyx_k_old[] = "old";
static const char __pyx_k_par[] = "par";
static const char __pyx_k_ses[] = "ses";
static const char __pyx_k_spl[] = "spl";
static const char __pyx_k_src[] = "src";
static const char __pyx_k_sys[] = "sys";
static const char __pyx_k_uid[] = "uid=(.*?)&";
static const char __pyx_k_url[] = "url";
static const char __pyx_k_Dump[] = "Dump";
static const char __pyx_k_INFO[] = "\342\200\242 INFO \342\200\242";
static const char __pyx_k_OPEN[] = "OPEN";
static const char __pyx_k_Tree[] = "Tree";
static const char __pyx_k_baca[] = "baca";
static const char __pyx_k_bcj2[] = "bcj2";
static const char __pyx_k_cari[] = "cari";
static const char __pyx_k_code[] = "code";
static const char __pyx_k_data[] = "data";
static const char __pyx_k_date[] = "date";
static const char __pyx_k_dump[] = "dump";
static const char __pyx_k_exit[] = "exit";
static const char __pyx_k_find[] = "find";
static const char __pyx_k_href[] = "href";
static const char __pyx_k_id_2[] = "id=(.*)";
static const char __pyx_k_idku[] = "idku";
static const char __pyx_k_json[] = "json";
static const char __pyx_k_like[] = "like";
static const char __pyx_k_link[] = "link";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_nama[] = "nama";
static const char __pyx_k_name[] = "name";
static const char __pyx_k_next[] = "next";
static const char __pyx_k_open[] = "open";
static const char __pyx_k_post[] = "post";
static const char __pyx_k_priv[] = "priv";
static const char __pyx_k_read[] = "read";
static const char __pyx_k_rich[] = "rich";
static const char __pyx_k_span[] = "span";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_text[] = "text";
static const char __pyx_k_time[] = "time";
static const char __pyx_k_type[] = "type";
static const char __pyx_k_user[] = "user";
static const char __pyx_k_uuid[] = "uuid";
static const char __pyx_k_1_91m[] = "\033[1;91m";
static const char __pyx_k_1_92m[] = "\033[1;92m";
static const char __pyx_k_1_93m[] = "\033[1;93m";
static const char __pyx_k_1_94m[] = "\033[1;94m";
static const char __pyx_k_1_95m[] = "\033[1;95m";
static const char __pyx_k_1_96m[] = "\033[1;96m";
static const char __pyx_k_1_97m[] = "\033[1;97m";
static const char __pyx_k_Crack[] = "Crack";
static const char __pyx_k_Login[] = "Login";
static const char __pyx_k_Panel[] = "Panel";
static const char __pyx_k_Pilih[] = "[?] Pilih ";
static const char __pyx_k_check[] = "check";
static const char __pyx_k_clear[] = "clear";
static const char __pyx_k_crack[] = "crack";
static const char __pyx_k_depan[] = "depan";
static const char __pyx_k_digit[] = "digit";
static const char __pyx_k_fburl[] = "fburl";
static const char __pyx_k_files[] = "files";
static const char __pyx_k_flush[] = "flush";
static const char __pyx_k_garis[] = "garis";
static const char __pyx_k_idyou[] = "idyou";
static const char __pyx_k_input[] = "input";
static const char __pyx_k_komen[] = "komen";
static const char __pyx_k_limit[] = "limit";
static const char __pyx_k_login[] = "login";
static const char __pyx_k_print[] = "print";
static const char __pyx_k_range[] = "range";
static const char __pyx_k_split[] = "split";
static const char __pyx_k_table[] = "table";
static const char __pyx_k_teman[] = "teman";
static const char __pyx_k_title[] = "title";
static const char __pyx_k_token[] = "token";
static const char __pyx_k_uid_2[] = "uid";
static const char __pyx_k_utf_8[] = "utf-8";
static const char __pyx_k_write[] = "write";
static const char __pyx_k_Lookup[] = "Lookup";
static const char __pyx_k_Sampai[] = "Sampai ";
static const char __pyx_k_a_href[] = "<a href=\"";
static const char __pyx_k_append[] = "append";
static const char __pyx_k_cookie[] = "cookie";
static const char __pyx_k_encode[] = "encode";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_jumlah[] = "jumlah";
static const char __pyx_k_kontol[] = "kontol";
static const char __pyx_k_lanjut[] = "lanjut";
static const char __pyx_k_massal[] = "massal";
static const char __pyx_k_name_2[] = "__name__";
static const char __pyx_k_parser[] = "parser";
static const char __pyx_k_prints[] = "prints";
static const char __pyx_k_publik[] = "publik";
static const char __pyx_k_random[] = "random";
static const char __pyx_k_span_2[] = "<span";
static const char __pyx_k_stdout[] = "stdout";
static const char __pyx_k_string[] = "string";
static const char __pyx_k_Anggota[] = "\nAnggota   : ";
static const char __pyx_k_ID_Grup[] = "\nID Grup   : ";
static const char __pyx_k_IOError[] = "IOError";
static const char __pyx_k_Session[] = "Session";
static const char __pyx_k_anggota[] = "anggota";
static const char __pyx_k_content[] = "content";
static const char __pyx_k_cookies[] = "cookies";
static const char __pyx_k_dump_py[] = "dump.py";
static const char __pyx_k_findall[] = "findall";
static const char __pyx_k_friends[] = "friends";
static const char __pyx_k_headers[] = "headers";
static const char __pyx_k_idsiapa[] = "idsiapa";
static const char __pyx_k_idteman[] = "idteman";
static const char __pyx_k_liatnih[] = "liatnih";
static const char __pyx_k_namayou[] = "namayou";
static const char __pyx_k_payload[] = "payload";
static const char __pyx_k_privacy[] = "privacy";
static const char __pyx_k_randint[] = "randint";
static const char __pyx_k_replace[] = "replace";
static const char __pyx_k_urlmain[] = "urlmain";
static const char __pyx_k_KeyError[] = "KeyError";
static const char __pyx_k_belakang[] = "belakang";
static const char __pyx_k_calendar[] = "calendar";
static const char __pyx_k_datetime[] = "datetime";
static const char __pyx_k_facebook[] = "facebook";
static const char __pyx_k_find_all[] = "find_all";
static const char __pyx_k_get_data[] = "get_data";
static const char __pyx_k_get_dump[] = "get_dump";
static const char __pyx_k_id_group[] = "id_group";
static const char __pyx_k_komentar[] = "komentar";
static const char __pyx_k_requests[] = "requests";
static const char __pyx_k_Nama_Grup[] = "]\nNama Grup : ";
static const char __pyx_k_TypeError[] = "TypeError";
static const char __pyx_k_Type_Grup[] = "\nType Grup : ";
static const char __pyx_k_atursandi[] = "atursandi";
static const char __pyx_k_dump_file[] = "dump_file";
static const char __pyx_k_followers[] = "followers";
static const char __pyx_k_randomnew[] = "randomnew";
static const char __pyx_k_randomold[] = "randomold";
static const char __pyx_k_reactions[] = "reactions";
static const char __pyx_k_readlines[] = "readlines";
static const char __pyx_k_rich_tree[] = "rich.tree";
static const char __pyx_k_threading[] = "threading";
static const char __pyx_k_ValueError[] = "ValueError";
static const char __pyx_k_convert_id[] = "convert_id";
static const char __pyx_k_data_teman[] = "data_teman";
static const char __pyx_k_dump_react[] = "dump_react";
static const char __pyx_k_dump_saran[] = "dump_saran";
static const char __pyx_k_mengajukan[] = "mengajukan";
static const char __pyx_k_react_type[] = "react_type";
static const char __pyx_k_rich_panel[] = "rich.panel";
static const char __pyx_k_saranteman[] = "saranteman";
static const char __pyx_k_subprocess[] = "subprocess";
static const char __pyx_k_user_agent[] = "user-agent";
static const char __pyx_k_Grup_Privat[] = "Grup Privat";
static const char __pyx_k_Grup_Publik[] = "Grup Publik";
static const char __pyx_k_header_grup[] = "header_grup";
static const char __pyx_k_html_parser[] = "html.parser";
static const char __pyx_k_profile_php[] = "profile.php?";
static const char __pyx_k_tanya_total[] = "tanya_total";
static const char __pyx_k_Jumlah_Teman[] = " , Jumlah Teman = ";
static const char __pyx_k_Masukan_Nama[] = "  [+] Masukan Nama : ";
static const char __pyx_k_access_token[] = ")&access_token=";
static const char __pyx_k_get_datagrup[] = "get_datagrup";
static const char __pyx_k_BeautifulSoup[] = "BeautifulSoup";
static const char __pyx_k_Masukan_Limit[] = "  [+] Masukan Limit : ";
static const char __pyx_k_dump_komentar[] = "dump_komentar";
static const char __pyx_k_grupbergabung[] = "grupbergabung";
static const char __pyx_k_locale2_id_ID[] = "?/locale2=id_ID";
static const char __pyx_k_profile_php_2[] = "profile.php";
static const char __pyx_k_reaction_type[] = "reaction_type=";
static const char __pyx_k_Masukan_Jumlah[] = "  [?] Masukan Jumlah : ";
static const char __pyx_k_access_token_2[] = "?&access_token=";
static const char __pyx_k_dump_pencarian[] = "dump_pencarian";
static const char __pyx_k_pencarianteman[] = "pencarianteman";
static const char __pyx_k_profile_php_id[] = "profile.php?id";
static const char __pyx_k_temandariteman[] = "temandariteman";
static const char __pyx_k_Masukan_ID_Grup[] = "  [+] Masukan ID Grup : ";
static const char __pyx_k_data_cookie_txt[] = "data/cookie.txt";
static const char __pyx_k_grup_tanpalogin[] = "grup_tanpalogin";
static const char __pyx_k_permintaanteman[] = "permintaanteman";
static const char __pyx_k_reaction_type_0[] = "reaction_type=0";
static const char __pyx_k_Masukan_ID_Depan[] = "  [?] Masukan ID Depan : ";
static const char __pyx_k_KeyboardInterrupt[] = "KeyboardInterrupt";
static const char __pyx_k_friends_hovercard[] = "/friends/hovercard";
static const char __pyx_k_pencarian_nologin[] = "pencarian_nologin";
static const char __pyx_k_Lihat_Selengkapnya[] = "Lihat Selengkapnya";
static const char __pyx_k_Lihat_selengkapnya[] = "Lihat selengkapnya";
static const char __pyx_k_Masukan_Letak_File[] = "  [?] Masukan Letak File : ";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_get_pencarianteman[] = "get_pencarianteman";
static const char __pyx_k_https_lookup_id_com[] = "https://lookup-id.com/";
static const char __pyx_k_Masukan_ID_Postingan[] = "  [?] Masukan ID Postingan : ";
static const char __pyx_k_Masukan_Jumlah_Digit[] = "  [?] Masukan Jumlah Digit : ";
static const char __pyx_k_content_owner_id_new[] = "content_owner_id_new.";
static const char __pyx_k_Masukan_Jumlah_Target[] = "  [+] Masukan Jumlah Target : ";
static const char __pyx_k_mengajukan_pertanyaan[] = " mengajukan pertanyaan .";
static const char __pyx_k_Lihat_komentar_lainnya[] = "Lihat komentar lainnya";
static const char __pyx_k_Masukan_Nama_Pencarian[] = "  [?] Masukan Nama Pencarian : ";
static const char __pyx_k_content_owner_id_new_w[] = "content_owner_id_new.\\w+";
static const char __pyx_k_header_grup_tanpalogin[] = "header_grup_tanpalogin";
static const char __pyx_k_Lihat_Hasil_Selanjutnya[] = "Lihat Hasil Selanjutnya";
static const char __pyx_k_Masukan_Username_Atau_ID[] = "  [+] Masukan Username Atau ID : ";
static const char __pyx_k_Sedang_Mengumpulkan_s_ID[] = "\r  [*] Sedang Mengumpulkan %s ID...";
static const char __pyx_k_https_graph_facebook_com[] = "https://graph.facebook.com/";
static const char __pyx_k_https_mbasic_facebook_com[] = "https://mbasic.facebook.com";
static const char __pyx_k_Masukan_Username_Atau_ID_2[] = "  [+] Masukan Username Atau ID ";
static const char __pyx_k_Pilih_Angka_Untuk_Di_Crack[] = "\n  [+] Pilih Angka Untuk Di Crack : ";
static const char __pyx_k_https_mbasic_facebook_com_2[] = "https://mbasic.facebook.com/";
static const char __pyx_k_Lihat_Postingan_Lainnya_span[] = "Lihat Postingan Lainnya</span";
static const char __pyx_k_https_free_facebook_com_user[] = "https://free.facebook.com/{user}";
static const char __pyx_k_Untuk_Berhenti_Tekan_Ctrl_C_Di[] = "  [!] Untuk Berhenti Tekan Ctrl+C Di Keyboard Anda";
static const char __pyx_k_a_href_div_class_div_class_div[] = "\\<a\\ href\\=\"\\/(.*?)\">\\<div\\ class\\=\".*?\">\\<div\\ class\\=\".*?\">(.*?)<\\/div\\>";
static const char __pyx_k_b_01_Crack_Dari_React_Semua_05[] = "[b][01]. Crack Dari React Semua [05]. Crack Dari React Haha\n[02]. Crack Dari React Like  [06]. Crack Dari React Wow\n[03]. Crack Dari React Love  [07]. Crack Dari React Sedih\n[04]. Crack Dari React Marah [08]. Crack Dari React Peduli";
static const char __pyx_k_fields_name_subscribers_fields[] = "?fields=name,subscribers.fields(id,name).limit(5000)&access_token=";
static const char __pyx_k_post_tidak_tersedia_atau_tidak[] = "\n  [!] post tidak tersedia atau tidak ada yang menanggapi";
static const char __pyx_k_Anda_Harus_Logout_Dulu_Dan_Masu[] = "  [!] Anda Harus Logout Dulu Dan Masuk Menggunakan Cookie";
static const char __pyx_k_Mozilla_5_0_Linux_Android_10_Mi[] = "Mozilla/5.0 (Linux; Android 10; Mi 9T Pro Build/QKQ1.190825.002; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/88.0.4324.181 Mobile Safari/537.36 [FBAN/EMA;FBLC/id_ID;FBAV/239.0.0.10.109;]";
static const char __pyx_k_akun_tidak_tersedia_atau_list_t[] = "\n  [!] akun tidak tersedia atau list teman private";
static const char __pyx_k_fields_name_friends_fields_id_n[] = "?fields=name,friends.fields(id,name).limit(5000)&access_token=";
static const char __pyx_k_likes_fields_limit_100000_acces[] = "/likes/fields?limit=100000&access_token=";
static const char __pyx_k_masukan_tempat_file_dengan_bena[] = "\n  [!] masukan tempat file dengan benar !";
static const char __pyx_k_Anda_bisa_crack_lebih_dari_1_nam[] = "Anda bisa crack lebih dari 1 nama dengan menggunakan tanda koma (,) sebagai pemisah antar nama";
static const char __pyx_k_Anda_bisa_mengatur_jumlah_id_dan[] = "Anda bisa mengatur jumlah id dan jumlah digit, anda juga bisa memasukkan id depan contoh: 1,12,14,17";
static const char __pyx_k_Anda_bisa_mengisi_me_untuk_crack[] = "Anda bisa mengisi 'me' untuk crack dari daftar teman tumbal, bisa mengisi username dan id facebook";
static const char __pyx_k_Anda_harus_memasukan_id_postinga[] = "Anda harus memasukan id postingan, bisa cari id menggunakan link postingan lalu ambil id yang kedua di link tersebut";
static const char __pyx_k_Anda_harus_memasukan_tempat_file[] = "Anda harus memasukan tempat file berada dan jangan lupa harus menggunakan pemisah <=> (cth : id<=>nama)";
static const char __pyx_k_Anggota_a_td_td_class_span_class[] = "Anggota<\\/a\\>\\<\\/td\\>\\<td\\ class\\=\".*?\">\\<span\\ class\\=\".*?\" id\\=\".*?\">(.*?)<\\/span\\>";
static const char __pyx_k_Mozilla_5_0_SymbianOS_9_3_Series[] = "Mozilla/5.0 (SymbianOS/9.3; Series60/3.2 NokiaE52-1/052.003; Profile/MIDP-2.1 Configuration/CLDC-1.1 ) AppleWebKit/525 (KHTML, like Gecko) Version/3.0 BrowserNG/7.2.6.2 3gpp-gba";
static const char __pyx_k_https_graph_facebook_com_me_grou[] = "https://graph.facebook.com/me/groups?access_token=%s";
static const char __pyx_k_https_mbasic_facebook_com_friend[] = "https://mbasic.facebook.com/friends/center/suggestions/?mff_nav=1";
static const char __pyx_k_https_mbasic_facebook_com_groups[] = "https://mbasic.facebook.com/groups/";
static const char __pyx_k_https_mbasic_facebook_com_public[] = "https://mbasic.facebook.com/public/";
static const char __pyx_k_https_mbasic_facebook_com_ufi_re[] = "https://mbasic.facebook.com/ufi/reaction/profile/browser/?ft_ent_identifier=";
static const char __pyx_k_akun_tidak_tersedia_atau_list_t_2[] = "  [!] akun tidak tersedia atau list teman private";
static const char __pyx_k_fields_name_friends_fields_id_n_2[] = "?fields=name,friends.fields(id,name).limit(";
static const char __pyx_k_Anda_bisa_mengatur_jumlah_id_dan_2[] = "Anda bisa mengatur jumlah id dan jumlah digit, anda juga bisa memasukkan id depan contoh: 10005 / 100005 / 1000005";
static const char __pyx_k_Anda_bisa_mengisi_me_untuk_crack_2[] = "Anda bisa mengisi 'me' untuk crack dari daftar teman tumbal, bisa mengisi username dan id facebook. silahkan anda bisa menambahkan target hingga tak terbatas";
static const char __pyx_k_https_mbasic_facebook_com_friend_2[] = "https://mbasic.facebook.com/friends/center/requests";
static PyObject *__pyx_kp_u_0;
static PyObject *__pyx_kp_u_01;
static PyObject *__pyx_kp_u_02;
static PyObject *__pyx_kp_u_03;
static PyObject *__pyx_kp_u_04;
static PyObject *__pyx_kp_u_05;
static PyObject *__pyx_kp_u_06;
static PyObject *__pyx_kp_u_07;
static PyObject *__pyx_kp_u_08;
static PyObject *__pyx_kp_u_0_2;
static PyObject *__pyx_kp_u_0m;
static PyObject *__pyx_kp_u_1;
static PyObject *__pyx_kp_u_16;
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
static PyObject *__pyx_kp_u_Anda_Harus_Logout_Dulu_Dan_Masu;
static PyObject *__pyx_kp_u_Anda_bisa_crack_lebih_dari_1_nam;
static PyObject *__pyx_kp_u_Anda_bisa_mengatur_jumlah_id_dan;
static PyObject *__pyx_kp_u_Anda_bisa_mengatur_jumlah_id_dan_2;
static PyObject *__pyx_kp_u_Anda_bisa_mengisi_me_untuk_crack;
static PyObject *__pyx_kp_u_Anda_bisa_mengisi_me_untuk_crack_2;
static PyObject *__pyx_kp_u_Anda_harus_memasukan_id_postinga;
static PyObject *__pyx_kp_u_Anda_harus_memasukan_tempat_file;
static PyObject *__pyx_kp_u_Anggota;
static PyObject *__pyx_kp_u_Anggota_a_td_td_class_span_class;
static PyObject *__pyx_n_s_B;
static PyObject *__pyx_n_s_BeautifulSoup;
static PyObject *__pyx_n_s_Crack;
static PyObject *__pyx_n_s_Dump;
static PyObject *__pyx_kp_u_Grup_Privat;
static PyObject *__pyx_kp_u_Grup_Publik;
static PyObject *__pyx_n_s_H;
static PyObject *__pyx_kp_u_ID;
static PyObject *__pyx_kp_u_ID_Grup;
static PyObject *__pyx_kp_u_INFO;
static PyObject *__pyx_n_s_IOError;
static PyObject *__pyx_kp_u_Jumlah_Teman;
static PyObject *__pyx_n_s_K;
static PyObject *__pyx_n_s_KeyError;
static PyObject *__pyx_n_s_KeyboardInterrupt;
static PyObject *__pyx_kp_u_Lihat_Hasil_Selanjutnya;
static PyObject *__pyx_kp_u_Lihat_Postingan_Lainnya_span;
static PyObject *__pyx_kp_u_Lihat_Selengkapnya;
static PyObject *__pyx_kp_u_Lihat_komentar_lainnya;
static PyObject *__pyx_kp_u_Lihat_selengkapnya;
static PyObject *__pyx_n_s_Login;
static PyObject *__pyx_n_u_Lookup;
static PyObject *__pyx_n_s_M;
static PyObject *__pyx_kp_u_Masukan_ID_Depan;
static PyObject *__pyx_kp_u_Masukan_ID_Grup;
static PyObject *__pyx_kp_u_Masukan_ID_Postingan;
static PyObject *__pyx_kp_u_Masukan_Jumlah;
static PyObject *__pyx_kp_u_Masukan_Jumlah_Digit;
static PyObject *__pyx_kp_u_Masukan_Jumlah_Target;
static PyObject *__pyx_kp_u_Masukan_Letak_File;
static PyObject *__pyx_kp_u_Masukan_Limit;
static PyObject *__pyx_kp_u_Masukan_Nama;
static PyObject *__pyx_kp_u_Masukan_Nama_Pencarian;
static PyObject *__pyx_kp_u_Masukan_Username_Atau_ID;
static PyObject *__pyx_kp_u_Masukan_Username_Atau_ID_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_Mi;
static PyObject *__pyx_kp_u_Mozilla_5_0_SymbianOS_9_3_Series;
static PyObject *__pyx_n_s_N;
static PyObject *__pyx_kp_u_Nama_Grup;
static PyObject *__pyx_n_s_O;
static PyObject *__pyx_n_u_OPEN;
static PyObject *__pyx_n_s_P;
static PyObject *__pyx_n_s_Panel;
static PyObject *__pyx_kp_u_Pilih;
static PyObject *__pyx_kp_u_Pilih_Angka_Untuk_Di_Crack;
static PyObject *__pyx_kp_u_Sampai;
static PyObject *__pyx_kp_u_Sedang_Mengumpulkan_s_ID;
static PyObject *__pyx_n_s_Session;
static PyObject *__pyx_n_s_Tree;
static PyObject *__pyx_n_s_TypeError;
static PyObject *__pyx_kp_u_Type_Grup;
static PyObject *__pyx_n_s_U;
static PyObject *__pyx_kp_u_Untuk_Berhenti_Tekan_Ctrl_C_Di;
static PyObject *__pyx_n_s_ValueError;
static PyObject *__pyx_kp_u__12;
static PyObject *__pyx_kp_u__13;
static PyObject *__pyx_kp_u__16;
static PyObject *__pyx_kp_u__19;
static PyObject *__pyx_kp_u__20;
static PyObject *__pyx_kp_u__23;
static PyObject *__pyx_kp_u__26;
static PyObject *__pyx_kp_u__27;
static PyObject *__pyx_kp_u__3;
static PyObject *__pyx_kp_u__33;
static PyObject *__pyx_kp_u__45;
static PyObject *__pyx_kp_u__46;
static PyObject *__pyx_kp_u__47;
static PyObject *__pyx_kp_u__5;
static PyObject *__pyx_n_u_a;
static PyObject *__pyx_kp_u_a_href;
static PyObject *__pyx_kp_u_a_href_div_class_div_class_div;
static PyObject *__pyx_kp_u_access_token;
static PyObject *__pyx_kp_u_access_token_2;
static PyObject *__pyx_kp_u_akun_tidak_tersedia_atau_list_t;
static PyObject *__pyx_kp_u_akun_tidak_tersedia_atau_list_t_2;
static PyObject *__pyx_kp_u_amp;
static PyObject *__pyx_n_s_anggota;
static PyObject *__pyx_n_s_append;
static PyObject *__pyx_n_s_ask;
static PyObject *__pyx_n_s_atursandi;
static PyObject *__pyx_kp_u_b_01_Crack_Dari_React_Semua_05;
static PyObject *__pyx_n_s_baca;
static PyObject *__pyx_n_s_bcj;
static PyObject *__pyx_n_s_bcj2;
static PyObject *__pyx_n_s_belakang;
static PyObject *__pyx_n_s_bs4;
static PyObject *__pyx_n_s_calendar;
static PyObject *__pyx_n_s_cari;
static PyObject *__pyx_n_u_check;
static PyObject *__pyx_n_s_clear;
static PyObject *__pyx_n_s_cline_in_traceback;
static PyObject *__pyx_n_u_code;
static PyObject *__pyx_n_s_cok;
static PyObject *__pyx_n_s_content;
static PyObject *__pyx_kp_u_content_owner_id_new;
static PyObject *__pyx_kp_u_content_owner_id_new_w;
static PyObject *__pyx_n_s_convert_id;
static PyObject *__pyx_n_s_cookie;
static PyObject *__pyx_n_u_cookie;
static PyObject *__pyx_n_s_cookies;
static PyObject *__pyx_n_s_crack;
static PyObject *__pyx_n_s_css;
static PyObject *__pyx_n_s_d;
static PyObject *__pyx_n_s_data;
static PyObject *__pyx_n_u_data;
static PyObject *__pyx_kp_u_data_cookie_txt;
static PyObject *__pyx_n_s_data_teman;
static PyObject *__pyx_n_s_date;
static PyObject *__pyx_n_s_datetime;
static PyObject *__pyx_n_s_depan;
static PyObject *__pyx_n_s_digit;
static PyObject *__pyx_n_s_dump;
static PyObject *__pyx_n_s_dump_file;
static PyObject *__pyx_n_s_dump_komentar;
static PyObject *__pyx_n_s_dump_pencarian;
static PyObject *__pyx_kp_s_dump_py;
static PyObject *__pyx_n_s_dump_react;
static PyObject *__pyx_n_s_dump_saran;
static PyObject *__pyx_n_s_e;
static PyObject *__pyx_n_s_encode;
static PyObject *__pyx_n_s_exit;
static PyObject *__pyx_n_u_facebook;
static PyObject *__pyx_n_u_fburl;
static PyObject *__pyx_kp_u_fields_name_friends_fields_id_n;
static PyObject *__pyx_kp_u_fields_name_friends_fields_id_n_2;
static PyObject *__pyx_kp_u_fields_name_subscribers_fields;
static PyObject *__pyx_n_s_files;
static PyObject *__pyx_n_s_find;
static PyObject *__pyx_n_s_find_all;
static PyObject *__pyx_n_s_findall;
static PyObject *__pyx_n_s_flush;
static PyObject *__pyx_n_s_followers;
static PyObject *__pyx_n_u_friends;
static PyObject *__pyx_kp_u_friends_hovercard;
static PyObject *__pyx_n_s_g;
static PyObject *__pyx_n_s_garis;
static PyObject *__pyx_n_s_get;
static PyObject *__pyx_n_s_get_data;
static PyObject *__pyx_n_s_get_datagrup;
static PyObject *__pyx_n_s_get_dump;
static PyObject *__pyx_n_s_get_pencarianteman;
static PyObject *__pyx_n_s_grup_tanpalogin;
static PyObject *__pyx_n_s_grupbergabung;
static PyObject *__pyx_n_u_h3;
static PyObject *__pyx_n_s_header_grup;
static PyObject *__pyx_n_s_header_grup_tanpalogin;
static PyObject *__pyx_n_s_headers;
static PyObject *__pyx_n_s_href;
static PyObject *__pyx_n_u_href;
static PyObject *__pyx_kp_u_html_parser;
static PyObject *__pyx_kp_u_https_free_facebook_com_user;
static PyObject *__pyx_kp_u_https_graph_facebook_com;
static PyObject *__pyx_kp_u_https_graph_facebook_com_me_grou;
static PyObject *__pyx_kp_u_https_lookup_id_com;
static PyObject *__pyx_kp_u_https_mbasic_facebook_com;
static PyObject *__pyx_kp_u_https_mbasic_facebook_com_2;
static PyObject *__pyx_kp_u_https_mbasic_facebook_com_friend;
static PyObject *__pyx_kp_u_https_mbasic_facebook_com_friend_2;
static PyObject *__pyx_kp_u_https_mbasic_facebook_com_groups;
static PyObject *__pyx_kp_u_https_mbasic_facebook_com_public;
static PyObject *__pyx_kp_u_https_mbasic_facebook_com_ufi_re;
static PyObject *__pyx_n_s_i;
static PyObject *__pyx_n_s_id;
static PyObject *__pyx_n_u_id;
static PyObject *__pyx_kp_u_id_2;
static PyObject *__pyx_n_s_id_group;
static PyObject *__pyx_n_s_idg;
static PyObject *__pyx_n_s_idku;
static PyObject *__pyx_n_s_ids;
static PyObject *__pyx_n_s_idsiapa;
static PyObject *__pyx_n_s_idt;
static PyObject *__pyx_n_s_idteman;
static PyObject *__pyx_n_s_idx;
static PyObject *__pyx_n_s_idyou;
static PyObject *__pyx_kp_u_img;
static PyObject *__pyx_n_s_import;
static PyObject *__pyx_n_s_input;
static PyObject *__pyx_n_s_isi;
static PyObject *__pyx_n_s_iso;
static PyObject *__pyx_n_s_json;
static PyObject *__pyx_n_s_jum;
static PyObject *__pyx_n_s_jumlah;
static PyObject *__pyx_n_s_komen;
static PyObject *__pyx_n_s_komentar;
static PyObject *__pyx_n_s_kontol;
static PyObject *__pyx_n_s_kue;
static PyObject *__pyx_n_s_lanjut;
static PyObject *__pyx_n_s_liatnih;
static PyObject *__pyx_n_s_like;
static PyObject *__pyx_kp_u_likes_fields_limit_100000_acces;
static PyObject *__pyx_n_s_limit;
static PyObject *__pyx_n_s_link;
static PyObject *__pyx_kp_u_locale2_id_ID;
static PyObject *__pyx_n_s_login;
static PyObject *__pyx_n_s_main;
static PyObject *__pyx_n_s_massal;
static PyObject *__pyx_kp_u_masukan_tempat_file_dengan_bena;
static PyObject *__pyx_n_u_mengajukan;
static PyObject *__pyx_kp_u_mengajukan_pertanyaan;
static PyObject *__pyx_n_s_n;
static PyObject *__pyx_n_s_nama;
static PyObject *__pyx_n_s_namayou;
static PyObject *__pyx_n_u_name;
static PyObject *__pyx_n_s_name_2;
static PyObject *__pyx_n_u_next;
static PyObject *__pyx_n_s_no;
static PyObject *__pyx_n_s_old;
static PyObject *__pyx_n_s_open;
static PyObject *__pyx_n_s_os;
static PyObject *__pyx_n_s_par;
static PyObject *__pyx_n_s_parser;
static PyObject *__pyx_n_s_payload;
static PyObject *__pyx_n_s_pencarian_nologin;
static PyObject *__pyx_n_s_pencarianteman;
static PyObject *__pyx_n_s_permintaanteman;
static PyObject *__pyx_n_s_post;
static PyObject *__pyx_kp_u_post_tidak_tersedia_atau_tidak;
static PyObject *__pyx_n_s_print;
static PyObject *__pyx_n_s_prints;
static PyObject *__pyx_n_s_priv;
static PyObject *__pyx_n_u_privacy;
static PyObject *__pyx_kp_u_profile_php;
static PyObject *__pyx_kp_u_profile_php_2;
static PyObject *__pyx_kp_u_profile_php_id;
static PyObject *__pyx_n_s_publik;
static PyObject *__pyx_n_s_r;
static PyObject *__pyx_n_u_r;
static PyObject *__pyx_n_s_randint;
static PyObject *__pyx_n_s_random;
static PyObject *__pyx_n_s_randomnew;
static PyObject *__pyx_n_s_randomold;
static PyObject *__pyx_n_s_range;
static PyObject *__pyx_n_s_re;
static PyObject *__pyx_n_s_react_type;
static PyObject *__pyx_kp_u_reaction_type;
static PyObject *__pyx_kp_u_reaction_type_0;
static PyObject *__pyx_n_s_reactions;
static PyObject *__pyx_n_s_read;
static PyObject *__pyx_n_s_readlines;
static PyObject *__pyx_n_s_replace;
static PyObject *__pyx_n_s_requests;
static PyObject *__pyx_n_s_rich;
static PyObject *__pyx_n_s_rich_panel;
static PyObject *__pyx_n_s_rich_tree;
static PyObject *__pyx_n_s_s;
static PyObject *__pyx_n_s_saranteman;
static PyObject *__pyx_n_s_ses;
static PyObject *__pyx_n_u_span;
static PyObject *__pyx_kp_u_span_2;
static PyObject *__pyx_n_s_spl;
static PyObject *__pyx_n_s_split;
static PyObject *__pyx_n_s_src;
static PyObject *__pyx_n_s_stdout;
static PyObject *__pyx_n_s_string;
static PyObject *__pyx_n_s_subprocess;
static PyObject *__pyx_n_s_sys;
static PyObject *__pyx_n_s_t;
static PyObject *__pyx_n_u_table;
static PyObject *__pyx_n_s_tanya_total;
static PyObject *__pyx_n_u_td;
static PyObject *__pyx_n_s_te;
static PyObject *__pyx_n_s_teman;
static PyObject *__pyx_n_s_temandariteman;
static PyObject *__pyx_n_s_test;
static PyObject *__pyx_n_s_text;
static PyObject *__pyx_n_s_threading;
static PyObject *__pyx_n_s_time;
static PyObject *__pyx_n_s_title;
static PyObject *__pyx_n_s_token;
static PyObject *__pyx_n_s_type;
static PyObject *__pyx_kp_u_uid;
static PyObject *__pyx_n_s_uid_2;
static PyObject *__pyx_n_s_url;
static PyObject *__pyx_n_s_urlmain;
static PyObject *__pyx_n_s_user;
static PyObject *__pyx_kp_u_user_agent;
static PyObject *__pyx_kp_u_utf_8;
static PyObject *__pyx_n_s_uuid;
static PyObject *__pyx_kp_u_w;
static PyObject *__pyx_n_s_write;
static PyObject *__pyx_n_s_x;
static PyObject *__pyx_n_s_xf;
static PyObject *__pyx_n_s_xx;
static PyObject *__pyx_n_s_z;
static PyObject *__pyx_pf_4dump_convert_id(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_user); 
static PyObject *__pyx_pf_4dump_2get_data(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_idt, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_4get_dump(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_idt, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_6dump_file(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_4dump_8pencarian_nologin(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_4dump_10dump_pencarian(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_link); 
static PyObject *__pyx_pf_4dump_12grup_tanpalogin(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_4dump_14get_datagrup(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url); 
static PyObject *__pyx_pf_4dump_16grupbergabung(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_18pencarianteman(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_20get_pencarianteman(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url, PyObject *__pyx_v_token, PyObject *__pyx_v_z); 
static PyObject *__pyx_pf_4dump_22temandariteman(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_24publik(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_26massal(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_28followers(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_30like(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_32randomold(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_34randomnew(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyObject *__pyx_pf_4dump_36komentar(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_4dump_38dump_komentar(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url); 
static PyObject *__pyx_pf_4dump_40saranteman(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_4dump_42permintaanteman(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_4dump_44dump_saran(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url); 
static PyObject *__pyx_pf_4dump_46reactions(CYTHON_UNUSED PyObject *__pyx_self); 
static PyObject *__pyx_pf_4dump_48dump_react(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url, PyObject *__pyx_v_cookie); 
static PyObject *__pyx_int_0;
static PyObject *__pyx_int_1;
static PyObject *__pyx_int_15;
static PyObject *__pyx_tuple_;
static PyObject *__pyx_tuple__2;
static PyObject *__pyx_tuple__4;
static PyObject *__pyx_tuple__6;
static PyObject *__pyx_tuple__7;
static PyObject *__pyx_tuple__8;
static PyObject *__pyx_tuple__9;
static PyObject *__pyx_tuple__10;
static PyObject *__pyx_tuple__11;
static PyObject *__pyx_tuple__14;
static PyObject *__pyx_tuple__15;
static PyObject *__pyx_tuple__17;
static PyObject *__pyx_tuple__18;
static PyObject *__pyx_tuple__21;
static PyObject *__pyx_tuple__22;
static PyObject *__pyx_tuple__24;
static PyObject *__pyx_tuple__25;
static PyObject *__pyx_tuple__28;
static PyObject *__pyx_tuple__29;
static PyObject *__pyx_tuple__30;
static PyObject *__pyx_tuple__31;
static PyObject *__pyx_tuple__32;
static PyObject *__pyx_tuple__34;
static PyObject *__pyx_tuple__35;
static PyObject *__pyx_tuple__36;
static PyObject *__pyx_tuple__37;
static PyObject *__pyx_tuple__38;
static PyObject *__pyx_tuple__39;
static PyObject *__pyx_tuple__40;
static PyObject *__pyx_tuple__41;
static PyObject *__pyx_tuple__42;
static PyObject *__pyx_tuple__43;
static PyObject *__pyx_tuple__44;
static PyObject *__pyx_tuple__48;
static PyObject *__pyx_tuple__50;
static PyObject *__pyx_tuple__52;
static PyObject *__pyx_tuple__54;
static PyObject *__pyx_tuple__56;
static PyObject *__pyx_tuple__58;
static PyObject *__pyx_tuple__60;
static PyObject *__pyx_tuple__62;
static PyObject *__pyx_tuple__64;
static PyObject *__pyx_tuple__66;
static PyObject *__pyx_tuple__68;
static PyObject *__pyx_tuple__70;
static PyObject *__pyx_tuple__72;
static PyObject *__pyx_tuple__74;
static PyObject *__pyx_tuple__76;
static PyObject *__pyx_tuple__78;
static PyObject *__pyx_tuple__80;
static PyObject *__pyx_tuple__82;
static PyObject *__pyx_tuple__84;
static PyObject *__pyx_tuple__86;
static PyObject *__pyx_tuple__88;
static PyObject *__pyx_tuple__90;
static PyObject *__pyx_tuple__92;
static PyObject *__pyx_tuple__94;
static PyObject *__pyx_tuple__96;
static PyObject *__pyx_codeobj__49;
static PyObject *__pyx_codeobj__51;
static PyObject *__pyx_codeobj__53;
static PyObject *__pyx_codeobj__55;
static PyObject *__pyx_codeobj__57;
static PyObject *__pyx_codeobj__59;
static PyObject *__pyx_codeobj__61;
static PyObject *__pyx_codeobj__63;
static PyObject *__pyx_codeobj__65;
static PyObject *__pyx_codeobj__67;
static PyObject *__pyx_codeobj__69;
static PyObject *__pyx_codeobj__71;
static PyObject *__pyx_codeobj__73;
static PyObject *__pyx_codeobj__75;
static PyObject *__pyx_codeobj__77;
static PyObject *__pyx_codeobj__79;
static PyObject *__pyx_codeobj__81;
static PyObject *__pyx_codeobj__83;
static PyObject *__pyx_codeobj__85;
static PyObject *__pyx_codeobj__87;
static PyObject *__pyx_codeobj__89;
static PyObject *__pyx_codeobj__91;
static PyObject *__pyx_codeobj__93;
static PyObject *__pyx_codeobj__95;
static PyObject *__pyx_codeobj__97;





static PyObject *__pyx_pw_4dump_1convert_id(PyObject *__pyx_self, PyObject *__pyx_v_user); 
static PyMethodDef __pyx_mdef_4dump_1convert_id = {"convert_id", (PyCFunction)__pyx_pw_4dump_1convert_id, METH_O, 0};
static PyObject *__pyx_pw_4dump_1convert_id(PyObject *__pyx_self, PyObject *__pyx_v_user) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("convert_id (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_convert_id(__pyx_self, ((PyObject *)__pyx_v_user));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_convert_id(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_user) {
  PyObject *__pyx_v_payload = NULL;
  PyObject *__pyx_v_url = NULL;
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  int __pyx_t_2;
  int __pyx_t_3;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_t_8;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("convert_id", 0);

  
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 36, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_fburl, __pyx_kp_u_https_free_facebook_com_user) < 0) __PYX_ERR(0, 36, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_check, __pyx_n_u_Lookup) < 0) __PYX_ERR(0, 36, __pyx_L1_error)
  __pyx_v_payload = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

  
  __pyx_t_2 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_facebook, __pyx_v_user, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 37, __pyx_L1_error)
  __pyx_t_3 = (__pyx_t_2 != 0);
  if (__pyx_t_3) {

    
    __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 38, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_fburl, __pyx_v_user) < 0) __PYX_ERR(0, 38, __pyx_L1_error)
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_check, __pyx_n_u_Lookup) < 0) __PYX_ERR(0, 38, __pyx_L1_error)
    __Pyx_DECREF_SET(__pyx_v_payload, ((PyObject*)__pyx_t_1));
    __pyx_t_1 = 0;

    
  }

  
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_parser); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ses); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_post); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_data, __pyx_v_payload) < 0) __PYX_ERR(0, 39, __pyx_L1_error)
  __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple_, __pyx_t_5); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_content); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = NULL;
  __pyx_t_8 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_8 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 39, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 39, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  {
    __pyx_t_6 = PyTuple_New(2+__pyx_t_8); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 39, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    if (__pyx_t_7) {
      __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_7); __pyx_t_7 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_8, __pyx_t_5);
    __Pyx_INCREF(__pyx_kp_u_html_parser);
    __Pyx_GIVEREF(__pyx_kp_u_html_parser);
    PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_8, __pyx_kp_u_html_parser);
    __pyx_t_5 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 39, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  }
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_v_url = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_url, __pyx_n_s_find); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_id, __pyx_n_u_code) < 0) __PYX_ERR(0, 40, __pyx_L1_error)
  __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__2, __pyx_t_4); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_v_data = __pyx_t_6;
  __pyx_t_6 = 0;

  
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_data, __pyx_n_s_text); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 41, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_v_idt = __pyx_t_6;
  __pyx_t_6 = 0;

  
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_idt);
  __pyx_r = __pyx_v_idt;
  goto __pyx_L0;

  

  
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("dump.convert_id", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_payload);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_3get_data(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); 
static PyMethodDef __pyx_mdef_4dump_3get_data = {"get_data", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_4dump_3get_data, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_4dump_3get_data(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_idt = 0;
  PyObject *__pyx_v_token = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("get_data (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_idt,&__pyx_n_s_token,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_idt)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_token)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("get_data", 1, 2, 2, 1); __PYX_ERR(0, 45, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "get_data") < 0)) __PYX_ERR(0, 45, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_idt = values[0];
    __pyx_v_token = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("get_data", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 45, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("dump.get_data", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_4dump_2get_data(__pyx_self, __pyx_v_idt, __pyx_v_token);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_2get_data(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_idt, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_url = NULL;
  PyObject *__pyx_v_d = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  Py_ssize_t __pyx_t_8;
  Py_UCS4 __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *(*__pyx_t_11)(PyObject *);
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_t_15;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("get_data", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ses); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 47, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_get); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 47, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = PyTuple_New(4); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 47, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_8 = 0;
      __pyx_t_9 = 127;
      __Pyx_INCREF(__pyx_kp_u_https_graph_facebook_com);
      __pyx_t_8 += 27;
      __Pyx_GIVEREF(__pyx_kp_u_https_graph_facebook_com);
      PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_kp_u_https_graph_facebook_com);
      __pyx_t_10 = __Pyx_PyObject_FormatSimple(__pyx_v_idt, __pyx_empty_unicode); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 47, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_9 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) > __pyx_t_9) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) : __pyx_t_9;
      __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_10);
      __Pyx_GIVEREF(__pyx_t_10);
      PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_t_10);
      __pyx_t_10 = 0;
      __Pyx_INCREF(__pyx_kp_u_fields_name_friends_fields_id_n);
      __pyx_t_8 += 62;
      __Pyx_GIVEREF(__pyx_kp_u_fields_name_friends_fields_id_n);
      PyTuple_SET_ITEM(__pyx_t_6, 2, __pyx_kp_u_fields_name_friends_fields_id_n);
      __pyx_t_10 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 47, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_9 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) > __pyx_t_9) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) : __pyx_t_9;
      __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_10);
      __Pyx_GIVEREF(__pyx_t_10);
      PyTuple_SET_ITEM(__pyx_t_6, 3, __pyx_t_10);
      __pyx_t_10 = 0;
      __pyx_t_10 = __Pyx_PyUnicode_Join(__pyx_t_6, 4, __pyx_t_8, __pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 47, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
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
      __pyx_t_5 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_6, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_10);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 47, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_json); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 47, __pyx_L3_error)
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
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 47, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_v_url = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_url, __pyx_n_u_friends); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 48, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_t_4, __pyx_n_u_data); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 48, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (likely(PyList_CheckExact(__pyx_t_7)) || PyTuple_CheckExact(__pyx_t_7)) {
        __pyx_t_4 = __pyx_t_7; __Pyx_INCREF(__pyx_t_4); __pyx_t_8 = 0;
        __pyx_t_11 = NULL;
      } else {
        __pyx_t_8 = -1; __pyx_t_4 = PyObject_GetIter(__pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 48, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_11 = Py_TYPE(__pyx_t_4)->tp_iternext; if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 48, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      for (;;) {
        if (likely(!__pyx_t_11)) {
          if (likely(PyList_CheckExact(__pyx_t_4))) {
            if (__pyx_t_8 >= PyList_GET_SIZE(__pyx_t_4)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_7 = PyList_GET_ITEM(__pyx_t_4, __pyx_t_8); __Pyx_INCREF(__pyx_t_7); __pyx_t_8++; if (unlikely(0 < 0)) __PYX_ERR(0, 48, __pyx_L3_error)
            #else
            __pyx_t_7 = PySequence_ITEM(__pyx_t_4, __pyx_t_8); __pyx_t_8++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 48, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            #endif
          } else {
            if (__pyx_t_8 >= PyTuple_GET_SIZE(__pyx_t_4)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_7 = PyTuple_GET_ITEM(__pyx_t_4, __pyx_t_8); __Pyx_INCREF(__pyx_t_7); __pyx_t_8++; if (unlikely(0 < 0)) __PYX_ERR(0, 48, __pyx_L3_error)
            #else
            __pyx_t_7 = PySequence_ITEM(__pyx_t_4, __pyx_t_8); __pyx_t_8++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 48, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            #endif
          }
        } else {
          __pyx_t_7 = __pyx_t_11(__pyx_t_4);
          if (unlikely(!__pyx_t_7)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 48, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_7);
        }
        __Pyx_XDECREF_SET(__pyx_v_d, __pyx_t_7);
        __pyx_t_7 = 0;

        
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __Pyx_ExceptionSave(&__pyx_t_12, &__pyx_t_13, &__pyx_t_14);
          __Pyx_XGOTREF(__pyx_t_12);
          __Pyx_XGOTREF(__pyx_t_13);
          __Pyx_XGOTREF(__pyx_t_14);
           {

            
            __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_data_teman); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 50, __pyx_L11_error)
            __Pyx_GOTREF(__pyx_t_7);
            __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_d, __pyx_n_u_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 50, __pyx_L11_error)
            __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_10 = PyNumber_Add(__pyx_t_5, __pyx_kp_u__3); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 50, __pyx_L11_error)
            __Pyx_GOTREF(__pyx_t_10);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_d, __pyx_n_u_name); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 50, __pyx_L11_error)
            __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_6 = PyNumber_Add(__pyx_t_10, __pyx_t_5); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 50, __pyx_L11_error)
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __pyx_t_15 = __Pyx_PyObject_Append(__pyx_t_7, __pyx_t_6); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 50, __pyx_L11_error)
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

            
          }
          __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          goto __pyx_L18_try_end;
          __pyx_L11_error:;
          __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

          
           {
            __Pyx_AddTraceback("dump.get_data", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_7, &__pyx_t_5) < 0) __PYX_ERR(0, 51, __pyx_L13_except_error)
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_GOTREF(__pyx_t_7);
            __Pyx_GOTREF(__pyx_t_5);
            goto __pyx_L20_except_continue;
            __pyx_L20_except_continue:;
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            goto __pyx_L17_try_continue;
          }
          __pyx_L13_except_error:;

          
          __Pyx_XGIVEREF(__pyx_t_12);
          __Pyx_XGIVEREF(__pyx_t_13);
          __Pyx_XGIVEREF(__pyx_t_14);
          __Pyx_ExceptionReset(__pyx_t_12, __pyx_t_13, __pyx_t_14);
          goto __pyx_L3_error;
          __pyx_L17_try_continue:;
          __Pyx_XGIVEREF(__pyx_t_12);
          __Pyx_XGIVEREF(__pyx_t_13);
          __Pyx_XGIVEREF(__pyx_t_14);
          __Pyx_ExceptionReset(__pyx_t_12, __pyx_t_13, __pyx_t_14);
          goto __pyx_L9_continue;
          __pyx_L18_try_end:;
        }

        
        __pyx_L9_continue:;
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_XDECREF(__pyx_r);
      __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_data_teman); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 52, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_8 = PyObject_Length(__pyx_t_4); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 52, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = PyInt_FromSsize_t(__pyx_t_8); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 52, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 52, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_r = __pyx_t_5;
      __pyx_t_5 = 0;
      goto __pyx_L7_try_return;

      
    }
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

    
     {
      __Pyx_AddTraceback("dump.get_data", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_4, &__pyx_t_7) < 0) __PYX_ERR(0, 53, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_7);

      
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(__pyx_int_0);
      __pyx_r = __pyx_int_0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      goto __pyx_L6_except_return;
    }
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L7_try_return:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L0;
    __pyx_L6_except_return:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L0;
  }

  

  
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("dump.get_data", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XDECREF(__pyx_v_d);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_5get_dump(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); 
static PyMethodDef __pyx_mdef_4dump_5get_dump = {"get_dump", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_4dump_5get_dump, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_4dump_5get_dump(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_idt = 0;
  PyObject *__pyx_v_token = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("get_dump (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_idt,&__pyx_n_s_token,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_idt)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_token)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("get_dump", 1, 2, 2, 1); __PYX_ERR(0, 57, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "get_dump") < 0)) __PYX_ERR(0, 57, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_idt = values[0];
    __pyx_v_token = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("get_dump", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 57, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("dump.get_dump", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_4dump_4get_dump(__pyx_self, __pyx_v_idt, __pyx_v_token);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_4get_dump(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_idt, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  Py_ssize_t __pyx_t_8;
  Py_UCS4 __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *(*__pyx_t_11)(PyObject *);
  int __pyx_t_12;
  Py_ssize_t __pyx_t_13;
  int __pyx_t_14;
  int __pyx_t_15;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("get_dump", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ses); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 59, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_get); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 59, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = PyTuple_New(4); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 59, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_8 = 0;
      __pyx_t_9 = 127;
      __Pyx_INCREF(__pyx_kp_u_https_graph_facebook_com);
      __pyx_t_8 += 27;
      __Pyx_GIVEREF(__pyx_kp_u_https_graph_facebook_com);
      PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_kp_u_https_graph_facebook_com);
      __pyx_t_10 = __Pyx_PyObject_FormatSimple(__pyx_v_idt, __pyx_empty_unicode); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 59, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_9 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) > __pyx_t_9) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) : __pyx_t_9;
      __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_10);
      __Pyx_GIVEREF(__pyx_t_10);
      PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_t_10);
      __pyx_t_10 = 0;
      __Pyx_INCREF(__pyx_kp_u_fields_name_friends_fields_id_n);
      __pyx_t_8 += 62;
      __Pyx_GIVEREF(__pyx_kp_u_fields_name_friends_fields_id_n);
      PyTuple_SET_ITEM(__pyx_t_6, 2, __pyx_kp_u_fields_name_friends_fields_id_n);
      __pyx_t_10 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 59, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_9 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) > __pyx_t_9) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) : __pyx_t_9;
      __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_10);
      __Pyx_GIVEREF(__pyx_t_10);
      PyTuple_SET_ITEM(__pyx_t_6, 3, __pyx_t_10);
      __pyx_t_10 = 0;
      __pyx_t_10 = __Pyx_PyUnicode_Join(__pyx_t_6, 4, __pyx_t_8, __pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 59, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
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
      __pyx_t_5 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_6, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_10);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 59, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_json); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 59, __pyx_L3_error)
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
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 59, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_t_4, __pyx_n_u_friends); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 59, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_t_7, __pyx_n_u_data); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 59, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
        __pyx_t_7 = __pyx_t_4; __Pyx_INCREF(__pyx_t_7); __pyx_t_8 = 0;
        __pyx_t_11 = NULL;
      } else {
        __pyx_t_8 = -1; __pyx_t_7 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 59, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_11 = Py_TYPE(__pyx_t_7)->tp_iternext; if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 59, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      for (;;) {
        if (likely(!__pyx_t_11)) {
          if (likely(PyList_CheckExact(__pyx_t_7))) {
            if (__pyx_t_8 >= PyList_GET_SIZE(__pyx_t_7)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyList_GET_ITEM(__pyx_t_7, __pyx_t_8); __Pyx_INCREF(__pyx_t_4); __pyx_t_8++; if (unlikely(0 < 0)) __PYX_ERR(0, 59, __pyx_L3_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_7, __pyx_t_8); __pyx_t_8++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 59, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          } else {
            if (__pyx_t_8 >= PyTuple_GET_SIZE(__pyx_t_7)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_7, __pyx_t_8); __Pyx_INCREF(__pyx_t_4); __pyx_t_8++; if (unlikely(0 < 0)) __PYX_ERR(0, 59, __pyx_L3_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_7, __pyx_t_8); __pyx_t_8++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 59, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          }
        } else {
          __pyx_t_4 = __pyx_t_11(__pyx_t_7);
          if (unlikely(!__pyx_t_4)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 59, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_4);
        }
        __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 60, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 60, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_10 = PyNumber_Add(__pyx_t_5, __pyx_kp_u__3); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 60, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_10);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_name); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 60, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_6 = PyNumber_Add(__pyx_t_10, __pyx_t_5); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 60, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_12 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_t_6); if (unlikely(__pyx_t_12 == ((int)-1))) __PYX_ERR(0, 60, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_stdout); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_write); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_13 = PyObject_Length(__pyx_t_5); if (unlikely(__pyx_t_13 == ((Py_ssize_t)-1))) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyInt_FromSsize_t(__pyx_t_13); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_10 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_5); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_10);
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
        __pyx_t_6 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_5, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_10);
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_stdout); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_10);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_flush); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __pyx_t_10 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
          __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_4);
          if (likely(__pyx_t_10)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
            __Pyx_INCREF(__pyx_t_10);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_4, function);
          }
        }
        __pyx_t_6 = (__pyx_t_10) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_10) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 61, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

        
      }
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

      
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
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

    
    __pyx_t_14 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyError);
    if (__pyx_t_14) {
      __Pyx_AddTraceback("dump.get_dump", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_6, &__pyx_t_4) < 0) __PYX_ERR(0, 62, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_10 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 62, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
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

  
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_8 = PyObject_Length(__pyx_t_4); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_15 = ((__pyx_t_8 == 0) != 0);
  if (__pyx_t_15) {
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 63, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }

  
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_Crack); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_id); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_10 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
    __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_7);
    if (likely(__pyx_t_10)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
      __Pyx_INCREF(__pyx_t_10);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_7, function);
    }
  }
  __pyx_t_4 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_10, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_6);
  __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("dump.get_dump", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_7dump_file(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_4dump_7dump_file = {"dump_file", (PyCFunction)__pyx_pw_4dump_7dump_file, METH_NOARGS, 0};
static PyObject *__pyx_pw_4dump_7dump_file(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("dump_file (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_6dump_file(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_6dump_file(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_files = NULL;
  PyObject *__pyx_v_baca = NULL;
  PyObject *__pyx_v_z = NULL;
  PyObject *__pyx_v_e = NULL;
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
  PyObject *(*__pyx_t_10)(PyObject *);
  int __pyx_t_11;
  int __pyx_t_12;
  int __pyx_t_13;
  char const *__pyx_t_14;
  PyObject *__pyx_t_15 = NULL;
  PyObject *__pyx_t_16 = NULL;
  PyObject *__pyx_t_17 = NULL;
  PyObject *__pyx_t_18 = NULL;
  PyObject *__pyx_t_19 = NULL;
  PyObject *__pyx_t_20 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("dump_file", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 70, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 70, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 70, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_kp_u_INFO) < 0) __PYX_ERR(0, 70, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__7, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 70, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 70, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__8, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 71, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_files = __pyx_t_1;
  __pyx_t_1 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_6);
    __Pyx_XGOTREF(__pyx_t_7);
    __Pyx_XGOTREF(__pyx_t_8);
     {

      
      __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 73, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_INCREF(__pyx_v_files);
      __Pyx_GIVEREF(__pyx_v_files);
      PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_v_files);
      __Pyx_INCREF(__pyx_n_u_r);
      __Pyx_GIVEREF(__pyx_n_u_r);
      PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_n_u_r);
      __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_t_2, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 73, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_readlines); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 73, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
        }
      }
      __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 73, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_v_baca = __pyx_t_1;
      __pyx_t_1 = 0;

      
      if (likely(PyList_CheckExact(__pyx_v_baca)) || PyTuple_CheckExact(__pyx_v_baca)) {
        __pyx_t_1 = __pyx_v_baca; __Pyx_INCREF(__pyx_t_1); __pyx_t_9 = 0;
        __pyx_t_10 = NULL;
      } else {
        __pyx_t_9 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_baca); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 74, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_10 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 74, __pyx_L3_error)
      }
      for (;;) {
        if (likely(!__pyx_t_10)) {
          if (likely(PyList_CheckExact(__pyx_t_1))) {
            if (__pyx_t_9 >= PyList_GET_SIZE(__pyx_t_1)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_2 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_2); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 74, __pyx_L3_error)
            #else
            __pyx_t_2 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 74, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_2);
            #endif
          } else {
            if (__pyx_t_9 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_2); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 74, __pyx_L3_error)
            #else
            __pyx_t_2 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 74, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_2);
            #endif
          }
        } else {
          __pyx_t_2 = __pyx_t_10(__pyx_t_1);
          if (unlikely(!__pyx_t_2)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 74, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_2);
        }
        __Pyx_XDECREF_SET(__pyx_v_z, __pyx_t_2);
        __pyx_t_2 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_id); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 75, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_11 = __Pyx_PyObject_Append(__pyx_t_2, __pyx_v_z); if (unlikely(__pyx_t_11 == ((int)-1))) __PYX_ERR(0, 75, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

        
      }
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    __pyx_t_12 = __Pyx_PyErr_ExceptionMatches(((PyObject *)(&((PyTypeObject*)PyExc_Exception)[0])));
    if (__pyx_t_12) {
      __Pyx_AddTraceback("dump.dump_file", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_2, &__pyx_t_5) < 0) __PYX_ERR(0, 76, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_2);
      __pyx_v_e = __pyx_t_2;
       {

        
        __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_v_e); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 77, __pyx_L16_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

        
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__9, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 78, __pyx_L16_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      }

      
       {
        {
          __Pyx_DECREF(__pyx_v_e);
          __pyx_v_e = NULL;
          goto __pyx_L17;
        }
        __pyx_L16_error:;
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __pyx_t_15 = 0; __pyx_t_16 = 0; __pyx_t_17 = 0; __pyx_t_18 = 0; __pyx_t_19 = 0; __pyx_t_20 = 0;
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
          if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_18, &__pyx_t_19, &__pyx_t_20);
          if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_15, &__pyx_t_16, &__pyx_t_17) < 0)) __Pyx_ErrFetch(&__pyx_t_15, &__pyx_t_16, &__pyx_t_17);
          __Pyx_XGOTREF(__pyx_t_15);
          __Pyx_XGOTREF(__pyx_t_16);
          __Pyx_XGOTREF(__pyx_t_17);
          __Pyx_XGOTREF(__pyx_t_18);
          __Pyx_XGOTREF(__pyx_t_19);
          __Pyx_XGOTREF(__pyx_t_20);
          __pyx_t_12 = __pyx_lineno; __pyx_t_13 = __pyx_clineno; __pyx_t_14 = __pyx_filename;
          {
            __Pyx_DECREF(__pyx_v_e);
            __pyx_v_e = NULL;
          }
          if (PY_MAJOR_VERSION >= 3) {
            __Pyx_XGIVEREF(__pyx_t_18);
            __Pyx_XGIVEREF(__pyx_t_19);
            __Pyx_XGIVEREF(__pyx_t_20);
            __Pyx_ExceptionReset(__pyx_t_18, __pyx_t_19, __pyx_t_20);
          }
          __Pyx_XGIVEREF(__pyx_t_15);
          __Pyx_XGIVEREF(__pyx_t_16);
          __Pyx_XGIVEREF(__pyx_t_17);
          __Pyx_ErrRestore(__pyx_t_15, __pyx_t_16, __pyx_t_17);
          __pyx_t_15 = 0; __pyx_t_16 = 0; __pyx_t_17 = 0; __pyx_t_18 = 0; __pyx_t_19 = 0; __pyx_t_20 = 0;
          __pyx_lineno = __pyx_t_12; __pyx_clineno = __pyx_t_13; __pyx_filename = __pyx_t_14;
          goto __pyx_L5_except_error;
        }
        __pyx_L17:;
      }
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_6);
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_6);
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
    __pyx_L8_try_end:;
  }

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Crack); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_id); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
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
  __pyx_t_5 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_4, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_2);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("dump.dump_file", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_files);
  __Pyx_XDECREF(__pyx_v_baca);
  __Pyx_XDECREF(__pyx_v_z);
  __Pyx_XDECREF(__pyx_v_e);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_9pencarian_nologin(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_4dump_9pencarian_nologin = {"pencarian_nologin", (PyCFunction)__pyx_pw_4dump_9pencarian_nologin, METH_NOARGS, 0};
static PyObject *__pyx_pw_4dump_9pencarian_nologin(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("pencarian_nologin (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_8pencarian_nologin(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_8pencarian_nologin(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_v_z = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  Py_ssize_t __pyx_t_6;
  PyObject *(*__pyx_t_7)(PyObject *);
  Py_ssize_t __pyx_t_8;
  Py_UCS4 __pyx_t_9;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("pencarian_nologin", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 83, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 83, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 83, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_kp_u_INFO) < 0) __PYX_ERR(0, 83, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__10, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 83, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 83, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__11, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 84, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_split); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 84, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_2, __pyx_kp_u__12) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u__12);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 84, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_idt = __pyx_t_1;
  __pyx_t_1 = 0;

  
  if (likely(PyList_CheckExact(__pyx_v_idt)) || PyTuple_CheckExact(__pyx_v_idt)) {
    __pyx_t_1 = __pyx_v_idt; __Pyx_INCREF(__pyx_t_1); __pyx_t_6 = 0;
    __pyx_t_7 = NULL;
  } else {
    __pyx_t_6 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_idt); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 85, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_7 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 85, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_7)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        if (__pyx_t_6 >= PyList_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_5 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_6); __Pyx_INCREF(__pyx_t_5); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 85, __pyx_L1_error)
        #else
        __pyx_t_5 = PySequence_ITEM(__pyx_t_1, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 85, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        #endif
      } else {
        if (__pyx_t_6 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_6); __Pyx_INCREF(__pyx_t_5); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 85, __pyx_L1_error)
        #else
        __pyx_t_5 = PySequence_ITEM(__pyx_t_1, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 85, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        #endif
      }
    } else {
      __pyx_t_5 = __pyx_t_7(__pyx_t_1);
      if (unlikely(!__pyx_t_5)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 85, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_5);
    }
    __Pyx_XDECREF_SET(__pyx_v_z, __pyx_t_5);
    __pyx_t_5 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_dump_pencarian); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = PyTuple_New(3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 86, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_8 = 0;
    __pyx_t_9 = 127;
    __Pyx_INCREF(__pyx_kp_u_https_mbasic_facebook_com_public);
    __pyx_t_8 += 35;
    __Pyx_GIVEREF(__pyx_kp_u_https_mbasic_facebook_com_public);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_https_mbasic_facebook_com_public);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_z, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 86, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_9 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_9) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_9;
    __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_locale2_id_ID);
    __pyx_t_8 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_locale2_id_ID);
    PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_locale2_id_ID);
    __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_4, 3, __pyx_t_8, __pyx_t_9); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 86, __pyx_L1_error)
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
    __pyx_t_5 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_4, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 86, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 87, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Crack); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
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
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_5);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("dump.pencarian_nologin", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XDECREF(__pyx_v_z);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_11dump_pencarian(PyObject *__pyx_self, PyObject *__pyx_v_link); 
static PyMethodDef __pyx_mdef_4dump_11dump_pencarian = {"dump_pencarian", (PyCFunction)__pyx_pw_4dump_11dump_pencarian, METH_O, 0};
static PyObject *__pyx_pw_4dump_11dump_pencarian(PyObject *__pyx_self, PyObject *__pyx_v_link) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("dump_pencarian (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_10dump_pencarian(__pyx_self, ((PyObject *)__pyx_v_link));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_10dump_pencarian(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_link) {
  PyObject *__pyx_v_r = NULL;
  PyObject *__pyx_v_x = NULL;
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_uid = NULL;
  PyObject *__pyx_v_nama = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  Py_ssize_t __pyx_t_8;
  PyObject *(*__pyx_t_9)(PyObject *);
  Py_ssize_t __pyx_t_10;
  PyObject *(*__pyx_t_11)(PyObject *);
  PyObject *(*__pyx_t_12)(PyObject *);
  int __pyx_t_13;
  int __pyx_t_14;
  PyObject *__pyx_t_15 = NULL;
  int __pyx_t_16;
  PyObject *__pyx_t_17 = NULL;
  PyObject *__pyx_t_18 = NULL;
  PyObject *__pyx_t_19 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("dump_pencarian", 0);
  __Pyx_INCREF(__pyx_v_link);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_parser); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 91, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ses); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 91, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 91, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_link); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 91, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
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
  __pyx_t_3 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_6, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 91, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_text); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 91, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  __pyx_t_7 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_7 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  {
    __pyx_t_4 = PyTuple_New(2+__pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (__pyx_t_3) {
      __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3); __pyx_t_3 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_7, __pyx_t_5);
    __Pyx_INCREF(__pyx_kp_u_html_parser);
    __Pyx_GIVEREF(__pyx_kp_u_html_parser);
    PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_7, __pyx_kp_u_html_parser);
    __pyx_t_5 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_r = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_r, __pyx_n_s_find_all); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 92, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_4, __pyx_n_u_td) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_n_u_td);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 92, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2); __pyx_t_8 = 0;
    __pyx_t_9 = NULL;
  } else {
    __pyx_t_8 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_9 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 92, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_9)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        if (__pyx_t_8 >= PyList_GET_SIZE(__pyx_t_2)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_8); __Pyx_INCREF(__pyx_t_1); __pyx_t_8++; if (unlikely(0 < 0)) __PYX_ERR(0, 92, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_8); __pyx_t_8++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 92, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        if (__pyx_t_8 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_8); __Pyx_INCREF(__pyx_t_1); __pyx_t_8++; if (unlikely(0 < 0)) __PYX_ERR(0, 92, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_8); __pyx_t_8++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 92, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_9(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 92, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_x, __pyx_t_1);
    __pyx_t_1 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_re); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 93, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_findall); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 93, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_x); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 93, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = NULL;
    __pyx_t_7 = 0;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_7 = 1;
      }
    }
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_5)) {
      PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_kp_u_a_href_div_class_div_class_div, __pyx_t_4};
      __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 93, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
      PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_kp_u_a_href_div_class_div_class_div, __pyx_t_4};
      __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 93, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    } else
    #endif
    {
      __pyx_t_6 = PyTuple_New(2+__pyx_t_7); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 93, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      if (__pyx_t_3) {
        __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_3); __pyx_t_3 = NULL;
      }
      __Pyx_INCREF(__pyx_kp_u_a_href_div_class_div_class_div);
      __Pyx_GIVEREF(__pyx_kp_u_a_href_div_class_div_class_div);
      PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_7, __pyx_kp_u_a_href_div_class_div_class_div);
      __Pyx_GIVEREF(__pyx_t_4);
      PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_7, __pyx_t_4);
      __pyx_t_4 = 0;
      __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 93, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    }
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF_SET(__pyx_v_data, __pyx_t_1);
    __pyx_t_1 = 0;

    
    if (likely(PyList_CheckExact(__pyx_v_data)) || PyTuple_CheckExact(__pyx_v_data)) {
      __pyx_t_1 = __pyx_v_data; __Pyx_INCREF(__pyx_t_1); __pyx_t_10 = 0;
      __pyx_t_11 = NULL;
    } else {
      __pyx_t_10 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_data); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 94, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_11 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 94, __pyx_L1_error)
    }
    for (;;) {
      if (likely(!__pyx_t_11)) {
        if (likely(PyList_CheckExact(__pyx_t_1))) {
          if (__pyx_t_10 >= PyList_GET_SIZE(__pyx_t_1)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_5 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_10); __Pyx_INCREF(__pyx_t_5); __pyx_t_10++; if (unlikely(0 < 0)) __PYX_ERR(0, 94, __pyx_L1_error)
          #else
          __pyx_t_5 = PySequence_ITEM(__pyx_t_1, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 94, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_5);
          #endif
        } else {
          if (__pyx_t_10 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_10); __Pyx_INCREF(__pyx_t_5); __pyx_t_10++; if (unlikely(0 < 0)) __PYX_ERR(0, 94, __pyx_L1_error)
          #else
          __pyx_t_5 = PySequence_ITEM(__pyx_t_1, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 94, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_5);
          #endif
        }
      } else {
        __pyx_t_5 = __pyx_t_11(__pyx_t_1);
        if (unlikely(!__pyx_t_5)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 94, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_5);
      }
      if ((likely(PyTuple_CheckExact(__pyx_t_5))) || (PyList_CheckExact(__pyx_t_5))) {
        PyObject* sequence = __pyx_t_5;
        Py_ssize_t size = __Pyx_PySequence_SIZE(sequence);
        if (unlikely(size != 2)) {
          if (size > 2) __Pyx_RaiseTooManyValuesError(2);
          else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
          __PYX_ERR(0, 94, __pyx_L1_error)
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        if (likely(PyTuple_CheckExact(sequence))) {
          __pyx_t_6 = PyTuple_GET_ITEM(sequence, 0); 
          __pyx_t_4 = PyTuple_GET_ITEM(sequence, 1); 
        } else {
          __pyx_t_6 = PyList_GET_ITEM(sequence, 0); 
          __pyx_t_4 = PyList_GET_ITEM(sequence, 1); 
        }
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_4);
        #else
        __pyx_t_6 = PySequence_ITEM(sequence, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 94, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_4 = PySequence_ITEM(sequence, 1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 94, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      } else {
        Py_ssize_t index = -1;
        __pyx_t_3 = PyObject_GetIter(__pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 94, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_12 = Py_TYPE(__pyx_t_3)->tp_iternext;
        index = 0; __pyx_t_6 = __pyx_t_12(__pyx_t_3); if (unlikely(!__pyx_t_6)) goto __pyx_L7_unpacking_failed;
        __Pyx_GOTREF(__pyx_t_6);
        index = 1; __pyx_t_4 = __pyx_t_12(__pyx_t_3); if (unlikely(!__pyx_t_4)) goto __pyx_L7_unpacking_failed;
        __Pyx_GOTREF(__pyx_t_4);
        if (__Pyx_IternextUnpackEndCheck(__pyx_t_12(__pyx_t_3), 2) < 0) __PYX_ERR(0, 94, __pyx_L1_error)
        __pyx_t_12 = NULL;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        goto __pyx_L8_unpacking_done;
        __pyx_L7_unpacking_failed:;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_12 = NULL;
        if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
        __PYX_ERR(0, 94, __pyx_L1_error)
        __pyx_L8_unpacking_done:;
      }
      __Pyx_XDECREF_SET(__pyx_v_uid, __pyx_t_6);
      __pyx_t_6 = 0;
      __Pyx_XDECREF_SET(__pyx_v_nama, __pyx_t_4);
      __pyx_t_4 = 0;

      
      __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_profile_php, __pyx_v_uid, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 95, __pyx_L1_error)
      __pyx_t_14 = (__pyx_t_13 != 0);
      if (__pyx_t_14) {

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_re); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 96, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_findall); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 96, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_uid); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 96, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_3 = NULL;
        __pyx_t_7 = 0;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
          __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_6);
          if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
            __pyx_t_7 = 1;
          }
        }
        #if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_6)) {
          PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_kp_u_id_2, __pyx_t_4};
          __pyx_t_5 = __Pyx_PyFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 96, __pyx_L1_error)
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        } else
        #endif
        #if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_6)) {
          PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_kp_u_id_2, __pyx_t_4};
          __pyx_t_5 = __Pyx_PyCFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 96, __pyx_L1_error)
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        } else
        #endif
        {
          __pyx_t_15 = PyTuple_New(2+__pyx_t_7); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 96, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_15);
          if (__pyx_t_3) {
            __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_15, 0, __pyx_t_3); __pyx_t_3 = NULL;
          }
          __Pyx_INCREF(__pyx_kp_u_id_2);
          __Pyx_GIVEREF(__pyx_kp_u_id_2);
          PyTuple_SET_ITEM(__pyx_t_15, 0+__pyx_t_7, __pyx_kp_u_id_2);
          __Pyx_GIVEREF(__pyx_t_4);
          PyTuple_SET_ITEM(__pyx_t_15, 1+__pyx_t_7, __pyx_t_4);
          __pyx_t_4 = 0;
          __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_15, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 96, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        }
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = __Pyx_GetItemInt(__pyx_t_5, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 96, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF_SET(__pyx_v_uid, __pyx_t_6);
        __pyx_t_6 = 0;

        
        goto __pyx_L9;
      }

      
      __pyx_t_14 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_span_2, __pyx_v_nama, Py_EQ)); if (unlikely(__pyx_t_14 < 0)) __PYX_ERR(0, 97, __pyx_L1_error)
      __pyx_t_13 = (__pyx_t_14 != 0);
      if (__pyx_t_13) {

        
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_re); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_15 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_findall); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_15);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_nama); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_4 = NULL;
        __pyx_t_7 = 0;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_15))) {
          __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_15);
          if (likely(__pyx_t_4)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_15);
            __Pyx_INCREF(__pyx_t_4);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_15, function);
            __pyx_t_7 = 1;
          }
        }
        #if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_15)) {
          PyObject *__pyx_temp[3] = {__pyx_t_4, __pyx_kp_u__13, __pyx_t_5};
          __pyx_t_6 = __Pyx_PyFunction_FastCall(__pyx_t_15, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 98, __pyx_L1_error)
          __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        } else
        #endif
        #if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_15)) {
          PyObject *__pyx_temp[3] = {__pyx_t_4, __pyx_kp_u__13, __pyx_t_5};
          __pyx_t_6 = __Pyx_PyCFunction_FastCall(__pyx_t_15, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 98, __pyx_L1_error)
          __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        } else
        #endif
        {
          __pyx_t_3 = PyTuple_New(2+__pyx_t_7); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 98, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_3);
          if (__pyx_t_4) {
            __Pyx_GIVEREF(__pyx_t_4); PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_4); __pyx_t_4 = NULL;
          }
          __Pyx_INCREF(__pyx_kp_u__13);
          __Pyx_GIVEREF(__pyx_kp_u__13);
          PyTuple_SET_ITEM(__pyx_t_3, 0+__pyx_t_7, __pyx_kp_u__13);
          __Pyx_GIVEREF(__pyx_t_5);
          PyTuple_SET_ITEM(__pyx_t_3, 1+__pyx_t_7, __pyx_t_5);
          __pyx_t_5 = 0;
          __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_15, __pyx_t_3, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 98, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        __pyx_t_15 = __Pyx_GetItemInt(__pyx_t_6, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_15);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF_SET(__pyx_v_nama, __pyx_t_15);
        __pyx_t_15 = 0;

        
      }
      __pyx_L9:;

      
      __Pyx_GetModuleGlobalName(__pyx_t_15, __pyx_n_s_id); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 99, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_15);
      __pyx_t_6 = PyNumber_Add(__pyx_v_uid, __pyx_kp_u__3); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 99, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_3 = PyNumber_Add(__pyx_t_6, __pyx_v_nama); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 99, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_16 = __Pyx_PyObject_Append(__pyx_t_15, __pyx_t_3); if (unlikely(__pyx_t_16 == ((int)-1))) __PYX_ERR(0, 99, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

      
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_17, &__pyx_t_18, &__pyx_t_19);
    __Pyx_XGOTREF(__pyx_t_17);
    __Pyx_XGOTREF(__pyx_t_18);
    __Pyx_XGOTREF(__pyx_t_19);
     {

      
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_r, __pyx_n_s_find); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 101, __pyx_L10_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 101, __pyx_L10_error)
      __Pyx_GOTREF(__pyx_t_3);
      if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_string, __pyx_kp_u_Lihat_Hasil_Selanjutnya) < 0) __PYX_ERR(0, 101, __pyx_L10_error)
      __pyx_t_15 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__14, __pyx_t_3); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 101, __pyx_L10_error)
      __Pyx_GOTREF(__pyx_t_15);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_15, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 101, __pyx_L10_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
      __pyx_t_15 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_15 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_15)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_15);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
        }
      }
      __pyx_t_2 = (__pyx_t_15) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_15, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_n_u_href);
      __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 101, __pyx_L10_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF_SET(__pyx_v_link, __pyx_t_2);
      __pyx_t_2 = 0;

      
      __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_v_link); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 102, __pyx_L10_error)
      if (__pyx_t_13) {

        
        __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_sys); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_15 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_stdout); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_15);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_15, __pyx_n_s_write); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_15, __pyx_n_s_id); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_15);
        __pyx_t_8 = PyObject_Length(__pyx_t_15); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        __pyx_t_15 = PyInt_FromSsize_t(__pyx_t_8); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_15);
        __pyx_t_1 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_15); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        __pyx_t_15 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_15 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_15)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_15);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
          }
        }
        __pyx_t_2 = (__pyx_t_15) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_15, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_1);
        __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_sys); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_stdout); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_flush); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
          }
        }
        __pyx_t_2 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 103, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_dump_pencarian); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 104, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_1 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
          }
        }
        __pyx_t_2 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_1, __pyx_v_link) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_v_link);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 104, __pyx_L10_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

        
      }

      
    }
    __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
    __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
    __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
    goto __pyx_L15_try_end;
    __pyx_L10_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;

    
     {
      __Pyx_ErrRestore(0,0,0);
      goto __pyx_L11_exception_handled;
    }
    __pyx_L11_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_17);
    __Pyx_XGIVEREF(__pyx_t_18);
    __Pyx_XGIVEREF(__pyx_t_19);
    __Pyx_ExceptionReset(__pyx_t_17, __pyx_t_18, __pyx_t_19);
    __pyx_L15_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_15);
  __Pyx_AddTraceback("dump.dump_pencarian", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_r);
  __Pyx_XDECREF(__pyx_v_x);
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_uid);
  __Pyx_XDECREF(__pyx_v_nama);
  __Pyx_XDECREF(__pyx_v_link);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_13grup_tanpalogin(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_4dump_13grup_tanpalogin = {"grup_tanpalogin", (PyCFunction)__pyx_pw_4dump_13grup_tanpalogin, METH_NOARGS, 0};
static PyObject *__pyx_pw_4dump_13grup_tanpalogin(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("grup_tanpalogin (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_12grup_tanpalogin(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_12grup_tanpalogin(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_v_url = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("grup_tanpalogin", 0);

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__15, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 109, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_idt = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = PyNumber_Add(__pyx_kp_u_https_mbasic_facebook_com_groups, __pyx_v_idt); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 110, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_url = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_get_datagrup); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 111, __pyx_L1_error)
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
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_v_url) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_v_url);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 112, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Crack); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 113, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 113, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_id); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 113, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
    }
  }
  __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 113, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 113, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("dump.grup_tanpalogin", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_15get_datagrup(PyObject *__pyx_self, PyObject *__pyx_v_url); 
static PyMethodDef __pyx_mdef_4dump_15get_datagrup = {"get_datagrup", (PyCFunction)__pyx_pw_4dump_15get_datagrup, METH_O, 0};
static PyObject *__pyx_pw_4dump_15get_datagrup(PyObject *__pyx_self, PyObject *__pyx_v_url) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("get_datagrup (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_14get_datagrup(__pyx_self, ((PyObject *)__pyx_v_url));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_14get_datagrup(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url) {
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_cari = NULL;
  PyObject *__pyx_v_liatnih = NULL;
  PyObject *__pyx_v_spl = NULL;
  PyObject *__pyx_v_idsiapa = NULL;
  PyObject *__pyx_v_idyou = NULL;
  PyObject *__pyx_v_namayou = NULL;
  PyObject *__pyx_v_idku = NULL;
  PyObject *__pyx_v_g = NULL;
  PyObject *__pyx_v_css = NULL;
  PyObject *__pyx_v_bcj = NULL;
  PyObject *__pyx_v_bcj2 = NULL;
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
  Py_ssize_t __pyx_t_11;
  PyObject *(*__pyx_t_12)(PyObject *);
  int __pyx_t_13;
  int __pyx_t_14;
  int __pyx_t_15;
  Py_ssize_t __pyx_t_16;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("get_datagrup", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_parser); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 117, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ses); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 117, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_get); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 117, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = PyTuple_New(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 117, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_INCREF(__pyx_v_url);
      __Pyx_GIVEREF(__pyx_v_url);
      PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_v_url);
      __pyx_t_8 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 117, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_header_grup_tanpalogin); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 117, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_headers, __pyx_t_9) < 0) __PYX_ERR(0, 117, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_7, __pyx_t_6, __pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 117, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_text); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 117, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = NULL;
      __pyx_t_10 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_10 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[3] = {__pyx_t_9, __pyx_t_8, __pyx_kp_u_html_parser};
        __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 117, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[3] = {__pyx_t_9, __pyx_t_8, __pyx_kp_u_html_parser};
        __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 117, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      } else
      #endif
      {
        __pyx_t_6 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 117, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        if (__pyx_t_9) {
          __Pyx_GIVEREF(__pyx_t_9); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_9); __pyx_t_9 = NULL;
        }
        __Pyx_GIVEREF(__pyx_t_8);
        PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_10, __pyx_t_8);
        __Pyx_INCREF(__pyx_kp_u_html_parser);
        __Pyx_GIVEREF(__pyx_kp_u_html_parser);
        PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_10, __pyx_kp_u_html_parser);
        __pyx_t_8 = 0;
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_6, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 117, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_v_data = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_data, __pyx_n_s_find_all); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 118, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_6, __pyx_n_u_table) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_n_u_table);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 118, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
        __pyx_t_5 = __pyx_t_4; __Pyx_INCREF(__pyx_t_5); __pyx_t_11 = 0;
        __pyx_t_12 = NULL;
      } else {
        __pyx_t_11 = -1; __pyx_t_5 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 118, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_12 = Py_TYPE(__pyx_t_5)->tp_iternext; if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 118, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      for (;;) {
        if (likely(!__pyx_t_12)) {
          if (likely(PyList_CheckExact(__pyx_t_5))) {
            if (__pyx_t_11 >= PyList_GET_SIZE(__pyx_t_5)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyList_GET_ITEM(__pyx_t_5, __pyx_t_11); __Pyx_INCREF(__pyx_t_4); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 118, __pyx_L3_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_5, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 118, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          } else {
            if (__pyx_t_11 >= PyTuple_GET_SIZE(__pyx_t_5)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_5, __pyx_t_11); __Pyx_INCREF(__pyx_t_4); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 118, __pyx_L3_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_5, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 118, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          }
        } else {
          __pyx_t_4 = __pyx_t_12(__pyx_t_5);
          if (unlikely(!__pyx_t_4)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 118, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_4);
        }
        __Pyx_XDECREF_SET(__pyx_v_cari, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_cari, __pyx_n_s_text); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 119, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_XDECREF_SET(__pyx_v_liatnih, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_liatnih, __pyx_n_s_split); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 120, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_8 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
          }
        }
        __pyx_t_4 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_8, __pyx_kp_u__16) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_kp_u__16);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 120, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_XDECREF_SET(__pyx_v_spl, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_mengajukan, __pyx_v_spl, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 121, __pyx_L3_error)
        __pyx_t_14 = (__pyx_t_13 != 0);
        if (__pyx_t_14) {

          
          __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_re); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 122, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_findall); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 122, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __pyx_t_6 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_cari); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 122, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_9 = NULL;
          __pyx_t_10 = 0;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
            __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_8);
            if (likely(__pyx_t_9)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
              __Pyx_INCREF(__pyx_t_9);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_8, function);
              __pyx_t_10 = 1;
            }
          }
          #if CYTHON_FAST_PYCALL
          if (PyFunction_Check(__pyx_t_8)) {
            PyObject *__pyx_temp[3] = {__pyx_t_9, __pyx_kp_u_content_owner_id_new_w, __pyx_t_6};
            __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 122, __pyx_L3_error)
            __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          } else
          #endif
          #if CYTHON_FAST_PYCCALL
          if (__Pyx_PyFastCFunction_Check(__pyx_t_8)) {
            PyObject *__pyx_temp[3] = {__pyx_t_9, __pyx_kp_u_content_owner_id_new_w, __pyx_t_6};
            __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 122, __pyx_L3_error)
            __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          } else
          #endif
          {
            __pyx_t_7 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 122, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            if (__pyx_t_9) {
              __Pyx_GIVEREF(__pyx_t_9); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_9); __pyx_t_9 = NULL;
            }
            __Pyx_INCREF(__pyx_kp_u_content_owner_id_new_w);
            __Pyx_GIVEREF(__pyx_kp_u_content_owner_id_new_w);
            PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_10, __pyx_kp_u_content_owner_id_new_w);
            __Pyx_GIVEREF(__pyx_t_6);
            PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_10, __pyx_t_6);
            __pyx_t_6 = 0;
            __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_t_7, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 122, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
          }
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_XDECREF_SET(__pyx_v_idsiapa, __pyx_t_4);
          __pyx_t_4 = 0;

          
          __pyx_t_4 = __Pyx_GetItemInt(__pyx_v_idsiapa, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 123, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_replace); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 123, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_tuple__17, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 123, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_XDECREF_SET(__pyx_v_idyou, __pyx_t_4);
          __pyx_t_4 = 0;

          
          __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_liatnih, __pyx_n_s_replace); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 124, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__18, NULL); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 124, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_XDECREF_SET(__pyx_v_namayou, __pyx_t_8);
          __pyx_t_8 = 0;

          
          __pyx_t_8 = PyNumber_Add(__pyx_v_idyou, __pyx_kp_u__3); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 125, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_8);
          __pyx_t_4 = PyNumber_Add(__pyx_t_8, __pyx_v_namayou); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 125, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_XDECREF_SET(__pyx_v_idku, __pyx_t_4);
          __pyx_t_4 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 126, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __pyx_t_14 = (__Pyx_PySequence_ContainsTF(__pyx_v_idku, __pyx_t_4, Py_EQ)); if (unlikely(__pyx_t_14 < 0)) __PYX_ERR(0, 126, __pyx_L3_error)
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __pyx_t_13 = (__pyx_t_14 != 0);
          if (__pyx_t_13) {
            goto __pyx_L9_continue;
          }

          
           {
            __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 128, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            __pyx_t_15 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_v_idku); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 128, __pyx_L3_error)
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

            
            __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_sys); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_8);
            __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_stdout); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_write); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_8);
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_id); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            __pyx_t_16 = PyObject_Length(__pyx_t_7); if (unlikely(__pyx_t_16 == ((Py_ssize_t)-1))) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            __pyx_t_7 = PyInt_FromSsize_t(__pyx_t_16); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            __pyx_t_6 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_7); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            __pyx_t_7 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
              __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_8);
              if (likely(__pyx_t_7)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
                __Pyx_INCREF(__pyx_t_7);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_8, function);
              }
            }
            __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_6);
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_sys); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_8);
            __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_stdout); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_flush); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_8);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __pyx_t_6 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
              __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
              if (likely(__pyx_t_6)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
                __Pyx_INCREF(__pyx_t_6);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_8, function);
              }
            }
            __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_8);
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 129, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          }

          
          goto __pyx_L11;
        }

        
        __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u__19, __pyx_v_spl, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 130, __pyx_L3_error)
        __pyx_t_14 = (__pyx_t_13 != 0);
        if (__pyx_t_14) {

          
          __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_re); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 131, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_8);
          __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_findall); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 131, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          __pyx_t_8 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_cari); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 131, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_8);
          __pyx_t_7 = NULL;
          __pyx_t_10 = 0;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
            __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
            if (likely(__pyx_t_7)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
              __Pyx_INCREF(__pyx_t_7);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_6, function);
              __pyx_t_10 = 1;
            }
          }
          #if CYTHON_FAST_PYCALL
          if (PyFunction_Check(__pyx_t_6)) {
            PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_kp_u_content_owner_id_new_w, __pyx_t_8};
            __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 131, __pyx_L3_error)
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          } else
          #endif
          #if CYTHON_FAST_PYCCALL
          if (__Pyx_PyFastCFunction_Check(__pyx_t_6)) {
            PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_kp_u_content_owner_id_new_w, __pyx_t_8};
            __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 131, __pyx_L3_error)
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          } else
          #endif
          {
            __pyx_t_9 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 131, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_9);
            if (__pyx_t_7) {
              __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_7); __pyx_t_7 = NULL;
            }
            __Pyx_INCREF(__pyx_kp_u_content_owner_id_new_w);
            __Pyx_GIVEREF(__pyx_kp_u_content_owner_id_new_w);
            PyTuple_SET_ITEM(__pyx_t_9, 0+__pyx_t_10, __pyx_kp_u_content_owner_id_new_w);
            __Pyx_GIVEREF(__pyx_t_8);
            PyTuple_SET_ITEM(__pyx_t_9, 1+__pyx_t_10, __pyx_t_8);
            __pyx_t_8 = 0;
            __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_9, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 131, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
          }
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_XDECREF_SET(__pyx_v_idsiapa, __pyx_t_4);
          __pyx_t_4 = 0;

          
          __pyx_t_4 = __Pyx_GetItemInt(__pyx_v_idsiapa, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 132, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_replace); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 132, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__17, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 132, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_XDECREF_SET(__pyx_v_idyou, __pyx_t_4);
          __pyx_t_4 = 0;

          
          __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_liatnih, __pyx_n_s_split); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 133, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_9 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
            __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_6);
            if (likely(__pyx_t_9)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
              __Pyx_INCREF(__pyx_t_9);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_6, function);
            }
          }
          __pyx_t_4 = (__pyx_t_9) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_9, __pyx_kp_u__20) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_kp_u__20);
          __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
          if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 133, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __pyx_t_6 = __Pyx_GetItemInt(__pyx_t_4, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 133, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_XDECREF_SET(__pyx_v_namayou, __pyx_t_6);
          __pyx_t_6 = 0;

          
          __pyx_t_6 = PyNumber_Add(__pyx_v_idyou, __pyx_kp_u__3); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 134, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_4 = PyNumber_Add(__pyx_t_6, __pyx_v_namayou); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 134, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_XDECREF_SET(__pyx_v_idku, __pyx_t_4);
          __pyx_t_4 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 135, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __pyx_t_14 = (__Pyx_PySequence_ContainsTF(__pyx_v_idku, __pyx_t_4, Py_EQ)); if (unlikely(__pyx_t_14 < 0)) __PYX_ERR(0, 135, __pyx_L3_error)
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __pyx_t_13 = (__pyx_t_14 != 0);
          if (__pyx_t_13) {

            
            goto __pyx_L9_continue;

            
          }

          
           {
            __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 138, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            __pyx_t_15 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_v_idku); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 138, __pyx_L3_error)
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

            
            __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_sys); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_6);
            __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_stdout); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_9);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_write); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_id); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_9);
            __pyx_t_16 = PyObject_Length(__pyx_t_9); if (unlikely(__pyx_t_16 == ((Py_ssize_t)-1))) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
            __pyx_t_9 = PyInt_FromSsize_t(__pyx_t_16); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_9);
            __pyx_t_8 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_8);
            __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
            __pyx_t_9 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
              __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_6);
              if (likely(__pyx_t_9)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
                __Pyx_INCREF(__pyx_t_9);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_6, function);
              }
            }
            __pyx_t_4 = (__pyx_t_9) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_9, __pyx_t_8) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_8);
            __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_sys); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_6);
            __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_stdout); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_8);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_flush); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __pyx_t_8 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
              __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
              if (likely(__pyx_t_8)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
                __Pyx_INCREF(__pyx_t_8);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_6, function);
              }
            }
            __pyx_t_4 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
            __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
            if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 139, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          }

          
          goto __pyx_L11;
        }

        
         {
          goto __pyx_L9_continue;
        }
        __pyx_L11:;

        
        __pyx_L9_continue:;
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_data, __pyx_n_s_find_all); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 142, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_4);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_4, function);
        }
      }
      __pyx_t_5 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_6, __pyx_n_u_a) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_n_u_a);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 142, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (likely(PyList_CheckExact(__pyx_t_5)) || PyTuple_CheckExact(__pyx_t_5)) {
        __pyx_t_4 = __pyx_t_5; __Pyx_INCREF(__pyx_t_4); __pyx_t_11 = 0;
        __pyx_t_12 = NULL;
      } else {
        __pyx_t_11 = -1; __pyx_t_4 = PyObject_GetIter(__pyx_t_5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 142, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_12 = Py_TYPE(__pyx_t_4)->tp_iternext; if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 142, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      for (;;) {
        if (likely(!__pyx_t_12)) {
          if (likely(PyList_CheckExact(__pyx_t_4))) {
            if (__pyx_t_11 >= PyList_GET_SIZE(__pyx_t_4)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_5 = PyList_GET_ITEM(__pyx_t_4, __pyx_t_11); __Pyx_INCREF(__pyx_t_5); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 142, __pyx_L3_error)
            #else
            __pyx_t_5 = PySequence_ITEM(__pyx_t_4, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 142, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_5);
            #endif
          } else {
            if (__pyx_t_11 >= PyTuple_GET_SIZE(__pyx_t_4)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_4, __pyx_t_11); __Pyx_INCREF(__pyx_t_5); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 142, __pyx_L3_error)
            #else
            __pyx_t_5 = PySequence_ITEM(__pyx_t_4, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 142, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_5);
            #endif
          }
        } else {
          __pyx_t_5 = __pyx_t_12(__pyx_t_4);
          if (unlikely(!__pyx_t_5)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 142, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_5);
        }
        __Pyx_XDECREF_SET(__pyx_v_g, __pyx_t_5);
        __pyx_t_5 = 0;

        
        __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_g); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 143, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_6 = PyUnicode_Split(((PyObject*)__pyx_t_5), __pyx_kp_u__19, -1L); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 143, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF_SET(__pyx_v_css, __pyx_t_6);
        __pyx_t_6 = 0;

        
        __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_Lihat_Postingan_Lainnya_span, __pyx_v_css, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 144, __pyx_L3_error)
        __pyx_t_14 = (__pyx_t_13 != 0);
        if (__pyx_t_14) {

          
          __pyx_t_6 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_g); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 145, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_5 = PyUnicode_Replace(((PyObject*)__pyx_t_6), __pyx_kp_u_a_href, __pyx_kp_u__5, -1L); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 145, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __pyx_t_6 = PyUnicode_Replace(((PyObject*)__pyx_t_5), __pyx_kp_u_amp, __pyx_kp_u__5, -1L); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 145, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          __Pyx_XDECREF_SET(__pyx_v_bcj, __pyx_t_6);
          __pyx_t_6 = 0;

          
          __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_bcj, __pyx_n_s_split); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 146, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_5);
          __pyx_t_8 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
            __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_5);
            if (likely(__pyx_t_8)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
              __Pyx_INCREF(__pyx_t_8);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_5, function);
            }
          }
          __pyx_t_6 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_8, __pyx_kp_u__16) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u__16);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 146, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          __pyx_t_5 = __Pyx_GetItemInt(__pyx_t_6, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 146, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_replace); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 146, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__21, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 146, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_XDECREF_SET(__pyx_v_bcj2, __pyx_t_5);
          __pyx_t_5 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_get_datagrup); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 147, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_8 = PyNumber_Add(__pyx_kp_u_https_mbasic_facebook_com, __pyx_v_bcj2); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 147, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_8);
          __pyx_t_9 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
            __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_6);
            if (likely(__pyx_t_9)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
              __Pyx_INCREF(__pyx_t_9);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_6, function);
            }
          }
          __pyx_t_5 = (__pyx_t_9) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_9, __pyx_t_8) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_8);
          __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 147, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

          
        }

        
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

    
    __pyx_t_10 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyboardInterrupt);
    if (__pyx_t_10) {
      __Pyx_ErrRestore(0,0,0);
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
  __Pyx_AddTraceback("dump.get_datagrup", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_cari);
  __Pyx_XDECREF(__pyx_v_liatnih);
  __Pyx_XDECREF(__pyx_v_spl);
  __Pyx_XDECREF(__pyx_v_idsiapa);
  __Pyx_XDECREF(__pyx_v_idyou);
  __Pyx_XDECREF(__pyx_v_namayou);
  __Pyx_XDECREF(__pyx_v_idku);
  __Pyx_XDECREF(__pyx_v_g);
  __Pyx_XDECREF(__pyx_v_css);
  __Pyx_XDECREF(__pyx_v_bcj);
  __Pyx_XDECREF(__pyx_v_bcj2);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_17grupbergabung(PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyMethodDef __pyx_mdef_4dump_17grupbergabung = {"grupbergabung", (PyCFunction)__pyx_pw_4dump_17grupbergabung, METH_O, 0};
static PyObject *__pyx_pw_4dump_17grupbergabung(PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("grupbergabung (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_16grupbergabung(__pyx_self, ((PyObject *)__pyx_v_token));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_16grupbergabung(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_no = NULL;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_nama = NULL;
  PyObject *__pyx_v_uid = NULL;
  PyObject *__pyx_v_priv = NULL;
  PyObject *__pyx_v_type = NULL;
  PyObject *__pyx_v_url = NULL;
  PyObject *__pyx_v_anggota = NULL;
  PyObject *__pyx_v_ask = NULL;
  PyObject *__pyx_v_kontol = NULL;
  PyObject *__pyx_v_e = NULL;
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
  PyObject *(*__pyx_t_10)(PyObject *);
  int __pyx_t_11;
  int __pyx_t_12;
  int __pyx_t_13;
  PyObject *__pyx_t_14 = NULL;
  PyObject *__pyx_t_15 = NULL;
  int __pyx_t_16;
  Py_ssize_t __pyx_t_17;
  Py_UCS4 __pyx_t_18;
  PyObject *__pyx_t_19 = NULL;
  int __pyx_t_20;
  char const *__pyx_t_21;
  PyObject *__pyx_t_22 = NULL;
  PyObject *__pyx_t_23 = NULL;
  PyObject *__pyx_t_24 = NULL;
  PyObject *__pyx_t_25 = NULL;
  PyObject *__pyx_t_26 = NULL;
  PyObject *__pyx_t_27 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("grupbergabung", 0);

  
  __Pyx_INCREF(__pyx_int_0);
  __pyx_v_no = __pyx_int_0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__22, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 154, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_2, &__pyx_t_3, &__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_4);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ses); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_get); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_https_graph_facebook_com_me_grou, __pyx_v_token); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_5 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_8, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_6);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_json); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 156, __pyx_L3_error)
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
      __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_t_1, __pyx_n_u_data); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 156, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (likely(PyList_CheckExact(__pyx_t_7)) || PyTuple_CheckExact(__pyx_t_7)) {
        __pyx_t_1 = __pyx_t_7; __Pyx_INCREF(__pyx_t_1); __pyx_t_9 = 0;
        __pyx_t_10 = NULL;
      } else {
        __pyx_t_9 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 156, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_10 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 156, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      for (;;) {
        if (likely(!__pyx_t_10)) {
          if (likely(PyList_CheckExact(__pyx_t_1))) {
            if (__pyx_t_9 >= PyList_GET_SIZE(__pyx_t_1)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_7 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_7); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 156, __pyx_L3_error)
            #else
            __pyx_t_7 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 156, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            #endif
          } else {
            if (__pyx_t_9 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_7 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_7); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 156, __pyx_L3_error)
            #else
            __pyx_t_7 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 156, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            #endif
          }
        } else {
          __pyx_t_7 = __pyx_t_10(__pyx_t_1);
          if (unlikely(!__pyx_t_7)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 156, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_7);
        }
        __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_7);
        __pyx_t_7 = 0;

        
        __pyx_t_7 = __Pyx_PyInt_AddObjC(__pyx_v_no, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 157, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF_SET(__pyx_v_no, __pyx_t_7);
        __pyx_t_7 = 0;

        
        __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_name); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 158, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_XDECREF_SET(__pyx_v_nama, __pyx_t_7);
        __pyx_t_7 = 0;

        
        __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_id); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 159, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_XDECREF_SET(__pyx_v_uid, __pyx_t_7);
        __pyx_t_7 = 0;

        
        __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_privacy); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 160, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_XDECREF_SET(__pyx_v_priv, __pyx_t_7);
        __pyx_t_7 = 0;

        
        __pyx_t_11 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_OPEN, __pyx_v_priv, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 161, __pyx_L3_error)
        __pyx_t_12 = (__pyx_t_11 != 0);
        if (__pyx_t_12) {

          
          __Pyx_INCREF(__pyx_kp_u_Grup_Publik);
          __Pyx_XDECREF_SET(__pyx_v_type, __pyx_kp_u_Grup_Publik);

          
          goto __pyx_L11;
        }

        
         {
          __Pyx_INCREF(__pyx_kp_u_Grup_Privat);
          __Pyx_XDECREF_SET(__pyx_v_type, __pyx_kp_u_Grup_Privat);
        }
        __pyx_L11:;

        
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_id_group); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 165, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_13 = __Pyx_PyObject_Append(__pyx_t_7, __pyx_v_uid); if (unlikely(__pyx_t_13 == ((int)-1))) __PYX_ERR(0, 165, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_parser); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 166, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_ses); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 166, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_get); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 166, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_14);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_v_uid, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 166, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_15 = __Pyx_PyUnicode_Concat(__pyx_kp_u_https_mbasic_facebook_com_groups, __pyx_t_8); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 166, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_15);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_14))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_14);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_14);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_14, function);
          }
        }
        __pyx_t_6 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_14, __pyx_t_8, __pyx_t_15) : __Pyx_PyObject_CallOneArg(__pyx_t_14, __pyx_t_15);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 166, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
        __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_text); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 166, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_14);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = NULL;
        __pyx_t_16 = 0;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
          __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
          if (likely(__pyx_t_6)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_6);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_5, function);
            __pyx_t_16 = 1;
          }
        }
        #if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_5)) {
          PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_t_14, __pyx_kp_u_html_parser};
          __pyx_t_7 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_16, 2+__pyx_t_16); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 166, __pyx_L3_error)
          __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
        } else
        #endif
        #if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
          PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_t_14, __pyx_kp_u_html_parser};
          __pyx_t_7 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_16, 2+__pyx_t_16); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 166, __pyx_L3_error)
          __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
        } else
        #endif
        {
          __pyx_t_15 = PyTuple_New(2+__pyx_t_16); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 166, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_15);
          if (__pyx_t_6) {
            __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_15, 0, __pyx_t_6); __pyx_t_6 = NULL;
          }
          __Pyx_GIVEREF(__pyx_t_14);
          PyTuple_SET_ITEM(__pyx_t_15, 0+__pyx_t_16, __pyx_t_14);
          __Pyx_INCREF(__pyx_kp_u_html_parser);
          __Pyx_GIVEREF(__pyx_kp_u_html_parser);
          PyTuple_SET_ITEM(__pyx_t_15, 1+__pyx_t_16, __pyx_kp_u_html_parser);
          __pyx_t_14 = 0;
          __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_15, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 166, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        }
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF_SET(__pyx_v_url, __pyx_t_7);
        __pyx_t_7 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_re); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 167, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_15 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_findall); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 167, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_15);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_url); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 167, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_14 = NULL;
        __pyx_t_16 = 0;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_15))) {
          __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_15);
          if (likely(__pyx_t_14)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_15);
            __Pyx_INCREF(__pyx_t_14);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_15, function);
            __pyx_t_16 = 1;
          }
        }
        #if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_15)) {
          PyObject *__pyx_temp[3] = {__pyx_t_14, __pyx_kp_u_Anggota_a_td_td_class_span_class, __pyx_t_5};
          __pyx_t_7 = __Pyx_PyFunction_FastCall(__pyx_t_15, __pyx_temp+1-__pyx_t_16, 2+__pyx_t_16); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 167, __pyx_L3_error)
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        } else
        #endif
        #if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_15)) {
          PyObject *__pyx_temp[3] = {__pyx_t_14, __pyx_kp_u_Anggota_a_td_td_class_span_class, __pyx_t_5};
          __pyx_t_7 = __Pyx_PyCFunction_FastCall(__pyx_t_15, __pyx_temp+1-__pyx_t_16, 2+__pyx_t_16); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 167, __pyx_L3_error)
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        } else
        #endif
        {
          __pyx_t_6 = PyTuple_New(2+__pyx_t_16); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 167, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          if (__pyx_t_14) {
            __Pyx_GIVEREF(__pyx_t_14); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_14); __pyx_t_14 = NULL;
          }
          __Pyx_INCREF(__pyx_kp_u_Anggota_a_td_td_class_span_class);
          __Pyx_GIVEREF(__pyx_kp_u_Anggota_a_td_td_class_span_class);
          PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_16, __pyx_kp_u_Anggota_a_td_td_class_span_class);
          __Pyx_GIVEREF(__pyx_t_5);
          PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_16, __pyx_t_5);
          __pyx_t_5 = 0;
          __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_15, __pyx_t_6, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 167, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        }
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        __Pyx_XDECREF_SET(__pyx_v_anggota, __pyx_t_7);
        __pyx_t_7 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_15, __pyx_n_s_prints); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_15);
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Panel); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_14 = PyTuple_New(10); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_14);
        __pyx_t_17 = 0;
        __pyx_t_18 = 127;
        __Pyx_INCREF(__pyx_kp_u__23);
        __pyx_t_17 += 1;
        __Pyx_GIVEREF(__pyx_kp_u__23);
        PyTuple_SET_ITEM(__pyx_t_14, 0, __pyx_kp_u__23);
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_v_no, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_18 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_8) > __pyx_t_18) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_8) : __pyx_t_18;
        __pyx_t_17 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_8);
        __Pyx_GIVEREF(__pyx_t_8);
        PyTuple_SET_ITEM(__pyx_t_14, 1, __pyx_t_8);
        __pyx_t_8 = 0;
        __Pyx_INCREF(__pyx_kp_u_Nama_Grup);
        __pyx_t_17 += 14;
        __Pyx_GIVEREF(__pyx_kp_u_Nama_Grup);
        PyTuple_SET_ITEM(__pyx_t_14, 2, __pyx_kp_u_Nama_Grup);
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_v_nama, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_18 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_8) > __pyx_t_18) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_8) : __pyx_t_18;
        __pyx_t_17 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_8);
        __Pyx_GIVEREF(__pyx_t_8);
        PyTuple_SET_ITEM(__pyx_t_14, 3, __pyx_t_8);
        __pyx_t_8 = 0;
        __Pyx_INCREF(__pyx_kp_u_ID_Grup);
        __pyx_t_17 += 13;
        __Pyx_GIVEREF(__pyx_kp_u_ID_Grup);
        PyTuple_SET_ITEM(__pyx_t_14, 4, __pyx_kp_u_ID_Grup);
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_v_uid, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_18 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_8) > __pyx_t_18) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_8) : __pyx_t_18;
        __pyx_t_17 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_8);
        __Pyx_GIVEREF(__pyx_t_8);
        PyTuple_SET_ITEM(__pyx_t_14, 5, __pyx_t_8);
        __pyx_t_8 = 0;
        __Pyx_INCREF(__pyx_kp_u_Anggota);
        __pyx_t_17 += 13;
        __Pyx_GIVEREF(__pyx_kp_u_Anggota);
        PyTuple_SET_ITEM(__pyx_t_14, 6, __pyx_kp_u_Anggota);
        __pyx_t_8 = __Pyx_GetItemInt(__pyx_v_anggota, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_19 = __Pyx_PyObject_FormatSimple(__pyx_t_8, __pyx_empty_unicode); if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_19);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_18 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_19) > __pyx_t_18) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_19) : __pyx_t_18;
        __pyx_t_17 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_19);
        __Pyx_GIVEREF(__pyx_t_19);
        PyTuple_SET_ITEM(__pyx_t_14, 7, __pyx_t_19);
        __pyx_t_19 = 0;
        __Pyx_INCREF(__pyx_kp_u_Type_Grup);
        __pyx_t_17 += 13;
        __Pyx_GIVEREF(__pyx_kp_u_Type_Grup);
        PyTuple_SET_ITEM(__pyx_t_14, 8, __pyx_kp_u_Type_Grup);
        __Pyx_INCREF(__pyx_v_type);
        __pyx_t_18 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_v_type) > __pyx_t_18) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_v_type) : __pyx_t_18;
        __pyx_t_17 += __Pyx_PyUnicode_GET_LENGTH(__pyx_v_type);
        __Pyx_GIVEREF(__pyx_v_type);
        PyTuple_SET_ITEM(__pyx_t_14, 9, __pyx_v_type);
        __pyx_t_19 = __Pyx_PyUnicode_Join(__pyx_t_14, 10, __pyx_t_17, __pyx_t_18); if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_19);
        __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
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
        __pyx_t_6 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_14, __pyx_t_19) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_19);
        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
        __Pyx_DECREF(__pyx_t_19); __pyx_t_19 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_15))) {
          __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_15);
          if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_15);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_15, function);
          }
        }
        __pyx_t_7 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_15, __pyx_t_5, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_15, __pyx_t_6);
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 168, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

        
      }
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
    __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
    __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

    
     {
      __Pyx_ErrRestore(0,0,0);
      goto __pyx_L4_exception_handled;
    }
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_ExceptionReset(__pyx_t_2, __pyx_t_3, __pyx_t_4);
    __pyx_L8_try_end:;
  }

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__24, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 171, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_ask = __pyx_t_1;
  __pyx_t_1 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_4, &__pyx_t_3, &__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_2);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_id_group); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 173, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_7 = __Pyx_PyNumber_Int(__pyx_v_ask); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 173, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_15 = __Pyx_PyInt_SubtractObjC(__pyx_t_7, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 173, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_15);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = __Pyx_PyObject_GetItem(__pyx_t_1, __pyx_t_15); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 173, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
      __pyx_v_kontol = __pyx_t_7;
      __pyx_t_7 = 0;

      
      __pyx_t_7 = PyNumber_Add(__pyx_kp_u_https_mbasic_facebook_com_groups, __pyx_v_kontol); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 174, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_XDECREF_SET(__pyx_v_url, __pyx_t_7);
      __pyx_t_7 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_15, __pyx_n_s_get_datagrup); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 175, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_15);
      __pyx_t_1 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_15))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_15);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_15);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_15, function);
        }
      }
      __pyx_t_7 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_15, __pyx_t_1, __pyx_v_url) : __Pyx_PyObject_CallOneArg(__pyx_t_15, __pyx_v_url);
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 175, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    goto __pyx_L17_try_end;
    __pyx_L12_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
    __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
    __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

    
    __pyx_t_16 = __Pyx_PyErr_ExceptionMatches(((PyObject *)(&((PyTypeObject*)PyExc_Exception)[0])));
    if (__pyx_t_16) {
      __Pyx_AddTraceback("dump.grupbergabung", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_15, &__pyx_t_1) < 0) __PYX_ERR(0, 176, __pyx_L14_except_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_GOTREF(__pyx_t_15);
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_15);
      __pyx_v_e = __pyx_t_15;
       {

        
        __pyx_t_6 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_v_e); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 177, __pyx_L23_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }

      
       {
        {
          __Pyx_DECREF(__pyx_v_e);
          __pyx_v_e = NULL;
          goto __pyx_L24;
        }
        __pyx_L23_error:;
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __pyx_t_22 = 0; __pyx_t_23 = 0; __pyx_t_24 = 0; __pyx_t_25 = 0; __pyx_t_26 = 0; __pyx_t_27 = 0;
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_25, &__pyx_t_26, &__pyx_t_27);
          if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_22, &__pyx_t_23, &__pyx_t_24) < 0)) __Pyx_ErrFetch(&__pyx_t_22, &__pyx_t_23, &__pyx_t_24);
          __Pyx_XGOTREF(__pyx_t_22);
          __Pyx_XGOTREF(__pyx_t_23);
          __Pyx_XGOTREF(__pyx_t_24);
          __Pyx_XGOTREF(__pyx_t_25);
          __Pyx_XGOTREF(__pyx_t_26);
          __Pyx_XGOTREF(__pyx_t_27);
          __pyx_t_16 = __pyx_lineno; __pyx_t_20 = __pyx_clineno; __pyx_t_21 = __pyx_filename;
          {
            __Pyx_DECREF(__pyx_v_e);
            __pyx_v_e = NULL;
          }
          if (PY_MAJOR_VERSION >= 3) {
            __Pyx_XGIVEREF(__pyx_t_25);
            __Pyx_XGIVEREF(__pyx_t_26);
            __Pyx_XGIVEREF(__pyx_t_27);
            __Pyx_ExceptionReset(__pyx_t_25, __pyx_t_26, __pyx_t_27);
          }
          __Pyx_XGIVEREF(__pyx_t_22);
          __Pyx_XGIVEREF(__pyx_t_23);
          __Pyx_XGIVEREF(__pyx_t_24);
          __Pyx_ErrRestore(__pyx_t_22, __pyx_t_23, __pyx_t_24);
          __pyx_t_22 = 0; __pyx_t_23 = 0; __pyx_t_24 = 0; __pyx_t_25 = 0; __pyx_t_26 = 0; __pyx_t_27 = 0;
          __pyx_lineno = __pyx_t_16; __pyx_clineno = __pyx_t_20; __pyx_filename = __pyx_t_21;
          goto __pyx_L14_except_error;
        }
        __pyx_L24:;
      }
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      goto __pyx_L13_exception_handled;
    }
    goto __pyx_L14_except_error;
    __pyx_L14_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_ExceptionReset(__pyx_t_4, __pyx_t_3, __pyx_t_2);
    goto __pyx_L1_error;
    __pyx_L13_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_ExceptionReset(__pyx_t_4, __pyx_t_3, __pyx_t_2);
    __pyx_L17_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_XDECREF(__pyx_t_15);
  __Pyx_XDECREF(__pyx_t_19);
  __Pyx_AddTraceback("dump.grupbergabung", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_no);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_nama);
  __Pyx_XDECREF(__pyx_v_uid);
  __Pyx_XDECREF(__pyx_v_priv);
  __Pyx_XDECREF(__pyx_v_type);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XDECREF(__pyx_v_anggota);
  __Pyx_XDECREF(__pyx_v_ask);
  __Pyx_XDECREF(__pyx_v_kontol);
  __Pyx_XDECREF(__pyx_v_e);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_19pencarianteman(PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyMethodDef __pyx_mdef_4dump_19pencarianteman = {"pencarianteman", (PyCFunction)__pyx_pw_4dump_19pencarianteman, METH_O, 0};
static PyObject *__pyx_pw_4dump_19pencarianteman(PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("pencarianteman (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_18pencarianteman(__pyx_self, ((PyObject *)__pyx_v_token));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_18pencarianteman(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_nama = NULL;
  long __pyx_v_z;
  PyObject *__pyx_v_url = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("pencarianteman", 0);

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__25, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 181, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_nama = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 182, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_v_z = 0;

  
  __pyx_t_1 = PyNumber_Add(__pyx_kp_u_https_mbasic_facebook_com_public, __pyx_v_nama); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 184, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_url = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_get_pencarianteman); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 185, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyInt_From_long(__pyx_v_z); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 185, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = NULL;
  __pyx_t_5 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_5 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[4] = {__pyx_t_4, __pyx_v_url, __pyx_v_token, __pyx_t_3};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_5, 3+__pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 185, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[4] = {__pyx_t_4, __pyx_v_url, __pyx_v_token, __pyx_t_3};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_5, 3+__pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 185, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  {
    __pyx_t_6 = PyTuple_New(3+__pyx_t_5); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 185, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    if (__pyx_t_4) {
      __Pyx_GIVEREF(__pyx_t_4); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_4); __pyx_t_4 = NULL;
    }
    __Pyx_INCREF(__pyx_v_url);
    __Pyx_GIVEREF(__pyx_v_url);
    PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_5, __pyx_v_url);
    __Pyx_INCREF(__pyx_v_token);
    __Pyx_GIVEREF(__pyx_v_token);
    PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_5, __pyx_v_token);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_6, 2+__pyx_t_5, __pyx_t_3);
    __pyx_t_3 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 185, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_AddTraceback("dump.pencarianteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_nama);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_21get_pencarianteman(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); 
static PyMethodDef __pyx_mdef_4dump_21get_pencarianteman = {"get_pencarianteman", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_4dump_21get_pencarianteman, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_4dump_21get_pencarianteman(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_url = 0;
  PyObject *__pyx_v_token = 0;
  PyObject *__pyx_v_z = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("get_pencarianteman (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_url,&__pyx_n_s_token,&__pyx_n_s_z,0};
    PyObject* values[3] = {0,0,0};
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_url)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_token)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("get_pencarianteman", 1, 3, 3, 1); __PYX_ERR(0, 187, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_z)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("get_pencarianteman", 1, 3, 3, 2); __PYX_ERR(0, 187, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "get_pencarianteman") < 0)) __PYX_ERR(0, 187, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_url = values[0];
    __pyx_v_token = values[1];
    __pyx_v_z = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("get_pencarianteman", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 187, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("dump.get_pencarianteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_4dump_20get_pencarianteman(__pyx_self, __pyx_v_url, __pyx_v_token, __pyx_v_z);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_20get_pencarianteman(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url, PyObject *__pyx_v_token, PyObject *__pyx_v_z) {
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_x = NULL;
  PyObject *__pyx_v_ids = NULL;
  PyObject *__pyx_v_uid = NULL;
  PyObject *__pyx_v_jum = NULL;
  PyObject *__pyx_v_e = NULL;
  PyObject *__pyx_v_ask = NULL;
  PyObject *__pyx_v_link = NULL;
  PyObject *__pyx_v_kontol = NULL;
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
  Py_ssize_t __pyx_t_9;
  PyObject *(*__pyx_t_10)(PyObject *);
  int __pyx_t_11;
  int __pyx_t_12;
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  PyObject *__pyx_t_15 = NULL;
  PyObject *__pyx_t_16 = NULL;
  int __pyx_t_17;
  Py_ssize_t __pyx_t_18;
  Py_UCS4 __pyx_t_19;
  int __pyx_t_20;
  char const *__pyx_t_21;
  PyObject *__pyx_t_22 = NULL;
  PyObject *__pyx_t_23 = NULL;
  PyObject *__pyx_t_24 = NULL;
  PyObject *__pyx_t_25 = NULL;
  PyObject *__pyx_t_26 = NULL;
  PyObject *__pyx_t_27 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("get_pencarianteman", 0);
  __Pyx_INCREF(__pyx_v_z);

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_parser); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 189, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ses); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 189, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 189, __pyx_L1_error)
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
  __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_v_url) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_url);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 189, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_content); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 189, __pyx_L1_error)
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
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 189, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 189, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  {
    __pyx_t_4 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 189, __pyx_L1_error)
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
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 189, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_data = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_data, __pyx_n_s_find_all); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 190, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_4, __pyx_n_u_td) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_n_u_td);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 190, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2); __pyx_t_7 = 0;
    __pyx_t_8 = NULL;
  } else {
    __pyx_t_7 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 190, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_8 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 190, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_8)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        if (__pyx_t_7 >= PyList_GET_SIZE(__pyx_t_2)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_7); __Pyx_INCREF(__pyx_t_1); __pyx_t_7++; if (unlikely(0 < 0)) __PYX_ERR(0, 190, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_7); __pyx_t_7++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        if (__pyx_t_7 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_7); __Pyx_INCREF(__pyx_t_1); __pyx_t_7++; if (unlikely(0 < 0)) __PYX_ERR(0, 190, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_7); __pyx_t_7++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_8(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 190, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_x, __pyx_t_1);
    __pyx_t_1 = 0;

    
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_x, __pyx_n_s_find_all); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 191, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 191, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_href, Py_True) < 0) __PYX_ERR(0, 191, __pyx_L1_error)
    __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__14, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 191, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (likely(PyList_CheckExact(__pyx_t_5)) || PyTuple_CheckExact(__pyx_t_5)) {
      __pyx_t_4 = __pyx_t_5; __Pyx_INCREF(__pyx_t_4); __pyx_t_9 = 0;
      __pyx_t_10 = NULL;
    } else {
      __pyx_t_9 = -1; __pyx_t_4 = PyObject_GetIter(__pyx_t_5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 191, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_10 = Py_TYPE(__pyx_t_4)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 191, __pyx_L1_error)
    }
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    for (;;) {
      if (likely(!__pyx_t_10)) {
        if (likely(PyList_CheckExact(__pyx_t_4))) {
          if (__pyx_t_9 >= PyList_GET_SIZE(__pyx_t_4)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_5 = PyList_GET_ITEM(__pyx_t_4, __pyx_t_9); __Pyx_INCREF(__pyx_t_5); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 191, __pyx_L1_error)
          #else
          __pyx_t_5 = PySequence_ITEM(__pyx_t_4, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 191, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_5);
          #endif
        } else {
          if (__pyx_t_9 >= PyTuple_GET_SIZE(__pyx_t_4)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_4, __pyx_t_9); __Pyx_INCREF(__pyx_t_5); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 191, __pyx_L1_error)
          #else
          __pyx_t_5 = PySequence_ITEM(__pyx_t_4, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 191, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_5);
          #endif
        }
      } else {
        __pyx_t_5 = __pyx_t_10(__pyx_t_4);
        if (unlikely(!__pyx_t_5)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 191, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_5);
      }
      __Pyx_XDECREF_SET(__pyx_v_ids, __pyx_t_5);
      __pyx_t_5 = 0;

      
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_ids, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 192, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_3 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_3)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_3);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
        }
      }
      __pyx_t_5 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_3, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_n_u_href);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 192, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_11 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_profile_php_id, __pyx_t_5, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 192, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_12 = (__pyx_t_11 != 0);
      if (__pyx_t_12) {

        
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __Pyx_ExceptionSave(&__pyx_t_13, &__pyx_t_14, &__pyx_t_15);
          __Pyx_XGOTREF(__pyx_t_13);
          __Pyx_XGOTREF(__pyx_t_14);
          __Pyx_XGOTREF(__pyx_t_15);
           {

            
            __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_ids, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 194, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_16 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
              __pyx_t_16 = PyMethod_GET_SELF(__pyx_t_3);
              if (likely(__pyx_t_16)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                __Pyx_INCREF(__pyx_t_16);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_3, function);
              }
            }
            __pyx_t_1 = (__pyx_t_16) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_16, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_n_u_href);
            __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 194, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_split); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 194, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
              __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
              if (likely(__pyx_t_1)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                __Pyx_INCREF(__pyx_t_1);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_3, function);
              }
            }
            __pyx_t_5 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_1, __pyx_kp_u__26) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_kp_u__26);
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 194, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_3 = __Pyx_GetItemInt(__pyx_t_5, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 194, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_XDECREF_SET(__pyx_v_uid, __pyx_t_3);
            __pyx_t_3 = 0;

            
            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_teman); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 195, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_12 = (__Pyx_PySequence_ContainsTF(__pyx_v_uid, __pyx_t_3, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 195, __pyx_L8_error)
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_11 = (__pyx_t_12 != 0);
            if (__pyx_t_11) {
              goto __pyx_L16;
            }

            
             {
              __pyx_t_3 = __Pyx_PyInt_AddObjC(__pyx_v_z, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 197, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_3);
              __Pyx_DECREF_SET(__pyx_v_z, __pyx_t_3);
              __pyx_t_3 = 0;

              
              __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_get_data); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 198, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_5);
              __pyx_t_1 = NULL;
              __pyx_t_6 = 0;
              if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
                __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_5);
                if (likely(__pyx_t_1)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
                  __Pyx_INCREF(__pyx_t_1);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_5, function);
                  __pyx_t_6 = 1;
                }
              }
              #if CYTHON_FAST_PYCALL
              if (PyFunction_Check(__pyx_t_5)) {
                PyObject *__pyx_temp[3] = {__pyx_t_1, __pyx_v_uid, __pyx_v_token};
                __pyx_t_3 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 198, __pyx_L8_error)
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_GOTREF(__pyx_t_3);
              } else
              #endif
              #if CYTHON_FAST_PYCCALL
              if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
                PyObject *__pyx_temp[3] = {__pyx_t_1, __pyx_v_uid, __pyx_v_token};
                __pyx_t_3 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 198, __pyx_L8_error)
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_GOTREF(__pyx_t_3);
              } else
              #endif
              {
                __pyx_t_16 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 198, __pyx_L8_error)
                __Pyx_GOTREF(__pyx_t_16);
                if (__pyx_t_1) {
                  __Pyx_GIVEREF(__pyx_t_1); PyTuple_SET_ITEM(__pyx_t_16, 0, __pyx_t_1); __pyx_t_1 = NULL;
                }
                __Pyx_INCREF(__pyx_v_uid);
                __Pyx_GIVEREF(__pyx_v_uid);
                PyTuple_SET_ITEM(__pyx_t_16, 0+__pyx_t_6, __pyx_v_uid);
                __Pyx_INCREF(__pyx_v_token);
                __Pyx_GIVEREF(__pyx_v_token);
                PyTuple_SET_ITEM(__pyx_t_16, 1+__pyx_t_6, __pyx_v_token);
                __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_16, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 198, __pyx_L8_error)
                __Pyx_GOTREF(__pyx_t_3);
                __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
              }
              __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
              __Pyx_XDECREF_SET(__pyx_v_jum, __pyx_t_3);
              __pyx_t_3 = 0;

              
              __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_teman); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 199, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_3);
              __pyx_t_17 = __Pyx_PyObject_Append(__pyx_t_3, __pyx_v_uid); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 199, __pyx_L8_error)
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

              
              __pyx_t_3 = PyTuple_New(6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 200, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_3);
              __pyx_t_18 = 0;
              __pyx_t_19 = 127;
              __Pyx_INCREF(__pyx_kp_u__27);
              __pyx_t_18 += 3;
              __Pyx_GIVEREF(__pyx_kp_u__27);
              PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_kp_u__27);
              __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_v_z, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 200, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_5);
              __pyx_t_19 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_19) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_19;
              __pyx_t_18 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
              __Pyx_GIVEREF(__pyx_t_5);
              PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_t_5);
              __pyx_t_5 = 0;
              __Pyx_INCREF(__pyx_kp_u_ID);
              __pyx_t_18 += 7;
              __Pyx_GIVEREF(__pyx_kp_u_ID);
              PyTuple_SET_ITEM(__pyx_t_3, 2, __pyx_kp_u_ID);
              __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_v_uid, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 200, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_5);
              __pyx_t_19 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_19) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_19;
              __pyx_t_18 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
              __Pyx_GIVEREF(__pyx_t_5);
              PyTuple_SET_ITEM(__pyx_t_3, 3, __pyx_t_5);
              __pyx_t_5 = 0;
              __Pyx_INCREF(__pyx_kp_u_Jumlah_Teman);
              __pyx_t_18 += 18;
              __Pyx_GIVEREF(__pyx_kp_u_Jumlah_Teman);
              PyTuple_SET_ITEM(__pyx_t_3, 4, __pyx_kp_u_Jumlah_Teman);
              __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_v_jum, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 200, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_5);
              __pyx_t_19 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_19) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_19;
              __pyx_t_18 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
              __Pyx_GIVEREF(__pyx_t_5);
              PyTuple_SET_ITEM(__pyx_t_3, 5, __pyx_t_5);
              __pyx_t_5 = 0;
              __pyx_t_5 = __Pyx_PyUnicode_Join(__pyx_t_3, 6, __pyx_t_18, __pyx_t_19); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 200, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_5);
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
              __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 200, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_3);
              __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

              
              __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_data_teman); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 201, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_5);
              __pyx_t_16 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_clear); if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 201, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_16);
              __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
              __pyx_t_5 = NULL;
              if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_16))) {
                __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_16);
                if (likely(__pyx_t_5)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_16);
                  __Pyx_INCREF(__pyx_t_5);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_16, function);
                }
              }
              __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_16, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_16);
              __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
              if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 201, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_3);
              __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            }
            __pyx_L16:;

            
          }
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
          goto __pyx_L15_try_end;
          __pyx_L8_error:;
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

          
          __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(((PyObject *)(&((PyTypeObject*)PyExc_Exception)[0])));
          if (__pyx_t_6) {
            __Pyx_AddTraceback("dump.get_pencarianteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_16, &__pyx_t_5) < 0) __PYX_ERR(0, 202, __pyx_L10_except_error)
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_GOTREF(__pyx_t_16);
            __Pyx_GOTREF(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_16);
            __pyx_v_e = __pyx_t_16;
             {
            }
             {
              {
                __Pyx_DECREF(__pyx_v_e);
                __pyx_v_e = NULL;
                goto __pyx_L23;
              }
              __pyx_L23:;
            }
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            goto __pyx_L9_exception_handled;
          }
          goto __pyx_L10_except_error;
          __pyx_L10_except_error:;

          
          __Pyx_XGIVEREF(__pyx_t_13);
          __Pyx_XGIVEREF(__pyx_t_14);
          __Pyx_XGIVEREF(__pyx_t_15);
          __Pyx_ExceptionReset(__pyx_t_13, __pyx_t_14, __pyx_t_15);
          goto __pyx_L1_error;
          __pyx_L9_exception_handled:;
          __Pyx_XGIVEREF(__pyx_t_13);
          __Pyx_XGIVEREF(__pyx_t_14);
          __Pyx_XGIVEREF(__pyx_t_15);
          __Pyx_ExceptionReset(__pyx_t_13, __pyx_t_14, __pyx_t_15);
          __pyx_L15_try_end:;
        }

        
      }

      
    }
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

    
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__24, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 204, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_v_ask = __pyx_t_2;
  __pyx_t_2 = 0;

  
  __Pyx_INCREF(__pyx_v_ask);
  __pyx_t_2 = __pyx_v_ask;
  __pyx_t_11 = (__Pyx_PyUnicode_Equals(__pyx_t_2, __pyx_n_u_next, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_12 = (__pyx_t_11 != 0);
  if (__pyx_t_12) {

    
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_data, __pyx_n_s_find); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 206, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 206, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_string, __pyx_kp_u_Lihat_Hasil_Selanjutnya) < 0) __PYX_ERR(0, 206, __pyx_L1_error)
    __pyx_t_16 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__14, __pyx_t_5); if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 206, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_16);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_16, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 206, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
    __pyx_t_16 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_16 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_16)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_16);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_2 = (__pyx_t_16) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_16, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_n_u_href);
    __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 206, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_v_link = __pyx_t_2;
    __pyx_t_2 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_teman); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 207, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_7 = PyObject_Length(__pyx_t_2); if (unlikely(__pyx_t_7 == ((Py_ssize_t)-1))) __PYX_ERR(0, 207, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyInt_FromSsize_t(__pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 207, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF_SET(__pyx_v_z, __pyx_t_2);
    __pyx_t_2 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_get_pencarianteman); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 208, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_16 = NULL;
    __pyx_t_6 = 0;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_16 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_16)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_16);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_6 = 1;
      }
    }
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_5)) {
      PyObject *__pyx_temp[4] = {__pyx_t_16, __pyx_v_link, __pyx_v_token, __pyx_v_z};
      __pyx_t_2 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 3+__pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 208, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
      __Pyx_GOTREF(__pyx_t_2);
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
      PyObject *__pyx_temp[4] = {__pyx_t_16, __pyx_v_link, __pyx_v_token, __pyx_v_z};
      __pyx_t_2 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 3+__pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 208, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
      __Pyx_GOTREF(__pyx_t_2);
    } else
    #endif
    {
      __pyx_t_4 = PyTuple_New(3+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 208, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      if (__pyx_t_16) {
        __Pyx_GIVEREF(__pyx_t_16); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_16); __pyx_t_16 = NULL;
      }
      __Pyx_INCREF(__pyx_v_link);
      __Pyx_GIVEREF(__pyx_v_link);
      PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_6, __pyx_v_link);
      __Pyx_INCREF(__pyx_v_token);
      __Pyx_GIVEREF(__pyx_v_token);
      PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_6, __pyx_v_token);
      __Pyx_INCREF(__pyx_v_z);
      __Pyx_GIVEREF(__pyx_v_z);
      PyTuple_SET_ITEM(__pyx_t_4, 2+__pyx_t_6, __pyx_v_z);
      __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_4, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 208, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

    
    goto __pyx_L24;
  }

  
   {
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_15, &__pyx_t_14, &__pyx_t_13);
      __Pyx_XGOTREF(__pyx_t_15);
      __Pyx_XGOTREF(__pyx_t_14);
      __Pyx_XGOTREF(__pyx_t_13);
       {

        
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_teman); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 211, __pyx_L25_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_5 = __Pyx_PyNumber_Int(__pyx_v_ask); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 211, __pyx_L25_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_4 = __Pyx_PyInt_SubtractObjC(__pyx_t_5, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 211, __pyx_L25_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_GetItem(__pyx_t_2, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 211, __pyx_L25_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_v_kontol = __pyx_t_5;
        __pyx_t_5 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_get_dump); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 212, __pyx_L25_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_2 = NULL;
        __pyx_t_6 = 0;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_4, function);
            __pyx_t_6 = 1;
          }
        }
        #if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_4)) {
          PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_v_kontol, __pyx_v_token};
          __pyx_t_5 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 212, __pyx_L25_error)
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_GOTREF(__pyx_t_5);
        } else
        #endif
        #if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
          PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_v_kontol, __pyx_v_token};
          __pyx_t_5 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 212, __pyx_L25_error)
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_GOTREF(__pyx_t_5);
        } else
        #endif
        {
          __pyx_t_16 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 212, __pyx_L25_error)
          __Pyx_GOTREF(__pyx_t_16);
          if (__pyx_t_2) {
            __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_16, 0, __pyx_t_2); __pyx_t_2 = NULL;
          }
          __Pyx_INCREF(__pyx_v_kontol);
          __Pyx_GIVEREF(__pyx_v_kontol);
          PyTuple_SET_ITEM(__pyx_t_16, 0+__pyx_t_6, __pyx_v_kontol);
          __Pyx_INCREF(__pyx_v_token);
          __Pyx_GIVEREF(__pyx_v_token);
          PyTuple_SET_ITEM(__pyx_t_16, 1+__pyx_t_6, __pyx_v_token);
          __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_16, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 212, __pyx_L25_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
        }
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

        
      }
      __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
      __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
      goto __pyx_L30_try_end;
      __pyx_L25_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

      
      __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(((PyObject *)(&((PyTypeObject*)PyExc_Exception)[0])));
      if (__pyx_t_6) {
        __Pyx_AddTraceback("dump.get_pencarianteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_4, &__pyx_t_16) < 0) __PYX_ERR(0, 213, __pyx_L27_except_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_GOTREF(__pyx_t_16);
        __Pyx_INCREF(__pyx_t_4);
        __pyx_v_e = __pyx_t_4;
         {

          
          __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_v_e); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 214, __pyx_L36_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        }

        
         {
          {
            __Pyx_DECREF(__pyx_v_e);
            __pyx_v_e = NULL;
            goto __pyx_L37;
          }
          __pyx_L36_error:;
          {
            __Pyx_PyThreadState_declare
            __Pyx_PyThreadState_assign
            __pyx_t_22 = 0; __pyx_t_23 = 0; __pyx_t_24 = 0; __pyx_t_25 = 0; __pyx_t_26 = 0; __pyx_t_27 = 0;
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_25, &__pyx_t_26, &__pyx_t_27);
            if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_22, &__pyx_t_23, &__pyx_t_24) < 0)) __Pyx_ErrFetch(&__pyx_t_22, &__pyx_t_23, &__pyx_t_24);
            __Pyx_XGOTREF(__pyx_t_22);
            __Pyx_XGOTREF(__pyx_t_23);
            __Pyx_XGOTREF(__pyx_t_24);
            __Pyx_XGOTREF(__pyx_t_25);
            __Pyx_XGOTREF(__pyx_t_26);
            __Pyx_XGOTREF(__pyx_t_27);
            __pyx_t_6 = __pyx_lineno; __pyx_t_20 = __pyx_clineno; __pyx_t_21 = __pyx_filename;
            {
              __Pyx_DECREF(__pyx_v_e);
              __pyx_v_e = NULL;
            }
            if (PY_MAJOR_VERSION >= 3) {
              __Pyx_XGIVEREF(__pyx_t_25);
              __Pyx_XGIVEREF(__pyx_t_26);
              __Pyx_XGIVEREF(__pyx_t_27);
              __Pyx_ExceptionReset(__pyx_t_25, __pyx_t_26, __pyx_t_27);
            }
            __Pyx_XGIVEREF(__pyx_t_22);
            __Pyx_XGIVEREF(__pyx_t_23);
            __Pyx_XGIVEREF(__pyx_t_24);
            __Pyx_ErrRestore(__pyx_t_22, __pyx_t_23, __pyx_t_24);
            __pyx_t_22 = 0; __pyx_t_23 = 0; __pyx_t_24 = 0; __pyx_t_25 = 0; __pyx_t_26 = 0; __pyx_t_27 = 0;
            __pyx_lineno = __pyx_t_6; __pyx_clineno = __pyx_t_20; __pyx_filename = __pyx_t_21;
            goto __pyx_L27_except_error;
          }
          __pyx_L37:;
        }
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
        goto __pyx_L26_exception_handled;
      }
      goto __pyx_L27_except_error;
      __pyx_L27_except_error:;

      
      __Pyx_XGIVEREF(__pyx_t_15);
      __Pyx_XGIVEREF(__pyx_t_14);
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_ExceptionReset(__pyx_t_15, __pyx_t_14, __pyx_t_13);
      goto __pyx_L1_error;
      __pyx_L26_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_15);
      __Pyx_XGIVEREF(__pyx_t_14);
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_ExceptionReset(__pyx_t_15, __pyx_t_14, __pyx_t_13);
      __pyx_L30_try_end:;
    }
  }
  __pyx_L24:;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_16);
  __Pyx_AddTraceback("dump.get_pencarianteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_x);
  __Pyx_XDECREF(__pyx_v_ids);
  __Pyx_XDECREF(__pyx_v_uid);
  __Pyx_XDECREF(__pyx_v_jum);
  __Pyx_XDECREF(__pyx_v_e);
  __Pyx_XDECREF(__pyx_v_ask);
  __Pyx_XDECREF(__pyx_v_link);
  __Pyx_XDECREF(__pyx_v_kontol);
  __Pyx_XDECREF(__pyx_v_z);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_23temandariteman(PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyMethodDef __pyx_mdef_4dump_23temandariteman = {"temandariteman", (PyCFunction)__pyx_pw_4dump_23temandariteman, METH_O, 0};
static PyObject *__pyx_pw_4dump_23temandariteman(PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("temandariteman (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_22temandariteman(__pyx_self, ((PyObject *)__pyx_v_token));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_22temandariteman(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_user = NULL;
  PyObject *__pyx_v_limit = NULL;
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_v_z = NULL;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_uid = NULL;
  PyObject *__pyx_v_jum = NULL;
  PyObject *__pyx_v_ask = NULL;
  PyObject *__pyx_v_kontol = NULL;
  PyObject *__pyx_v_e = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  int __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  Py_ssize_t __pyx_t_11;
  Py_UCS4 __pyx_t_12;
  PyObject *(*__pyx_t_13)(PyObject *);
  int __pyx_t_14;
  int __pyx_t_15;
  Py_ssize_t __pyx_t_16;
  int __pyx_t_17;
  char const *__pyx_t_18;
  PyObject *__pyx_t_19 = NULL;
  PyObject *__pyx_t_20 = NULL;
  PyObject *__pyx_t_21 = NULL;
  PyObject *__pyx_t_22 = NULL;
  PyObject *__pyx_t_23 = NULL;
  PyObject *__pyx_t_24 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("temandariteman", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_kp_u_INFO) < 0) __PYX_ERR(0, 218, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__28, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 218, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__29, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 219, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_user = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__30, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 220, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 220, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_limit = __pyx_t_2;
  __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 221, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_re); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 222, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_findall); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 222, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_1)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_1);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_1, __pyx_kp_u_w, __pyx_v_user};
    __pyx_t_2 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 222, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GOTREF(__pyx_t_2);
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_1, __pyx_kp_u_w, __pyx_v_user};
    __pyx_t_2 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 222, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GOTREF(__pyx_t_2);
  } else
  #endif
  {
    __pyx_t_4 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 222, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (__pyx_t_1) {
      __Pyx_GIVEREF(__pyx_t_1); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1); __pyx_t_1 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u_w);
    __Pyx_GIVEREF(__pyx_kp_u_w);
    PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_6, __pyx_kp_u_w);
    __Pyx_INCREF(__pyx_v_user);
    __Pyx_GIVEREF(__pyx_v_user);
    PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_6, __pyx_v_user);
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_4, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 222, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_7 < 0)) __PYX_ERR(0, 222, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_7) {

    
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_9, &__pyx_t_10);
      __Pyx_XGOTREF(__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_9);
      __Pyx_XGOTREF(__pyx_t_10);
       {
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_convert_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 223, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_5);
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
        __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_v_user) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_user);
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 223, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_v_idt = __pyx_t_2;
        __pyx_t_2 = 0;
      }
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      goto __pyx_L9_try_end;
      __pyx_L4_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

      
       {
        __Pyx_AddTraceback("dump.temandariteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_2, &__pyx_t_5, &__pyx_t_4) < 0) __PYX_ERR(0, 224, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_INCREF(__pyx_v_user);
        __Pyx_XDECREF_SET(__pyx_v_idt, __pyx_v_user);
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        goto __pyx_L5_exception_handled;
      }
      __pyx_L6_except_error:;

      
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
      goto __pyx_L1_error;
      __pyx_L5_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
      __pyx_L9_try_end:;
    }

    
  }

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_10, &__pyx_t_9, &__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_10);
    __Pyx_XGOTREF(__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_8);
     {

      
      __Pyx_INCREF(__pyx_int_0);
      __pyx_v_z = __pyx_int_0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ses); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = PyTuple_New(6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_11 = 0;
      __pyx_t_12 = 127;
      __Pyx_INCREF(__pyx_kp_u_https_graph_facebook_com);
      __pyx_t_11 += 27;
      __Pyx_GIVEREF(__pyx_kp_u_https_graph_facebook_com);
      PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_https_graph_facebook_com);
      if (unlikely(!__pyx_v_idt)) { __Pyx_RaiseUnboundLocalError("idt"); __PYX_ERR(0, 227, __pyx_L12_error) }
      __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_idt, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_12;
      __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
      __Pyx_GIVEREF(__pyx_t_3);
      PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_3);
      __pyx_t_3 = 0;
      __Pyx_INCREF(__pyx_kp_u_fields_name_friends_fields_id_n_2);
      __pyx_t_11 += 43;
      __Pyx_GIVEREF(__pyx_kp_u_fields_name_friends_fields_id_n_2);
      PyTuple_SET_ITEM(__pyx_t_2, 2, __pyx_kp_u_fields_name_friends_fields_id_n_2);
      __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_limit, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_12;
      __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
      __Pyx_GIVEREF(__pyx_t_3);
      PyTuple_SET_ITEM(__pyx_t_2, 3, __pyx_t_3);
      __pyx_t_3 = 0;
      __Pyx_INCREF(__pyx_kp_u_access_token);
      __pyx_t_11 += 15;
      __Pyx_GIVEREF(__pyx_kp_u_access_token);
      PyTuple_SET_ITEM(__pyx_t_2, 4, __pyx_kp_u_access_token);
      __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_12;
      __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
      __Pyx_GIVEREF(__pyx_t_3);
      PyTuple_SET_ITEM(__pyx_t_2, 5, __pyx_t_3);
      __pyx_t_3 = 0;
      __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_2, 6, __pyx_t_11, __pyx_t_12); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_2)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_2);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
        }
      }
      __pyx_t_5 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_3);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_json); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
        }
      }
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_t_4, __pyx_n_u_friends); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_t_1, __pyx_n_u_data); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 227, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
        __pyx_t_1 = __pyx_t_4; __Pyx_INCREF(__pyx_t_1); __pyx_t_11 = 0;
        __pyx_t_13 = NULL;
      } else {
        __pyx_t_11 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 227, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_13 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 227, __pyx_L12_error)
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      for (;;) {
        if (likely(!__pyx_t_13)) {
          if (likely(PyList_CheckExact(__pyx_t_1))) {
            if (__pyx_t_11 >= PyList_GET_SIZE(__pyx_t_1)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_11); __Pyx_INCREF(__pyx_t_4); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 227, __pyx_L12_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 227, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          } else {
            if (__pyx_t_11 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_11); __Pyx_INCREF(__pyx_t_4); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 227, __pyx_L12_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 227, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          }
        } else {
          __pyx_t_4 = __pyx_t_13(__pyx_t_1);
          if (unlikely(!__pyx_t_4)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 227, __pyx_L12_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_4);
        }
        __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 228, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_XDECREF_SET(__pyx_v_uid, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_teman); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 229, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_7 = (__Pyx_PySequence_ContainsTF(__pyx_v_uid, __pyx_t_4, Py_EQ)); if (unlikely(__pyx_t_7 < 0)) __PYX_ERR(0, 229, __pyx_L12_error)
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_14 = (__pyx_t_7 != 0);
        if (__pyx_t_14) {
          goto __pyx_L20;
        }

        
         {
          __pyx_t_4 = __Pyx_PyInt_AddObjC(__pyx_v_z, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 231, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF_SET(__pyx_v_z, __pyx_t_4);
          __pyx_t_4 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_get_data); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 232, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_5);
          __pyx_t_3 = NULL;
          __pyx_t_6 = 0;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
            __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_5);
            if (likely(__pyx_t_3)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
              __Pyx_INCREF(__pyx_t_3);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_5, function);
              __pyx_t_6 = 1;
            }
          }
          #if CYTHON_FAST_PYCALL
          if (PyFunction_Check(__pyx_t_5)) {
            PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_v_uid, __pyx_v_token};
            __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 232, __pyx_L12_error)
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_GOTREF(__pyx_t_4);
          } else
          #endif
          #if CYTHON_FAST_PYCCALL
          if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
            PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_v_uid, __pyx_v_token};
            __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 232, __pyx_L12_error)
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_GOTREF(__pyx_t_4);
          } else
          #endif
          {
            __pyx_t_2 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 232, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_2);
            if (__pyx_t_3) {
              __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_3); __pyx_t_3 = NULL;
            }
            __Pyx_INCREF(__pyx_v_uid);
            __Pyx_GIVEREF(__pyx_v_uid);
            PyTuple_SET_ITEM(__pyx_t_2, 0+__pyx_t_6, __pyx_v_uid);
            __Pyx_INCREF(__pyx_v_token);
            __Pyx_GIVEREF(__pyx_v_token);
            PyTuple_SET_ITEM(__pyx_t_2, 1+__pyx_t_6, __pyx_v_token);
            __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_2, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 232, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          }
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          __Pyx_XDECREF_SET(__pyx_v_jum, __pyx_t_4);
          __pyx_t_4 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_teman); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 233, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_4);
          __pyx_t_15 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_v_uid); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 233, __pyx_L12_error)
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

          
          __pyx_t_4 = PyTuple_New(6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 234, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_4);
          __pyx_t_16 = 0;
          __pyx_t_12 = 127;
          __Pyx_INCREF(__pyx_kp_u__27);
          __pyx_t_16 += 3;
          __Pyx_GIVEREF(__pyx_kp_u__27);
          PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u__27);
          __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_v_z, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 234, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_5);
          __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_12;
          __pyx_t_16 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
          __Pyx_GIVEREF(__pyx_t_5);
          PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_5);
          __pyx_t_5 = 0;
          __Pyx_INCREF(__pyx_kp_u_ID);
          __pyx_t_16 += 7;
          __Pyx_GIVEREF(__pyx_kp_u_ID);
          PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_ID);
          __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_v_uid, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 234, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_5);
          __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_12;
          __pyx_t_16 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
          __Pyx_GIVEREF(__pyx_t_5);
          PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_5);
          __pyx_t_5 = 0;
          __Pyx_INCREF(__pyx_kp_u_Jumlah_Teman);
          __pyx_t_16 += 18;
          __Pyx_GIVEREF(__pyx_kp_u_Jumlah_Teman);
          PyTuple_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_Jumlah_Teman);
          __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_v_jum, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 234, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_5);
          __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_12;
          __pyx_t_16 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
          __Pyx_GIVEREF(__pyx_t_5);
          PyTuple_SET_ITEM(__pyx_t_4, 5, __pyx_t_5);
          __pyx_t_5 = 0;
          __pyx_t_5 = __Pyx_PyUnicode_Join(__pyx_t_4, 6, __pyx_t_16, __pyx_t_12); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 234, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 234, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_data_teman); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 235, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_5);
          __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_clear); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 235, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          __pyx_t_5 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
            __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
            if (likely(__pyx_t_5)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
              __Pyx_INCREF(__pyx_t_5);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_2, function);
            }
          }
          __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 235, __pyx_L12_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        }
        __pyx_L20:;

        
      }
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    goto __pyx_L17_try_end;
    __pyx_L12_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyError);
    if (__pyx_t_6) {
      __Pyx_AddTraceback("dump.temandariteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_4, &__pyx_t_2) < 0) __PYX_ERR(0, 236, __pyx_L14_except_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 236, __pyx_L14_except_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      goto __pyx_L13_exception_handled;
    }
    goto __pyx_L14_except_error;
    __pyx_L14_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_9, __pyx_t_8);
    goto __pyx_L1_error;
    __pyx_L13_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_9, __pyx_t_8);
    __pyx_L17_try_end:;
  }

  
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__24, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 237, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_v_ask = __pyx_t_2;
  __pyx_t_2 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_9, &__pyx_t_10);
    __Pyx_XGOTREF(__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_10);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_teman); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 239, __pyx_L23_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_4 = __Pyx_PyNumber_Int(__pyx_v_ask); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 239, __pyx_L23_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_1 = __Pyx_PyInt_SubtractObjC(__pyx_t_4, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 239, __pyx_L23_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_GetItem(__pyx_t_2, __pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 239, __pyx_L23_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_v_kontol = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_get_dump); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 240, __pyx_L23_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_2 = NULL;
      __pyx_t_6 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_2)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_2);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_6 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_1)) {
        PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_v_kontol, __pyx_v_token};
        __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_1, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 240, __pyx_L23_error)
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_GOTREF(__pyx_t_4);
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_1)) {
        PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_v_kontol, __pyx_v_token};
        __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_1, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 240, __pyx_L23_error)
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_GOTREF(__pyx_t_4);
      } else
      #endif
      {
        __pyx_t_5 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 240, __pyx_L23_error)
        __Pyx_GOTREF(__pyx_t_5);
        if (__pyx_t_2) {
          __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_2); __pyx_t_2 = NULL;
        }
        __Pyx_INCREF(__pyx_v_kontol);
        __Pyx_GIVEREF(__pyx_v_kontol);
        PyTuple_SET_ITEM(__pyx_t_5, 0+__pyx_t_6, __pyx_v_kontol);
        __Pyx_INCREF(__pyx_v_token);
        __Pyx_GIVEREF(__pyx_v_token);
        PyTuple_SET_ITEM(__pyx_t_5, 1+__pyx_t_6, __pyx_v_token);
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_5, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 240, __pyx_L23_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      }
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    goto __pyx_L28_try_end;
    __pyx_L23_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(((PyObject *)(&((PyTypeObject*)PyExc_Exception)[0])));
    if (__pyx_t_6) {
      __Pyx_AddTraceback("dump.temandariteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_4, &__pyx_t_1, &__pyx_t_5) < 0) __PYX_ERR(0, 241, __pyx_L25_except_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_1);
      __pyx_v_e = __pyx_t_1;
       {

        
        __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_v_e); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 242, __pyx_L34_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      }

      
       {
        {
          __Pyx_DECREF(__pyx_v_e);
          __pyx_v_e = NULL;
          goto __pyx_L35;
        }
        __pyx_L34_error:;
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __pyx_t_19 = 0; __pyx_t_20 = 0; __pyx_t_21 = 0; __pyx_t_22 = 0; __pyx_t_23 = 0; __pyx_t_24 = 0;
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_22, &__pyx_t_23, &__pyx_t_24);
          if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_19, &__pyx_t_20, &__pyx_t_21) < 0)) __Pyx_ErrFetch(&__pyx_t_19, &__pyx_t_20, &__pyx_t_21);
          __Pyx_XGOTREF(__pyx_t_19);
          __Pyx_XGOTREF(__pyx_t_20);
          __Pyx_XGOTREF(__pyx_t_21);
          __Pyx_XGOTREF(__pyx_t_22);
          __Pyx_XGOTREF(__pyx_t_23);
          __Pyx_XGOTREF(__pyx_t_24);
          __pyx_t_6 = __pyx_lineno; __pyx_t_17 = __pyx_clineno; __pyx_t_18 = __pyx_filename;
          {
            __Pyx_DECREF(__pyx_v_e);
            __pyx_v_e = NULL;
          }
          if (PY_MAJOR_VERSION >= 3) {
            __Pyx_XGIVEREF(__pyx_t_22);
            __Pyx_XGIVEREF(__pyx_t_23);
            __Pyx_XGIVEREF(__pyx_t_24);
            __Pyx_ExceptionReset(__pyx_t_22, __pyx_t_23, __pyx_t_24);
          }
          __Pyx_XGIVEREF(__pyx_t_19);
          __Pyx_XGIVEREF(__pyx_t_20);
          __Pyx_XGIVEREF(__pyx_t_21);
          __Pyx_ErrRestore(__pyx_t_19, __pyx_t_20, __pyx_t_21);
          __pyx_t_19 = 0; __pyx_t_20 = 0; __pyx_t_21 = 0; __pyx_t_22 = 0; __pyx_t_23 = 0; __pyx_t_24 = 0;
          __pyx_lineno = __pyx_t_6; __pyx_clineno = __pyx_t_17; __pyx_filename = __pyx_t_18;
          goto __pyx_L25_except_error;
        }
        __pyx_L35:;
      }
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      goto __pyx_L24_exception_handled;
    }
    goto __pyx_L25_except_error;
    __pyx_L25_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
    goto __pyx_L1_error;
    __pyx_L24_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
    __pyx_L28_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("dump.temandariteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_user);
  __Pyx_XDECREF(__pyx_v_limit);
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XDECREF(__pyx_v_z);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_uid);
  __Pyx_XDECREF(__pyx_v_jum);
  __Pyx_XDECREF(__pyx_v_ask);
  __Pyx_XDECREF(__pyx_v_kontol);
  __Pyx_XDECREF(__pyx_v_e);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_25publik(PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyMethodDef __pyx_mdef_4dump_25publik = {"publik", (PyCFunction)__pyx_pw_4dump_25publik, METH_O, 0};
static PyObject *__pyx_pw_4dump_25publik(PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("publik (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_24publik(__pyx_self, ((PyObject *)__pyx_v_token));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_24publik(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_user = NULL;
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  int __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  Py_ssize_t __pyx_t_11;
  Py_UCS4 __pyx_t_12;
  PyObject *(*__pyx_t_13)(PyObject *);
  int __pyx_t_14;
  Py_ssize_t __pyx_t_15;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("publik", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_kp_u_INFO) < 0) __PYX_ERR(0, 246, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__28, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 246, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__29, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 247, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_user = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_re); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 248, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_findall); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 248, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_kp_u_w, __pyx_v_user};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 248, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GOTREF(__pyx_t_1);
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_kp_u_w, __pyx_v_user};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 248, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GOTREF(__pyx_t_1);
  } else
  #endif
  {
    __pyx_t_4 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 248, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (__pyx_t_2) {
      __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_2); __pyx_t_2 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u_w);
    __Pyx_GIVEREF(__pyx_kp_u_w);
    PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_6, __pyx_kp_u_w);
    __Pyx_INCREF(__pyx_v_user);
    __Pyx_GIVEREF(__pyx_v_user);
    PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_6, __pyx_v_user);
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 248, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_7 < 0)) __PYX_ERR(0, 248, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_7) {

    
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_9, &__pyx_t_10);
      __Pyx_XGOTREF(__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_9);
      __Pyx_XGOTREF(__pyx_t_10);
       {
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_convert_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 249, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_5);
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
        __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_v_user) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_user);
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 249, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_v_idt = __pyx_t_1;
        __pyx_t_1 = 0;
      }
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      goto __pyx_L9_try_end;
      __pyx_L4_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

      
       {
        __Pyx_AddTraceback("dump.publik", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_5, &__pyx_t_4) < 0) __PYX_ERR(0, 250, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_INCREF(__pyx_v_user);
        __Pyx_XDECREF_SET(__pyx_v_idt, __pyx_v_user);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        goto __pyx_L5_exception_handled;
      }
      __pyx_L6_except_error:;

      
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
      goto __pyx_L1_error;
      __pyx_L5_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
      __pyx_L9_try_end:;
    }

    
  }

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_10, &__pyx_t_9, &__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_10);
    __Pyx_XGOTREF(__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_8);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_ses); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = PyTuple_New(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_11 = 0;
      __pyx_t_12 = 127;
      __Pyx_INCREF(__pyx_kp_u_https_graph_facebook_com);
      __pyx_t_11 += 27;
      __Pyx_GIVEREF(__pyx_kp_u_https_graph_facebook_com);
      PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_https_graph_facebook_com);
      if (unlikely(!__pyx_v_idt)) { __Pyx_RaiseUnboundLocalError("idt"); __PYX_ERR(0, 252, __pyx_L12_error) }
      __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_idt, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_12;
      __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
      __Pyx_GIVEREF(__pyx_t_3);
      PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_3);
      __pyx_t_3 = 0;
      __Pyx_INCREF(__pyx_kp_u_fields_name_friends_fields_id_n);
      __pyx_t_11 += 62;
      __Pyx_GIVEREF(__pyx_kp_u_fields_name_friends_fields_id_n);
      PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_fields_name_friends_fields_id_n);
      __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_12;
      __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
      __Pyx_GIVEREF(__pyx_t_3);
      PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_3);
      __pyx_t_3 = 0;
      __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_1, 4, __pyx_t_11, __pyx_t_12); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
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
      __pyx_t_5 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_1, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3);
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_json); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
        }
      }
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_t_4, __pyx_n_u_friends); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_t_2, __pyx_n_u_data); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 252, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
        __pyx_t_2 = __pyx_t_4; __Pyx_INCREF(__pyx_t_2); __pyx_t_11 = 0;
        __pyx_t_13 = NULL;
      } else {
        __pyx_t_11 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 252, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_13 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 252, __pyx_L12_error)
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      for (;;) {
        if (likely(!__pyx_t_13)) {
          if (likely(PyList_CheckExact(__pyx_t_2))) {
            if (__pyx_t_11 >= PyList_GET_SIZE(__pyx_t_2)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_11); __Pyx_INCREF(__pyx_t_4); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 252, __pyx_L12_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_2, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 252, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          } else {
            if (__pyx_t_11 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_11); __Pyx_INCREF(__pyx_t_4); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 252, __pyx_L12_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_2, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 252, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          }
        } else {
          __pyx_t_4 = __pyx_t_13(__pyx_t_2);
          if (unlikely(!__pyx_t_4)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 252, __pyx_L12_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_4);
        }
        __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 253, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 253, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_3 = PyNumber_Add(__pyx_t_5, __pyx_kp_u__3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 253, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_name); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 253, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_1 = PyNumber_Add(__pyx_t_3, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 253, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_14 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_t_1); if (unlikely(__pyx_t_14 == ((int)-1))) __PYX_ERR(0, 253, __pyx_L12_error)
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_stdout); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_write); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_15 = PyObject_Length(__pyx_t_5); if (unlikely(__pyx_t_15 == ((Py_ssize_t)-1))) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyInt_FromSsize_t(__pyx_t_15); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_3 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_3);
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
        __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_5, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3);
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_stdout); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_flush); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
          __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
          if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_4, function);
          }
        }
        __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 254, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

        
      }
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    goto __pyx_L17_try_end;
    __pyx_L12_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyError);
    if (__pyx_t_6) {
      __Pyx_AddTraceback("dump.publik", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_2, &__pyx_t_1, &__pyx_t_4) < 0) __PYX_ERR(0, 255, __pyx_L14_except_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 255, __pyx_L14_except_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      goto __pyx_L13_exception_handled;
    }
    goto __pyx_L14_except_error;
    __pyx_L14_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_9, __pyx_t_8);
    goto __pyx_L1_error;
    __pyx_L13_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_9, __pyx_t_8);
    __pyx_L17_try_end:;
  }

  
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 256, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_11 = PyObject_Length(__pyx_t_4); if (unlikely(__pyx_t_11 == ((Py_ssize_t)-1))) __PYX_ERR(0, 256, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_7 = ((__pyx_t_11 == 0) != 0);
  if (__pyx_t_7) {
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 256, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }

  
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 257, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Crack); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 258, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 258, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_id); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 258, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
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
  __pyx_t_4 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_1);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 258, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 258, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("dump.publik", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_user);
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_27massal(PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyMethodDef __pyx_mdef_4dump_27massal = {"massal", (PyCFunction)__pyx_pw_4dump_27massal, METH_O, 0};
static PyObject *__pyx_pw_4dump_27massal(PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("massal (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_26massal(__pyx_self, ((PyObject *)__pyx_v_token));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_26massal(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_tanya_total = NULL;
  PyObject *__pyx_v_t = NULL;
  PyObject *__pyx_v_user = NULL;
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_iso = NULL;
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
  PyObject *(*__pyx_t_10)(PyObject *);
  Py_ssize_t __pyx_t_11;
  Py_UCS4 __pyx_t_12;
  int __pyx_t_13;
  int __pyx_t_14;
  PyObject *__pyx_t_15 = NULL;
  PyObject *(*__pyx_t_16)(PyObject *);
  PyObject *__pyx_t_17 = NULL;
  PyObject *__pyx_t_18 = NULL;
  PyObject *__pyx_t_19 = NULL;
  int __pyx_t_20;
  int __pyx_t_21;
  Py_ssize_t __pyx_t_22;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("massal", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 262, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 262, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 262, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_kp_u_INFO) < 0) __PYX_ERR(0, 262, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__31, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 262, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 262, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_6);
    __Pyx_XGOTREF(__pyx_t_7);
    __Pyx_XGOTREF(__pyx_t_8);
     {
      __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__32, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 263, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 263, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_v_tanya_total = __pyx_t_2;
      __pyx_t_2 = 0;
    }
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

    
     {
      __Pyx_AddTraceback("dump.massal", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_2, &__pyx_t_1, &__pyx_t_5) < 0) __PYX_ERR(0, 264, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_INCREF(__pyx_int_1);
      __Pyx_XDECREF_SET(__pyx_v_tanya_total, __pyx_int_1);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      goto __pyx_L4_exception_handled;
    }
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_6);
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_6);
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
    __pyx_L8_try_end:;
  }

  
  __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_tanya_total); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 265, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (likely(PyList_CheckExact(__pyx_t_5)) || PyTuple_CheckExact(__pyx_t_5)) {
    __pyx_t_1 = __pyx_t_5; __Pyx_INCREF(__pyx_t_1); __pyx_t_9 = 0;
    __pyx_t_10 = NULL;
  } else {
    __pyx_t_9 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 265, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_10 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 265, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  for (;;) {
    if (likely(!__pyx_t_10)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        if (__pyx_t_9 >= PyList_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_5 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_5); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 265, __pyx_L1_error)
        #else
        __pyx_t_5 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 265, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        #endif
      } else {
        if (__pyx_t_9 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_5); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 265, __pyx_L1_error)
        #else
        __pyx_t_5 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 265, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        #endif
      }
    } else {
      __pyx_t_5 = __pyx_t_10(__pyx_t_1);
      if (unlikely(!__pyx_t_5)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 265, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_5);
    }
    __Pyx_XDECREF_SET(__pyx_v_t, __pyx_t_5);
    __pyx_t_5 = 0;

    
    __pyx_t_5 = __Pyx_PyInt_AddObjC(__pyx_v_t, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 266, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF_SET(__pyx_v_t, __pyx_t_5);
    __pyx_t_5 = 0;

    
    __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 267, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    __pyx_t_5 = PyTuple_New(5); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_11 = 0;
    __pyx_t_12 = 127;
    __Pyx_INCREF(__pyx_kp_u_Masukan_Username_Atau_ID_2);
    __pyx_t_11 += 31;
    __Pyx_GIVEREF(__pyx_kp_u_Masukan_Username_Atau_ID_2);
    PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_kp_u_Masukan_Username_Atau_ID_2);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_H); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_12;
    __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_5, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_t, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_12;
    __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_5, 2, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_N); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_12;
    __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_5, 3, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u__33);
    __pyx_t_11 += 3;
    __Pyx_GIVEREF(__pyx_kp_u__33);
    PyTuple_SET_ITEM(__pyx_t_5, 4, __pyx_kp_u__33);
    __pyx_t_2 = __Pyx_PyUnicode_Join(__pyx_t_5, 5, __pyx_t_11, __pyx_t_12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_input, __pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF_SET(__pyx_v_user, __pyx_t_5);
    __pyx_t_5 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_re); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 269, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_findall); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 269, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = NULL;
    __pyx_t_13 = 0;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_2)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_2);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
        __pyx_t_13 = 1;
      }
    }
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_4)) {
      PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_kp_u_w, __pyx_v_user};
      __pyx_t_5 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_13, 2+__pyx_t_13); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 269, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_GOTREF(__pyx_t_5);
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
      PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_kp_u_w, __pyx_v_user};
      __pyx_t_5 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_13, 2+__pyx_t_13); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 269, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_GOTREF(__pyx_t_5);
    } else
    #endif
    {
      __pyx_t_3 = PyTuple_New(2+__pyx_t_13); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 269, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      if (__pyx_t_2) {
        __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_2); __pyx_t_2 = NULL;
      }
      __Pyx_INCREF(__pyx_kp_u_w);
      __Pyx_GIVEREF(__pyx_kp_u_w);
      PyTuple_SET_ITEM(__pyx_t_3, 0+__pyx_t_13, __pyx_kp_u_w);
      __Pyx_INCREF(__pyx_v_user);
      __Pyx_GIVEREF(__pyx_v_user);
      PyTuple_SET_ITEM(__pyx_t_3, 1+__pyx_t_13, __pyx_v_user);
      __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_3, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 269, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_14 = __Pyx_PyObject_IsTrue(__pyx_t_5); if (unlikely(__pyx_t_14 < 0)) __PYX_ERR(0, 269, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (__pyx_t_14) {

      
      {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_7, &__pyx_t_6);
        __Pyx_XGOTREF(__pyx_t_8);
        __Pyx_XGOTREF(__pyx_t_7);
        __Pyx_XGOTREF(__pyx_t_6);
         {
          __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_convert_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 270, __pyx_L14_error)
          __Pyx_GOTREF(__pyx_t_4);
          __pyx_t_3 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
            __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
            if (likely(__pyx_t_3)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
              __Pyx_INCREF(__pyx_t_3);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_4, function);
            }
          }
          __pyx_t_5 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_3, __pyx_v_user) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_v_user);
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 270, __pyx_L14_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_XDECREF_SET(__pyx_v_idt, __pyx_t_5);
          __pyx_t_5 = 0;
        }
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        goto __pyx_L21_try_end;
        __pyx_L14_error:;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

        
         {
          __Pyx_AddTraceback("dump.massal", __pyx_clineno, __pyx_lineno, __pyx_filename);
          if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_4, &__pyx_t_3) < 0) __PYX_ERR(0, 271, __pyx_L16_except_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_GOTREF(__pyx_t_3);
          __Pyx_INCREF(__pyx_v_user);
          __Pyx_XDECREF_SET(__pyx_v_idt, __pyx_v_user);
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          goto __pyx_L15_exception_handled;
        }
        __pyx_L16_except_error:;

        
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_6);
        __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
        goto __pyx_L1_error;
        __pyx_L15_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_6);
        __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
        __pyx_L21_try_end:;
      }

      
    }

    
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_6);
      __Pyx_XGOTREF(__pyx_t_7);
      __Pyx_XGOTREF(__pyx_t_8);
       {

        
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ses); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyTuple_New(4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_11 = 0;
        __pyx_t_12 = 127;
        __Pyx_INCREF(__pyx_kp_u_https_graph_facebook_com);
        __pyx_t_11 += 27;
        __Pyx_GIVEREF(__pyx_kp_u_https_graph_facebook_com);
        PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_kp_u_https_graph_facebook_com);
        if (unlikely(!__pyx_v_idt)) { __Pyx_RaiseUnboundLocalError("idt"); __PYX_ERR(0, 273, __pyx_L24_error) }
        __pyx_t_15 = __Pyx_PyObject_FormatSimple(__pyx_v_idt, __pyx_empty_unicode); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_15);
        __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_15) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_15) : __pyx_t_12;
        __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_15);
        __Pyx_GIVEREF(__pyx_t_15);
        PyTuple_SET_ITEM(__pyx_t_5, 1, __pyx_t_15);
        __pyx_t_15 = 0;
        __Pyx_INCREF(__pyx_kp_u_fields_name_friends_fields_id_n);
        __pyx_t_11 += 62;
        __Pyx_GIVEREF(__pyx_kp_u_fields_name_friends_fields_id_n);
        PyTuple_SET_ITEM(__pyx_t_5, 2, __pyx_kp_u_fields_name_friends_fields_id_n);
        __pyx_t_15 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_15);
        __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_15) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_15) : __pyx_t_12;
        __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_15);
        __Pyx_GIVEREF(__pyx_t_15);
        PyTuple_SET_ITEM(__pyx_t_5, 3, __pyx_t_15);
        __pyx_t_15 = 0;
        __pyx_t_15 = __Pyx_PyUnicode_Join(__pyx_t_5, 4, __pyx_t_11, __pyx_t_12); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_15);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
          __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
          if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
          }
        }
        __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_5, __pyx_t_15) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_15);
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_json); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
          __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
          if (likely(__pyx_t_4)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_4);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
          }
        }
        __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_t_3, __pyx_n_u_friends); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_t_2, __pyx_n_u_data); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 273, __pyx_L24_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        if (likely(PyList_CheckExact(__pyx_t_3)) || PyTuple_CheckExact(__pyx_t_3)) {
          __pyx_t_2 = __pyx_t_3; __Pyx_INCREF(__pyx_t_2); __pyx_t_11 = 0;
          __pyx_t_16 = NULL;
        } else {
          __pyx_t_11 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 273, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_16 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 273, __pyx_L24_error)
        }
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        for (;;) {
          if (likely(!__pyx_t_16)) {
            if (likely(PyList_CheckExact(__pyx_t_2))) {
              if (__pyx_t_11 >= PyList_GET_SIZE(__pyx_t_2)) break;
              #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
              __pyx_t_3 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_11); __Pyx_INCREF(__pyx_t_3); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 273, __pyx_L24_error)
              #else
              __pyx_t_3 = PySequence_ITEM(__pyx_t_2, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 273, __pyx_L24_error)
              __Pyx_GOTREF(__pyx_t_3);
              #endif
            } else {
              if (__pyx_t_11 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
              #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
              __pyx_t_3 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_11); __Pyx_INCREF(__pyx_t_3); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 273, __pyx_L24_error)
              #else
              __pyx_t_3 = PySequence_ITEM(__pyx_t_2, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 273, __pyx_L24_error)
              __Pyx_GOTREF(__pyx_t_3);
              #endif
            }
          } else {
            __pyx_t_3 = __pyx_t_16(__pyx_t_2);
            if (unlikely(!__pyx_t_3)) {
              PyObject* exc_type = PyErr_Occurred();
              if (exc_type) {
                if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                else __PYX_ERR(0, 273, __pyx_L24_error)
              }
              break;
            }
            __Pyx_GOTREF(__pyx_t_3);
          }
          __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_3);
          __pyx_t_3 = 0;

          
          {
            __Pyx_PyThreadState_declare
            __Pyx_PyThreadState_assign
            __Pyx_ExceptionSave(&__pyx_t_17, &__pyx_t_18, &__pyx_t_19);
            __Pyx_XGOTREF(__pyx_t_17);
            __Pyx_XGOTREF(__pyx_t_18);
            __Pyx_XGOTREF(__pyx_t_19);
             {

              
              __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_id); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 275, __pyx_L34_error)
              __Pyx_GOTREF(__pyx_t_3);
              __pyx_t_4 = PyNumber_Add(__pyx_t_3, __pyx_kp_u__3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 275, __pyx_L34_error)
              __Pyx_GOTREF(__pyx_t_4);
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
              __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_name); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 275, __pyx_L34_error)
              __Pyx_GOTREF(__pyx_t_3);
              __pyx_t_15 = PyNumber_Add(__pyx_t_4, __pyx_t_3); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 275, __pyx_L34_error)
              __Pyx_GOTREF(__pyx_t_15);
              __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
              __Pyx_XDECREF_SET(__pyx_v_iso, __pyx_t_15);
              __pyx_t_15 = 0;

              
              __Pyx_GetModuleGlobalName(__pyx_t_15, __pyx_n_s_id); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 276, __pyx_L34_error)
              __Pyx_GOTREF(__pyx_t_15);
              __pyx_t_14 = (__Pyx_PySequence_ContainsTF(__pyx_v_iso, __pyx_t_15, Py_EQ)); if (unlikely(__pyx_t_14 < 0)) __PYX_ERR(0, 276, __pyx_L34_error)
              __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
              __pyx_t_20 = (__pyx_t_14 != 0);
              if (__pyx_t_20) {
                goto __pyx_L42;
              }

              
               {
                __Pyx_GetModuleGlobalName(__pyx_t_15, __pyx_n_s_id); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 277, __pyx_L34_error)
                __Pyx_GOTREF(__pyx_t_15);
                __pyx_t_21 = __Pyx_PyObject_Append(__pyx_t_15, __pyx_v_iso); if (unlikely(__pyx_t_21 == ((int)-1))) __PYX_ERR(0, 277, __pyx_L34_error)
                __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
              }
              __pyx_L42:;

              
            }
            __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
            __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
            __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
            goto __pyx_L41_try_end;
            __pyx_L34_error:;
            __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

            
             {
              __Pyx_AddTraceback("dump.massal", __pyx_clineno, __pyx_lineno, __pyx_filename);
              if (__Pyx_GetException(&__pyx_t_15, &__pyx_t_3, &__pyx_t_4) < 0) __PYX_ERR(0, 278, __pyx_L36_except_error)
              __Pyx_GOTREF(__pyx_t_15);
              __Pyx_GOTREF(__pyx_t_3);
              __Pyx_GOTREF(__pyx_t_4);
              goto __pyx_L44_except_continue;
              __pyx_L44_except_continue:;
              __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
              __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
              goto __pyx_L40_try_continue;
            }
            __pyx_L36_except_error:;

            
            __Pyx_XGIVEREF(__pyx_t_17);
            __Pyx_XGIVEREF(__pyx_t_18);
            __Pyx_XGIVEREF(__pyx_t_19);
            __Pyx_ExceptionReset(__pyx_t_17, __pyx_t_18, __pyx_t_19);
            goto __pyx_L24_error;
            __pyx_L40_try_continue:;
            __Pyx_XGIVEREF(__pyx_t_17);
            __Pyx_XGIVEREF(__pyx_t_18);
            __Pyx_XGIVEREF(__pyx_t_19);
            __Pyx_ExceptionReset(__pyx_t_17, __pyx_t_18, __pyx_t_19);
            goto __pyx_L32_continue;
            __pyx_L41_try_end:;
          }

          
          __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_sys); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_3);
          __pyx_t_15 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_stdout); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_15);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_15, __pyx_n_s_write); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_3);
          __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
          __Pyx_GetModuleGlobalName(__pyx_t_15, __pyx_n_s_id); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_15);
          __pyx_t_22 = PyObject_Length(__pyx_t_15); if (unlikely(__pyx_t_22 == ((Py_ssize_t)-1))) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
          __pyx_t_15 = PyInt_FromSsize_t(__pyx_t_22); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_15);
          __pyx_t_5 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_15); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
          __pyx_t_15 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
            __pyx_t_15 = PyMethod_GET_SELF(__pyx_t_3);
            if (likely(__pyx_t_15)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
              __Pyx_INCREF(__pyx_t_15);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_3, function);
            }
          }
          __pyx_t_4 = (__pyx_t_15) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_15, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
          __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_sys); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_3);
          __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_stdout); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_flush); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_3);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          __pyx_t_5 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
            __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
            if (likely(__pyx_t_5)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
              __Pyx_INCREF(__pyx_t_5);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_3, function);
            }
          }
          __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 279, __pyx_L24_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

          
          __pyx_L32_continue:;
        }
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

        
      }
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      goto __pyx_L31_try_end;
      __pyx_L24_error:;
      __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

      
      __pyx_t_13 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyError);
      if (__pyx_t_13) {
        __Pyx_AddTraceback("dump.massal", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_2, &__pyx_t_4, &__pyx_t_3) < 0) __PYX_ERR(0, 280, __pyx_L26_except_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__34, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 280, __pyx_L26_except_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        goto __pyx_L25_exception_handled;
      }
      goto __pyx_L26_except_error;
      __pyx_L26_except_error:;

      
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
      goto __pyx_L1_error;
      __pyx_L25_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
      __pyx_L31_try_end:;
    }

    
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_id); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 281, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_9 = PyObject_Length(__pyx_t_1); if (unlikely(__pyx_t_9 == ((Py_ssize_t)-1))) __PYX_ERR(0, 281, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_20 = ((__pyx_t_9 == 0) != 0);
  if (__pyx_t_20) {
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 281, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 282, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Crack); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 283, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 283, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_id); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 283, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 283, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 283, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_15);
  __Pyx_AddTraceback("dump.massal", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_tanya_total);
  __Pyx_XDECREF(__pyx_v_t);
  __Pyx_XDECREF(__pyx_v_user);
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_iso);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_29followers(PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyMethodDef __pyx_mdef_4dump_29followers = {"followers", (PyCFunction)__pyx_pw_4dump_29followers, METH_O, 0};
static PyObject *__pyx_pw_4dump_29followers(PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("followers (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_28followers(__pyx_self, ((PyObject *)__pyx_v_token));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_28followers(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_user = NULL;
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  int __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  Py_ssize_t __pyx_t_11;
  Py_UCS4 __pyx_t_12;
  PyObject *(*__pyx_t_13)(PyObject *);
  int __pyx_t_14;
  Py_ssize_t __pyx_t_15;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("followers", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 287, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 287, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 287, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_kp_u_INFO) < 0) __PYX_ERR(0, 287, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__28, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 287, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 287, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__29, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 288, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_user = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_re); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 289, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_findall); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 289, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_kp_u_w, __pyx_v_user};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 289, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GOTREF(__pyx_t_1);
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_kp_u_w, __pyx_v_user};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 289, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GOTREF(__pyx_t_1);
  } else
  #endif
  {
    __pyx_t_4 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 289, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (__pyx_t_2) {
      __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_2); __pyx_t_2 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u_w);
    __Pyx_GIVEREF(__pyx_kp_u_w);
    PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_6, __pyx_kp_u_w);
    __Pyx_INCREF(__pyx_v_user);
    __Pyx_GIVEREF(__pyx_v_user);
    PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_6, __pyx_v_user);
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 289, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_7 < 0)) __PYX_ERR(0, 289, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_7) {

    
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_9, &__pyx_t_10);
      __Pyx_XGOTREF(__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_9);
      __Pyx_XGOTREF(__pyx_t_10);
       {
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_convert_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 290, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_5);
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
        __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_v_user) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_user);
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 290, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_v_idt = __pyx_t_1;
        __pyx_t_1 = 0;
      }
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      goto __pyx_L9_try_end;
      __pyx_L4_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

      
       {
        __Pyx_AddTraceback("dump.followers", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_5, &__pyx_t_4) < 0) __PYX_ERR(0, 291, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_INCREF(__pyx_v_user);
        __Pyx_XDECREF_SET(__pyx_v_idt, __pyx_v_user);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        goto __pyx_L5_exception_handled;
      }
      __pyx_L6_except_error:;

      
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
      goto __pyx_L1_error;
      __pyx_L5_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
      __pyx_L9_try_end:;
    }

    
  }

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_10, &__pyx_t_9, &__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_10);
    __Pyx_XGOTREF(__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_8);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_ses); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = PyTuple_New(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_11 = 0;
      __pyx_t_12 = 127;
      __Pyx_INCREF(__pyx_kp_u_https_graph_facebook_com);
      __pyx_t_11 += 27;
      __Pyx_GIVEREF(__pyx_kp_u_https_graph_facebook_com);
      PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_https_graph_facebook_com);
      if (unlikely(!__pyx_v_idt)) { __Pyx_RaiseUnboundLocalError("idt"); __PYX_ERR(0, 293, __pyx_L12_error) }
      __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_idt, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_12;
      __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
      __Pyx_GIVEREF(__pyx_t_3);
      PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_3);
      __pyx_t_3 = 0;
      __Pyx_INCREF(__pyx_kp_u_fields_name_subscribers_fields);
      __pyx_t_11 += 66;
      __Pyx_GIVEREF(__pyx_kp_u_fields_name_subscribers_fields);
      PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_fields_name_subscribers_fields);
      __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_12 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_12) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_12;
      __pyx_t_11 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
      __Pyx_GIVEREF(__pyx_t_3);
      PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_3);
      __pyx_t_3 = 0;
      __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_1, 4, __pyx_t_11, __pyx_t_12); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
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
      __pyx_t_5 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_1, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3);
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_json); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
        }
      }
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_t_4, __pyx_n_u_friends); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_t_2, __pyx_n_u_data); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 293, __pyx_L12_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
        __pyx_t_2 = __pyx_t_4; __Pyx_INCREF(__pyx_t_2); __pyx_t_11 = 0;
        __pyx_t_13 = NULL;
      } else {
        __pyx_t_11 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 293, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_13 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 293, __pyx_L12_error)
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      for (;;) {
        if (likely(!__pyx_t_13)) {
          if (likely(PyList_CheckExact(__pyx_t_2))) {
            if (__pyx_t_11 >= PyList_GET_SIZE(__pyx_t_2)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_11); __Pyx_INCREF(__pyx_t_4); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 293, __pyx_L12_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_2, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 293, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          } else {
            if (__pyx_t_11 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_11); __Pyx_INCREF(__pyx_t_4); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 293, __pyx_L12_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_2, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 293, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          }
        } else {
          __pyx_t_4 = __pyx_t_13(__pyx_t_2);
          if (unlikely(!__pyx_t_4)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 293, __pyx_L12_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_4);
        }
        __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 294, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 294, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_3 = PyNumber_Add(__pyx_t_5, __pyx_kp_u__3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 294, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_name); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 294, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_1 = PyNumber_Add(__pyx_t_3, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 294, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_14 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_t_1); if (unlikely(__pyx_t_14 == ((int)-1))) __PYX_ERR(0, 294, __pyx_L12_error)
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_stdout); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_write); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_15 = PyObject_Length(__pyx_t_5); if (unlikely(__pyx_t_15 == ((Py_ssize_t)-1))) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyInt_FromSsize_t(__pyx_t_15); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_3 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_3);
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
        __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_5, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3);
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_stdout); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_flush); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
          __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
          if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_4, function);
          }
        }
        __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 295, __pyx_L12_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

        
      }
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    goto __pyx_L17_try_end;
    __pyx_L12_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyError);
    if (__pyx_t_6) {
      __Pyx_AddTraceback("dump.followers", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_2, &__pyx_t_1, &__pyx_t_4) < 0) __PYX_ERR(0, 296, __pyx_L14_except_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 296, __pyx_L14_except_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      goto __pyx_L13_exception_handled;
    }
    goto __pyx_L14_except_error;
    __pyx_L14_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_9, __pyx_t_8);
    goto __pyx_L1_error;
    __pyx_L13_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_9, __pyx_t_8);
    __pyx_L17_try_end:;
  }

  
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 297, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_11 = PyObject_Length(__pyx_t_4); if (unlikely(__pyx_t_11 == ((Py_ssize_t)-1))) __PYX_ERR(0, 297, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_7 = ((__pyx_t_11 == 0) != 0);
  if (__pyx_t_7) {
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 297, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }

  
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 298, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Crack); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_id); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
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
  __pyx_t_4 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_1);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("dump.followers", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_user);
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_31like(PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyMethodDef __pyx_mdef_4dump_31like = {"like", (PyCFunction)__pyx_pw_4dump_31like, METH_O, 0};
static PyObject *__pyx_pw_4dump_31like(PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("like (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_30like(__pyx_self, ((PyObject *)__pyx_v_token));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_30like(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_v_i = NULL;
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
  PyObject *(*__pyx_t_11)(PyObject *);
  int __pyx_t_12;
  Py_ssize_t __pyx_t_13;
  int __pyx_t_14;
  int __pyx_t_15;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("like", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 303, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 303, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 303, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_kp_u_INFO) < 0) __PYX_ERR(0, 303, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__35, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 303, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 303, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 304, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_idt = __pyx_t_1;
  __pyx_t_1 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_6);
    __Pyx_XGOTREF(__pyx_t_7);
    __Pyx_XGOTREF(__pyx_t_8);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ses); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 306, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_get); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 306, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = PyTuple_New(4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 306, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_9 = 0;
      __pyx_t_10 = 127;
      __Pyx_INCREF(__pyx_kp_u_https_graph_facebook_com);
      __pyx_t_9 += 27;
      __Pyx_GIVEREF(__pyx_kp_u_https_graph_facebook_com);
      PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_kp_u_https_graph_facebook_com);
      __pyx_t_3 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_v_idt), __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 306, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
      __Pyx_GIVEREF(__pyx_t_3);
      PyTuple_SET_ITEM(__pyx_t_5, 1, __pyx_t_3);
      __pyx_t_3 = 0;
      __Pyx_INCREF(__pyx_kp_u_likes_fields_limit_100000_acces);
      __pyx_t_9 += 40;
      __Pyx_GIVEREF(__pyx_kp_u_likes_fields_limit_100000_acces);
      PyTuple_SET_ITEM(__pyx_t_5, 2, __pyx_kp_u_likes_fields_limit_100000_acces);
      __pyx_t_3 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_v_token), __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 306, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
      __Pyx_GIVEREF(__pyx_t_3);
      PyTuple_SET_ITEM(__pyx_t_5, 3, __pyx_t_3);
      __pyx_t_3 = 0;
      __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_5, 4, __pyx_t_9, __pyx_t_10); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 306, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_3);
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
      __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_5, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 306, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_json); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 306, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
        __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
        if (likely(__pyx_t_2)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
          __Pyx_INCREF(__pyx_t_2);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_4, function);
        }
      }
      __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 306, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_t_1, __pyx_n_u_data); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 306, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
        __pyx_t_1 = __pyx_t_4; __Pyx_INCREF(__pyx_t_1); __pyx_t_9 = 0;
        __pyx_t_11 = NULL;
      } else {
        __pyx_t_9 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 306, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_11 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 306, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      for (;;) {
        if (likely(!__pyx_t_11)) {
          if (likely(PyList_CheckExact(__pyx_t_1))) {
            if (__pyx_t_9 >= PyList_GET_SIZE(__pyx_t_1)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_4); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 306, __pyx_L3_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 306, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          } else {
            if (__pyx_t_9 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_4); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 306, __pyx_L3_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 306, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          }
        } else {
          __pyx_t_4 = __pyx_t_11(__pyx_t_1);
          if (unlikely(!__pyx_t_4)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 306, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_4);
        }
        __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 307, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_id); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 307, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_3 = PyNumber_Add(__pyx_t_2, __pyx_kp_u__3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 307, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_v_i, __pyx_n_u_name); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 307, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_5 = PyNumber_Add(__pyx_t_3, __pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 307, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_12 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_t_5); if (unlikely(__pyx_t_12 == ((int)-1))) __PYX_ERR(0, 307, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_stdout); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_write); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_id); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_13 = PyObject_Length(__pyx_t_2); if (unlikely(__pyx_t_13 == ((Py_ssize_t)-1))) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = PyInt_FromSsize_t(__pyx_t_13); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_3 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_4, function);
          }
        }
        __pyx_t_5 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3);
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_stdout); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_flush); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
          __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
          if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_4, function);
          }
        }
        __pyx_t_5 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 308, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

        
      }
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    __pyx_t_14 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyError);
    if (__pyx_t_14) {
      __Pyx_AddTraceback("dump.like", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_5, &__pyx_t_4) < 0) __PYX_ERR(0, 309, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 309, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_6);
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_6);
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
    __pyx_L8_try_end:;
  }

  
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 310, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_9 = PyObject_Length(__pyx_t_4); if (unlikely(__pyx_t_9 == ((Py_ssize_t)-1))) __PYX_ERR(0, 310, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_15 = ((__pyx_t_9 == 0) != 0);
  if (__pyx_t_15) {
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 310, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }

  
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 311, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Crack); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 312, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 312, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 312, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_1, function);
    }
  }
  __pyx_t_4 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_3, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_5);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 312, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 312, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("dump.like", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_33randomold(PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyMethodDef __pyx_mdef_4dump_33randomold = {"randomold", (PyCFunction)__pyx_pw_4dump_33randomold, METH_O, 0};
static PyObject *__pyx_pw_4dump_33randomold(PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("randomold (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_32randomold(__pyx_self, ((PyObject *)__pyx_v_token));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_32randomold(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_jumlah = NULL;
  PyObject *__pyx_v_old = NULL;
  PyObject *__pyx_v_digit = NULL;
  PyObject *__pyx_v_idg = NULL;
  PyObject *__pyx_v_depan = NULL;
  PyObject *__pyx_v_belakang = NULL;
  CYTHON_UNUSED PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_x = NULL;
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_nama = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  Py_ssize_t __pyx_t_6;
  PyObject *(*__pyx_t_7)(PyObject *);
  Py_ssize_t __pyx_t_8;
  int __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  Py_UCS4 __pyx_t_13;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_t_15;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("randomold", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 315, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 315, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 315, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_kp_u_INFO) < 0) __PYX_ERR(0, 315, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__38, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 315, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 315, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__39, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 316, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 316, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_jumlah = __pyx_t_2;
  __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__40, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 317, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_v_old = __pyx_t_2;
  __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__41, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 318, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_v_digit = __pyx_t_2;
  __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_v_old); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 319, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_6 = PyObject_Length(__pyx_v_digit); if (unlikely(__pyx_t_6 == ((Py_ssize_t)-1))) __PYX_ERR(0, 319, __pyx_L1_error)
  __pyx_t_1 = PyInt_FromSsize_t(__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 319, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyInt_Type)), __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 319, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = PyNumber_Subtract(__pyx_t_2, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 319, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_idg = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = PyNumber_Multiply(__pyx_kp_u_1, __pyx_v_idg); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 320, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 320, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyNumber_Int(__pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 320, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_depan = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = PyNumber_Multiply(__pyx_kp_u_9, __pyx_v_idg); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 321, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 321, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyNumber_Int(__pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 321, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_belakang = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__22, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 322, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_jumlah); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 323, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_5 = __pyx_t_1; __Pyx_INCREF(__pyx_t_5); __pyx_t_6 = 0;
    __pyx_t_7 = NULL;
  } else {
    __pyx_t_6 = -1; __pyx_t_5 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 323, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_7 = Py_TYPE(__pyx_t_5)->tp_iternext; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 323, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_7)) {
      if (likely(PyList_CheckExact(__pyx_t_5))) {
        if (__pyx_t_6 >= PyList_GET_SIZE(__pyx_t_5)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_5, __pyx_t_6); __Pyx_INCREF(__pyx_t_1); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 323, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_5, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 323, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        if (__pyx_t_6 >= PyTuple_GET_SIZE(__pyx_t_5)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_5, __pyx_t_6); __Pyx_INCREF(__pyx_t_1); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 323, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_5, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 323, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_7(__pyx_t_5);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 323, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_1);
    __pyx_t_1 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_sys); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_stdout); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_write); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_8 = PyObject_Length(__pyx_t_4); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyInt_FromSsize_t(__pyx_t_8); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
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
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_sys); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_stdout); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_flush); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
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
    __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 324, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 325, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_randint); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 325, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
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
      PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_v_depan, __pyx_v_belakang};
      __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 325, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_GOTREF(__pyx_t_1);
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
      PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_v_depan, __pyx_v_belakang};
      __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 325, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_GOTREF(__pyx_t_1);
    } else
    #endif
    {
      __pyx_t_4 = PyTuple_New(2+__pyx_t_9); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 325, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      if (__pyx_t_2) {
        __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_2); __pyx_t_2 = NULL;
      }
      __Pyx_INCREF(__pyx_v_depan);
      __Pyx_GIVEREF(__pyx_v_depan);
      PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_9, __pyx_v_depan);
      __Pyx_INCREF(__pyx_v_belakang);
      __Pyx_GIVEREF(__pyx_v_belakang);
      PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_9, __pyx_v_belakang);
      __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 325, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF_SET(__pyx_v_x, __pyx_t_1);
    __pyx_t_1 = 0;

    
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_digit); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 326, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_x); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 326, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyUnicode_Concat(__pyx_t_1, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 326, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF_SET(__pyx_v_idt, __pyx_t_4);
    __pyx_t_4 = 0;

    
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_10, &__pyx_t_11, &__pyx_t_12);
      __Pyx_XGOTREF(__pyx_t_10);
      __Pyx_XGOTREF(__pyx_t_11);
      __Pyx_XGOTREF(__pyx_t_12);
       {

        
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_ses); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 328, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 328, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = PyTuple_New(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 328, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_8 = 0;
        __pyx_t_13 = 127;
        __Pyx_INCREF(__pyx_kp_u_https_graph_facebook_com);
        __pyx_t_8 += 27;
        __Pyx_GIVEREF(__pyx_kp_u_https_graph_facebook_com);
        PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_https_graph_facebook_com);
        __pyx_t_14 = __Pyx_PyObject_FormatSimple(__pyx_v_idt, __pyx_empty_unicode); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 328, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_14);
        __pyx_t_13 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) > __pyx_t_13) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) : __pyx_t_13;
        __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_14);
        __Pyx_GIVEREF(__pyx_t_14);
        PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_14);
        __pyx_t_14 = 0;
        __Pyx_INCREF(__pyx_kp_u_access_token_2);
        __pyx_t_8 += 15;
        __Pyx_GIVEREF(__pyx_kp_u_access_token_2);
        PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_access_token_2);
        __pyx_t_14 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 328, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_14);
        __pyx_t_13 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) > __pyx_t_13) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) : __pyx_t_13;
        __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_14);
        __Pyx_GIVEREF(__pyx_t_14);
        PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_14);
        __pyx_t_14 = 0;
        __pyx_t_14 = __Pyx_PyUnicode_Join(__pyx_t_1, 4, __pyx_t_8, __pyx_t_13); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 328, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_14);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
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
        __pyx_t_3 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_1, __pyx_t_14) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_14);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 328, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_json); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 328, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
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
        __pyx_t_4 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 328, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF_SET(__pyx_v_data, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_data, __pyx_n_u_name); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 329, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_XDECREF_SET(__pyx_v_nama, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 330, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_2 = PyNumber_Add(__pyx_v_idt, __pyx_kp_u__3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 330, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_3 = PyNumber_Add(__pyx_t_2, __pyx_v_nama); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 330, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_15 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_t_3); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 330, __pyx_L5_error)
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

        
      }
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      goto __pyx_L12_try_end;
      __pyx_L5_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_9 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyError) || __Pyx_PyErr_ExceptionMatches(__pyx_builtin_IOError) || __Pyx_PyErr_ExceptionMatches(__pyx_builtin_TypeError) || __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
      if (__pyx_t_9) {
        __Pyx_ErrRestore(0,0,0);
        goto __pyx_L6_exception_handled;
      }

      
      __pyx_t_9 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyboardInterrupt);
      if (__pyx_t_9) {
        __Pyx_ErrRestore(0,0,0);
        goto __pyx_L6_exception_handled;
      }
      goto __pyx_L7_except_error;
      __pyx_L7_except_error:;

      
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_11, __pyx_t_12);
      goto __pyx_L1_error;
      __pyx_L6_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_11, __pyx_t_12);
      __pyx_L12_try_end:;
    }

    
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Crack); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 336, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 336, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_id); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 336, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_5 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 336, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 336, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("dump.randomold", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_jumlah);
  __Pyx_XDECREF(__pyx_v_old);
  __Pyx_XDECREF(__pyx_v_digit);
  __Pyx_XDECREF(__pyx_v_idg);
  __Pyx_XDECREF(__pyx_v_depan);
  __Pyx_XDECREF(__pyx_v_belakang);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_x);
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_nama);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_35randomnew(PyObject *__pyx_self, PyObject *__pyx_v_token); 
static PyMethodDef __pyx_mdef_4dump_35randomnew = {"randomnew", (PyCFunction)__pyx_pw_4dump_35randomnew, METH_O, 0};
static PyObject *__pyx_pw_4dump_35randomnew(PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("randomnew (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_34randomnew(__pyx_self, ((PyObject *)__pyx_v_token));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_34randomnew(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_token) {
  PyObject *__pyx_v_jumlah = NULL;
  PyObject *__pyx_v_digit = NULL;
  PyObject *__pyx_v_idg = NULL;
  PyObject *__pyx_v_depan = NULL;
  PyObject *__pyx_v_belakang = NULL;
  CYTHON_UNUSED PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_x = NULL;
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_nama = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  Py_ssize_t __pyx_t_6;
  PyObject *(*__pyx_t_7)(PyObject *);
  Py_ssize_t __pyx_t_8;
  int __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  Py_UCS4 __pyx_t_13;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_t_15;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("randomnew", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_prints); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 339, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 339, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 339, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_title, __pyx_kp_u_INFO) < 0) __PYX_ERR(0, 339, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__42, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 339, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 339, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__39, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 340, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 340, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_jumlah = __pyx_t_2;
  __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__41, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 341, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_v_digit = __pyx_t_2;
  __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_int_15); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_6 = PyObject_Length(__pyx_v_digit); if (unlikely(__pyx_t_6 == ((Py_ssize_t)-1))) __PYX_ERR(0, 342, __pyx_L1_error)
  __pyx_t_1 = PyInt_FromSsize_t(__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyInt_Type)), __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = PyNumber_Subtract(__pyx_t_2, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_idg = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = PyNumber_Multiply(__pyx_kp_u_1, __pyx_v_idg); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 343, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 343, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyNumber_Int(__pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 343, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_depan = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = PyNumber_Multiply(__pyx_kp_u_9, __pyx_v_idg); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 344, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 344, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyNumber_Int(__pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 344, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_belakang = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__22, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 345, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_jumlah); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 346, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_5 = __pyx_t_1; __Pyx_INCREF(__pyx_t_5); __pyx_t_6 = 0;
    __pyx_t_7 = NULL;
  } else {
    __pyx_t_6 = -1; __pyx_t_5 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 346, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_7 = Py_TYPE(__pyx_t_5)->tp_iternext; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 346, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_7)) {
      if (likely(PyList_CheckExact(__pyx_t_5))) {
        if (__pyx_t_6 >= PyList_GET_SIZE(__pyx_t_5)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_5, __pyx_t_6); __Pyx_INCREF(__pyx_t_1); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 346, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_5, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 346, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        if (__pyx_t_6 >= PyTuple_GET_SIZE(__pyx_t_5)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_5, __pyx_t_6); __Pyx_INCREF(__pyx_t_1); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 346, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_5, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 346, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_7(__pyx_t_5);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 346, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_1);
    __pyx_t_1 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_sys); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_stdout); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_write); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_8 = PyObject_Length(__pyx_t_4); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyInt_FromSsize_t(__pyx_t_8); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
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
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_sys); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_stdout); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_flush); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
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
    __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 348, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_randint); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 348, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
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
      PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_v_depan, __pyx_v_belakang};
      __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 348, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_GOTREF(__pyx_t_1);
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
      PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_v_depan, __pyx_v_belakang};
      __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 348, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_GOTREF(__pyx_t_1);
    } else
    #endif
    {
      __pyx_t_4 = PyTuple_New(2+__pyx_t_9); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 348, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      if (__pyx_t_2) {
        __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_2); __pyx_t_2 = NULL;
      }
      __Pyx_INCREF(__pyx_v_depan);
      __Pyx_GIVEREF(__pyx_v_depan);
      PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_9, __pyx_v_depan);
      __Pyx_INCREF(__pyx_v_belakang);
      __Pyx_GIVEREF(__pyx_v_belakang);
      PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_9, __pyx_v_belakang);
      __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 348, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF_SET(__pyx_v_x, __pyx_t_1);
    __pyx_t_1 = 0;

    
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_digit); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_x); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyUnicode_Concat(__pyx_t_1, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF_SET(__pyx_v_idt, __pyx_t_4);
    __pyx_t_4 = 0;

    
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_10, &__pyx_t_11, &__pyx_t_12);
      __Pyx_XGOTREF(__pyx_t_10);
      __Pyx_XGOTREF(__pyx_t_11);
      __Pyx_XGOTREF(__pyx_t_12);
       {

        
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_ses); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 351, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 351, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = PyTuple_New(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 351, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_8 = 0;
        __pyx_t_13 = 127;
        __Pyx_INCREF(__pyx_kp_u_https_graph_facebook_com);
        __pyx_t_8 += 27;
        __Pyx_GIVEREF(__pyx_kp_u_https_graph_facebook_com);
        PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_https_graph_facebook_com);
        __pyx_t_14 = __Pyx_PyObject_FormatSimple(__pyx_v_idt, __pyx_empty_unicode); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 351, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_14);
        __pyx_t_13 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) > __pyx_t_13) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) : __pyx_t_13;
        __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_14);
        __Pyx_GIVEREF(__pyx_t_14);
        PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_14);
        __pyx_t_14 = 0;
        __Pyx_INCREF(__pyx_kp_u_access_token_2);
        __pyx_t_8 += 15;
        __Pyx_GIVEREF(__pyx_kp_u_access_token_2);
        PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_access_token_2);
        __pyx_t_14 = __Pyx_PyObject_FormatSimple(__pyx_v_token, __pyx_empty_unicode); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 351, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_14);
        __pyx_t_13 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) > __pyx_t_13) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) : __pyx_t_13;
        __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_14);
        __Pyx_GIVEREF(__pyx_t_14);
        PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_14);
        __pyx_t_14 = 0;
        __pyx_t_14 = __Pyx_PyUnicode_Join(__pyx_t_1, 4, __pyx_t_8, __pyx_t_13); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 351, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_14);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
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
        __pyx_t_3 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_1, __pyx_t_14) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_14);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 351, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_json); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 351, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
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
        __pyx_t_4 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 351, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF_SET(__pyx_v_data, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_data, __pyx_n_u_name); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 352, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_XDECREF_SET(__pyx_v_nama, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 353, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_2 = PyNumber_Add(__pyx_v_idt, __pyx_kp_u__3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 353, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_3 = PyNumber_Add(__pyx_t_2, __pyx_v_nama); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 353, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_15 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_t_3); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 353, __pyx_L5_error)
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

        
      }
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      goto __pyx_L12_try_end;
      __pyx_L5_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_9 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyError) || __Pyx_PyErr_ExceptionMatches(__pyx_builtin_IOError) || __Pyx_PyErr_ExceptionMatches(__pyx_builtin_TypeError) || __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
      if (__pyx_t_9) {
        __Pyx_ErrRestore(0,0,0);
        goto __pyx_L6_exception_handled;
      }

      
      __pyx_t_9 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyboardInterrupt);
      if (__pyx_t_9) {
        __Pyx_ErrRestore(0,0,0);
        goto __pyx_L6_exception_handled;
      }
      goto __pyx_L7_except_error;
      __pyx_L7_except_error:;

      
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_11, __pyx_t_12);
      goto __pyx_L1_error;
      __pyx_L6_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_11, __pyx_t_12);
      __pyx_L12_try_end:;
    }

    
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 358, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Crack); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 359, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 359, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_id); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 359, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_5 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 359, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 359, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("dump.randomnew", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_jumlah);
  __Pyx_XDECREF(__pyx_v_digit);
  __Pyx_XDECREF(__pyx_v_idg);
  __Pyx_XDECREF(__pyx_v_depan);
  __Pyx_XDECREF(__pyx_v_belakang);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_x);
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_nama);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_37komentar(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_4dump_37komentar = {"komentar", (PyCFunction)__pyx_pw_4dump_37komentar, METH_NOARGS, 0};
static PyObject *__pyx_pw_4dump_37komentar(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("komentar (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_36komentar(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_36komentar(CYTHON_UNUSED PyObject *__pyx_self) {
  CYTHON_UNUSED PyObject *__pyx_v_cok = NULL;
  PyObject *__pyx_v_idg = NULL;
  PyObject *__pyx_v_url = NULL;
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
  int __pyx_t_9;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("komentar", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_prints); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 365, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_Panel); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 365, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 365, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_title, __pyx_kp_u_INFO) < 0) __PYX_ERR(0, 365, __pyx_L3_error)
      __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__35, __pyx_t_7); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 365, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_t_8) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_8);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 365, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__43, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 366, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_read); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 366, __pyx_L3_error)
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
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 366, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_v_cok = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 367, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_v_idg = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__22, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 368, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_4 = PyNumber_Add(__pyx_kp_u_https_mbasic_facebook_com_2, __pyx_v_idg); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 369, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_v_url = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 370, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_dump_komentar); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 371, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
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
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_5, __pyx_v_url) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_v_url);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 371, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 372, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_Crack); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 373, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 373, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_id); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 373, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_7 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_t_8) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_8);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 373, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 373, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

    
    __pyx_t_9 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_IOError);
    if (__pyx_t_9) {
      __Pyx_AddTraceback("dump.komentar", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_4, &__pyx_t_8) < 0) __PYX_ERR(0, 374, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_7 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__44, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 374, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
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
  __Pyx_AddTraceback("dump.komentar", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_cok);
  __Pyx_XDECREF(__pyx_v_idg);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_39dump_komentar(PyObject *__pyx_self, PyObject *__pyx_v_url); 
static PyMethodDef __pyx_mdef_4dump_39dump_komentar = {"dump_komentar", (PyCFunction)__pyx_pw_4dump_39dump_komentar, METH_O, 0};
static PyObject *__pyx_pw_4dump_39dump_komentar(PyObject *__pyx_self, PyObject *__pyx_v_url) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("dump_komentar (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_38dump_komentar(__pyx_self, ((PyObject *)__pyx_v_url));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_38dump_komentar(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url) {
  PyObject *__pyx_v_cok = NULL;
  PyObject *__pyx_v_kue = NULL;
  PyObject *__pyx_v_urlmain = NULL;
  PyObject *__pyx_v_par = NULL;
  PyObject *__pyx_v_xf = NULL;
  PyObject *__pyx_v_xx = NULL;
  PyObject *__pyx_v_z = NULL;
  PyObject *__pyx_v_x = NULL;
  PyObject *__pyx_v_uid = NULL;
  PyObject *__pyx_v_n = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  Py_ssize_t __pyx_t_10;
  PyObject *(*__pyx_t_11)(PyObject *);
  Py_ssize_t __pyx_t_12;
  PyObject *(*__pyx_t_13)(PyObject *);
  PyObject *__pyx_t_14 = NULL;
  PyObject *__pyx_t_15 = NULL;
  PyObject *__pyx_t_16 = NULL;
  int __pyx_t_17;
  int __pyx_t_18;
  PyObject *__pyx_t_19 = NULL;
  int __pyx_t_20;
  Py_ssize_t __pyx_t_21;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("dump_komentar", 0);

  
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__43, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_read); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_cok = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_cookie, __pyx_v_cok) < 0) __PYX_ERR(0, 378, __pyx_L1_error)
  __pyx_v_kue = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_ses); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 379, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 379, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = PyTuple_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 379, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_v_url);
  __Pyx_GIVEREF(__pyx_v_url);
  PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_v_url);
  __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 379, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_cookies, __pyx_v_kue) < 0) __PYX_ERR(0, 379, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_3, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 379, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_text); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 379, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_encode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 379, __pyx_L1_error)
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
  __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_kp_u_utf_8) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u_utf_8);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 379, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_urlmain = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_parser); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 380, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_4 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_4, __pyx_v_urlmain, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 380, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_4, __pyx_v_urlmain, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 380, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
  } else
  #endif
  {
    __pyx_t_3 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 380, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (__pyx_t_4) {
      __Pyx_GIVEREF(__pyx_t_4); PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_4); __pyx_t_4 = NULL;
    }
    __Pyx_INCREF(__pyx_v_urlmain);
    __Pyx_GIVEREF(__pyx_v_urlmain);
    PyTuple_SET_ITEM(__pyx_t_3, 0+__pyx_t_6, __pyx_v_urlmain);
    __Pyx_INCREF(__pyx_kp_u_html_parser);
    __Pyx_GIVEREF(__pyx_kp_u_html_parser);
    PyTuple_SET_ITEM(__pyx_t_3, 1+__pyx_t_6, __pyx_kp_u_html_parser);
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 380, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_par = __pyx_t_1;
  __pyx_t_1 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_7, &__pyx_t_8, &__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_7);
    __Pyx_XGOTREF(__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_9);
     {

      
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_par, __pyx_n_s_find_all); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 382, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_3 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_3)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_3);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_3, __pyx_n_u_h3) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_n_u_h3);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 382, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
        __pyx_t_5 = __pyx_t_1; __Pyx_INCREF(__pyx_t_5); __pyx_t_10 = 0;
        __pyx_t_11 = NULL;
      } else {
        __pyx_t_10 = -1; __pyx_t_5 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 382, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_11 = Py_TYPE(__pyx_t_5)->tp_iternext; if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 382, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      for (;;) {
        if (likely(!__pyx_t_11)) {
          if (likely(PyList_CheckExact(__pyx_t_5))) {
            if (__pyx_t_10 >= PyList_GET_SIZE(__pyx_t_5)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_1 = PyList_GET_ITEM(__pyx_t_5, __pyx_t_10); __Pyx_INCREF(__pyx_t_1); __pyx_t_10++; if (unlikely(0 < 0)) __PYX_ERR(0, 382, __pyx_L3_error)
            #else
            __pyx_t_1 = PySequence_ITEM(__pyx_t_5, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 382, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_1);
            #endif
          } else {
            if (__pyx_t_10 >= PyTuple_GET_SIZE(__pyx_t_5)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_5, __pyx_t_10); __Pyx_INCREF(__pyx_t_1); __pyx_t_10++; if (unlikely(0 < 0)) __PYX_ERR(0, 382, __pyx_L3_error)
            #else
            __pyx_t_1 = PySequence_ITEM(__pyx_t_5, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 382, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_1);
            #endif
          }
        } else {
          __pyx_t_1 = __pyx_t_11(__pyx_t_5);
          if (unlikely(!__pyx_t_1)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 382, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_1);
        }
        __Pyx_XDECREF_SET(__pyx_v_xf, __pyx_t_1);
        __pyx_t_1 = 0;

        
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_xf, __pyx_n_s_find_all); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 383, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 383, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_3);
        if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_href, Py_True) < 0) __PYX_ERR(0, 383, __pyx_L3_error)
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__14, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 383, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
          __pyx_t_3 = __pyx_t_4; __Pyx_INCREF(__pyx_t_3); __pyx_t_12 = 0;
          __pyx_t_13 = NULL;
        } else {
          __pyx_t_12 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 383, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_3);
          __pyx_t_13 = Py_TYPE(__pyx_t_3)->tp_iternext; if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 383, __pyx_L3_error)
        }
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        for (;;) {
          if (likely(!__pyx_t_13)) {
            if (likely(PyList_CheckExact(__pyx_t_3))) {
              if (__pyx_t_12 >= PyList_GET_SIZE(__pyx_t_3)) break;
              #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
              __pyx_t_4 = PyList_GET_ITEM(__pyx_t_3, __pyx_t_12); __Pyx_INCREF(__pyx_t_4); __pyx_t_12++; if (unlikely(0 < 0)) __PYX_ERR(0, 383, __pyx_L3_error)
              #else
              __pyx_t_4 = PySequence_ITEM(__pyx_t_3, __pyx_t_12); __pyx_t_12++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 383, __pyx_L3_error)
              __Pyx_GOTREF(__pyx_t_4);
              #endif
            } else {
              if (__pyx_t_12 >= PyTuple_GET_SIZE(__pyx_t_3)) break;
              #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
              __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_3, __pyx_t_12); __Pyx_INCREF(__pyx_t_4); __pyx_t_12++; if (unlikely(0 < 0)) __PYX_ERR(0, 383, __pyx_L3_error)
              #else
              __pyx_t_4 = PySequence_ITEM(__pyx_t_3, __pyx_t_12); __pyx_t_12++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 383, __pyx_L3_error)
              __Pyx_GOTREF(__pyx_t_4);
              #endif
            }
          } else {
            __pyx_t_4 = __pyx_t_13(__pyx_t_3);
            if (unlikely(!__pyx_t_4)) {
              PyObject* exc_type = PyErr_Occurred();
              if (exc_type) {
                if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                else __PYX_ERR(0, 383, __pyx_L3_error)
              }
              break;
            }
            __Pyx_GOTREF(__pyx_t_4);
          }
          __Pyx_XDECREF_SET(__pyx_v_xx, __pyx_t_4);
          __pyx_t_4 = 0;

          
          {
            __Pyx_PyThreadState_declare
            __Pyx_PyThreadState_assign
            __Pyx_ExceptionSave(&__pyx_t_14, &__pyx_t_15, &__pyx_t_16);
            __Pyx_XGOTREF(__pyx_t_14);
            __Pyx_XGOTREF(__pyx_t_15);
            __Pyx_XGOTREF(__pyx_t_16);
             {

              
              __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_xx, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 385, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_1);
              __pyx_t_2 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
                __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
                if (likely(__pyx_t_2)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                  __Pyx_INCREF(__pyx_t_2);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_1, function);
                }
              }
              __pyx_t_4 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_2, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_n_u_href);
              __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
              if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 385, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_4);
              __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
              __pyx_t_17 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_profile_php_2, __pyx_t_4, Py_EQ)); if (unlikely(__pyx_t_17 < 0)) __PYX_ERR(0, 385, __pyx_L13_error)
              __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
              __pyx_t_18 = (__pyx_t_17 != 0);
              if (__pyx_t_18) {

                
                __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_xx, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 386, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_2);
                __pyx_t_19 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
                  __pyx_t_19 = PyMethod_GET_SELF(__pyx_t_2);
                  if (likely(__pyx_t_19)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                    __Pyx_INCREF(__pyx_t_19);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_2, function);
                  }
                }
                __pyx_t_1 = (__pyx_t_19) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_19, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_n_u_href);
                __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
                if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 386, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_split); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 386, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_2);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __pyx_t_1 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
                  __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_2);
                  if (likely(__pyx_t_1)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                    __Pyx_INCREF(__pyx_t_1);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_2, function);
                  }
                }
                __pyx_t_4 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_1, __pyx_kp_u__26) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_kp_u__26);
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 386, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_4);
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __pyx_t_2 = __Pyx_GetItemInt(__pyx_t_4, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 386, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_2);
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_XDECREF_SET(__pyx_v_z, __pyx_t_2);
                __pyx_t_2 = 0;

                
                __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_z, __pyx_n_s_split); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 387, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_4);
                __pyx_t_1 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
                  __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_4);
                  if (likely(__pyx_t_1)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                    __Pyx_INCREF(__pyx_t_1);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_4, function);
                  }
                }
                __pyx_t_2 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_1, __pyx_kp_u__45) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_kp_u__45);
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 387, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_2);
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __pyx_t_4 = __Pyx_GetItemInt(__pyx_t_2, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 387, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_4);
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_XDECREF_SET(__pyx_v_x, __pyx_t_4);
                __pyx_t_4 = 0;

                
                __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_xx, __pyx_n_s_text); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 388, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_4);
                __Pyx_XDECREF_SET(__pyx_v_uid, __pyx_t_4);
                __pyx_t_4 = 0;

                
                __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 389, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_4);
                __pyx_t_2 = PyNumber_Add(__pyx_v_x, __pyx_kp_u__3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 389, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_2);
                __pyx_t_1 = PyNumber_Add(__pyx_t_2, __pyx_v_uid); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 389, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __pyx_t_20 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_t_1); if (unlikely(__pyx_t_20 == ((int)-1))) __PYX_ERR(0, 389, __pyx_L13_error)
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

                
                __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_4);
                __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_stdout); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_2);
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_write); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_4);
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_id); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_2);
                __pyx_t_21 = PyObject_Length(__pyx_t_2); if (unlikely(__pyx_t_21 == ((Py_ssize_t)-1))) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __pyx_t_2 = PyInt_FromSsize_t(__pyx_t_21); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_2);
                __pyx_t_19 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_2); if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_19);
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __pyx_t_2 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
                  __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
                  if (likely(__pyx_t_2)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                    __Pyx_INCREF(__pyx_t_2);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_4, function);
                  }
                }
                __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_2, __pyx_t_19) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_19);
                __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_DECREF(__pyx_t_19); __pyx_t_19 = 0;
                if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_4);
                __pyx_t_19 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_stdout); if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_19);
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_19, __pyx_n_s_flush); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_4);
                __Pyx_DECREF(__pyx_t_19); __pyx_t_19 = 0;
                __pyx_t_19 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
                  __pyx_t_19 = PyMethod_GET_SELF(__pyx_t_4);
                  if (likely(__pyx_t_19)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                    __Pyx_INCREF(__pyx_t_19);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_4, function);
                  }
                }
                __pyx_t_1 = (__pyx_t_19) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_19) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
                __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
                if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 390, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

                
              }

              
            }
            __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
            __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
            __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
            goto __pyx_L20_try_end;
            __pyx_L13_error:;
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
            __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;

            
             {
              __Pyx_ErrRestore(0,0,0);
              goto __pyx_L14_exception_handled;
            }
            __pyx_L14_exception_handled:;
            __Pyx_XGIVEREF(__pyx_t_14);
            __Pyx_XGIVEREF(__pyx_t_15);
            __Pyx_XGIVEREF(__pyx_t_16);
            __Pyx_ExceptionReset(__pyx_t_14, __pyx_t_15, __pyx_t_16);
            __pyx_L20_try_end:;
          }

          
        }
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

        
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

      
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_par, __pyx_n_s_find_all); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 392, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 392, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_3);
      if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_href, Py_True) < 0) __PYX_ERR(0, 392, __pyx_L3_error)
      __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_tuple__14, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 392, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
        __pyx_t_3 = __pyx_t_1; __Pyx_INCREF(__pyx_t_3); __pyx_t_10 = 0;
        __pyx_t_11 = NULL;
      } else {
        __pyx_t_10 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 392, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_11 = Py_TYPE(__pyx_t_3)->tp_iternext; if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 392, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      for (;;) {
        if (likely(!__pyx_t_11)) {
          if (likely(PyList_CheckExact(__pyx_t_3))) {
            if (__pyx_t_10 >= PyList_GET_SIZE(__pyx_t_3)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_1 = PyList_GET_ITEM(__pyx_t_3, __pyx_t_10); __Pyx_INCREF(__pyx_t_1); __pyx_t_10++; if (unlikely(0 < 0)) __PYX_ERR(0, 392, __pyx_L3_error)
            #else
            __pyx_t_1 = PySequence_ITEM(__pyx_t_3, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 392, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_1);
            #endif
          } else {
            if (__pyx_t_10 >= PyTuple_GET_SIZE(__pyx_t_3)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_3, __pyx_t_10); __Pyx_INCREF(__pyx_t_1); __pyx_t_10++; if (unlikely(0 < 0)) __PYX_ERR(0, 392, __pyx_L3_error)
            #else
            __pyx_t_1 = PySequence_ITEM(__pyx_t_3, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 392, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_1);
            #endif
          }
        } else {
          __pyx_t_1 = __pyx_t_11(__pyx_t_3);
          if (unlikely(!__pyx_t_1)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 392, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_1);
        }
        __Pyx_XDECREF_SET(__pyx_v_n, __pyx_t_1);
        __pyx_t_1 = 0;

        
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_n, __pyx_n_s_text); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 393, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_18 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_Lihat_komentar_lainnya, __pyx_t_1, Py_EQ)); if (unlikely(__pyx_t_18 < 0)) __PYX_ERR(0, 393, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_17 = (__pyx_t_18 != 0);
        if (__pyx_t_17) {

          
          __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_dump_komentar); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 394, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_5);
          __pyx_t_19 = __Pyx_PyObject_GetAttrStr(__pyx_v_n, __pyx_n_s_get); if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 394, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_19);
          __pyx_t_2 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_19))) {
            __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_19);
            if (likely(__pyx_t_2)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_19);
              __Pyx_INCREF(__pyx_t_2);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_19, function);
            }
          }
          __pyx_t_4 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_19, __pyx_t_2, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_19, __pyx_n_u_href);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 394, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_19); __pyx_t_19 = 0;
          __pyx_t_19 = PyNumber_Add(__pyx_kp_u_https_mbasic_facebook_com_2, __pyx_t_4); if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 394, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_19);
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
          __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_4, __pyx_t_19) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_19);
          __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_DECREF(__pyx_t_19); __pyx_t_19 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 394, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

          
        }

        
      }
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

    
    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyboardInterrupt);
    if (__pyx_t_6) {
      __Pyx_ErrRestore(0,0,0);
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
    __pyx_L8_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_19);
  __Pyx_AddTraceback("dump.dump_komentar", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_cok);
  __Pyx_XDECREF(__pyx_v_kue);
  __Pyx_XDECREF(__pyx_v_urlmain);
  __Pyx_XDECREF(__pyx_v_par);
  __Pyx_XDECREF(__pyx_v_xf);
  __Pyx_XDECREF(__pyx_v_xx);
  __Pyx_XDECREF(__pyx_v_z);
  __Pyx_XDECREF(__pyx_v_x);
  __Pyx_XDECREF(__pyx_v_uid);
  __Pyx_XDECREF(__pyx_v_n);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_41saranteman(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_4dump_41saranteman = {"saranteman", (PyCFunction)__pyx_pw_4dump_41saranteman, METH_NOARGS, 0};
static PyObject *__pyx_pw_4dump_41saranteman(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("saranteman (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_40saranteman(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_40saranteman(CYTHON_UNUSED PyObject *__pyx_self) {
  CYTHON_UNUSED PyObject *__pyx_v_cok = NULL;
  PyObject *__pyx_v_url = NULL;
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
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("saranteman", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__43, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 401, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_read); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 401, __pyx_L3_error)
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
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 401, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_v_cok = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__22, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 402, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_INCREF(__pyx_kp_u_https_mbasic_facebook_com_friend);
      __pyx_v_url = __pyx_kp_u_https_mbasic_facebook_com_friend;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_dump_saran); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 404, __pyx_L3_error)
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
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_5, __pyx_v_url) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_v_url);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 404, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 405, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_Crack); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 406, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 406, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_id); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 406, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
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
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 406, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 406, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

    
    __pyx_t_8 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_IOError);
    if (__pyx_t_8) {
      __Pyx_AddTraceback("dump.saranteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_4, &__pyx_t_6) < 0) __PYX_ERR(0, 407, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__44, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 407, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
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
  __Pyx_AddTraceback("dump.saranteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_cok);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_43permintaanteman(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_4dump_43permintaanteman = {"permintaanteman", (PyCFunction)__pyx_pw_4dump_43permintaanteman, METH_NOARGS, 0};
static PyObject *__pyx_pw_4dump_43permintaanteman(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("permintaanteman (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_42permintaanteman(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_42permintaanteman(CYTHON_UNUSED PyObject *__pyx_self) {
  CYTHON_UNUSED PyObject *__pyx_v_cok = NULL;
  PyObject *__pyx_v_url = NULL;
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
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("permintaanteman", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__43, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 412, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_read); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 412, __pyx_L3_error)
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
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 412, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_v_cok = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__22, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 413, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_INCREF(__pyx_kp_u_https_mbasic_facebook_com_friend_2);
      __pyx_v_url = __pyx_kp_u_https_mbasic_facebook_com_friend_2;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_dump_saran); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 415, __pyx_L3_error)
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
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_5, __pyx_v_url) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_v_url);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 415, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 416, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_Crack); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 417, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 417, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_id); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 417, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
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
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 417, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 417, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

    
    __pyx_t_8 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_IOError);
    if (__pyx_t_8) {
      __Pyx_AddTraceback("dump.permintaanteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_4, &__pyx_t_6) < 0) __PYX_ERR(0, 418, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__44, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 418, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
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
  __Pyx_AddTraceback("dump.permintaanteman", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_cok);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_45dump_saran(PyObject *__pyx_self, PyObject *__pyx_v_url); 
static PyMethodDef __pyx_mdef_4dump_45dump_saran = {"dump_saran", (PyCFunction)__pyx_pw_4dump_45dump_saran, METH_O, 0};
static PyObject *__pyx_pw_4dump_45dump_saran(PyObject *__pyx_self, PyObject *__pyx_v_url) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("dump_saran (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_44dump_saran(__pyx_self, ((PyObject *)__pyx_v_url));

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_44dump_saran(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url) {
  PyObject *__pyx_v_cok = NULL;
  PyObject *__pyx_v_kue = NULL;
  PyObject *__pyx_v_s = NULL;
  PyObject *__pyx_v_x = NULL;
  PyObject *__pyx_v_nama = NULL;
  PyObject *__pyx_v_idx = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  Py_ssize_t __pyx_t_11;
  PyObject *(*__pyx_t_12)(PyObject *);
  int __pyx_t_13;
  int __pyx_t_14;
  int __pyx_t_15;
  Py_ssize_t __pyx_t_16;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("dump_saran", 0);

  
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__43, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 421, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_read); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 421, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 421, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_cok = __pyx_t_1;
  __pyx_t_1 = 0;

  
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 422, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_cookie, __pyx_v_cok) < 0) __PYX_ERR(0, 422, __pyx_L1_error)
  __pyx_v_kue = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

  
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_parser); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 423, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ses); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 423, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_get); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 423, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 423, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_v_url);
  __Pyx_GIVEREF(__pyx_v_url);
  PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_v_url);
  __pyx_t_5 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 423, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_cookies, __pyx_v_kue) < 0) __PYX_ERR(0, 423, __pyx_L1_error)
  __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_2, __pyx_t_5); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 423, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_text); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 423, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  __pyx_t_7 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_7 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 423, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_t_5, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 423, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  {
    __pyx_t_2 = PyTuple_New(2+__pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 423, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (__pyx_t_6) {
      __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_6); __pyx_t_6 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_2, 0+__pyx_t_7, __pyx_t_5);
    __Pyx_INCREF(__pyx_kp_u_html_parser);
    __Pyx_GIVEREF(__pyx_kp_u_html_parser);
    PyTuple_SET_ITEM(__pyx_t_2, 1+__pyx_t_7, __pyx_kp_u_html_parser);
    __pyx_t_5 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 423, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_s = __pyx_t_1;
  __pyx_t_1 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_9, &__pyx_t_10);
    __Pyx_XGOTREF(__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_10);
     {

      
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_s, __pyx_n_s_find_all); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 425, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 425, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_3);
      if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_href, Py_True) < 0) __PYX_ERR(0, 425, __pyx_L3_error)
      __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__14, __pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 425, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (likely(PyList_CheckExact(__pyx_t_2)) || PyTuple_CheckExact(__pyx_t_2)) {
        __pyx_t_3 = __pyx_t_2; __Pyx_INCREF(__pyx_t_3); __pyx_t_11 = 0;
        __pyx_t_12 = NULL;
      } else {
        __pyx_t_11 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 425, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_12 = Py_TYPE(__pyx_t_3)->tp_iternext; if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 425, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      for (;;) {
        if (likely(!__pyx_t_12)) {
          if (likely(PyList_CheckExact(__pyx_t_3))) {
            if (__pyx_t_11 >= PyList_GET_SIZE(__pyx_t_3)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_2 = PyList_GET_ITEM(__pyx_t_3, __pyx_t_11); __Pyx_INCREF(__pyx_t_2); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 425, __pyx_L3_error)
            #else
            __pyx_t_2 = PySequence_ITEM(__pyx_t_3, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 425, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_2);
            #endif
          } else {
            if (__pyx_t_11 >= PyTuple_GET_SIZE(__pyx_t_3)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_3, __pyx_t_11); __Pyx_INCREF(__pyx_t_2); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 425, __pyx_L3_error)
            #else
            __pyx_t_2 = PySequence_ITEM(__pyx_t_3, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 425, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_2);
            #endif
          }
        } else {
          __pyx_t_2 = __pyx_t_12(__pyx_t_3);
          if (unlikely(!__pyx_t_2)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 425, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_2);
        }
        __Pyx_XDECREF_SET(__pyx_v_x, __pyx_t_2);
        __pyx_t_2 = 0;

        
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_x, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 426, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_5 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
          }
        }
        __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_5, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_n_u_href);
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 426, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_friends_hovercard, __pyx_t_2, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 426, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_14 = (__pyx_t_13 != 0);
        if (__pyx_t_14) {

          
          __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_x, __pyx_n_s_text); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 427, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_XDECREF_SET(__pyx_v_nama, __pyx_t_2);
          __pyx_t_2 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_bs4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 428, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_1);
          __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_re); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 428, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
          __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_findall); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 428, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_x, __pyx_n_s_get); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 428, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
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
          __pyx_t_5 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_4, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_n_u_href);
          __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 428, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __pyx_t_6 = NULL;
          __pyx_t_7 = 0;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
            __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_1);
            if (likely(__pyx_t_6)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
              __Pyx_INCREF(__pyx_t_6);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_1, function);
              __pyx_t_7 = 1;
            }
          }
          #if CYTHON_FAST_PYCALL
          if (PyFunction_Check(__pyx_t_1)) {
            PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_kp_u_uid, __pyx_t_5};
            __pyx_t_2 = __Pyx_PyFunction_FastCall(__pyx_t_1, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 428, __pyx_L3_error)
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_GOTREF(__pyx_t_2);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          } else
          #endif
          #if CYTHON_FAST_PYCCALL
          if (__Pyx_PyFastCFunction_Check(__pyx_t_1)) {
            PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_kp_u_uid, __pyx_t_5};
            __pyx_t_2 = __Pyx_PyCFunction_FastCall(__pyx_t_1, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 428, __pyx_L3_error)
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_GOTREF(__pyx_t_2);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          } else
          #endif
          {
            __pyx_t_4 = PyTuple_New(2+__pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 428, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            if (__pyx_t_6) {
              __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_6); __pyx_t_6 = NULL;
            }
            __Pyx_INCREF(__pyx_kp_u_uid);
            __Pyx_GIVEREF(__pyx_kp_u_uid);
            PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_7, __pyx_kp_u_uid);
            __Pyx_GIVEREF(__pyx_t_5);
            PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_7, __pyx_t_5);
            __pyx_t_5 = 0;
            __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_4, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 428, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_2);
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          }
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
          __pyx_t_1 = PyUnicode_Join(__pyx_kp_u__5, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 428, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_XDECREF_SET(__pyx_v_idx, ((PyObject*)__pyx_t_1));
          __pyx_t_1 = 0;

          
          __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_id); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 429, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_1);
          __pyx_t_2 = __Pyx_PyUnicode_ConcatSafe(__pyx_v_idx, __pyx_kp_u__3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 429, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_4 = PyNumber_Add(__pyx_t_2, __pyx_v_nama); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 429, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          __pyx_t_15 = __Pyx_PyObject_Append(__pyx_t_1, __pyx_t_4); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 429, __pyx_L3_error)
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

          
          goto __pyx_L11;
        }

        
         {
        }
        __pyx_L11:;

        
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_sys); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_stdout); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_write); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_id); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_16 = PyObject_Length(__pyx_t_2); if (unlikely(__pyx_t_16 == ((Py_ssize_t)-1))) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = PyInt_FromSsize_t(__pyx_t_16); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_5 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
          }
        }
        __pyx_t_4 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_2, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_5);
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_sys); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_stdout); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_flush); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
          }
        }
        __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 431, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

        
      }
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

      
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_s, __pyx_n_s_find_all); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 432, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 432, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_href, Py_True) < 0) __PYX_ERR(0, 432, __pyx_L3_error)
      __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__14, __pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 432, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
        __pyx_t_4 = __pyx_t_1; __Pyx_INCREF(__pyx_t_4); __pyx_t_11 = 0;
        __pyx_t_12 = NULL;
      } else {
        __pyx_t_11 = -1; __pyx_t_4 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 432, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_12 = Py_TYPE(__pyx_t_4)->tp_iternext; if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 432, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      for (;;) {
        if (likely(!__pyx_t_12)) {
          if (likely(PyList_CheckExact(__pyx_t_4))) {
            if (__pyx_t_11 >= PyList_GET_SIZE(__pyx_t_4)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_1 = PyList_GET_ITEM(__pyx_t_4, __pyx_t_11); __Pyx_INCREF(__pyx_t_1); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 432, __pyx_L3_error)
            #else
            __pyx_t_1 = PySequence_ITEM(__pyx_t_4, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 432, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_1);
            #endif
          } else {
            if (__pyx_t_11 >= PyTuple_GET_SIZE(__pyx_t_4)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_4, __pyx_t_11); __Pyx_INCREF(__pyx_t_1); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 432, __pyx_L3_error)
            #else
            __pyx_t_1 = PySequence_ITEM(__pyx_t_4, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 432, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_1);
            #endif
          }
        } else {
          __pyx_t_1 = __pyx_t_12(__pyx_t_4);
          if (unlikely(!__pyx_t_1)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 432, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_1);
        }
        __Pyx_XDECREF_SET(__pyx_v_x, __pyx_t_1);
        __pyx_t_1 = 0;

        
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_x, __pyx_n_s_text); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 433, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_14 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_Lihat_selengkapnya, __pyx_t_1, Py_EQ)); if (unlikely(__pyx_t_14 < 0)) __PYX_ERR(0, 433, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_13 = (__pyx_t_14 != 0);
        if (__pyx_t_13) {

          
          __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_dump_saran); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 434, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_3);
          __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_x, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 434, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_6 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
            __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
            if (likely(__pyx_t_6)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
              __Pyx_INCREF(__pyx_t_6);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_2, function);
            }
          }
          __pyx_t_5 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_6, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_n_u_href);
          __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 434, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          __pyx_t_2 = PyNumber_Add(__pyx_kp_u_https_mbasic_facebook_com_2, __pyx_t_5); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 434, __pyx_L3_error)
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
          __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2);
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 434, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

          
        }

        
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;

    
    __pyx_t_7 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyboardInterrupt);
    if (__pyx_t_7) {
      __Pyx_ErrRestore(0,0,0);
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
    __pyx_L8_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_AddTraceback("dump.dump_saran", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_cok);
  __Pyx_XDECREF(__pyx_v_kue);
  __Pyx_XDECREF(__pyx_v_s);
  __Pyx_XDECREF(__pyx_v_x);
  __Pyx_XDECREF(__pyx_v_nama);
  __Pyx_XDECREF(__pyx_v_idx);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_47reactions(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); 
static PyMethodDef __pyx_mdef_4dump_47reactions = {"reactions", (PyCFunction)__pyx_pw_4dump_47reactions, METH_NOARGS, 0};
static PyObject *__pyx_pw_4dump_47reactions(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("reactions (wrapper)", 0);
  __pyx_r = __pyx_pf_4dump_46reactions(__pyx_self);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_46reactions(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_cok = NULL;
  PyObject *__pyx_v_cookie = NULL;
  PyObject *__pyx_v_type = NULL;
  PyObject *__pyx_v_idt = NULL;
  PyObject *__pyx_v_url = NULL;
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
  int __pyx_t_11;
  int __pyx_t_12;
  int __pyx_t_13;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("reactions", 0);

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
     {

      
      __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__43, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 442, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_read); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 442, __pyx_L3_error)
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
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 442, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_v_cok = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 443, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      if (PyDict_SetItem(__pyx_t_4, __pyx_n_u_cookie, __pyx_v_cok) < 0) __PYX_ERR(0, 443, __pyx_L3_error)
      __pyx_v_cookie = ((PyObject*)__pyx_t_4);
      __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_prints); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 444, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_Panel); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 444, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_5 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_8, __pyx_kp_u_b_01_Crack_Dari_React_Semua_05) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_kp_u_b_01_Crack_Dari_React_Semua_05);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 444, __pyx_L3_error)
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
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 444, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_4 = PyTuple_New(11); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_9 = 0;
      __pyx_t_10 = 127;
      __Pyx_INCREF(__pyx_kp_u__46);
      __pyx_t_9 += 2;
      __Pyx_GIVEREF(__pyx_kp_u__46);
      PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u__46);
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_P); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
      __Pyx_GIVEREF(__pyx_t_5);
      PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_5);
      __pyx_t_5 = 0;
      __Pyx_INCREF(__pyx_kp_u_Pilih);
      __pyx_t_9 += 10;
      __Pyx_GIVEREF(__pyx_kp_u_Pilih);
      PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_Pilih);
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_H); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_5, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
      __Pyx_GIVEREF(__pyx_t_6);
      PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_6);
      __pyx_t_6 = 0;
      __Pyx_INCREF(__pyx_kp_u_0);
      __pyx_t_9 += 2;
      __Pyx_GIVEREF(__pyx_kp_u_0);
      PyTuple_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_0);
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_P); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
      __Pyx_GIVEREF(__pyx_t_5);
      PyTuple_SET_ITEM(__pyx_t_4, 5, __pyx_t_5);
      __pyx_t_5 = 0;
      __Pyx_INCREF(__pyx_kp_u_Sampai);
      __pyx_t_9 += 7;
      __Pyx_GIVEREF(__pyx_kp_u_Sampai);
      PyTuple_SET_ITEM(__pyx_t_4, 6, __pyx_kp_u_Sampai);
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_H); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_5, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
      __Pyx_GIVEREF(__pyx_t_6);
      PyTuple_SET_ITEM(__pyx_t_4, 7, __pyx_t_6);
      __pyx_t_6 = 0;
      __Pyx_INCREF(__pyx_kp_u_8);
      __pyx_t_9 += 1;
      __Pyx_GIVEREF(__pyx_kp_u_8);
      PyTuple_SET_ITEM(__pyx_t_4, 8, __pyx_kp_u_8);
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_P); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_5 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_5) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_5);
      __Pyx_GIVEREF(__pyx_t_5);
      PyTuple_SET_ITEM(__pyx_t_4, 9, __pyx_t_5);
      __pyx_t_5 = 0;
      __Pyx_INCREF(__pyx_kp_u__33);
      __pyx_t_9 += 3;
      __Pyx_GIVEREF(__pyx_kp_u__33);
      PyTuple_SET_ITEM(__pyx_t_4, 10, __pyx_kp_u__33);
      __pyx_t_5 = __Pyx_PyUnicode_Join(__pyx_t_4, 11, __pyx_t_9, __pyx_t_10); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_input, __pyx_t_5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 448, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_v_type = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __Pyx_INCREF(__pyx_v_type);
      __pyx_t_4 = __pyx_v_type;
      __pyx_t_12 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_01, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 449, __pyx_L3_error)
      if (!__pyx_t_12) {
      } else {
        __pyx_t_11 = __pyx_t_12;
        goto __pyx_L10_bool_binop_done;
      }
      __pyx_t_12 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_1, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 449, __pyx_L3_error)
      __pyx_t_11 = __pyx_t_12;
      __pyx_L10_bool_binop_done:;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_12 = (__pyx_t_11 != 0);
      if (__pyx_t_12) {

        
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_react_type, __pyx_kp_u_0_2) < 0) __PYX_ERR(0, 450, __pyx_L3_error)

        
        goto __pyx_L9;
      }

      
      __Pyx_INCREF(__pyx_v_type);
      __pyx_t_4 = __pyx_v_type;
      __pyx_t_11 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_02, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 451, __pyx_L3_error)
      if (!__pyx_t_11) {
      } else {
        __pyx_t_12 = __pyx_t_11;
        goto __pyx_L12_bool_binop_done;
      }
      __pyx_t_11 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_2, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 451, __pyx_L3_error)
      __pyx_t_12 = __pyx_t_11;
      __pyx_L12_bool_binop_done:;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_11 = (__pyx_t_12 != 0);
      if (__pyx_t_11) {

        
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_react_type, __pyx_kp_u_1) < 0) __PYX_ERR(0, 452, __pyx_L3_error)

        
        goto __pyx_L9;
      }

      
      __Pyx_INCREF(__pyx_v_type);
      __pyx_t_4 = __pyx_v_type;
      __pyx_t_12 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_03, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 453, __pyx_L3_error)
      if (!__pyx_t_12) {
      } else {
        __pyx_t_11 = __pyx_t_12;
        goto __pyx_L14_bool_binop_done;
      }
      __pyx_t_12 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_3, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 453, __pyx_L3_error)
      __pyx_t_11 = __pyx_t_12;
      __pyx_L14_bool_binop_done:;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_12 = (__pyx_t_11 != 0);
      if (__pyx_t_12) {

        
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_react_type, __pyx_kp_u_2) < 0) __PYX_ERR(0, 454, __pyx_L3_error)

        
        goto __pyx_L9;
      }

      
      __Pyx_INCREF(__pyx_v_type);
      __pyx_t_4 = __pyx_v_type;
      __pyx_t_11 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_04, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 455, __pyx_L3_error)
      if (!__pyx_t_11) {
      } else {
        __pyx_t_12 = __pyx_t_11;
        goto __pyx_L16_bool_binop_done;
      }
      __pyx_t_11 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_4, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 455, __pyx_L3_error)
      __pyx_t_12 = __pyx_t_11;
      __pyx_L16_bool_binop_done:;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_11 = (__pyx_t_12 != 0);
      if (__pyx_t_11) {

        
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_react_type, __pyx_kp_u_8) < 0) __PYX_ERR(0, 456, __pyx_L3_error)

        
        goto __pyx_L9;
      }

      
      __Pyx_INCREF(__pyx_v_type);
      __pyx_t_4 = __pyx_v_type;
      __pyx_t_12 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_05, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 457, __pyx_L3_error)
      if (!__pyx_t_12) {
      } else {
        __pyx_t_11 = __pyx_t_12;
        goto __pyx_L18_bool_binop_done;
      }
      __pyx_t_12 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_5, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 457, __pyx_L3_error)
      __pyx_t_11 = __pyx_t_12;
      __pyx_L18_bool_binop_done:;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_12 = (__pyx_t_11 != 0);
      if (__pyx_t_12) {

        
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_react_type, __pyx_kp_u_4) < 0) __PYX_ERR(0, 458, __pyx_L3_error)

        
        goto __pyx_L9;
      }

      
      __Pyx_INCREF(__pyx_v_type);
      __pyx_t_4 = __pyx_v_type;
      __pyx_t_11 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_06, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 459, __pyx_L3_error)
      if (!__pyx_t_11) {
      } else {
        __pyx_t_12 = __pyx_t_11;
        goto __pyx_L20_bool_binop_done;
      }
      __pyx_t_11 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_6, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 459, __pyx_L3_error)
      __pyx_t_12 = __pyx_t_11;
      __pyx_L20_bool_binop_done:;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_11 = (__pyx_t_12 != 0);
      if (__pyx_t_11) {

        
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_react_type, __pyx_kp_u_3) < 0) __PYX_ERR(0, 460, __pyx_L3_error)

        
        goto __pyx_L9;
      }

      
      __Pyx_INCREF(__pyx_v_type);
      __pyx_t_4 = __pyx_v_type;
      __pyx_t_12 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_07, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 461, __pyx_L3_error)
      if (!__pyx_t_12) {
      } else {
        __pyx_t_11 = __pyx_t_12;
        goto __pyx_L22_bool_binop_done;
      }
      __pyx_t_12 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_7, Py_EQ)); if (unlikely(__pyx_t_12 < 0)) __PYX_ERR(0, 461, __pyx_L3_error)
      __pyx_t_11 = __pyx_t_12;
      __pyx_L22_bool_binop_done:;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_12 = (__pyx_t_11 != 0);
      if (__pyx_t_12) {

        
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_react_type, __pyx_kp_u_7) < 0) __PYX_ERR(0, 462, __pyx_L3_error)

        
        goto __pyx_L9;
      }

      
      __Pyx_INCREF(__pyx_v_type);
      __pyx_t_4 = __pyx_v_type;
      __pyx_t_11 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_08, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 463, __pyx_L3_error)
      if (!__pyx_t_11) {
      } else {
        __pyx_t_12 = __pyx_t_11;
        goto __pyx_L24_bool_binop_done;
      }
      __pyx_t_11 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_8, Py_EQ)); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 463, __pyx_L3_error)
      __pyx_t_12 = __pyx_t_11;
      __pyx_L24_bool_binop_done:;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_11 = (__pyx_t_12 != 0);
      if (__pyx_t_11) {

        
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_react_type, __pyx_kp_u_16) < 0) __PYX_ERR(0, 464, __pyx_L3_error)

        
      }
      __pyx_L9:;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 465, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_v_idt = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__22, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 466, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_4 = PyNumber_Add(__pyx_kp_u_https_mbasic_facebook_com_ufi_re, __pyx_v_idt); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 467, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_v_url = __pyx_t_4;
      __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_dump_react); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 468, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = NULL;
      __pyx_t_13 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_13 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_v_url, __pyx_v_cookie};
        __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_13, 2+__pyx_t_13); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 468, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_4);
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_v_url, __pyx_v_cookie};
        __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_13, 2+__pyx_t_13); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 468, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_4);
      } else
      #endif
      {
        __pyx_t_7 = PyTuple_New(2+__pyx_t_13); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 468, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        if (__pyx_t_6) {
          __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_6); __pyx_t_6 = NULL;
        }
        __Pyx_INCREF(__pyx_v_url);
        __Pyx_GIVEREF(__pyx_v_url);
        PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_13, __pyx_v_url);
        __Pyx_INCREF(__pyx_v_cookie);
        __Pyx_GIVEREF(__pyx_v_cookie);
        PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_13, __pyx_v_cookie);
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_7, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 468, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 469, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

      
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Crack); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 470, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_atursandi); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 470, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 470, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
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
      __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_6, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_5);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 470, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = __Pyx_PyObject_CallOneArg(__pyx_builtin_exit, __pyx_t_4); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 470, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

    
    __pyx_t_13 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_IOError);
    if (__pyx_t_13) {
      __Pyx_AddTraceback("dump.reactions", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_4, &__pyx_t_5) < 0) __PYX_ERR(0, 471, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_Call(__pyx_builtin_exit, __pyx_tuple__44, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 471, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
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
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_AddTraceback("dump.reactions", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_cok);
  __Pyx_XDECREF(__pyx_v_cookie);
  __Pyx_XDECREF(__pyx_v_type);
  __Pyx_XDECREF(__pyx_v_idt);
  __Pyx_XDECREF(__pyx_v_url);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}




static PyObject *__pyx_pw_4dump_49dump_react(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); 
static PyMethodDef __pyx_mdef_4dump_49dump_react = {"dump_react", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_4dump_49dump_react, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_4dump_49dump_react(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_url = 0;
  PyObject *__pyx_v_cookie = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("dump_react (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_url,&__pyx_n_s_cookie,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_url)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_cookie)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("dump_react", 1, 2, 2, 1); __PYX_ERR(0, 473, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "dump_react") < 0)) __PYX_ERR(0, 473, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_url = values[0];
    __pyx_v_cookie = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("dump_react", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 473, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("dump.dump_react", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_4dump_48dump_react(__pyx_self, __pyx_v_url, __pyx_v_cookie);

  
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_4dump_48dump_react(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url, PyObject *__pyx_v_cookie) {
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_isi = NULL;
  PyObject *__pyx_v_ids = NULL;
  PyObject *__pyx_v_uid = NULL;
  PyObject *__pyx_v_nama = NULL;
  PyObject *__pyx_v_lanjut = NULL;
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
  PyObject *(*__pyx_t_13)(PyObject *);
  Py_ssize_t __pyx_t_14;
  PyObject *(*__pyx_t_15)(PyObject *);
  PyObject *__pyx_t_16 = NULL;
  PyObject *__pyx_t_17 = NULL;
  PyObject *__pyx_t_18 = NULL;
  int __pyx_t_19;
  int __pyx_t_20;
  int __pyx_t_21;
  Py_ssize_t __pyx_t_22;
  PyObject *__pyx_t_23 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("dump_react", 0);

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_parser); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ses); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyTuple_New(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_v_url);
  __Pyx_GIVEREF(__pyx_v_url);
  PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_v_url);
  __pyx_t_6 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_cookies, __pyx_v_cookie) < 0) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_header_grup); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_headers, __pyx_t_7) < 0) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_4, __pyx_t_6); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_text); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_encode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 475, __pyx_L1_error)
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
  __pyx_t_3 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_6, __pyx_kp_u_utf_8) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_kp_u_utf_8);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 475, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = NULL;
  __pyx_t_8 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_8 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_t_3, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 475, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_t_3, __pyx_kp_u_html_parser};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 475, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  {
    __pyx_t_6 = PyTuple_New(2+__pyx_t_8); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 475, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    if (__pyx_t_7) {
      __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_7); __pyx_t_7 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_8, __pyx_t_3);
    __Pyx_INCREF(__pyx_kp_u_html_parser);
    __Pyx_GIVEREF(__pyx_kp_u_html_parser);
    PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_8, __pyx_kp_u_html_parser);
    __pyx_t_3 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 475, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_data = __pyx_t_1;
  __pyx_t_1 = 0;

  
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_9, &__pyx_t_10, &__pyx_t_11);
    __Pyx_XGOTREF(__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_10);
    __Pyx_XGOTREF(__pyx_t_11);
     {

      
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_data, __pyx_n_s_find_all); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 477, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
        }
      }
      __pyx_t_1 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_6, __pyx_n_u_h3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_n_u_h3);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 477, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
        __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2); __pyx_t_12 = 0;
        __pyx_t_13 = NULL;
      } else {
        __pyx_t_12 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 477, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_13 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 477, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      for (;;) {
        if (likely(!__pyx_t_13)) {
          if (likely(PyList_CheckExact(__pyx_t_2))) {
            if (__pyx_t_12 >= PyList_GET_SIZE(__pyx_t_2)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_12); __Pyx_INCREF(__pyx_t_1); __pyx_t_12++; if (unlikely(0 < 0)) __PYX_ERR(0, 477, __pyx_L3_error)
            #else
            __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_12); __pyx_t_12++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 477, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_1);
            #endif
          } else {
            if (__pyx_t_12 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_12); __Pyx_INCREF(__pyx_t_1); __pyx_t_12++; if (unlikely(0 < 0)) __PYX_ERR(0, 477, __pyx_L3_error)
            #else
            __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_12); __pyx_t_12++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 477, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_1);
            #endif
          }
        } else {
          __pyx_t_1 = __pyx_t_13(__pyx_t_2);
          if (unlikely(!__pyx_t_1)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 477, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_1);
        }
        __Pyx_XDECREF_SET(__pyx_v_isi, __pyx_t_1);
        __pyx_t_1 = 0;

        
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_isi, __pyx_n_s_find_all); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 478, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_6 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 478, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_href, Py_True) < 0) __PYX_ERR(0, 478, __pyx_L3_error)
        __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__14, __pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 478, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        if (likely(PyList_CheckExact(__pyx_t_3)) || PyTuple_CheckExact(__pyx_t_3)) {
          __pyx_t_6 = __pyx_t_3; __Pyx_INCREF(__pyx_t_6); __pyx_t_14 = 0;
          __pyx_t_15 = NULL;
        } else {
          __pyx_t_14 = -1; __pyx_t_6 = PyObject_GetIter(__pyx_t_3); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 478, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_15 = Py_TYPE(__pyx_t_6)->tp_iternext; if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 478, __pyx_L3_error)
        }
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        for (;;) {
          if (likely(!__pyx_t_15)) {
            if (likely(PyList_CheckExact(__pyx_t_6))) {
              if (__pyx_t_14 >= PyList_GET_SIZE(__pyx_t_6)) break;
              #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
              __pyx_t_3 = PyList_GET_ITEM(__pyx_t_6, __pyx_t_14); __Pyx_INCREF(__pyx_t_3); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 478, __pyx_L3_error)
              #else
              __pyx_t_3 = PySequence_ITEM(__pyx_t_6, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 478, __pyx_L3_error)
              __Pyx_GOTREF(__pyx_t_3);
              #endif
            } else {
              if (__pyx_t_14 >= PyTuple_GET_SIZE(__pyx_t_6)) break;
              #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
              __pyx_t_3 = PyTuple_GET_ITEM(__pyx_t_6, __pyx_t_14); __Pyx_INCREF(__pyx_t_3); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 478, __pyx_L3_error)
              #else
              __pyx_t_3 = PySequence_ITEM(__pyx_t_6, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 478, __pyx_L3_error)
              __Pyx_GOTREF(__pyx_t_3);
              #endif
            }
          } else {
            __pyx_t_3 = __pyx_t_15(__pyx_t_6);
            if (unlikely(!__pyx_t_3)) {
              PyObject* exc_type = PyErr_Occurred();
              if (exc_type) {
                if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                else __PYX_ERR(0, 478, __pyx_L3_error)
              }
              break;
            }
            __Pyx_GOTREF(__pyx_t_3);
          }
          __Pyx_XDECREF_SET(__pyx_v_ids, __pyx_t_3);
          __pyx_t_3 = 0;

          
          {
            __Pyx_PyThreadState_declare
            __Pyx_PyThreadState_assign
            __Pyx_ExceptionSave(&__pyx_t_16, &__pyx_t_17, &__pyx_t_18);
            __Pyx_XGOTREF(__pyx_t_16);
            __Pyx_XGOTREF(__pyx_t_17);
            __Pyx_XGOTREF(__pyx_t_18);
             {

              
              __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_ids, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 480, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_1);
              __pyx_t_7 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
                __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_1);
                if (likely(__pyx_t_7)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                  __Pyx_INCREF(__pyx_t_7);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_1, function);
                }
              }
              __pyx_t_3 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_7, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_n_u_href);
              __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
              if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 480, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_3);
              __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
              __pyx_t_19 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_profile_php_2, __pyx_t_3, Py_EQ)); if (unlikely(__pyx_t_19 < 0)) __PYX_ERR(0, 480, __pyx_L13_error)
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
              __pyx_t_20 = (__pyx_t_19 != 0);
              if (__pyx_t_20) {

                
                __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_ids, __pyx_n_s_get); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 481, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_7);
                __pyx_t_4 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
                  __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_7);
                  if (likely(__pyx_t_4)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
                    __Pyx_INCREF(__pyx_t_4);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_7, function);
                  }
                }
                __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_4, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_n_u_href);
                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 481, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_split); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 481, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __pyx_t_1 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
                  __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_7);
                  if (likely(__pyx_t_1)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
                    __Pyx_INCREF(__pyx_t_1);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_7, function);
                  }
                }
                __pyx_t_3 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_1, __pyx_kp_u__26) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_kp_u__26);
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 481, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_3);
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                __pyx_t_7 = __Pyx_GetItemInt(__pyx_t_3, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 481, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __Pyx_XDECREF_SET(__pyx_v_uid, __pyx_t_7);
                __pyx_t_7 = 0;

                
                __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_ids, __pyx_n_s_text); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 482, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_7);
                __Pyx_XDECREF_SET(__pyx_v_nama, __pyx_t_7);
                __pyx_t_7 = 0;

                
                __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_id); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 483, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_7);
                __pyx_t_3 = PyNumber_Add(__pyx_v_uid, __pyx_kp_u__3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 483, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_3);
                __pyx_t_1 = PyNumber_Add(__pyx_t_3, __pyx_v_nama); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 483, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __pyx_t_21 = __Pyx_PyObject_Append(__pyx_t_7, __pyx_t_1); if (unlikely(__pyx_t_21 == ((int)-1))) __PYX_ERR(0, 483, __pyx_L13_error)
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

                
                __pyx_t_1 = PyNumber_Add(__pyx_v_uid, __pyx_kp_u__3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 484, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_1);
                __pyx_t_7 = PyNumber_Add(__pyx_t_1, __pyx_v_nama); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 484, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 484, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

                
                goto __pyx_L21;
              }

              
               {
                __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_ids, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 486, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_3);
                __pyx_t_4 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                  __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
                  if (likely(__pyx_t_4)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                    __Pyx_INCREF(__pyx_t_4);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_3, function);
                  }
                }
                __pyx_t_7 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_n_u_href);
                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 486, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_split); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 486, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_3);
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                __pyx_t_7 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                  __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_3);
                  if (likely(__pyx_t_7)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                    __Pyx_INCREF(__pyx_t_7);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_3, function);
                  }
                }
                __pyx_t_1 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_7, __pyx_kp_u__47) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_kp_u__47);
                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 486, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __pyx_t_3 = __Pyx_GetItemInt(__pyx_t_1, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 486, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_3);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_XDECREF_SET(__pyx_v_uid, __pyx_t_3);
                __pyx_t_3 = 0;

                
                __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_ids, __pyx_n_s_text); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 487, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_3);
                __Pyx_XDECREF_SET(__pyx_v_nama, __pyx_t_3);
                __pyx_t_3 = 0;

                
                __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_id); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 488, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_3);
                __pyx_t_1 = PyNumber_Add(__pyx_v_uid, __pyx_kp_u__3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 488, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_1);
                __pyx_t_7 = PyNumber_Add(__pyx_t_1, __pyx_v_nama); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 488, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __pyx_t_21 = __Pyx_PyObject_Append(__pyx_t_3, __pyx_t_7); if (unlikely(__pyx_t_21 == ((int)-1))) __PYX_ERR(0, 488, __pyx_L13_error)
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

                
                __pyx_t_7 = PyNumber_Add(__pyx_v_uid, __pyx_kp_u__3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 489, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_7);
                __pyx_t_3 = PyNumber_Add(__pyx_t_7, __pyx_v_nama); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 489, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_3);
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                __pyx_t_7 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 489, __pyx_L13_error)
                __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
              }
              __pyx_L21:;

              
              __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_sys); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_3);
              __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_stdout); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_1);
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
              __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_write); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_3);
              __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
              __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_id); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_1);
              __pyx_t_22 = PyObject_Length(__pyx_t_1); if (unlikely(__pyx_t_22 == ((Py_ssize_t)-1))) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
              __pyx_t_1 = PyInt_FromSsize_t(__pyx_t_22); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_1);
              __pyx_t_4 = PyUnicode_Format(__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_4);
              __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
              __pyx_t_1 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
                if (likely(__pyx_t_1)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                  __Pyx_INCREF(__pyx_t_1);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_3, function);
                }
              }
              __pyx_t_7 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_1, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
              __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
              __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
              if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_7);
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
              __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
              __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_sys); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_3);
              __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_stdout); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_4);
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
              __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_flush); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_3);
              __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
              __pyx_t_4 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
                if (likely(__pyx_t_4)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                  __Pyx_INCREF(__pyx_t_4);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_3, function);
                }
              }
              __pyx_t_7 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
              __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
              if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 490, __pyx_L13_error)
              __Pyx_GOTREF(__pyx_t_7);
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
              __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

              
            }
            __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
            __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
            __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
            goto __pyx_L20_try_end;
            __pyx_L13_error:;
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

            
             {
              __Pyx_AddTraceback("dump.dump_react", __pyx_clineno, __pyx_lineno, __pyx_filename);
              if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_3, &__pyx_t_4) < 0) __PYX_ERR(0, 491, __pyx_L15_except_error)
              __Pyx_GOTREF(__pyx_t_7);
              __Pyx_GOTREF(__pyx_t_3);
              __Pyx_GOTREF(__pyx_t_4);
              goto __pyx_L23_except_continue;
              __pyx_L23_except_continue:;
              __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
              __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
              __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
              goto __pyx_L19_try_continue;
            }
            __pyx_L15_except_error:;

            
            __Pyx_XGIVEREF(__pyx_t_16);
            __Pyx_XGIVEREF(__pyx_t_17);
            __Pyx_XGIVEREF(__pyx_t_18);
            __Pyx_ExceptionReset(__pyx_t_16, __pyx_t_17, __pyx_t_18);
            goto __pyx_L3_error;
            __pyx_L19_try_continue:;
            __Pyx_XGIVEREF(__pyx_t_16);
            __Pyx_XGIVEREF(__pyx_t_17);
            __Pyx_XGIVEREF(__pyx_t_18);
            __Pyx_ExceptionReset(__pyx_t_16, __pyx_t_17, __pyx_t_18);
            goto __pyx_L11_continue;
            __pyx_L20_try_end:;
          }

          
          __pyx_L11_continue:;
        }
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

        
      }
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

      
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_data, __pyx_n_s_find_all); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 492, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_6 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 492, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_href, Py_True) < 0) __PYX_ERR(0, 492, __pyx_L3_error)
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__14, __pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 492, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
        __pyx_t_6 = __pyx_t_4; __Pyx_INCREF(__pyx_t_6); __pyx_t_12 = 0;
        __pyx_t_13 = NULL;
      } else {
        __pyx_t_12 = -1; __pyx_t_6 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 492, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_13 = Py_TYPE(__pyx_t_6)->tp_iternext; if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 492, __pyx_L3_error)
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      for (;;) {
        if (likely(!__pyx_t_13)) {
          if (likely(PyList_CheckExact(__pyx_t_6))) {
            if (__pyx_t_12 >= PyList_GET_SIZE(__pyx_t_6)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyList_GET_ITEM(__pyx_t_6, __pyx_t_12); __Pyx_INCREF(__pyx_t_4); __pyx_t_12++; if (unlikely(0 < 0)) __PYX_ERR(0, 492, __pyx_L3_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_6, __pyx_t_12); __pyx_t_12++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 492, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          } else {
            if (__pyx_t_12 >= PyTuple_GET_SIZE(__pyx_t_6)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_6, __pyx_t_12); __Pyx_INCREF(__pyx_t_4); __pyx_t_12++; if (unlikely(0 < 0)) __PYX_ERR(0, 492, __pyx_L3_error)
            #else
            __pyx_t_4 = PySequence_ITEM(__pyx_t_6, __pyx_t_12); __pyx_t_12++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 492, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_4);
            #endif
          }
        } else {
          __pyx_t_4 = __pyx_t_13(__pyx_t_6);
          if (unlikely(!__pyx_t_4)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 492, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_4);
        }
        __Pyx_XDECREF_SET(__pyx_v_lanjut, __pyx_t_4);
        __pyx_t_4 = 0;

        
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_lanjut, __pyx_n_s_text); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 493, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_20 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_Lihat_Selengkapnya, __pyx_t_4, Py_EQ)); if (unlikely(__pyx_t_20 < 0)) __PYX_ERR(0, 493, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_19 = (__pyx_t_20 != 0);
        if (__pyx_t_19) {

          
          while (1) {

            
            {
              __Pyx_PyThreadState_declare
              __Pyx_PyThreadState_assign
              __Pyx_ExceptionSave(&__pyx_t_18, &__pyx_t_17, &__pyx_t_16);
              __Pyx_XGOTREF(__pyx_t_18);
              __Pyx_XGOTREF(__pyx_t_17);
              __Pyx_XGOTREF(__pyx_t_16);
               {

                
                __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_dump_react); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 496, __pyx_L29_error)
                __Pyx_GOTREF(__pyx_t_2);
                __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_lanjut, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 496, __pyx_L29_error)
                __Pyx_GOTREF(__pyx_t_1);
                __pyx_t_5 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
                  __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_1);
                  if (likely(__pyx_t_5)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                    __Pyx_INCREF(__pyx_t_5);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_1, function);
                  }
                }
                __pyx_t_7 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_5, __pyx_n_u_href) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_n_u_href);
                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 496, __pyx_L29_error)
                __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_replace); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 496, __pyx_L29_error)
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_react_type); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 496, __pyx_L29_error)
                __Pyx_GOTREF(__pyx_t_7);
                __pyx_t_5 = PyNumber_Add(__pyx_kp_u_reaction_type, __pyx_t_7); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 496, __pyx_L29_error)
                __Pyx_GOTREF(__pyx_t_5);
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                __pyx_t_7 = NULL;
                __pyx_t_8 = 0;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
                  __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_1);
                  if (likely(__pyx_t_7)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                    __Pyx_INCREF(__pyx_t_7);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_1, function);
                    __pyx_t_8 = 1;
                  }
                }
                #if CYTHON_FAST_PYCALL
                if (PyFunction_Check(__pyx_t_1)) {
                  PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_kp_u_reaction_type_0, __pyx_t_5};
                  __pyx_t_3 = __Pyx_PyFunction_FastCall(__pyx_t_1, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 496, __pyx_L29_error)
                  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                  __Pyx_GOTREF(__pyx_t_3);
                  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                } else
                #endif
                #if CYTHON_FAST_PYCCALL
                if (__Pyx_PyFastCFunction_Check(__pyx_t_1)) {
                  PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_kp_u_reaction_type_0, __pyx_t_5};
                  __pyx_t_3 = __Pyx_PyCFunction_FastCall(__pyx_t_1, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 496, __pyx_L29_error)
                  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                  __Pyx_GOTREF(__pyx_t_3);
                  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                } else
                #endif
                {
                  __pyx_t_23 = PyTuple_New(2+__pyx_t_8); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 496, __pyx_L29_error)
                  __Pyx_GOTREF(__pyx_t_23);
                  if (__pyx_t_7) {
                    __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_23, 0, __pyx_t_7); __pyx_t_7 = NULL;
                  }
                  __Pyx_INCREF(__pyx_kp_u_reaction_type_0);
                  __Pyx_GIVEREF(__pyx_kp_u_reaction_type_0);
                  PyTuple_SET_ITEM(__pyx_t_23, 0+__pyx_t_8, __pyx_kp_u_reaction_type_0);
                  __Pyx_GIVEREF(__pyx_t_5);
                  PyTuple_SET_ITEM(__pyx_t_23, 1+__pyx_t_8, __pyx_t_5);
                  __pyx_t_5 = 0;
                  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_23, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 496, __pyx_L29_error)
                  __Pyx_GOTREF(__pyx_t_3);
                  __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                }
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __pyx_t_1 = PyNumber_Add(__pyx_kp_u_https_mbasic_facebook_com_2, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 496, __pyx_L29_error)
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __pyx_t_3 = NULL;
                __pyx_t_8 = 0;
                if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
                  __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
                  if (likely(__pyx_t_3)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                    __Pyx_INCREF(__pyx_t_3);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_2, function);
                    __pyx_t_8 = 1;
                  }
                }
                #if CYTHON_FAST_PYCALL
                if (PyFunction_Check(__pyx_t_2)) {
                  PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_t_1, __pyx_v_cookie};
                  __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 496, __pyx_L29_error)
                  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                  __Pyx_GOTREF(__pyx_t_4);
                  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                } else
                #endif
                #if CYTHON_FAST_PYCCALL
                if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
                  PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_t_1, __pyx_v_cookie};
                  __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 496, __pyx_L29_error)
                  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                  __Pyx_GOTREF(__pyx_t_4);
                  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                } else
                #endif
                {
                  __pyx_t_23 = PyTuple_New(2+__pyx_t_8); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 496, __pyx_L29_error)
                  __Pyx_GOTREF(__pyx_t_23);
                  if (__pyx_t_3) {
                    __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_23, 0, __pyx_t_3); __pyx_t_3 = NULL;
                  }
                  __Pyx_GIVEREF(__pyx_t_1);
                  PyTuple_SET_ITEM(__pyx_t_23, 0+__pyx_t_8, __pyx_t_1);
                  __Pyx_INCREF(__pyx_v_cookie);
                  __Pyx_GIVEREF(__pyx_v_cookie);
                  PyTuple_SET_ITEM(__pyx_t_23, 1+__pyx_t_8, __pyx_v_cookie);
                  __pyx_t_1 = 0;
                  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_23, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 496, __pyx_L29_error)
                  __Pyx_GOTREF(__pyx_t_4);
                  __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                }
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

                
                goto __pyx_L34_try_break;

                
              }
              __pyx_L29_error:;
              __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
              __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
              __Pyx_XDECREF(__pyx_t_23); __pyx_t_23 = 0;
              __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
              __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
              __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
              __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

              
              __pyx_t_8 = __Pyx_PyErr_ExceptionMatches(((PyObject *)(&((PyTypeObject*)PyExc_Exception)[0])));
              if (__pyx_t_8) {
                __Pyx_AddTraceback("dump.dump_react", __pyx_clineno, __pyx_lineno, __pyx_filename);
                if (__Pyx_GetException(&__pyx_t_4, &__pyx_t_2, &__pyx_t_23) < 0) __PYX_ERR(0, 498, __pyx_L31_except_error)
                __Pyx_GOTREF(__pyx_t_4);
                __Pyx_GOTREF(__pyx_t_2);
                __Pyx_GOTREF(__pyx_t_23);
                __Pyx_INCREF(__pyx_t_2);
                __pyx_v_e = __pyx_t_2;
                 {
                }
                 {
                  {
                    __Pyx_DECREF(__pyx_v_e);
                    __pyx_v_e = NULL;
                    goto __pyx_L43;
                  }
                  __pyx_L43:;
                }
                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_XDECREF(__pyx_t_23); __pyx_t_23 = 0;
                goto __pyx_L30_exception_handled;
              }
              goto __pyx_L31_except_error;
              __pyx_L31_except_error:;

              
              __Pyx_XGIVEREF(__pyx_t_18);
              __Pyx_XGIVEREF(__pyx_t_17);
              __Pyx_XGIVEREF(__pyx_t_16);
              __Pyx_ExceptionReset(__pyx_t_18, __pyx_t_17, __pyx_t_16);
              goto __pyx_L3_error;
              __pyx_L34_try_break:;
              __Pyx_XGIVEREF(__pyx_t_18);
              __Pyx_XGIVEREF(__pyx_t_17);
              __Pyx_XGIVEREF(__pyx_t_16);
              __Pyx_ExceptionReset(__pyx_t_18, __pyx_t_17, __pyx_t_16);
              goto __pyx_L28_break;
              __pyx_L30_exception_handled:;
              __Pyx_XGIVEREF(__pyx_t_18);
              __Pyx_XGIVEREF(__pyx_t_17);
              __Pyx_XGIVEREF(__pyx_t_16);
              __Pyx_ExceptionReset(__pyx_t_18, __pyx_t_17, __pyx_t_16);
            }
          }
          __pyx_L28_break:;

          
        }

        
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

      
    }
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_23); __pyx_t_23 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

    
    __pyx_t_8 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyboardInterrupt);
    if (__pyx_t_8) {
      __Pyx_ErrRestore(0,0,0);
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

    
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_11);
    __Pyx_ExceptionReset(__pyx_t_9, __pyx_t_10, __pyx_t_11);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_11);
    __Pyx_ExceptionReset(__pyx_t_9, __pyx_t_10, __pyx_t_11);
    __pyx_L8_try_end:;
  }

  

  
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_23);
  __Pyx_AddTraceback("dump.dump_react", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_isi);
  __Pyx_XDECREF(__pyx_v_ids);
  __Pyx_XDECREF(__pyx_v_uid);
  __Pyx_XDECREF(__pyx_v_nama);
  __Pyx_XDECREF(__pyx_v_lanjut);
  __Pyx_XDECREF(__pyx_v_e);
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
static int __pyx_pymod_exec_dump(PyObject* module); 
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_dump},
  {0, NULL}
};
#endif

static struct PyModuleDef __pyx_moduledef = {
    PyModuleDef_HEAD_INIT,
    "dump",
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
  {&__pyx_kp_u_0, __pyx_k_0, sizeof(__pyx_k_0), 0, 1, 0, 0},
  {&__pyx_kp_u_01, __pyx_k_01, sizeof(__pyx_k_01), 0, 1, 0, 0},
  {&__pyx_kp_u_02, __pyx_k_02, sizeof(__pyx_k_02), 0, 1, 0, 0},
  {&__pyx_kp_u_03, __pyx_k_03, sizeof(__pyx_k_03), 0, 1, 0, 0},
  {&__pyx_kp_u_04, __pyx_k_04, sizeof(__pyx_k_04), 0, 1, 0, 0},
  {&__pyx_kp_u_05, __pyx_k_05, sizeof(__pyx_k_05), 0, 1, 0, 0},
  {&__pyx_kp_u_06, __pyx_k_06, sizeof(__pyx_k_06), 0, 1, 0, 0},
  {&__pyx_kp_u_07, __pyx_k_07, sizeof(__pyx_k_07), 0, 1, 0, 0},
  {&__pyx_kp_u_08, __pyx_k_08, sizeof(__pyx_k_08), 0, 1, 0, 0},
  {&__pyx_kp_u_0_2, __pyx_k_0_2, sizeof(__pyx_k_0_2), 0, 1, 0, 0},
  {&__pyx_kp_u_0m, __pyx_k_0m, sizeof(__pyx_k_0m), 0, 1, 0, 0},
  {&__pyx_kp_u_1, __pyx_k_1, sizeof(__pyx_k_1), 0, 1, 0, 0},
  {&__pyx_kp_u_16, __pyx_k_16, sizeof(__pyx_k_16), 0, 1, 0, 0},
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
  {&__pyx_kp_u_Anda_Harus_Logout_Dulu_Dan_Masu, __pyx_k_Anda_Harus_Logout_Dulu_Dan_Masu, sizeof(__pyx_k_Anda_Harus_Logout_Dulu_Dan_Masu), 0, 1, 0, 0},
  {&__pyx_kp_u_Anda_bisa_crack_lebih_dari_1_nam, __pyx_k_Anda_bisa_crack_lebih_dari_1_nam, sizeof(__pyx_k_Anda_bisa_crack_lebih_dari_1_nam), 0, 1, 0, 0},
  {&__pyx_kp_u_Anda_bisa_mengatur_jumlah_id_dan, __pyx_k_Anda_bisa_mengatur_jumlah_id_dan, sizeof(__pyx_k_Anda_bisa_mengatur_jumlah_id_dan), 0, 1, 0, 0},
  {&__pyx_kp_u_Anda_bisa_mengatur_jumlah_id_dan_2, __pyx_k_Anda_bisa_mengatur_jumlah_id_dan_2, sizeof(__pyx_k_Anda_bisa_mengatur_jumlah_id_dan_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Anda_bisa_mengisi_me_untuk_crack, __pyx_k_Anda_bisa_mengisi_me_untuk_crack, sizeof(__pyx_k_Anda_bisa_mengisi_me_untuk_crack), 0, 1, 0, 0},
  {&__pyx_kp_u_Anda_bisa_mengisi_me_untuk_crack_2, __pyx_k_Anda_bisa_mengisi_me_untuk_crack_2, sizeof(__pyx_k_Anda_bisa_mengisi_me_untuk_crack_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Anda_harus_memasukan_id_postinga, __pyx_k_Anda_harus_memasukan_id_postinga, sizeof(__pyx_k_Anda_harus_memasukan_id_postinga), 0, 1, 0, 0},
  {&__pyx_kp_u_Anda_harus_memasukan_tempat_file, __pyx_k_Anda_harus_memasukan_tempat_file, sizeof(__pyx_k_Anda_harus_memasukan_tempat_file), 0, 1, 0, 0},
  {&__pyx_kp_u_Anggota, __pyx_k_Anggota, sizeof(__pyx_k_Anggota), 0, 1, 0, 0},
  {&__pyx_kp_u_Anggota_a_td_td_class_span_class, __pyx_k_Anggota_a_td_td_class_span_class, sizeof(__pyx_k_Anggota_a_td_td_class_span_class), 0, 1, 0, 0},
  {&__pyx_n_s_B, __pyx_k_B, sizeof(__pyx_k_B), 0, 0, 1, 1},
  {&__pyx_n_s_BeautifulSoup, __pyx_k_BeautifulSoup, sizeof(__pyx_k_BeautifulSoup), 0, 0, 1, 1},
  {&__pyx_n_s_Crack, __pyx_k_Crack, sizeof(__pyx_k_Crack), 0, 0, 1, 1},
  {&__pyx_n_s_Dump, __pyx_k_Dump, sizeof(__pyx_k_Dump), 0, 0, 1, 1},
  {&__pyx_kp_u_Grup_Privat, __pyx_k_Grup_Privat, sizeof(__pyx_k_Grup_Privat), 0, 1, 0, 0},
  {&__pyx_kp_u_Grup_Publik, __pyx_k_Grup_Publik, sizeof(__pyx_k_Grup_Publik), 0, 1, 0, 0},
  {&__pyx_n_s_H, __pyx_k_H, sizeof(__pyx_k_H), 0, 0, 1, 1},
  {&__pyx_kp_u_ID, __pyx_k_ID, sizeof(__pyx_k_ID), 0, 1, 0, 0},
  {&__pyx_kp_u_ID_Grup, __pyx_k_ID_Grup, sizeof(__pyx_k_ID_Grup), 0, 1, 0, 0},
  {&__pyx_kp_u_INFO, __pyx_k_INFO, sizeof(__pyx_k_INFO), 0, 1, 0, 0},
  {&__pyx_n_s_IOError, __pyx_k_IOError, sizeof(__pyx_k_IOError), 0, 0, 1, 1},
  {&__pyx_kp_u_Jumlah_Teman, __pyx_k_Jumlah_Teman, sizeof(__pyx_k_Jumlah_Teman), 0, 1, 0, 0},
  {&__pyx_n_s_K, __pyx_k_K, sizeof(__pyx_k_K), 0, 0, 1, 1},
  {&__pyx_n_s_KeyError, __pyx_k_KeyError, sizeof(__pyx_k_KeyError), 0, 0, 1, 1},
  {&__pyx_n_s_KeyboardInterrupt, __pyx_k_KeyboardInterrupt, sizeof(__pyx_k_KeyboardInterrupt), 0, 0, 1, 1},
  {&__pyx_kp_u_Lihat_Hasil_Selanjutnya, __pyx_k_Lihat_Hasil_Selanjutnya, sizeof(__pyx_k_Lihat_Hasil_Selanjutnya), 0, 1, 0, 0},
  {&__pyx_kp_u_Lihat_Postingan_Lainnya_span, __pyx_k_Lihat_Postingan_Lainnya_span, sizeof(__pyx_k_Lihat_Postingan_Lainnya_span), 0, 1, 0, 0},
  {&__pyx_kp_u_Lihat_Selengkapnya, __pyx_k_Lihat_Selengkapnya, sizeof(__pyx_k_Lihat_Selengkapnya), 0, 1, 0, 0},
  {&__pyx_kp_u_Lihat_komentar_lainnya, __pyx_k_Lihat_komentar_lainnya, sizeof(__pyx_k_Lihat_komentar_lainnya), 0, 1, 0, 0},
  {&__pyx_kp_u_Lihat_selengkapnya, __pyx_k_Lihat_selengkapnya, sizeof(__pyx_k_Lihat_selengkapnya), 0, 1, 0, 0},
  {&__pyx_n_s_Login, __pyx_k_Login, sizeof(__pyx_k_Login), 0, 0, 1, 1},
  {&__pyx_n_u_Lookup, __pyx_k_Lookup, sizeof(__pyx_k_Lookup), 0, 1, 0, 1},
  {&__pyx_n_s_M, __pyx_k_M, sizeof(__pyx_k_M), 0, 0, 1, 1},
  {&__pyx_kp_u_Masukan_ID_Depan, __pyx_k_Masukan_ID_Depan, sizeof(__pyx_k_Masukan_ID_Depan), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_ID_Grup, __pyx_k_Masukan_ID_Grup, sizeof(__pyx_k_Masukan_ID_Grup), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_ID_Postingan, __pyx_k_Masukan_ID_Postingan, sizeof(__pyx_k_Masukan_ID_Postingan), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_Jumlah, __pyx_k_Masukan_Jumlah, sizeof(__pyx_k_Masukan_Jumlah), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_Jumlah_Digit, __pyx_k_Masukan_Jumlah_Digit, sizeof(__pyx_k_Masukan_Jumlah_Digit), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_Jumlah_Target, __pyx_k_Masukan_Jumlah_Target, sizeof(__pyx_k_Masukan_Jumlah_Target), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_Letak_File, __pyx_k_Masukan_Letak_File, sizeof(__pyx_k_Masukan_Letak_File), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_Limit, __pyx_k_Masukan_Limit, sizeof(__pyx_k_Masukan_Limit), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_Nama, __pyx_k_Masukan_Nama, sizeof(__pyx_k_Masukan_Nama), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_Nama_Pencarian, __pyx_k_Masukan_Nama_Pencarian, sizeof(__pyx_k_Masukan_Nama_Pencarian), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_Username_Atau_ID, __pyx_k_Masukan_Username_Atau_ID, sizeof(__pyx_k_Masukan_Username_Atau_ID), 0, 1, 0, 0},
  {&__pyx_kp_u_Masukan_Username_Atau_ID_2, __pyx_k_Masukan_Username_Atau_ID_2, sizeof(__pyx_k_Masukan_Username_Atau_ID_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_10_Mi, __pyx_k_Mozilla_5_0_Linux_Android_10_Mi, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_10_Mi), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_SymbianOS_9_3_Series, __pyx_k_Mozilla_5_0_SymbianOS_9_3_Series, sizeof(__pyx_k_Mozilla_5_0_SymbianOS_9_3_Series), 0, 1, 0, 0},
  {&__pyx_n_s_N, __pyx_k_N, sizeof(__pyx_k_N), 0, 0, 1, 1},
  {&__pyx_kp_u_Nama_Grup, __pyx_k_Nama_Grup, sizeof(__pyx_k_Nama_Grup), 0, 1, 0, 0},
  {&__pyx_n_s_O, __pyx_k_O, sizeof(__pyx_k_O), 0, 0, 1, 1},
  {&__pyx_n_u_OPEN, __pyx_k_OPEN, sizeof(__pyx_k_OPEN), 0, 1, 0, 1},
  {&__pyx_n_s_P, __pyx_k_P, sizeof(__pyx_k_P), 0, 0, 1, 1},
  {&__pyx_n_s_Panel, __pyx_k_Panel, sizeof(__pyx_k_Panel), 0, 0, 1, 1},
  {&__pyx_kp_u_Pilih, __pyx_k_Pilih, sizeof(__pyx_k_Pilih), 0, 1, 0, 0},
  {&__pyx_kp_u_Pilih_Angka_Untuk_Di_Crack, __pyx_k_Pilih_Angka_Untuk_Di_Crack, sizeof(__pyx_k_Pilih_Angka_Untuk_Di_Crack), 0, 1, 0, 0},
  {&__pyx_kp_u_Sampai, __pyx_k_Sampai, sizeof(__pyx_k_Sampai), 0, 1, 0, 0},
  {&__pyx_kp_u_Sedang_Mengumpulkan_s_ID, __pyx_k_Sedang_Mengumpulkan_s_ID, sizeof(__pyx_k_Sedang_Mengumpulkan_s_ID), 0, 1, 0, 0},
  {&__pyx_n_s_Session, __pyx_k_Session, sizeof(__pyx_k_Session), 0, 0, 1, 1},
  {&__pyx_n_s_Tree, __pyx_k_Tree, sizeof(__pyx_k_Tree), 0, 0, 1, 1},
  {&__pyx_n_s_TypeError, __pyx_k_TypeError, sizeof(__pyx_k_TypeError), 0, 0, 1, 1},
  {&__pyx_kp_u_Type_Grup, __pyx_k_Type_Grup, sizeof(__pyx_k_Type_Grup), 0, 1, 0, 0},
  {&__pyx_n_s_U, __pyx_k_U, sizeof(__pyx_k_U), 0, 0, 1, 1},
  {&__pyx_kp_u_Untuk_Berhenti_Tekan_Ctrl_C_Di, __pyx_k_Untuk_Berhenti_Tekan_Ctrl_C_Di, sizeof(__pyx_k_Untuk_Berhenti_Tekan_Ctrl_C_Di), 0, 1, 0, 0},
  {&__pyx_n_s_ValueError, __pyx_k_ValueError, sizeof(__pyx_k_ValueError), 0, 0, 1, 1},
  {&__pyx_kp_u__12, __pyx_k__12, sizeof(__pyx_k__12), 0, 1, 0, 0},
  {&__pyx_kp_u__13, __pyx_k__13, sizeof(__pyx_k__13), 0, 1, 0, 0},
  {&__pyx_kp_u__16, __pyx_k__16, sizeof(__pyx_k__16), 0, 1, 0, 0},
  {&__pyx_kp_u__19, __pyx_k__19, sizeof(__pyx_k__19), 0, 1, 0, 0},
  {&__pyx_kp_u__20, __pyx_k__20, sizeof(__pyx_k__20), 0, 1, 0, 0},
  {&__pyx_kp_u__23, __pyx_k__23, sizeof(__pyx_k__23), 0, 1, 0, 0},
  {&__pyx_kp_u__26, __pyx_k__26, sizeof(__pyx_k__26), 0, 1, 0, 0},
  {&__pyx_kp_u__27, __pyx_k__27, sizeof(__pyx_k__27), 0, 1, 0, 0},
  {&__pyx_kp_u__3, __pyx_k__3, sizeof(__pyx_k__3), 0, 1, 0, 0},
  {&__pyx_kp_u__33, __pyx_k__33, sizeof(__pyx_k__33), 0, 1, 0, 0},
  {&__pyx_kp_u__45, __pyx_k__45, sizeof(__pyx_k__45), 0, 1, 0, 0},
  {&__pyx_kp_u__46, __pyx_k__46, sizeof(__pyx_k__46), 0, 1, 0, 0},
  {&__pyx_kp_u__47, __pyx_k__47, sizeof(__pyx_k__47), 0, 1, 0, 0},
  {&__pyx_kp_u__5, __pyx_k__5, sizeof(__pyx_k__5), 0, 1, 0, 0},
  {&__pyx_n_u_a, __pyx_k_a, sizeof(__pyx_k_a), 0, 1, 0, 1},
  {&__pyx_kp_u_a_href, __pyx_k_a_href, sizeof(__pyx_k_a_href), 0, 1, 0, 0},
  {&__pyx_kp_u_a_href_div_class_div_class_div, __pyx_k_a_href_div_class_div_class_div, sizeof(__pyx_k_a_href_div_class_div_class_div), 0, 1, 0, 0},
  {&__pyx_kp_u_access_token, __pyx_k_access_token, sizeof(__pyx_k_access_token), 0, 1, 0, 0},
  {&__pyx_kp_u_access_token_2, __pyx_k_access_token_2, sizeof(__pyx_k_access_token_2), 0, 1, 0, 0},
  {&__pyx_kp_u_akun_tidak_tersedia_atau_list_t, __pyx_k_akun_tidak_tersedia_atau_list_t, sizeof(__pyx_k_akun_tidak_tersedia_atau_list_t), 0, 1, 0, 0},
  {&__pyx_kp_u_akun_tidak_tersedia_atau_list_t_2, __pyx_k_akun_tidak_tersedia_atau_list_t_2, sizeof(__pyx_k_akun_tidak_tersedia_atau_list_t_2), 0, 1, 0, 0},
  {&__pyx_kp_u_amp, __pyx_k_amp, sizeof(__pyx_k_amp), 0, 1, 0, 0},
  {&__pyx_n_s_anggota, __pyx_k_anggota, sizeof(__pyx_k_anggota), 0, 0, 1, 1},
  {&__pyx_n_s_append, __pyx_k_append, sizeof(__pyx_k_append), 0, 0, 1, 1},
  {&__pyx_n_s_ask, __pyx_k_ask, sizeof(__pyx_k_ask), 0, 0, 1, 1},
  {&__pyx_n_s_atursandi, __pyx_k_atursandi, sizeof(__pyx_k_atursandi), 0, 0, 1, 1},
  {&__pyx_kp_u_b_01_Crack_Dari_React_Semua_05, __pyx_k_b_01_Crack_Dari_React_Semua_05, sizeof(__pyx_k_b_01_Crack_Dari_React_Semua_05), 0, 1, 0, 0},
  {&__pyx_n_s_baca, __pyx_k_baca, sizeof(__pyx_k_baca), 0, 0, 1, 1},
  {&__pyx_n_s_bcj, __pyx_k_bcj, sizeof(__pyx_k_bcj), 0, 0, 1, 1},
  {&__pyx_n_s_bcj2, __pyx_k_bcj2, sizeof(__pyx_k_bcj2), 0, 0, 1, 1},
  {&__pyx_n_s_belakang, __pyx_k_belakang, sizeof(__pyx_k_belakang), 0, 0, 1, 1},
  {&__pyx_n_s_bs4, __pyx_k_bs4, sizeof(__pyx_k_bs4), 0, 0, 1, 1},
  {&__pyx_n_s_calendar, __pyx_k_calendar, sizeof(__pyx_k_calendar), 0, 0, 1, 1},
  {&__pyx_n_s_cari, __pyx_k_cari, sizeof(__pyx_k_cari), 0, 0, 1, 1},
  {&__pyx_n_u_check, __pyx_k_check, sizeof(__pyx_k_check), 0, 1, 0, 1},
  {&__pyx_n_s_clear, __pyx_k_clear, sizeof(__pyx_k_clear), 0, 0, 1, 1},
  {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
  {&__pyx_n_u_code, __pyx_k_code, sizeof(__pyx_k_code), 0, 1, 0, 1},
  {&__pyx_n_s_cok, __pyx_k_cok, sizeof(__pyx_k_cok), 0, 0, 1, 1},
  {&__pyx_n_s_content, __pyx_k_content, sizeof(__pyx_k_content), 0, 0, 1, 1},
  {&__pyx_kp_u_content_owner_id_new, __pyx_k_content_owner_id_new, sizeof(__pyx_k_content_owner_id_new), 0, 1, 0, 0},
  {&__pyx_kp_u_content_owner_id_new_w, __pyx_k_content_owner_id_new_w, sizeof(__pyx_k_content_owner_id_new_w), 0, 1, 0, 0},
  {&__pyx_n_s_convert_id, __pyx_k_convert_id, sizeof(__pyx_k_convert_id), 0, 0, 1, 1},
  {&__pyx_n_s_cookie, __pyx_k_cookie, sizeof(__pyx_k_cookie), 0, 0, 1, 1},
  {&__pyx_n_u_cookie, __pyx_k_cookie, sizeof(__pyx_k_cookie), 0, 1, 0, 1},
  {&__pyx_n_s_cookies, __pyx_k_cookies, sizeof(__pyx_k_cookies), 0, 0, 1, 1},
  {&__pyx_n_s_crack, __pyx_k_crack, sizeof(__pyx_k_crack), 0, 0, 1, 1},
  {&__pyx_n_s_css, __pyx_k_css, sizeof(__pyx_k_css), 0, 0, 1, 1},
  {&__pyx_n_s_d, __pyx_k_d, sizeof(__pyx_k_d), 0, 0, 1, 1},
  {&__pyx_n_s_data, __pyx_k_data, sizeof(__pyx_k_data), 0, 0, 1, 1},
  {&__pyx_n_u_data, __pyx_k_data, sizeof(__pyx_k_data), 0, 1, 0, 1},
  {&__pyx_kp_u_data_cookie_txt, __pyx_k_data_cookie_txt, sizeof(__pyx_k_data_cookie_txt), 0, 1, 0, 0},
  {&__pyx_n_s_data_teman, __pyx_k_data_teman, sizeof(__pyx_k_data_teman), 0, 0, 1, 1},
  {&__pyx_n_s_date, __pyx_k_date, sizeof(__pyx_k_date), 0, 0, 1, 1},
  {&__pyx_n_s_datetime, __pyx_k_datetime, sizeof(__pyx_k_datetime), 0, 0, 1, 1},
  {&__pyx_n_s_depan, __pyx_k_depan, sizeof(__pyx_k_depan), 0, 0, 1, 1},
  {&__pyx_n_s_digit, __pyx_k_digit, sizeof(__pyx_k_digit), 0, 0, 1, 1},
  {&__pyx_n_s_dump, __pyx_k_dump, sizeof(__pyx_k_dump), 0, 0, 1, 1},
  {&__pyx_n_s_dump_file, __pyx_k_dump_file, sizeof(__pyx_k_dump_file), 0, 0, 1, 1},
  {&__pyx_n_s_dump_komentar, __pyx_k_dump_komentar, sizeof(__pyx_k_dump_komentar), 0, 0, 1, 1},
  {&__pyx_n_s_dump_pencarian, __pyx_k_dump_pencarian, sizeof(__pyx_k_dump_pencarian), 0, 0, 1, 1},
  {&__pyx_kp_s_dump_py, __pyx_k_dump_py, sizeof(__pyx_k_dump_py), 0, 0, 1, 0},
  {&__pyx_n_s_dump_react, __pyx_k_dump_react, sizeof(__pyx_k_dump_react), 0, 0, 1, 1},
  {&__pyx_n_s_dump_saran, __pyx_k_dump_saran, sizeof(__pyx_k_dump_saran), 0, 0, 1, 1},
  {&__pyx_n_s_e, __pyx_k_e, sizeof(__pyx_k_e), 0, 0, 1, 1},
  {&__pyx_n_s_encode, __pyx_k_encode, sizeof(__pyx_k_encode), 0, 0, 1, 1},
  {&__pyx_n_s_exit, __pyx_k_exit, sizeof(__pyx_k_exit), 0, 0, 1, 1},
  {&__pyx_n_u_facebook, __pyx_k_facebook, sizeof(__pyx_k_facebook), 0, 1, 0, 1},
  {&__pyx_n_u_fburl, __pyx_k_fburl, sizeof(__pyx_k_fburl), 0, 1, 0, 1},
  {&__pyx_kp_u_fields_name_friends_fields_id_n, __pyx_k_fields_name_friends_fields_id_n, sizeof(__pyx_k_fields_name_friends_fields_id_n), 0, 1, 0, 0},
  {&__pyx_kp_u_fields_name_friends_fields_id_n_2, __pyx_k_fields_name_friends_fields_id_n_2, sizeof(__pyx_k_fields_name_friends_fields_id_n_2), 0, 1, 0, 0},
  {&__pyx_kp_u_fields_name_subscribers_fields, __pyx_k_fields_name_subscribers_fields, sizeof(__pyx_k_fields_name_subscribers_fields), 0, 1, 0, 0},
  {&__pyx_n_s_files, __pyx_k_files, sizeof(__pyx_k_files), 0, 0, 1, 1},
  {&__pyx_n_s_find, __pyx_k_find, sizeof(__pyx_k_find), 0, 0, 1, 1},
  {&__pyx_n_s_find_all, __pyx_k_find_all, sizeof(__pyx_k_find_all), 0, 0, 1, 1},
  {&__pyx_n_s_findall, __pyx_k_findall, sizeof(__pyx_k_findall), 0, 0, 1, 1},
  {&__pyx_n_s_flush, __pyx_k_flush, sizeof(__pyx_k_flush), 0, 0, 1, 1},
  {&__pyx_n_s_followers, __pyx_k_followers, sizeof(__pyx_k_followers), 0, 0, 1, 1},
  {&__pyx_n_u_friends, __pyx_k_friends, sizeof(__pyx_k_friends), 0, 1, 0, 1},
  {&__pyx_kp_u_friends_hovercard, __pyx_k_friends_hovercard, sizeof(__pyx_k_friends_hovercard), 0, 1, 0, 0},
  {&__pyx_n_s_g, __pyx_k_g, sizeof(__pyx_k_g), 0, 0, 1, 1},
  {&__pyx_n_s_garis, __pyx_k_garis, sizeof(__pyx_k_garis), 0, 0, 1, 1},
  {&__pyx_n_s_get, __pyx_k_get, sizeof(__pyx_k_get), 0, 0, 1, 1},
  {&__pyx_n_s_get_data, __pyx_k_get_data, sizeof(__pyx_k_get_data), 0, 0, 1, 1},
  {&__pyx_n_s_get_datagrup, __pyx_k_get_datagrup, sizeof(__pyx_k_get_datagrup), 0, 0, 1, 1},
  {&__pyx_n_s_get_dump, __pyx_k_get_dump, sizeof(__pyx_k_get_dump), 0, 0, 1, 1},
  {&__pyx_n_s_get_pencarianteman, __pyx_k_get_pencarianteman, sizeof(__pyx_k_get_pencarianteman), 0, 0, 1, 1},
  {&__pyx_n_s_grup_tanpalogin, __pyx_k_grup_tanpalogin, sizeof(__pyx_k_grup_tanpalogin), 0, 0, 1, 1},
  {&__pyx_n_s_grupbergabung, __pyx_k_grupbergabung, sizeof(__pyx_k_grupbergabung), 0, 0, 1, 1},
  {&__pyx_n_u_h3, __pyx_k_h3, sizeof(__pyx_k_h3), 0, 1, 0, 1},
  {&__pyx_n_s_header_grup, __pyx_k_header_grup, sizeof(__pyx_k_header_grup), 0, 0, 1, 1},
  {&__pyx_n_s_header_grup_tanpalogin, __pyx_k_header_grup_tanpalogin, sizeof(__pyx_k_header_grup_tanpalogin), 0, 0, 1, 1},
  {&__pyx_n_s_headers, __pyx_k_headers, sizeof(__pyx_k_headers), 0, 0, 1, 1},
  {&__pyx_n_s_href, __pyx_k_href, sizeof(__pyx_k_href), 0, 0, 1, 1},
  {&__pyx_n_u_href, __pyx_k_href, sizeof(__pyx_k_href), 0, 1, 0, 1},
  {&__pyx_kp_u_html_parser, __pyx_k_html_parser, sizeof(__pyx_k_html_parser), 0, 1, 0, 0},
  {&__pyx_kp_u_https_free_facebook_com_user, __pyx_k_https_free_facebook_com_user, sizeof(__pyx_k_https_free_facebook_com_user), 0, 1, 0, 0},
  {&__pyx_kp_u_https_graph_facebook_com, __pyx_k_https_graph_facebook_com, sizeof(__pyx_k_https_graph_facebook_com), 0, 1, 0, 0},
  {&__pyx_kp_u_https_graph_facebook_com_me_grou, __pyx_k_https_graph_facebook_com_me_grou, sizeof(__pyx_k_https_graph_facebook_com_me_grou), 0, 1, 0, 0},
  {&__pyx_kp_u_https_lookup_id_com, __pyx_k_https_lookup_id_com, sizeof(__pyx_k_https_lookup_id_com), 0, 1, 0, 0},
  {&__pyx_kp_u_https_mbasic_facebook_com, __pyx_k_https_mbasic_facebook_com, sizeof(__pyx_k_https_mbasic_facebook_com), 0, 1, 0, 0},
  {&__pyx_kp_u_https_mbasic_facebook_com_2, __pyx_k_https_mbasic_facebook_com_2, sizeof(__pyx_k_https_mbasic_facebook_com_2), 0, 1, 0, 0},
  {&__pyx_kp_u_https_mbasic_facebook_com_friend, __pyx_k_https_mbasic_facebook_com_friend, sizeof(__pyx_k_https_mbasic_facebook_com_friend), 0, 1, 0, 0},
  {&__pyx_kp_u_https_mbasic_facebook_com_friend_2, __pyx_k_https_mbasic_facebook_com_friend_2, sizeof(__pyx_k_https_mbasic_facebook_com_friend_2), 0, 1, 0, 0},
  {&__pyx_kp_u_https_mbasic_facebook_com_groups, __pyx_k_https_mbasic_facebook_com_groups, sizeof(__pyx_k_https_mbasic_facebook_com_groups), 0, 1, 0, 0},
  {&__pyx_kp_u_https_mbasic_facebook_com_public, __pyx_k_https_mbasic_facebook_com_public, sizeof(__pyx_k_https_mbasic_facebook_com_public), 0, 1, 0, 0},
  {&__pyx_kp_u_https_mbasic_facebook_com_ufi_re, __pyx_k_https_mbasic_facebook_com_ufi_re, sizeof(__pyx_k_https_mbasic_facebook_com_ufi_re), 0, 1, 0, 0},
  {&__pyx_n_s_i, __pyx_k_i, sizeof(__pyx_k_i), 0, 0, 1, 1},
  {&__pyx_n_s_id, __pyx_k_id, sizeof(__pyx_k_id), 0, 0, 1, 1},
  {&__pyx_n_u_id, __pyx_k_id, sizeof(__pyx_k_id), 0, 1, 0, 1},
  {&__pyx_kp_u_id_2, __pyx_k_id_2, sizeof(__pyx_k_id_2), 0, 1, 0, 0},
  {&__pyx_n_s_id_group, __pyx_k_id_group, sizeof(__pyx_k_id_group), 0, 0, 1, 1},
  {&__pyx_n_s_idg, __pyx_k_idg, sizeof(__pyx_k_idg), 0, 0, 1, 1},
  {&__pyx_n_s_idku, __pyx_k_idku, sizeof(__pyx_k_idku), 0, 0, 1, 1},
  {&__pyx_n_s_ids, __pyx_k_ids, sizeof(__pyx_k_ids), 0, 0, 1, 1},
  {&__pyx_n_s_idsiapa, __pyx_k_idsiapa, sizeof(__pyx_k_idsiapa), 0, 0, 1, 1},
  {&__pyx_n_s_idt, __pyx_k_idt, sizeof(__pyx_k_idt), 0, 0, 1, 1},
  {&__pyx_n_s_idteman, __pyx_k_idteman, sizeof(__pyx_k_idteman), 0, 0, 1, 1},
  {&__pyx_n_s_idx, __pyx_k_idx, sizeof(__pyx_k_idx), 0, 0, 1, 1},
  {&__pyx_n_s_idyou, __pyx_k_idyou, sizeof(__pyx_k_idyou), 0, 0, 1, 1},
  {&__pyx_kp_u_img, __pyx_k_img, sizeof(__pyx_k_img), 0, 1, 0, 0},
  {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
  {&__pyx_n_s_input, __pyx_k_input, sizeof(__pyx_k_input), 0, 0, 1, 1},
  {&__pyx_n_s_isi, __pyx_k_isi, sizeof(__pyx_k_isi), 0, 0, 1, 1},
  {&__pyx_n_s_iso, __pyx_k_iso, sizeof(__pyx_k_iso), 0, 0, 1, 1},
  {&__pyx_n_s_json, __pyx_k_json, sizeof(__pyx_k_json), 0, 0, 1, 1},
  {&__pyx_n_s_jum, __pyx_k_jum, sizeof(__pyx_k_jum), 0, 0, 1, 1},
  {&__pyx_n_s_jumlah, __pyx_k_jumlah, sizeof(__pyx_k_jumlah), 0, 0, 1, 1},
  {&__pyx_n_s_komen, __pyx_k_komen, sizeof(__pyx_k_komen), 0, 0, 1, 1},
  {&__pyx_n_s_komentar, __pyx_k_komentar, sizeof(__pyx_k_komentar), 0, 0, 1, 1},
  {&__pyx_n_s_kontol, __pyx_k_kontol, sizeof(__pyx_k_kontol), 0, 0, 1, 1},
  {&__pyx_n_s_kue, __pyx_k_kue, sizeof(__pyx_k_kue), 0, 0, 1, 1},
  {&__pyx_n_s_lanjut, __pyx_k_lanjut, sizeof(__pyx_k_lanjut), 0, 0, 1, 1},
  {&__pyx_n_s_liatnih, __pyx_k_liatnih, sizeof(__pyx_k_liatnih), 0, 0, 1, 1},
  {&__pyx_n_s_like, __pyx_k_like, sizeof(__pyx_k_like), 0, 0, 1, 1},
  {&__pyx_kp_u_likes_fields_limit_100000_acces, __pyx_k_likes_fields_limit_100000_acces, sizeof(__pyx_k_likes_fields_limit_100000_acces), 0, 1, 0, 0},
  {&__pyx_n_s_limit, __pyx_k_limit, sizeof(__pyx_k_limit), 0, 0, 1, 1},
  {&__pyx_n_s_link, __pyx_k_link, sizeof(__pyx_k_link), 0, 0, 1, 1},
  {&__pyx_kp_u_locale2_id_ID, __pyx_k_locale2_id_ID, sizeof(__pyx_k_locale2_id_ID), 0, 1, 0, 0},
  {&__pyx_n_s_login, __pyx_k_login, sizeof(__pyx_k_login), 0, 0, 1, 1},
  {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
  {&__pyx_n_s_massal, __pyx_k_massal, sizeof(__pyx_k_massal), 0, 0, 1, 1},
  {&__pyx_kp_u_masukan_tempat_file_dengan_bena, __pyx_k_masukan_tempat_file_dengan_bena, sizeof(__pyx_k_masukan_tempat_file_dengan_bena), 0, 1, 0, 0},
  {&__pyx_n_u_mengajukan, __pyx_k_mengajukan, sizeof(__pyx_k_mengajukan), 0, 1, 0, 1},
  {&__pyx_kp_u_mengajukan_pertanyaan, __pyx_k_mengajukan_pertanyaan, sizeof(__pyx_k_mengajukan_pertanyaan), 0, 1, 0, 0},
  {&__pyx_n_s_n, __pyx_k_n, sizeof(__pyx_k_n), 0, 0, 1, 1},
  {&__pyx_n_s_nama, __pyx_k_nama, sizeof(__pyx_k_nama), 0, 0, 1, 1},
  {&__pyx_n_s_namayou, __pyx_k_namayou, sizeof(__pyx_k_namayou), 0, 0, 1, 1},
  {&__pyx_n_u_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 1, 0, 1},
  {&__pyx_n_s_name_2, __pyx_k_name_2, sizeof(__pyx_k_name_2), 0, 0, 1, 1},
  {&__pyx_n_u_next, __pyx_k_next, sizeof(__pyx_k_next), 0, 1, 0, 1},
  {&__pyx_n_s_no, __pyx_k_no, sizeof(__pyx_k_no), 0, 0, 1, 1},
  {&__pyx_n_s_old, __pyx_k_old, sizeof(__pyx_k_old), 0, 0, 1, 1},
  {&__pyx_n_s_open, __pyx_k_open, sizeof(__pyx_k_open), 0, 0, 1, 1},
  {&__pyx_n_s_os, __pyx_k_os, sizeof(__pyx_k_os), 0, 0, 1, 1},
  {&__pyx_n_s_par, __pyx_k_par, sizeof(__pyx_k_par), 0, 0, 1, 1},
  {&__pyx_n_s_parser, __pyx_k_parser, sizeof(__pyx_k_parser), 0, 0, 1, 1},
  {&__pyx_n_s_payload, __pyx_k_payload, sizeof(__pyx_k_payload), 0, 0, 1, 1},
  {&__pyx_n_s_pencarian_nologin, __pyx_k_pencarian_nologin, sizeof(__pyx_k_pencarian_nologin), 0, 0, 1, 1},
  {&__pyx_n_s_pencarianteman, __pyx_k_pencarianteman, sizeof(__pyx_k_pencarianteman), 0, 0, 1, 1},
  {&__pyx_n_s_permintaanteman, __pyx_k_permintaanteman, sizeof(__pyx_k_permintaanteman), 0, 0, 1, 1},
  {&__pyx_n_s_post, __pyx_k_post, sizeof(__pyx_k_post), 0, 0, 1, 1},
  {&__pyx_kp_u_post_tidak_tersedia_atau_tidak, __pyx_k_post_tidak_tersedia_atau_tidak, sizeof(__pyx_k_post_tidak_tersedia_atau_tidak), 0, 1, 0, 0},
  {&__pyx_n_s_print, __pyx_k_print, sizeof(__pyx_k_print), 0, 0, 1, 1},
  {&__pyx_n_s_prints, __pyx_k_prints, sizeof(__pyx_k_prints), 0, 0, 1, 1},
  {&__pyx_n_s_priv, __pyx_k_priv, sizeof(__pyx_k_priv), 0, 0, 1, 1},
  {&__pyx_n_u_privacy, __pyx_k_privacy, sizeof(__pyx_k_privacy), 0, 1, 0, 1},
  {&__pyx_kp_u_profile_php, __pyx_k_profile_php, sizeof(__pyx_k_profile_php), 0, 1, 0, 0},
  {&__pyx_kp_u_profile_php_2, __pyx_k_profile_php_2, sizeof(__pyx_k_profile_php_2), 0, 1, 0, 0},
  {&__pyx_kp_u_profile_php_id, __pyx_k_profile_php_id, sizeof(__pyx_k_profile_php_id), 0, 1, 0, 0},
  {&__pyx_n_s_publik, __pyx_k_publik, sizeof(__pyx_k_publik), 0, 0, 1, 1},
  {&__pyx_n_s_r, __pyx_k_r, sizeof(__pyx_k_r), 0, 0, 1, 1},
  {&__pyx_n_u_r, __pyx_k_r, sizeof(__pyx_k_r), 0, 1, 0, 1},
  {&__pyx_n_s_randint, __pyx_k_randint, sizeof(__pyx_k_randint), 0, 0, 1, 1},
  {&__pyx_n_s_random, __pyx_k_random, sizeof(__pyx_k_random), 0, 0, 1, 1},
  {&__pyx_n_s_randomnew, __pyx_k_randomnew, sizeof(__pyx_k_randomnew), 0, 0, 1, 1},
  {&__pyx_n_s_randomold, __pyx_k_randomold, sizeof(__pyx_k_randomold), 0, 0, 1, 1},
  {&__pyx_n_s_range, __pyx_k_range, sizeof(__pyx_k_range), 0, 0, 1, 1},
  {&__pyx_n_s_re, __pyx_k_re, sizeof(__pyx_k_re), 0, 0, 1, 1},
  {&__pyx_n_s_react_type, __pyx_k_react_type, sizeof(__pyx_k_react_type), 0, 0, 1, 1},
  {&__pyx_kp_u_reaction_type, __pyx_k_reaction_type, sizeof(__pyx_k_reaction_type), 0, 1, 0, 0},
  {&__pyx_kp_u_reaction_type_0, __pyx_k_reaction_type_0, sizeof(__pyx_k_reaction_type_0), 0, 1, 0, 0},
  {&__pyx_n_s_reactions, __pyx_k_reactions, sizeof(__pyx_k_reactions), 0, 0, 1, 1},
  {&__pyx_n_s_read, __pyx_k_read, sizeof(__pyx_k_read), 0, 0, 1, 1},
  {&__pyx_n_s_readlines, __pyx_k_readlines, sizeof(__pyx_k_readlines), 0, 0, 1, 1},
  {&__pyx_n_s_replace, __pyx_k_replace, sizeof(__pyx_k_replace), 0, 0, 1, 1},
  {&__pyx_n_s_requests, __pyx_k_requests, sizeof(__pyx_k_requests), 0, 0, 1, 1},
  {&__pyx_n_s_rich, __pyx_k_rich, sizeof(__pyx_k_rich), 0, 0, 1, 1},
  {&__pyx_n_s_rich_panel, __pyx_k_rich_panel, sizeof(__pyx_k_rich_panel), 0, 0, 1, 1},
  {&__pyx_n_s_rich_tree, __pyx_k_rich_tree, sizeof(__pyx_k_rich_tree), 0, 0, 1, 1},
  {&__pyx_n_s_s, __pyx_k_s, sizeof(__pyx_k_s), 0, 0, 1, 1},
  {&__pyx_n_s_saranteman, __pyx_k_saranteman, sizeof(__pyx_k_saranteman), 0, 0, 1, 1},
  {&__pyx_n_s_ses, __pyx_k_ses, sizeof(__pyx_k_ses), 0, 0, 1, 1},
  {&__pyx_n_u_span, __pyx_k_span, sizeof(__pyx_k_span), 0, 1, 0, 1},
  {&__pyx_kp_u_span_2, __pyx_k_span_2, sizeof(__pyx_k_span_2), 0, 1, 0, 0},
  {&__pyx_n_s_spl, __pyx_k_spl, sizeof(__pyx_k_spl), 0, 0, 1, 1},
  {&__pyx_n_s_split, __pyx_k_split, sizeof(__pyx_k_split), 0, 0, 1, 1},
  {&__pyx_n_s_src, __pyx_k_src, sizeof(__pyx_k_src), 0, 0, 1, 1},
  {&__pyx_n_s_stdout, __pyx_k_stdout, sizeof(__pyx_k_stdout), 0, 0, 1, 1},
  {&__pyx_n_s_string, __pyx_k_string, sizeof(__pyx_k_string), 0, 0, 1, 1},
  {&__pyx_n_s_subprocess, __pyx_k_subprocess, sizeof(__pyx_k_subprocess), 0, 0, 1, 1},
  {&__pyx_n_s_sys, __pyx_k_sys, sizeof(__pyx_k_sys), 0, 0, 1, 1},
  {&__pyx_n_s_t, __pyx_k_t, sizeof(__pyx_k_t), 0, 0, 1, 1},
  {&__pyx_n_u_table, __pyx_k_table, sizeof(__pyx_k_table), 0, 1, 0, 1},
  {&__pyx_n_s_tanya_total, __pyx_k_tanya_total, sizeof(__pyx_k_tanya_total), 0, 0, 1, 1},
  {&__pyx_n_u_td, __pyx_k_td, sizeof(__pyx_k_td), 0, 1, 0, 1},
  {&__pyx_n_s_te, __pyx_k_te, sizeof(__pyx_k_te), 0, 0, 1, 1},
  {&__pyx_n_s_teman, __pyx_k_teman, sizeof(__pyx_k_teman), 0, 0, 1, 1},
  {&__pyx_n_s_temandariteman, __pyx_k_temandariteman, sizeof(__pyx_k_temandariteman), 0, 0, 1, 1},
  {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
  {&__pyx_n_s_text, __pyx_k_text, sizeof(__pyx_k_text), 0, 0, 1, 1},
  {&__pyx_n_s_threading, __pyx_k_threading, sizeof(__pyx_k_threading), 0, 0, 1, 1},
  {&__pyx_n_s_time, __pyx_k_time, sizeof(__pyx_k_time), 0, 0, 1, 1},
  {&__pyx_n_s_title, __pyx_k_title, sizeof(__pyx_k_title), 0, 0, 1, 1},
  {&__pyx_n_s_token, __pyx_k_token, sizeof(__pyx_k_token), 0, 0, 1, 1},
  {&__pyx_n_s_type, __pyx_k_type, sizeof(__pyx_k_type), 0, 0, 1, 1},
  {&__pyx_kp_u_uid, __pyx_k_uid, sizeof(__pyx_k_uid), 0, 1, 0, 0},
  {&__pyx_n_s_uid_2, __pyx_k_uid_2, sizeof(__pyx_k_uid_2), 0, 0, 1, 1},
  {&__pyx_n_s_url, __pyx_k_url, sizeof(__pyx_k_url), 0, 0, 1, 1},
  {&__pyx_n_s_urlmain, __pyx_k_urlmain, sizeof(__pyx_k_urlmain), 0, 0, 1, 1},
  {&__pyx_n_s_user, __pyx_k_user, sizeof(__pyx_k_user), 0, 0, 1, 1},
  {&__pyx_kp_u_user_agent, __pyx_k_user_agent, sizeof(__pyx_k_user_agent), 0, 1, 0, 0},
  {&__pyx_kp_u_utf_8, __pyx_k_utf_8, sizeof(__pyx_k_utf_8), 0, 1, 0, 0},
  {&__pyx_n_s_uuid, __pyx_k_uuid, sizeof(__pyx_k_uuid), 0, 0, 1, 1},
  {&__pyx_kp_u_w, __pyx_k_w, sizeof(__pyx_k_w), 0, 1, 0, 0},
  {&__pyx_n_s_write, __pyx_k_write, sizeof(__pyx_k_write), 0, 0, 1, 1},
  {&__pyx_n_s_x, __pyx_k_x, sizeof(__pyx_k_x), 0, 0, 1, 1},
  {&__pyx_n_s_xf, __pyx_k_xf, sizeof(__pyx_k_xf), 0, 0, 1, 1},
  {&__pyx_n_s_xx, __pyx_k_xx, sizeof(__pyx_k_xx), 0, 0, 1, 1},
  {&__pyx_n_s_z, __pyx_k_z, sizeof(__pyx_k_z), 0, 0, 1, 1},
  {0, 0, 0, 0, 0, 0, 0}
};
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  __pyx_builtin_KeyError = __Pyx_GetBuiltinName(__pyx_n_s_KeyError); if (!__pyx_builtin_KeyError) __PYX_ERR(0, 62, __pyx_L1_error)
  __pyx_builtin_exit = __Pyx_GetBuiltinName(__pyx_n_s_exit); if (!__pyx_builtin_exit) __PYX_ERR(0, 62, __pyx_L1_error)
  __pyx_builtin_print = __Pyx_GetBuiltinName(__pyx_n_s_print); if (!__pyx_builtin_print) __PYX_ERR(0, 64, __pyx_L1_error)
  __pyx_builtin_input = __Pyx_GetBuiltinName(__pyx_n_s_input); if (!__pyx_builtin_input) __PYX_ERR(0, 71, __pyx_L1_error)
  __pyx_builtin_open = __Pyx_GetBuiltinName(__pyx_n_s_open); if (!__pyx_builtin_open) __PYX_ERR(0, 73, __pyx_L1_error)
  __pyx_builtin_KeyboardInterrupt = __Pyx_GetBuiltinName(__pyx_n_s_KeyboardInterrupt); if (!__pyx_builtin_KeyboardInterrupt) __PYX_ERR(0, 148, __pyx_L1_error)
  __pyx_builtin_range = __Pyx_GetBuiltinName(__pyx_n_s_range); if (!__pyx_builtin_range) __PYX_ERR(0, 265, __pyx_L1_error)
  __pyx_builtin_IOError = __Pyx_GetBuiltinName(__pyx_n_s_IOError); if (!__pyx_builtin_IOError) __PYX_ERR(0, 331, __pyx_L1_error)
  __pyx_builtin_TypeError = __Pyx_GetBuiltinName(__pyx_n_s_TypeError); if (!__pyx_builtin_TypeError) __PYX_ERR(0, 331, __pyx_L1_error)
  __pyx_builtin_ValueError = __Pyx_GetBuiltinName(__pyx_n_s_ValueError); if (!__pyx_builtin_ValueError) __PYX_ERR(0, 331, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

  
  __pyx_tuple_ = PyTuple_Pack(1, __pyx_kp_u_https_lookup_id_com); if (unlikely(!__pyx_tuple_)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple_);
  __Pyx_GIVEREF(__pyx_tuple_);

  
  __pyx_tuple__2 = PyTuple_Pack(1, __pyx_n_u_span); if (unlikely(!__pyx_tuple__2)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__2);
  __Pyx_GIVEREF(__pyx_tuple__2);

  
  __pyx_tuple__4 = PyTuple_Pack(1, __pyx_kp_u_akun_tidak_tersedia_atau_list_t); if (unlikely(!__pyx_tuple__4)) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__4);
  __Pyx_GIVEREF(__pyx_tuple__4);

  
  __pyx_tuple__6 = PyTuple_Pack(1, __pyx_kp_u__5); if (unlikely(!__pyx_tuple__6)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__6);
  __Pyx_GIVEREF(__pyx_tuple__6);

  
  __pyx_tuple__7 = PyTuple_Pack(1, __pyx_kp_u_Anda_harus_memasukan_tempat_file); if (unlikely(!__pyx_tuple__7)) __PYX_ERR(0, 70, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__7);
  __Pyx_GIVEREF(__pyx_tuple__7);

  
  __pyx_tuple__8 = PyTuple_Pack(1, __pyx_kp_u_Masukan_Letak_File); if (unlikely(!__pyx_tuple__8)) __PYX_ERR(0, 71, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__8);
  __Pyx_GIVEREF(__pyx_tuple__8);

  
  __pyx_tuple__9 = PyTuple_Pack(1, __pyx_kp_u_masukan_tempat_file_dengan_bena); if (unlikely(!__pyx_tuple__9)) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__9);
  __Pyx_GIVEREF(__pyx_tuple__9);

  
  __pyx_tuple__10 = PyTuple_Pack(1, __pyx_kp_u_Anda_bisa_crack_lebih_dari_1_nam); if (unlikely(!__pyx_tuple__10)) __PYX_ERR(0, 83, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__10);
  __Pyx_GIVEREF(__pyx_tuple__10);

  
  __pyx_tuple__11 = PyTuple_Pack(1, __pyx_kp_u_Masukan_Nama_Pencarian); if (unlikely(!__pyx_tuple__11)) __PYX_ERR(0, 84, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__11);
  __Pyx_GIVEREF(__pyx_tuple__11);

  
  __pyx_tuple__14 = PyTuple_Pack(1, __pyx_n_u_a); if (unlikely(!__pyx_tuple__14)) __PYX_ERR(0, 101, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__14);
  __Pyx_GIVEREF(__pyx_tuple__14);

  
  __pyx_tuple__15 = PyTuple_Pack(1, __pyx_kp_u_Masukan_ID_Grup); if (unlikely(!__pyx_tuple__15)) __PYX_ERR(0, 109, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__15);
  __Pyx_GIVEREF(__pyx_tuple__15);

  
  __pyx_tuple__17 = PyTuple_Pack(2, __pyx_kp_u_content_owner_id_new, __pyx_kp_u__5); if (unlikely(!__pyx_tuple__17)) __PYX_ERR(0, 123, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__17);
  __Pyx_GIVEREF(__pyx_tuple__17);

  
  __pyx_tuple__18 = PyTuple_Pack(2, __pyx_kp_u_mengajukan_pertanyaan, __pyx_kp_u__5); if (unlikely(!__pyx_tuple__18)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__18);
  __Pyx_GIVEREF(__pyx_tuple__18);

  
  __pyx_tuple__21 = PyTuple_Pack(2, __pyx_kp_u_img, __pyx_kp_u__5); if (unlikely(!__pyx_tuple__21)) __PYX_ERR(0, 146, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__21);
  __Pyx_GIVEREF(__pyx_tuple__21);

  
  __pyx_tuple__22 = PyTuple_Pack(1, __pyx_kp_u_Untuk_Berhenti_Tekan_Ctrl_C_Di); if (unlikely(!__pyx_tuple__22)) __PYX_ERR(0, 154, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__22);
  __Pyx_GIVEREF(__pyx_tuple__22);

  
  __pyx_tuple__24 = PyTuple_Pack(1, __pyx_kp_u_Pilih_Angka_Untuk_Di_Crack); if (unlikely(!__pyx_tuple__24)) __PYX_ERR(0, 171, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__24);
  __Pyx_GIVEREF(__pyx_tuple__24);

  
  __pyx_tuple__25 = PyTuple_Pack(1, __pyx_kp_u_Masukan_Nama); if (unlikely(!__pyx_tuple__25)) __PYX_ERR(0, 181, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__25);
  __Pyx_GIVEREF(__pyx_tuple__25);

  
  __pyx_tuple__28 = PyTuple_Pack(1, __pyx_kp_u_Anda_bisa_mengisi_me_untuk_crack); if (unlikely(!__pyx_tuple__28)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__28);
  __Pyx_GIVEREF(__pyx_tuple__28);

  
  __pyx_tuple__29 = PyTuple_Pack(1, __pyx_kp_u_Masukan_Username_Atau_ID); if (unlikely(!__pyx_tuple__29)) __PYX_ERR(0, 219, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__29);
  __Pyx_GIVEREF(__pyx_tuple__29);

  
  __pyx_tuple__30 = PyTuple_Pack(1, __pyx_kp_u_Masukan_Limit); if (unlikely(!__pyx_tuple__30)) __PYX_ERR(0, 220, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__30);
  __Pyx_GIVEREF(__pyx_tuple__30);

  
  __pyx_tuple__31 = PyTuple_Pack(1, __pyx_kp_u_Anda_bisa_mengisi_me_untuk_crack_2); if (unlikely(!__pyx_tuple__31)) __PYX_ERR(0, 262, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__31);
  __Pyx_GIVEREF(__pyx_tuple__31);

  
  __pyx_tuple__32 = PyTuple_Pack(1, __pyx_kp_u_Masukan_Jumlah_Target); if (unlikely(!__pyx_tuple__32)) __PYX_ERR(0, 263, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__32);
  __Pyx_GIVEREF(__pyx_tuple__32);

  
  __pyx_tuple__34 = PyTuple_Pack(1, __pyx_kp_u_akun_tidak_tersedia_atau_list_t_2); if (unlikely(!__pyx_tuple__34)) __PYX_ERR(0, 280, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__34);
  __Pyx_GIVEREF(__pyx_tuple__34);

  
  __pyx_tuple__35 = PyTuple_Pack(1, __pyx_kp_u_Anda_harus_memasukan_id_postinga); if (unlikely(!__pyx_tuple__35)) __PYX_ERR(0, 303, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__35);
  __Pyx_GIVEREF(__pyx_tuple__35);

  
  __pyx_tuple__36 = PyTuple_Pack(1, __pyx_kp_u_Masukan_ID_Postingan); if (unlikely(!__pyx_tuple__36)) __PYX_ERR(0, 304, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__36);
  __Pyx_GIVEREF(__pyx_tuple__36);

  
  __pyx_tuple__37 = PyTuple_Pack(1, __pyx_kp_u_post_tidak_tersedia_atau_tidak); if (unlikely(!__pyx_tuple__37)) __PYX_ERR(0, 309, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__37);
  __Pyx_GIVEREF(__pyx_tuple__37);

  
  __pyx_tuple__38 = PyTuple_Pack(1, __pyx_kp_u_Anda_bisa_mengatur_jumlah_id_dan); if (unlikely(!__pyx_tuple__38)) __PYX_ERR(0, 315, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__38);
  __Pyx_GIVEREF(__pyx_tuple__38);

  
  __pyx_tuple__39 = PyTuple_Pack(1, __pyx_kp_u_Masukan_Jumlah); if (unlikely(!__pyx_tuple__39)) __PYX_ERR(0, 316, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__39);
  __Pyx_GIVEREF(__pyx_tuple__39);

  
  __pyx_tuple__40 = PyTuple_Pack(1, __pyx_kp_u_Masukan_Jumlah_Digit); if (unlikely(!__pyx_tuple__40)) __PYX_ERR(0, 317, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__40);
  __Pyx_GIVEREF(__pyx_tuple__40);

  
  __pyx_tuple__41 = PyTuple_Pack(1, __pyx_kp_u_Masukan_ID_Depan); if (unlikely(!__pyx_tuple__41)) __PYX_ERR(0, 318, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__41);
  __Pyx_GIVEREF(__pyx_tuple__41);

  
  __pyx_tuple__42 = PyTuple_Pack(1, __pyx_kp_u_Anda_bisa_mengatur_jumlah_id_dan_2); if (unlikely(!__pyx_tuple__42)) __PYX_ERR(0, 339, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__42);
  __Pyx_GIVEREF(__pyx_tuple__42);

  
  __pyx_tuple__43 = PyTuple_Pack(1, __pyx_kp_u_data_cookie_txt); if (unlikely(!__pyx_tuple__43)) __PYX_ERR(0, 366, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__43);
  __Pyx_GIVEREF(__pyx_tuple__43);

  
  __pyx_tuple__44 = PyTuple_Pack(1, __pyx_kp_u_Anda_Harus_Logout_Dulu_Dan_Masu); if (unlikely(!__pyx_tuple__44)) __PYX_ERR(0, 374, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__44);
  __Pyx_GIVEREF(__pyx_tuple__44);

  
  __pyx_tuple__48 = PyTuple_Pack(5, __pyx_n_s_user, __pyx_n_s_payload, __pyx_n_s_url, __pyx_n_s_data, __pyx_n_s_idt); if (unlikely(!__pyx_tuple__48)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__48);
  __Pyx_GIVEREF(__pyx_tuple__48);
  __pyx_codeobj__49 = (PyObject*)__Pyx_PyCode_New(1, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__48, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_convert_id, 35, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__49)) __PYX_ERR(0, 35, __pyx_L1_error)

  
  __pyx_tuple__50 = PyTuple_Pack(4, __pyx_n_s_idt, __pyx_n_s_token, __pyx_n_s_url, __pyx_n_s_d); if (unlikely(!__pyx_tuple__50)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__50);
  __Pyx_GIVEREF(__pyx_tuple__50);
  __pyx_codeobj__51 = (PyObject*)__Pyx_PyCode_New(2, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__50, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_get_data, 45, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__51)) __PYX_ERR(0, 45, __pyx_L1_error)

  
  __pyx_tuple__52 = PyTuple_Pack(3, __pyx_n_s_idt, __pyx_n_s_token, __pyx_n_s_i); if (unlikely(!__pyx_tuple__52)) __PYX_ERR(0, 57, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__52);
  __Pyx_GIVEREF(__pyx_tuple__52);
  __pyx_codeobj__53 = (PyObject*)__Pyx_PyCode_New(2, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__52, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_get_dump, 57, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__53)) __PYX_ERR(0, 57, __pyx_L1_error)

  
  __pyx_tuple__54 = PyTuple_Pack(4, __pyx_n_s_files, __pyx_n_s_baca, __pyx_n_s_z, __pyx_n_s_e); if (unlikely(!__pyx_tuple__54)) __PYX_ERR(0, 69, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__54);
  __Pyx_GIVEREF(__pyx_tuple__54);
  __pyx_codeobj__55 = (PyObject*)__Pyx_PyCode_New(0, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__54, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_dump_file, 69, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__55)) __PYX_ERR(0, 69, __pyx_L1_error)

  
  __pyx_tuple__56 = PyTuple_Pack(2, __pyx_n_s_idt, __pyx_n_s_z); if (unlikely(!__pyx_tuple__56)) __PYX_ERR(0, 82, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__56);
  __Pyx_GIVEREF(__pyx_tuple__56);
  __pyx_codeobj__57 = (PyObject*)__Pyx_PyCode_New(0, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__56, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_pencarian_nologin, 82, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__57)) __PYX_ERR(0, 82, __pyx_L1_error)

  
  __pyx_tuple__58 = PyTuple_Pack(6, __pyx_n_s_link, __pyx_n_s_r, __pyx_n_s_x, __pyx_n_s_data, __pyx_n_s_uid_2, __pyx_n_s_nama); if (unlikely(!__pyx_tuple__58)) __PYX_ERR(0, 90, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__58);
  __Pyx_GIVEREF(__pyx_tuple__58);
  __pyx_codeobj__59 = (PyObject*)__Pyx_PyCode_New(1, 0, 6, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__58, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_dump_pencarian, 90, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__59)) __PYX_ERR(0, 90, __pyx_L1_error)

  
  __pyx_tuple__60 = PyTuple_Pack(2, __pyx_n_s_idt, __pyx_n_s_url); if (unlikely(!__pyx_tuple__60)) __PYX_ERR(0, 108, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__60);
  __Pyx_GIVEREF(__pyx_tuple__60);
  __pyx_codeobj__61 = (PyObject*)__Pyx_PyCode_New(0, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__60, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_grup_tanpalogin, 108, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__61)) __PYX_ERR(0, 108, __pyx_L1_error)

  
  __pyx_tuple__62 = PyTuple_Pack(13, __pyx_n_s_url, __pyx_n_s_data, __pyx_n_s_cari, __pyx_n_s_liatnih, __pyx_n_s_spl, __pyx_n_s_idsiapa, __pyx_n_s_idyou, __pyx_n_s_namayou, __pyx_n_s_idku, __pyx_n_s_g, __pyx_n_s_css, __pyx_n_s_bcj, __pyx_n_s_bcj2); if (unlikely(!__pyx_tuple__62)) __PYX_ERR(0, 115, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__62);
  __Pyx_GIVEREF(__pyx_tuple__62);
  __pyx_codeobj__63 = (PyObject*)__Pyx_PyCode_New(1, 0, 13, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__62, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_get_datagrup, 115, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__63)) __PYX_ERR(0, 115, __pyx_L1_error)

  
  __pyx_tuple__64 = PyTuple_Pack(12, __pyx_n_s_token, __pyx_n_s_no, __pyx_n_s_i, __pyx_n_s_nama, __pyx_n_s_uid_2, __pyx_n_s_priv, __pyx_n_s_type, __pyx_n_s_url, __pyx_n_s_anggota, __pyx_n_s_ask, __pyx_n_s_kontol, __pyx_n_s_e); if (unlikely(!__pyx_tuple__64)) __PYX_ERR(0, 152, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__64);
  __Pyx_GIVEREF(__pyx_tuple__64);
  __pyx_codeobj__65 = (PyObject*)__Pyx_PyCode_New(1, 0, 12, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__64, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_grupbergabung, 152, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__65)) __PYX_ERR(0, 152, __pyx_L1_error)

  
  __pyx_tuple__66 = PyTuple_Pack(4, __pyx_n_s_token, __pyx_n_s_nama, __pyx_n_s_z, __pyx_n_s_url); if (unlikely(!__pyx_tuple__66)) __PYX_ERR(0, 180, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__66);
  __Pyx_GIVEREF(__pyx_tuple__66);
  __pyx_codeobj__67 = (PyObject*)__Pyx_PyCode_New(1, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__66, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_pencarianteman, 180, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__67)) __PYX_ERR(0, 180, __pyx_L1_error)

  
  __pyx_tuple__68 = PyTuple_Pack(12, __pyx_n_s_url, __pyx_n_s_token, __pyx_n_s_z, __pyx_n_s_data, __pyx_n_s_x, __pyx_n_s_ids, __pyx_n_s_uid_2, __pyx_n_s_jum, __pyx_n_s_e, __pyx_n_s_ask, __pyx_n_s_link, __pyx_n_s_kontol); if (unlikely(!__pyx_tuple__68)) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__68);
  __Pyx_GIVEREF(__pyx_tuple__68);
  __pyx_codeobj__69 = (PyObject*)__Pyx_PyCode_New(3, 0, 12, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__68, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_get_pencarianteman, 187, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__69)) __PYX_ERR(0, 187, __pyx_L1_error)

  
  __pyx_tuple__70 = PyTuple_Pack(11, __pyx_n_s_token, __pyx_n_s_user, __pyx_n_s_limit, __pyx_n_s_idt, __pyx_n_s_z, __pyx_n_s_i, __pyx_n_s_uid_2, __pyx_n_s_jum, __pyx_n_s_ask, __pyx_n_s_kontol, __pyx_n_s_e); if (unlikely(!__pyx_tuple__70)) __PYX_ERR(0, 217, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__70);
  __Pyx_GIVEREF(__pyx_tuple__70);
  __pyx_codeobj__71 = (PyObject*)__Pyx_PyCode_New(1, 0, 11, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__70, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_temandariteman, 217, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__71)) __PYX_ERR(0, 217, __pyx_L1_error)

  
  __pyx_tuple__72 = PyTuple_Pack(4, __pyx_n_s_token, __pyx_n_s_user, __pyx_n_s_idt, __pyx_n_s_i); if (unlikely(!__pyx_tuple__72)) __PYX_ERR(0, 245, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__72);
  __Pyx_GIVEREF(__pyx_tuple__72);
  __pyx_codeobj__73 = (PyObject*)__Pyx_PyCode_New(1, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__72, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_publik, 245, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__73)) __PYX_ERR(0, 245, __pyx_L1_error)

  
  __pyx_tuple__74 = PyTuple_Pack(7, __pyx_n_s_token, __pyx_n_s_tanya_total, __pyx_n_s_t, __pyx_n_s_user, __pyx_n_s_idt, __pyx_n_s_i, __pyx_n_s_iso); if (unlikely(!__pyx_tuple__74)) __PYX_ERR(0, 261, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__74);
  __Pyx_GIVEREF(__pyx_tuple__74);
  __pyx_codeobj__75 = (PyObject*)__Pyx_PyCode_New(1, 0, 7, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__74, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_massal, 261, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__75)) __PYX_ERR(0, 261, __pyx_L1_error)

  
  __pyx_tuple__76 = PyTuple_Pack(4, __pyx_n_s_token, __pyx_n_s_user, __pyx_n_s_idt, __pyx_n_s_i); if (unlikely(!__pyx_tuple__76)) __PYX_ERR(0, 286, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__76);
  __Pyx_GIVEREF(__pyx_tuple__76);
  __pyx_codeobj__77 = (PyObject*)__Pyx_PyCode_New(1, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__76, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_followers, 286, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__77)) __PYX_ERR(0, 286, __pyx_L1_error)

  
  __pyx_tuple__78 = PyTuple_Pack(3, __pyx_n_s_token, __pyx_n_s_idt, __pyx_n_s_i); if (unlikely(!__pyx_tuple__78)) __PYX_ERR(0, 302, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__78);
  __Pyx_GIVEREF(__pyx_tuple__78);
  __pyx_codeobj__79 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__78, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_like, 302, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__79)) __PYX_ERR(0, 302, __pyx_L1_error)

  
  __pyx_tuple__80 = PyTuple_Pack(12, __pyx_n_s_token, __pyx_n_s_jumlah, __pyx_n_s_old, __pyx_n_s_digit, __pyx_n_s_idg, __pyx_n_s_depan, __pyx_n_s_belakang, __pyx_n_s_i, __pyx_n_s_x, __pyx_n_s_idt, __pyx_n_s_data, __pyx_n_s_nama); if (unlikely(!__pyx_tuple__80)) __PYX_ERR(0, 314, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__80);
  __Pyx_GIVEREF(__pyx_tuple__80);
  __pyx_codeobj__81 = (PyObject*)__Pyx_PyCode_New(1, 0, 12, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__80, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_randomold, 314, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__81)) __PYX_ERR(0, 314, __pyx_L1_error)

  
  __pyx_tuple__82 = PyTuple_Pack(11, __pyx_n_s_token, __pyx_n_s_jumlah, __pyx_n_s_digit, __pyx_n_s_idg, __pyx_n_s_depan, __pyx_n_s_belakang, __pyx_n_s_i, __pyx_n_s_x, __pyx_n_s_idt, __pyx_n_s_data, __pyx_n_s_nama); if (unlikely(!__pyx_tuple__82)) __PYX_ERR(0, 338, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__82);
  __Pyx_GIVEREF(__pyx_tuple__82);
  __pyx_codeobj__83 = (PyObject*)__Pyx_PyCode_New(1, 0, 11, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__82, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_randomnew, 338, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__83)) __PYX_ERR(0, 338, __pyx_L1_error)

  
  __pyx_tuple__84 = PyTuple_Pack(3, __pyx_n_s_cok, __pyx_n_s_idg, __pyx_n_s_url); if (unlikely(!__pyx_tuple__84)) __PYX_ERR(0, 363, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__84);
  __Pyx_GIVEREF(__pyx_tuple__84);
  __pyx_codeobj__85 = (PyObject*)__Pyx_PyCode_New(0, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__84, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_komentar, 363, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__85)) __PYX_ERR(0, 363, __pyx_L1_error)

  
  __pyx_tuple__86 = PyTuple_Pack(11, __pyx_n_s_url, __pyx_n_s_cok, __pyx_n_s_kue, __pyx_n_s_urlmain, __pyx_n_s_par, __pyx_n_s_xf, __pyx_n_s_xx, __pyx_n_s_z, __pyx_n_s_x, __pyx_n_s_uid_2, __pyx_n_s_n); if (unlikely(!__pyx_tuple__86)) __PYX_ERR(0, 376, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__86);
  __Pyx_GIVEREF(__pyx_tuple__86);
  __pyx_codeobj__87 = (PyObject*)__Pyx_PyCode_New(1, 0, 11, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__86, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_dump_komentar, 376, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__87)) __PYX_ERR(0, 376, __pyx_L1_error)

  
  __pyx_tuple__88 = PyTuple_Pack(2, __pyx_n_s_cok, __pyx_n_s_url); if (unlikely(!__pyx_tuple__88)) __PYX_ERR(0, 399, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__88);
  __Pyx_GIVEREF(__pyx_tuple__88);
  __pyx_codeobj__89 = (PyObject*)__Pyx_PyCode_New(0, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__88, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_saranteman, 399, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__89)) __PYX_ERR(0, 399, __pyx_L1_error)

  
  __pyx_tuple__90 = PyTuple_Pack(2, __pyx_n_s_cok, __pyx_n_s_url); if (unlikely(!__pyx_tuple__90)) __PYX_ERR(0, 410, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__90);
  __Pyx_GIVEREF(__pyx_tuple__90);
  __pyx_codeobj__91 = (PyObject*)__Pyx_PyCode_New(0, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__90, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_permintaanteman, 410, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__91)) __PYX_ERR(0, 410, __pyx_L1_error)

  
  __pyx_tuple__92 = PyTuple_Pack(7, __pyx_n_s_url, __pyx_n_s_cok, __pyx_n_s_kue, __pyx_n_s_s, __pyx_n_s_x, __pyx_n_s_nama, __pyx_n_s_idx); if (unlikely(!__pyx_tuple__92)) __PYX_ERR(0, 420, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__92);
  __Pyx_GIVEREF(__pyx_tuple__92);
  __pyx_codeobj__93 = (PyObject*)__Pyx_PyCode_New(1, 0, 7, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__92, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_dump_saran, 420, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__93)) __PYX_ERR(0, 420, __pyx_L1_error)

  
  __pyx_tuple__94 = PyTuple_Pack(5, __pyx_n_s_cok, __pyx_n_s_cookie, __pyx_n_s_type, __pyx_n_s_idt, __pyx_n_s_url); if (unlikely(!__pyx_tuple__94)) __PYX_ERR(0, 439, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__94);
  __Pyx_GIVEREF(__pyx_tuple__94);
  __pyx_codeobj__95 = (PyObject*)__Pyx_PyCode_New(0, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__94, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_reactions, 439, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__95)) __PYX_ERR(0, 439, __pyx_L1_error)

  
  __pyx_tuple__96 = PyTuple_Pack(9, __pyx_n_s_url, __pyx_n_s_cookie, __pyx_n_s_data, __pyx_n_s_isi, __pyx_n_s_ids, __pyx_n_s_uid_2, __pyx_n_s_nama, __pyx_n_s_lanjut, __pyx_n_s_e); if (unlikely(!__pyx_tuple__96)) __PYX_ERR(0, 473, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__96);
  __Pyx_GIVEREF(__pyx_tuple__96);
  __pyx_codeobj__97 = (PyObject*)__Pyx_PyCode_New(2, 0, 9, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__96, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_dump_py, __pyx_n_s_dump_react, 473, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__97)) __PYX_ERR(0, 473, __pyx_L1_error)
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
  __pyx_int_15 = PyInt_FromLong(15); if (unlikely(!__pyx_int_15)) __PYX_ERR(0, 1, __pyx_L1_error)
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
__Pyx_PyMODINIT_FUNC initdump(void) CYTHON_SMALL_CODE; 
__Pyx_PyMODINIT_FUNC initdump(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_dump(void) CYTHON_SMALL_CODE; 
__Pyx_PyMODINIT_FUNC PyInit_dump(void)
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


static CYTHON_SMALL_CODE int __pyx_pymod_exec_dump(PyObject *__pyx_pyinit_module)
#endif
#endif
{
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  if (__pyx_m) {
    if (__pyx_m == __pyx_pyinit_module) return 0;
    PyErr_SetString(PyExc_RuntimeError, "Module 'dump' has already been imported. Re-initialisation is not supported.");
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
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_dump(void)", 0);
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
  __pyx_m = Py_InitModule4("dump", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
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
  if (__pyx_module_is_main_dump) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name_2, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "dump")) {
      if (unlikely(PyDict_SetItemString(modules, "dump", __pyx_m) < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
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
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_subprocess, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_subprocess, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_uuid, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_uuid, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_json, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_json, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_threading, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_threading, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
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
  __Pyx_INCREF(__pyx_n_s_Panel);
  __Pyx_GIVEREF(__pyx_n_s_Panel);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_Panel);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_rich_panel, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_Panel); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Panel, __pyx_t_2) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_Tree);
  __Pyx_GIVEREF(__pyx_n_s_Tree);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_Tree);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_rich_tree, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Tree); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_garis, __pyx_t_1) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_print);
  __Pyx_GIVEREF(__pyx_n_s_print);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_print);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_rich, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_prints, __pyx_t_2) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_login);
  __Pyx_GIVEREF(__pyx_n_s_login);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_login);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_src, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_login); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Login, __pyx_t_1) < 0) __PYX_ERR(0, 8, __pyx_L1_error)
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
  __Pyx_INCREF(__pyx_n_s_crack);
  __Pyx_GIVEREF(__pyx_n_s_crack);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_crack);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_src, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_crack); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Crack, __pyx_t_1) < 0) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_P, __pyx_kp_u_1_97m) < 0) __PYX_ERR(0, 13, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_M, __pyx_kp_u_1_91m) < 0) __PYX_ERR(0, 14, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_H, __pyx_kp_u_1_92m) < 0) __PYX_ERR(0, 15, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_K, __pyx_kp_u_1_93m) < 0) __PYX_ERR(0, 16, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_B, __pyx_kp_u_1_94m) < 0) __PYX_ERR(0, 17, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_U, __pyx_kp_u_1_95m) < 0) __PYX_ERR(0, 18, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_O, __pyx_kp_u_1_96m) < 0) __PYX_ERR(0, 19, __pyx_L1_error)

  
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_N, __pyx_kp_u_0m) < 0) __PYX_ERR(0, 20, __pyx_L1_error)

  
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_requests); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_Session); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_CallNoArg(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ses, __pyx_t_2) < 0) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_id, __pyx_t_2) < 0) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_id_group, __pyx_t_2) < 0) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_komen, __pyx_t_2) < 0) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_idteman, __pyx_t_2) < 0) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 27, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_data_teman, __pyx_t_2) < 0) __PYX_ERR(0, 27, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_teman, __pyx_t_2) < 0) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_te, __pyx_t_2) < 0) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 30, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_user_agent, __pyx_kp_u_Mozilla_5_0_SymbianOS_9_3_Series) < 0) __PYX_ERR(0, 30, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_header_grup_tanpalogin, __pyx_t_2) < 0) __PYX_ERR(0, 30, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 31, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_user_agent, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_Mi) < 0) __PYX_ERR(0, 31, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_header_grup, __pyx_t_2) < 0) __PYX_ERR(0, 31, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_1convert_id, 0, __pyx_n_s_convert_id, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__49)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_convert_id, __pyx_t_2) < 0) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_3get_data, 0, __pyx_n_s_get_data, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__51)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_data, __pyx_t_2) < 0) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_5get_dump, 0, __pyx_n_s_get_dump, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__53)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 57, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_dump, __pyx_t_2) < 0) __PYX_ERR(0, 57, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_7dump_file, 0, __pyx_n_s_dump_file, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__55)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 69, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_dump_file, __pyx_t_2) < 0) __PYX_ERR(0, 69, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_9pencarian_nologin, 0, __pyx_n_s_pencarian_nologin, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__57)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 82, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_pencarian_nologin, __pyx_t_2) < 0) __PYX_ERR(0, 82, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_11dump_pencarian, 0, __pyx_n_s_dump_pencarian, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__59)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 90, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_dump_pencarian, __pyx_t_2) < 0) __PYX_ERR(0, 90, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_13grup_tanpalogin, 0, __pyx_n_s_grup_tanpalogin, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__61)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 108, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_grup_tanpalogin, __pyx_t_2) < 0) __PYX_ERR(0, 108, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_15get_datagrup, 0, __pyx_n_s_get_datagrup, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__63)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 115, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_datagrup, __pyx_t_2) < 0) __PYX_ERR(0, 115, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_17grupbergabung, 0, __pyx_n_s_grupbergabung, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__65)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 152, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_grupbergabung, __pyx_t_2) < 0) __PYX_ERR(0, 152, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_19pencarianteman, 0, __pyx_n_s_pencarianteman, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__67)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 180, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_pencarianteman, __pyx_t_2) < 0) __PYX_ERR(0, 180, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_21get_pencarianteman, 0, __pyx_n_s_get_pencarianteman, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__69)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_pencarianteman, __pyx_t_2) < 0) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_23temandariteman, 0, __pyx_n_s_temandariteman, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__71)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 217, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_temandariteman, __pyx_t_2) < 0) __PYX_ERR(0, 217, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_25publik, 0, __pyx_n_s_publik, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__73)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 245, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_publik, __pyx_t_2) < 0) __PYX_ERR(0, 245, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_27massal, 0, __pyx_n_s_massal, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__75)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 261, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_massal, __pyx_t_2) < 0) __PYX_ERR(0, 261, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_29followers, 0, __pyx_n_s_followers, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__77)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 286, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_followers, __pyx_t_2) < 0) __PYX_ERR(0, 286, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_31like, 0, __pyx_n_s_like, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__79)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 302, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_like, __pyx_t_2) < 0) __PYX_ERR(0, 302, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_33randomold, 0, __pyx_n_s_randomold, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__81)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 314, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_randomold, __pyx_t_2) < 0) __PYX_ERR(0, 314, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_35randomnew, 0, __pyx_n_s_randomnew, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__83)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 338, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_randomnew, __pyx_t_2) < 0) __PYX_ERR(0, 338, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_37komentar, 0, __pyx_n_s_komentar, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__85)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 363, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_komentar, __pyx_t_2) < 0) __PYX_ERR(0, 363, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_39dump_komentar, 0, __pyx_n_s_dump_komentar, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__87)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 376, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_dump_komentar, __pyx_t_2) < 0) __PYX_ERR(0, 376, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_41saranteman, 0, __pyx_n_s_saranteman, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__89)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 399, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_saranteman, __pyx_t_2) < 0) __PYX_ERR(0, 399, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_43permintaanteman, 0, __pyx_n_s_permintaanteman, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__91)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 410, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_permintaanteman, __pyx_t_2) < 0) __PYX_ERR(0, 410, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_45dump_saran, 0, __pyx_n_s_dump_saran, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__93)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 420, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_dump_saran, __pyx_t_2) < 0) __PYX_ERR(0, 420, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_47reactions, 0, __pyx_n_s_reactions, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__95)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 439, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_reactions, __pyx_t_2) < 0) __PYX_ERR(0, 439, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_4dump_49dump_react, 0, __pyx_n_s_dump_react, NULL, __pyx_n_s_dump, __pyx_d, ((PyObject *)__pyx_codeobj__97)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 473, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_dump_react, __pyx_t_2) < 0) __PYX_ERR(0, 473, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  
  __pyx_t_2 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_2) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  

  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  if (__pyx_m) {
    if (__pyx_d) {
      __Pyx_AddTraceback("init dump", __pyx_clineno, __pyx_lineno, __pyx_filename);
    }
    Py_CLEAR(__pyx_m);
  } else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_ImportError, "init dump");
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


static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname) {
    PyErr_Format(PyExc_UnboundLocalError, "local variable '%s' referenced before assignment", varname);
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
