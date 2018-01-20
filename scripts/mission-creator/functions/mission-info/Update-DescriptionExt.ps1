<#
 # .Synopsis
 # Updates the description.ext with Mission details
 #>
function Update-DescriptionExt {
	$missionFile = Join-Path $script:missionPath description.ext
	$fileText = gc $missionFile -raw
	
	# Replace all mission details
	$fileText = $fileText -replace "(?smi)gameType([^;]*)", "gameType=$script:missionType"
	$fileText = $fileText -replace "(?smi)onLoadName([^;]*)", "onLoadName=`"$script:missionName`""
	$fileText = $fileText -replace "(?smi)onLoadMission([^;]*)", "onLoadMission=`"[LTMF] $script:shortDescription`""
	$fileText = $fileText -replace "(?smi)author([^;]*)", "author=`"$script:missionAuthor`""
	$fileText = $fileText -replace "(?smi)overviewText([^;]*)", "overviewText=`"$script:longDescription`""
	
	# Update the file with the new text
	sc $missionFile $fileText
}