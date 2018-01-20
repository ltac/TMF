# LTMF Mission Creator #
This is a Windows PowerShell application that helps to automate new mission
creation using LTMF.

## Install ##
No installation necessary; all you need are the source files, which are all
included in the *mission-creator* directory.

## Run ##
There are a few steps to running the program only because of how Windows
handles the security of running PowerShell scripts. At a high-level, we're
going to relax the security rules, then run the script, then reset the
security rules:

1. Open a PowerShell Prompt as Administrator. The easiest way I've found to
do this is to hit the Windows key and simply type *PowerShell* into the search,
then in the search results, right-click the *Windows PowerShell* shortcut and
choose *Run as Administrator*.
1. Relax the security settings by entering the following command:
`Set-ExecutionPolicy Unrestricted`
This will allow any PowerShell programs to run.
1. Run the program by entering the following command:
`.\new-mission.ps1`
then just follow the on-screen prompts.
1. Tighten the security settings back up by entering the following command:
`Set-ExecutionPolicy Restricted`

Once you've provided all the information, your new mission folder will be
available at *mission-creator/generated-missions/*.

## Notes ##

* If you happen to create a new mission with the same folder name as a folder
that already exists in *mission-creator/generated-mission/", the program will
completely remove the existing folder to make way for the new one.