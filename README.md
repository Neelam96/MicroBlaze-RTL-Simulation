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

## Debugging any error encountered while sourcing build.tcl
	- ERROR: [BD_TCL-115] The following IPs are not found in the IP Catalog.
	Solution:
	- Change your IP repository path of HOG-SVM accelerator obtained from HLS in line no 153 of build.tcl




## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Some minor issues that I faced while uploading
[warning: LF will be replaced by CRLF and Special characters appear](https://github.com/gobuffalo/buffalo/issues/1189)

## References:

[Exporting your HLS project as a TCL file](http://venividiwiki.ee.virginia.edu/mediawiki/index.php/Exporting_your_HLS_project_as_a_TCL_file)

<!--## License
[MIT](https://choosealicense.com/licenses/mit/) -->
