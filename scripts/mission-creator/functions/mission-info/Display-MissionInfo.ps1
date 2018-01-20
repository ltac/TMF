<#
 # .Synopsis
 # Displays all user-entered mission information
 #
 # .Description
 # Displays all user-entered mission information. All data is read from
 # script-scope variables
 #>
function Display-MissionInfo {
	Print-Separator
	Write-Host "Mission Details"
	
	Write-Host "`tMission Name: $missionName"
	Write-Host "`tMission Folder: $missionFolder"
	Write-Host "`tAuthor: $missionAuthor"
	Write-Host "`tMap: $missionMap"
	Write-Host "`tMission Type: $missionType"
	Write-Host "`tLoading Screen Text: $shortDescription"
	Write-Host "`tMission Select Text: $longDescription"
}