chmod 777 * -R -v
echo "ac_cv_lib_rt_mq_open=yes" > config.cache
ac_cv_lib_rt_mq_open=yes LIBS="-lrt" LDFLAGS="-Wl,--no-as-needed" ./configure --prefix=$PREFIX
