<#
 # .Synopsis
 # Empties the addons sections of mission.sqm
 #>
function Replace-Addons {
	$missionFile = Join-Path $script:missionPath mission.sqm
	$fileText = gc $missionFile -raw
	
	# Replace the addOns and addOnsAuto sections
	$fileText = $fileText -replace "(?smi)addOns\[\]([^;]*)", "addOns[]={}"
	$fileText = $fileText -replace "(?smi)addOnsAuto\[\]([^;]*)", "addOnsAuto[]={}"
	
	# Update the file with the new text
	sc $missionFile $fileText
}