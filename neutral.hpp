#ifndef __FWDPP_CYTHON_SINGLEPOP_HPP__
#define __FWDPP_CYTHON_SINGLEPOP_HPP__

#include <fwdpp/diploid.hh>
#include <fwdpp/sugar.hpp> //lazy include of sugar library

namespace fwdpp_cython {

  using GSLrng_t = KTfwd::GSLrng_t<KTfwd::GSL_RNG_MT19937>;
  using singlepop_t = KTfwd::singlepop_serialized<KTfwd::popgenmut,KTfwd::mutation_writer,KTfwd::mutation_reader<KTfwd::popgenmut>>;
  
  using test = KTfwd::singlepop_serialized<KTfwd::popgenmut,KTfwd::mutation_writer,KTfwd::mutation_reader<KTfwd::popgenmut>>;
  
  void evolve_pop(GSLrng_t * rng, singlepop_t * pop, const unsigned & ngens,const double & theta, const double & rho);
  std::vector<int> sfs_from_sample(GSLrng_t * rng,const singlepop_t * pop,const unsigned & nsam);
}

#endif
