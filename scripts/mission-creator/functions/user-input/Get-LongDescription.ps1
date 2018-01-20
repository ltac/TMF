function Get-LongDescription {
	$promptMessage = "Give a more detailed description of your mission (for the mission selection screen)"
	$errorMessage = "You must provide a detailed description"
	$script:longDescription = Prompt-User $promptMessage $errorMessage
}