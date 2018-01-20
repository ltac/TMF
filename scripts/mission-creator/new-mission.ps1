<#
 # This program is intended for use with LTMF to make it quicker to
 # generate a folder for a new mission and reduce the amount of manual changes
 # that mission builders need to do.
 #
 # Authors:
 #  Legion Tactical
 #  GRUBES
 #>


# *** SCRIPT SCOPE VARIABLES ***

# The root path to the supporting functions for this application
[string]$script:fnPath = "$PSScriptRoot\functions"

# The Display Name of the Mission
[string]$script:missionName = ""

# The Author of the Mission
[string]$script:missionAuthor = ""

# A Short Description for the Mission that will be displayed during
# the loading screen
[string]$script:shortDescription = ""

# A Detailed Description for the Mission that will be displayed on the
# Mission Selection screen
[string]$script:longDescription = ""

# The Map the Mission will be on
[string]$script:missionMap = ""

# The Type of the Mission
[string]$script:missionType = ""

# The Folder Name of the Mission, excluding the extension for the Map
[string]$script:missionFolder = ""

# The aboslute path to the new mission folder that gets created
[string]$script:missionPath = ""


# *** IMPORTS ***

. "$fnPath\utilities\Print-Separator.ps1"
. "$fnPath\utilities\Get-RepoPath.ps1"
. "$fnPath\utilities\Get-BaseFrameworkPath.ps1"
. "$fnPath\utilities\Get-OutputPath.ps1"
. "$fnPath\utilities\Replace-MissionName.ps1"
. "$fnPath\utilities\Replace-Addons.ps1"
. "$fnPath\user-input\Prompt-User.ps1"
. "$fnPath\user-input\Get-MissionName.ps1"
. "$fnPath\user-input\Get-FolderName.ps1"
. "$fnPath\user-input\Get-Author.ps1"
. "$fnPath\user-input\Get-Map.ps1"
. "$fnPath\user-input\Get-ShortDescription.ps1"
. "$fnPath\user-input\Get-LongDescription.ps1"
. "$fnPath\user-input\Get-MissionType.ps1"
. "$fnPath\mission-info\Display-MissionInfo.ps1"
. "$fnPath\mission-info\Confirm-MissionInfo.ps1"
. "$fnPath\mission-info\Create-MissionFolder.ps1"
# . "$fnPath\mission-info\Create-MissionReadme.ps1"
. "$fnPath\mission-info\Update-MissionSqm.ps1"
. "$fnPath\mission-info\Update-DescriptionExt.ps1"
. "$fnPath\mission-info\Create-Mission.ps1"


# *** High-level Business Logic Functions ***

<#
 # Composite function that simply calls all of the smaller functions
 # that gather user input
 #>
function Get-UserInput {
	Get-MissionName
	Get-FolderName
	Get-Author
	Get-Map
	Get-ShortDescription
	Get-LongDescription
	Get-MissionType
}

<#
 # Main entry point function, simply delegates to the smaller composites
 #>
function Get-MissionInfo {
	Write-Host "`n*** Create a new LTMF Mission ***"
	
	Get-UserInput
	Display-MissionInfo
	Confirm-MissionInfo
}

# Start
Get-MissionInfo