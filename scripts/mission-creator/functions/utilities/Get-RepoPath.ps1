<#
 # .Synopsis
 # Finds and returns the root folder of the repository
 #
 # .Outputs
 # 		[System.String] The absolute path to the repository folder
 #>
function Get-RepoPath {
	Join-Path (Get-Location) "\..\.." -resolve
}