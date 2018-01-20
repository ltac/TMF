<#
 # .Synopsis
 # Updates the Mission Name and Description in mission.sqm
 #>
function Update-MissionSqm {
	$missionFile = Join-Path $script:missionPath mission.sqm
	$fileText = gc $missionFile -raw
	
	# Replace the briefingName and overviewText variables
	$fileText = $fileText -replace "(?smi)briefingName([^;]*)", "briefingName=`"$script:missionName`""
	$fileText = $fileText -replace "(?smi)overviewText([^;]*)", "overviewText=`"$script:shortDescription`""
	
	# Update the file with the new text
	sc $missionFile $fileText
}