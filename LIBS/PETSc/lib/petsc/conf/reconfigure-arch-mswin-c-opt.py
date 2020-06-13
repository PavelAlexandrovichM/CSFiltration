#!/usr/bin/python
if __name__ == '__main__':
  import sys
  import os
  sys.path.insert(0, os.path.abspath('config'))
  import configure
  configure_options = [
    '--download-f2cblaslapack',
    '--with-cc=win32fe cl',
    '--with-debugging=0',
    '--with-fc=0',
    '--with-mpi-include=/cygdrive/c/Program Files (x86)/Microsoft SDKs/MPI/Include',
    '--with-mpi-lib=[/cygdrive/c/Program Files (x86)/Microsoft SDKs/MPI/Lib/x64/msmpi.lib]',
    '--with-mpi-mpiexec=/cygdrive/c/Program Files/Microsoft MPI/Bin/mpiexec.exe',
    '-CFLAGS=-O2 -MD -wd4996',
    '-CXXFLAGS=-O2 -MD -wd4996',
    'PETSC_ARCH=arch-mswin-c-opt',
  ]
  configure.petsc_configure(configure_options)
