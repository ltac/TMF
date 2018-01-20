<#
 # .Synopsis
 # Prompts the user for input with the provided $promptMessage and returns
 # the value provided by the user.
 #
 # .Description
 # Prompts the user for input with the provided $promptMessage and returns
 # the value provided by the user. If the user does not provide input,
 # they are shown $errorMessage and prompted again.
 #
 # .Parameter promptMessage
 # 		The text to prompt the user with
 #
 # .Parameter errorMessage
 #		The text to display to the user if they do not provide any input
 #
 # .Outputs
 # 		System.String Returns the string that the user provided to prompt
 #>
function Prompt-User {
	param (
		[parameter(Mandatory=$true)][string]$promptMessage,
		[parameter(Mandatory=$true)][string]$errorMessage
	)
	
	Print-Separator
	
	do {
		$result = Read-Host "$promptMessage"
		
		# Don't like this duplicated condition,
		# but I can live with it for usability
		if (-Not $result) { Write-Host "$errorMessage" }
	} while (-Not $result)
	
	$result
}