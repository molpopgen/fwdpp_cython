#ifndef __FWDPP_CYTHON_SINGLEPOP_HPP__
#define __FWDPP_CYTHON_SINGLEPOP_HPP__

#include <fwdpp/diploid.hh>
#include <fwdpp/sugar.hpp> //lazy include of sugar library

namespace fwdpp_cython {
  
  using singlepop_t = KTfwd::singlepop_serialized<KTfwd::popgenmut,KTfwd::mutation_writer,KTfwd::mutation_reader<KTfwd::popgenmut>>;
  using test_t = KTfwd::singlepop_serialized<KTfwd::popgenmut,KTfwd::mutation_writer,KTfwd::mutation_reader<KTfwd::popgenmut>>;
  
  using test = KTfwd::singlepop_serialized<KTfwd::popgenmut,KTfwd::mutation_writer,KTfwd::mutation_reader<KTfwd::popgenmut>>;
  
  void evolve(singlepop_t * pop,
	      const double & theta,
	      const double & rho,
	      const unsigned & seed);

  std::vector<int> sfs(const unsigned & seed,const singlepop_t * pop,const unsigned & nsam);
}

#endif
