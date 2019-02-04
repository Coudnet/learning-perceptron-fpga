
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name TrainingPerseptron -dir "D:/NIRS/NeuronLearning/learning-perceptron-fpga/planAhead_run_1" -part xc6slx4tqg144-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Main.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {ipcore_dir/INCREMENT.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/DECREMENT.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/MULTIPLY.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Main.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top Main $srcset
add_files [list {Main.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/Adder.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/DECREMENT.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/INCREMENT.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/MULTIPLY.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx4tqg144-3
