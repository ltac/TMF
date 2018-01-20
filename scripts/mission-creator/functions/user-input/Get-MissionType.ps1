<#
 # .Synopsis
 # Presents the user with a choice of Mission Types
 #
 # .Description
 # Presents the user with a choice of Mission Types, then maps the response
 # to the appropriate value for the header in description.ext
 #>
function Get-MissionType {
	$title = "Game Type Selection"
	$message = "What type of mission is this?"
	
	# The Help Message (second parameter) to the ChoiceDescription will
	# be used as the value we place in description.ext. This is a little
	# cryptic, but works cleanly
	$unknown = New-Object System.Management.Automation.Host.ChoiceDescription "&Unknown", "Unknown"
	$coop = New-Object System.Management.Automation.Host.ChoiceDescription "&Co-op", "Coop"
	$dm = New-Object System.Management.Automation.Host.ChoiceDescription "Death&match", "DM"
	$tdm = New-Object System.Management.Automation.Host.ChoiceDescription "&Team Deathmatch", "TDM"
	$ctf = New-Object System.Management.Automation.Host.ChoiceDescription "Capture the &Flag", "CTF"
	$sc = New-Object System.Management.Automation.Host.ChoiceDescription "S&ector Control", "SC"
	$cti = New-Object System.Management.Automation.Host.ChoiceDescription "Capture the &Island", "CTI"
	$rpg = New-Object System.Management.Automation.Host.ChoiceDescription "&RPG", "RPG"
	$sandbox = New-Object System.Management.Automation.Host.ChoiceDescription "S&andbox", "Sandbox"
	$seize = New-Object System.Management.Automation.Host.ChoiceDescription "&Seize", "Seize"
	$defend = New-Object System.Management.Automation.Host.ChoiceDescription "&Defend", "Defend"
	$zgm = New-Object System.Management.Automation.Host.ChoiceDescription "&Zeus Game Master", "ZGM"
	
	$options = [System.management.Automation.Host.ChoiceDescription[]](
		$coop, $dm, $tdm, $ctf, $sc, $cti, $rpg, $sandbox, $seize,
		$defend, $zgm, $unknown
	)
	
	$response = $host.ui.PromptForChoice($title, $message, $options, 0)
	
	$script:missionType = $options[$response].HelpMessage
}