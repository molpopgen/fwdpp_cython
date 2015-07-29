# distutils: language = c++
# distutils: sources = neutral.cpp

from libcpp.vector cimport vector

##Create hooks to C++ types

#This is the "singlepop" type from fwdpp/sugar/singlepop.hpp
cdef extern from "neutral.hpp" namespace "fwdpp_cython":
    cdef cppclass singlepop_t:
        singlepop_t(unsigned,unsigned)

cdef extern from "neutral.hpp" namespace "fwdpp_cython":
    cdef cppclass test_t:
        test_t(unsigned,unsigned)

##Why will no one see my fxn:
#cdef vector[int] sfs(const unsigned & seed,const singlepop_t & pop,const unsigned & nsam)
    
cdef class PySinglepop:
    cdef singlepop_t *thisptr
    def __cinit__(self,int N, int reserve_size = 100):
        self.thisptr = new singlepop_t(N,reserve_size)
    def __dealloc__(self):
        del self.thisptr

cdef class PyTest:
    cdef test_t *thisptr
    def __cinit__(self,int N, int reserve_size = 100):
        self.thisptr = new test_t(N,reserve_size)
    def __dealloc__(self):
        del self.thisptr
