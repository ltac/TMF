<#
 # .Synopsis
 # Creates the README for the new mission
 #
 # .Parameter missionName
 # 		The display name of the mission
 #>
function Create-MissionReadme {
	param (
		[parameter(Mandatory=$true)][string]$missionName
	)

	# Retrieve the mission-readme.md file
	$templateFile = Join-Path (Get-RepoPath) "mission-readme.md"
	
	# Generate the path to the mission README we're about to create
	$readmeFile = "$script:missionPath\README.md"
	
	# Copy the template readme file into our mission directory as README.md
	Copy-Item $templateFile $readmeFile
	
	# Replace the name of the mission in the README
	Replace-MissionName
}