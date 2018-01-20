function Get-Author {
	$promptMessage = "What is the Author's name for your mission?"
	$errorMessage = "You must provide an Author"
	$script:missionAuthor = Prompt-User $promptMessage $errorMessage
}