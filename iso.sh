#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/parakeetos.kernel isodir/boot/parakeetos.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "Parakeet OS" {
	multiboot /boot/parakeetos.kernel
}
EOF
grub-mkrescue -o parakeetos.iso isodir
