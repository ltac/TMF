<#
 # .Synopsis
 # Asks the user to confirm mission information before creating
 #
 # .Description
 # Asks the user to confirm mission information before creating
 # If the user approves, the Mission is created
 # If the user rejects, the program starts over
 #>
function Confirm-MissionInfo {
	Print-Separator
	
	$title = "Confirm Mission Details"
	$message = "Are all of your Mission Details correct?"
	
	$yes = New-Object System.Management.Automation.Host.ChoiceDescription "&Yes", "All done! Creates your new mission."
	$no = New-Object System.Management.Automation.Host.ChoiceDescription "&No", "Starts over so you can re-enter information."
	
	$options = [System.management.Automation.Host.ChoiceDescription[]]($yes, $no)
	
	$response = $host.ui.PromptForChoice($title, $message, $options, 0)
	
	switch ($response) {
		0 { Create-Mission }
		1 { Get-Mission-Info }
	}
}