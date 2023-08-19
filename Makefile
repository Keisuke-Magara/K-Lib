# K-Lib build & install
# 2023-08-19 by Keisuke Magara.

build:
	echo "Build"

install: klib.a
	mv ./klib.a /usr/local/include
