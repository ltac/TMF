<#
 # .Synopsis
 # Presents the user with a choice of Maps for the mission
 #
 # .Description
 # Presents the user with a choice of Maps for the mission, and maps the
 # response to the appropriate extension for the mission folder
 #>
function Get-Map {
	$title = "Map Selection"
	$message = "Which Map is your mission on?"

	# Doing the hotkeys this way yields double entries on the actual
	# selection menu (e.g. [0] [0] Altis). Not sure of a better way
	$altis = New-Object System.Management.Automation.Host.ChoiceDescription "[&0] Altis", "Altis"
	$stratis = New-Object System.Management.Automation.Host.ChoiceDescription "[&1] Stratis", "Stratis"
	$sahrani = New-Object System.Management.Automation.Host.ChoiceDescription "[&2] Sahrani", "Sahrani"
	$cherno = New-Object System.Management.Automation.Host.ChoiceDescription "[&3] Chernarus", "Chernarus"
	$chernoS = New-Object System.Management.Automation.Host.ChoiceDescription "[&4] Chernarus (Summer)", "Chernarus (Summer)"
	$caribou = New-Object System.Management.Automation.Host.ChoiceDescription "[&5] Caribou", "Caribou"	
	$taki = New-Object System.Management.Automation.Host.ChoiceDescription "[&6] Takistan", "Takistan"
	$zarg = New-Object System.Management.Automation.Host.ChoiceDescription "[&7] Zargabad", "Zargabad"
	$im = New-Object System.Management.Automation.Host.ChoiceDescription "[&8] Imrali", "Imrali"
	$nzi = New-Object System.Management.Automation.Host.ChoiceDescription "[&9] N'Ziwasogo", "N'Ziwasogo"
	$kund = New-Object System.Management.Automation.Host.ChoiceDescription "[&A] Kunduz", "Kunduz"	
	$utes = New-Object System.Management.Automation.Host.ChoiceDescription "[&B] Utes", "Utes"	
	$rayak = New-Object System.Management.Automation.Host.ChoiceDescription "[&C] Al Rayak", "Al Rayak"	
	$pg = New-Object System.Management.Automation.Host.ChoiceDescription "[&D] Proving Grounds", "Proving Grounds"
	$tanoa = New-Object System.Management.Automation.Host.ChoiceDescription "[&E] Tanoa", "Tanoa"
	$clafghan = New-Object System.Management.Automation.Host.ChoiceDescription "[&F] Clafghan", "Clafghan"
	$vr = New-Object System.Management.Automation.Host.ChoiceDescription "[&G] Virtual Reality", "Virtual Reality"
	$malden = New-Object System.Management.Automation.Host.ChoiceDescription "[&H] Malden", "Malden"

	$options = [System.management.Automation.Host.ChoiceDescription[]](
		$altis,
		$stratis,
		$sahrani,
		$cherno,
		$chernoS,
		$caribou,		
		$taki,		
		$zarg,		
		$im,
		$nzi,
		$kund,		
		$utes,		
    	$rayak,		
		$pg,
		$tanoa,
		$clafghan,
		$vr,
		$malden
	)

	# We use the $folderNames array for the appropriate folder extension
	# for each map. WARNING: The indexes in this array must line up with
	# the appropriate item from the $options array.
	# I'm sure there's a much cooler, savvy-er way to do this,
	# but I am .NET/PowerShell n00b
	$folderNames = (
		"Altis",
		"Stratis",
		"smd_sahrani_a3",
		"Chernarus",
		"Chernarus_Summer",
		"Caribou",		
		"Takistan",		
		"Zargabad",		
		"imrali",
		"pja305",
		"Kunduz",				
		"utes",		
    	"pja310",		
		"ProvingGrounds_PMC",
		"Tanoa",
		"clafghan",
		"vr",
		"Malden"
	)

	$response = $host.ui.PromptForChoice($title, $message, $options, 0)

	$script:missionMap = $folderNames[$response]
}
