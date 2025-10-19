chmod 777 * -R -v
ac_cv_lib_rt_mq_open=yes LIBS="-lrt" LDFLAGS="-Wl,--no-as-needed" ./configure --prefix=$PREFIX
make -j8
make install
