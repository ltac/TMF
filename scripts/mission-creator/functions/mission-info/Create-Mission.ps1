<#
 # .Synopsis
 # Creates a new ARMA 3 mission folder with the provided info
 #
 # .Description
 # Creates a new ARMA 3 mission folder with the provided info.
 #>
function Create-Mission {
	Write-Host "Creating your new mission..."
	
	# Get the mission folder name and extension from the Script scope
	# to create the new mission directory
	Create-MissionFolder $script:missionFolder $script:missionMap
	
	# Create the markdown README file for the mission
	# Create-MissionReadme $script:missionName
	
	# Remove the Addons from the mission.sqm file
	Replace-Addons
	
	# Set the mission name and description in mission.sqm
	Update-MissionSqm	
	
	# Set the mission details in description.ext
	Update-DescriptionExt
}