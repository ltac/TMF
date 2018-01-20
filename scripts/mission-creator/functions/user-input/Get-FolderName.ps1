function Get-FolderName {
	$promptMessage = "What is the folder name for your mission? (e.g. op-mongoose)"
	$errorMessage = "You must provide a folder name"
	$script:missionFolder = Prompt-User $promptMessage $errorMessage
}