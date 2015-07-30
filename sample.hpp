#ifndef __FWDPP_CYTHON_SAMPLE_HPP__
#define __FWDPP_CYTHON_SAMPLE_HPP__

#include <neutral.hpp>

namespace fwdpp_cython {

  std::vector<std::pair<double,std::string> > take_sample_from_pop(GSLrng_t * rng,const singlepop_t * pop,const unsigned & nsam);
  double tajd( const std::vector<std::pair<double,std::string> > & __data );
}

#endif
