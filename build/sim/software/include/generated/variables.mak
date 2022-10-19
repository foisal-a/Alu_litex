PACKAGES=libc libcompiler_rt libbase libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata bios
PACKAGE_DIRS=/home/foisal/Litex/litex/litex/soc/software/libc /home/foisal/Litex/litex/litex/soc/software/libcompiler_rt /home/foisal/Litex/litex/litex/soc/software/libbase /home/foisal/Litex/litex/litex/soc/software/libfatfs /home/foisal/Litex/litex/litex/soc/software/liblitespi /home/foisal/Litex/litex/litex/soc/software/liblitedram /home/foisal/Litex/litex/litex/soc/software/libliteeth /home/foisal/Litex/litex/litex/soc/software/liblitesdcard /home/foisal/Litex/litex/litex/soc/software/liblitesata /home/foisal/Litex/litex/litex/soc/software/bios
LIBS=libc libcompiler_rt libbase libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata
TRIPLE=riscv64-unknown-elf
CPU=vexriscv
CPUFAMILY=riscv
CPUFLAGS=-march=rv32i2p0_m     -mabi=ilp32 -D__vexriscv__
CPUENDIANNESS=little
CLANG=0
CPU_DIRECTORY=/home/foisal/Litex/litex/litex/soc/cores/cpu/vexriscv
SOC_DIRECTORY=/home/foisal/Litex/litex/litex/soc
PICOLIBC_DIRECTORY=/home/foisal/Litex/pythondata-software-picolibc/pythondata_software_picolibc/data
COMPILER_RT_DIRECTORY=/home/foisal/Litex/pythondata-software-compiler_rt/pythondata_software_compiler_rt/data
export BUILDINC_DIRECTORY
BUILDINC_DIRECTORY=/home/foisal/Litex/build/sim/software/include
LIBC_DIRECTORY=/home/foisal/Litex/litex/litex/soc/software/libc
LIBCOMPILER_RT_DIRECTORY=/home/foisal/Litex/litex/litex/soc/software/libcompiler_rt
LIBBASE_DIRECTORY=/home/foisal/Litex/litex/litex/soc/software/libbase
LIBFATFS_DIRECTORY=/home/foisal/Litex/litex/litex/soc/software/libfatfs
LIBLITESPI_DIRECTORY=/home/foisal/Litex/litex/litex/soc/software/liblitespi
LIBLITEDRAM_DIRECTORY=/home/foisal/Litex/litex/litex/soc/software/liblitedram
LIBLITEETH_DIRECTORY=/home/foisal/Litex/litex/litex/soc/software/libliteeth
LIBLITESDCARD_DIRECTORY=/home/foisal/Litex/litex/litex/soc/software/liblitesdcard
LIBLITESATA_DIRECTORY=/home/foisal/Litex/litex/litex/soc/software/liblitesata
BIOS_DIRECTORY=/home/foisal/Litex/litex/litex/soc/software/bios
LTO=0
BIOS_CONSOLE_FULL=1