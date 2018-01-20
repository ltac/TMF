<#
 # .Synopsis
 # Creates the directory for the new mission
 #
 # .Description
 # Creates a new directory for the mission in the generated-missions folder
 # with the format folderName.folderExtension, then copies all contents of
 # LTMF.VR to the new directory
 #
 # .Parameter folderName
 # 		The name of the mission that will be used to name the folder
 #
 # .Parameter folderExtension
 # 		The name of the map that will be used to name the folder
 #>
function Create-MissionFolder {
	param (
		[parameter(Mandatory=$true)][string]$folderName,
		[parameter(Mandatory=$true)][string]$folderExtension
	)

	# Retrieve the LTMF.VR folder
	$frameworkDirectory = Get-BaseFrameworkPath
	
	# Retrieve the output folder where we will place our new folder
	$outputDirectory = Get-OutputPath
	
	# Generate the absolute path for our new directory
	$newDirectory = (Join-Path $outputDirectory ($folderName + "." + $folderExtension))
	
	# Create our new directory; if it already exists, delete the existing first
	if (Test-Path $newDirectory) {
		Remove-Item $newDirectory -recurse
	}
	md $newDirectory
	
	# Copy the contents of LTMF.VR into our new directory
	Copy-Item $frameworkDirectory\* $newDirectory -recurse
	
	# Save the newly created path in the Script variable
	$script:missionPath = $newDirectory
}