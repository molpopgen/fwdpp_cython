#include <sample.hpp>


namespace fwdpp_cython {
  
  std::vector<std::pair<double,std::string> > take_sample_from_pop(GSLrng_t * rng,const singlepop_t * pop,const unsigned & nsam)
  {
    return KTfwd::ms_sample(rng->get(),&pop->diploids,nsam,true);
  }

}
