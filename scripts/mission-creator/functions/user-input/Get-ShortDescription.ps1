function Get-ShortDescription {
	$promptMessage = "Give a short description of your mission (for the loading screen)"
	$errorMessage = "You must provide a short description"
	$script:shortDescription = Prompt-User $promptMessage $errorMessage
}