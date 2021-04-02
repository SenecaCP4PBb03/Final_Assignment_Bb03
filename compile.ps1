# PS script to compile and run a C program.
Param (
[Parameter(Position = 0, Mandatory=$True)]
[ValidateNotNull()]
$source_file)

$ErrorActionPreference = 'Stop'

Write-Host "`nCompile C source file" $source_file "and run as" (Get-Item $source_file ).Basename
# temporarily add MinGW folder to environment PATH
Set-Item -Path Env:Path -Value ("C:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin;" + $Env:Path )
# compile source file as source filename without extension
gcc $source_file -o (Get-Item $source_file).Basename
#create executable name
$exe = (Get-Item $source_file).Basename + ".exe"
Write-Host "> Running" $exe "`n"
& .\$exe
Read-Host -Prompt "`n> End of program. Press ENTER to continue."