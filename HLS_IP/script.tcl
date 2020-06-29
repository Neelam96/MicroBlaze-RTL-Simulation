############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Array_Sum
set_top sum_arr
add_files header.h
add_files core.cpp
add_files -tb test_core.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7a200tsbg484-1} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl vhdl
#source "./Array_Sum/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -rtl vhdl
export_design -rtl vhdl -format ip_catalog

exit
