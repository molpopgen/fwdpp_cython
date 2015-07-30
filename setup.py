#!/usr/bin/env python

from distutils.core import setup, Extension
from Cython.Build import cythonize

setup(ext_modules = cythonize(Extension(
           "fwdpp_cython",                                # the extesion name
           sources=["fwdpp_cython.pyx",'neutral.cpp','sample.cpp'], # the Cython source and
                                                  # additional C++ source files
           language="c++",                        # generate and compile C++ code
           extra_compile_args=["-std=c++11","-I."],
           extra_link_args=["-std=c++11"],
           libraries=["gsl","gslcblas","tcmalloc","sequence"]
      )))
