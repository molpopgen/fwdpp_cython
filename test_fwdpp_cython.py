#Simulate a population of N=500 diploids for 10N generations
#with theta = rho = 50.  Take a sample of size n = 20 chromosomes,
#and get the mean SFS
import fwdpp_cython
import random
import sys

SEED=int(sys.argv[1])
gsl_rng=fwdpp_cython.GSLrng(SEED)
NREPS=100
NSAM=20
N=500
GENS=10*N
THETA=50
RHO=THETA
SFS=[0]*(NSAM-1)
for i in range(0,NREPS):
    XX=fwdpp_cython.evolve(gsl_rng,N,GENS,THETA,RHO)
    sfs=fwdpp_cython.sfs_sample(gsl_rng,XX,NSAM)
    for i in range(0,(NSAM-1)):
        SFS[i]=SFS[i]+sfs[i]


#get mean of SFS
for i in range(0,(NSAM-1)):
    SFS[i]=float(SFS[i])/float(NREPS)
print(SFS)
