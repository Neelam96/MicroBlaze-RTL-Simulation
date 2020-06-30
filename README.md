# MicroBlaze-RTL-Simulation

Stuff related to do MicroBlaze RTL Simulation can be found out here

## Softwares Used

Vivado WebPACK 2019.1 

## Create a custom IP from HLS

In your HLS command prompt type:

```tcl

vivado_hls -f script.tcl
vivado_hls -p Array_sum

```

Array_sum in the second command is the name of the project which is mentioned in script.tcl.

## Create Vivado project using TCL


```tcl

source <path-to-build.tcl>/build.tcl

```

##Example calculations for an input clock of 100MHz in block design
Below calculations can be found in testbench.vhd for their use in the same file.
```
system input clock = 100 MHz, half-period = 5 ns
UART Baud rate 115200. => 100M/115200 TB-clock-cycles.
(100M/115200) = 868 = 0x364, half/mid = 434 = 0x1B2

```

## Debugging any error encountered while sourcing build.tcl
	- ERROR: [BD_TCL-115] The following IPs are not found in the IP Catalog.
	Solution:
	- Change your IP repository path of Sum_arr obtained from HLS in line no 179 of build.tcl because it has ip repo path which is to be changed to your ip path.




## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

<!--## Some minor issues that I faced while uploading
[warning: LF will be replaced by CRLF and Special characters appear](https://github.com/gobuffalo/buffalo/issues/1189) -->

## References

- [Exporting your HLS project as a TCL file](http://venividiwiki.ee.virginia.edu/mediawiki/index.php/Exporting_your_HLS_project_as_a_TCL_file)
- [Version control for Vivado projects](http://www.fpgadeveloper.com/2014/08/version-control-for-vivado-projects.html)

<!--## License
[MIT](https://choosealicense.com/licenses/mit/) -->
