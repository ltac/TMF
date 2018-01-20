function Get-MissionName {
	$promptMessage = "What is the display name for your mission? (e.g. Operation Mongoose)"
	$errorMessage = "You must provide a display name"
	$script:missionName = Prompt-User $promptMessage $errorMessage
}