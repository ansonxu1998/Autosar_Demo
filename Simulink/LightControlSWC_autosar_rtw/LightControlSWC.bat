
set MATLAB=D:\Tool\MATLAB\R2022b

cd .

if "%1"=="" ("D:\Tool\MATLAB\R2022b\bin\win64\gmake"  -f LightControlSWC.mk all) else ("D:\Tool\MATLAB\R2022b\bin\win64\gmake"  -f LightControlSWC.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1