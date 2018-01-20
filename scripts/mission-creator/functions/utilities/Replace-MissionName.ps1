<#
 # .Synopsis
 # Replaces MISSION_NAME in mission README file. The replacement text is
 # pulled from the Script variable missionName
 #
 # .Parameter readmeFile
 #		The file in which the text will be replaced
 #>
function Replace-MissionName {
	(gc $readmeFile).replace('MISSION_NAME', $script:missionName) | sc $readmeFile
}