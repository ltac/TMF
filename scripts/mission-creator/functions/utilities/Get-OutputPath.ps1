<#
 # .Synopsis
 # Finds and returns the path for the output directory
 #
 # .Outputs
 # 		[System.String] The absolute path to the output directory
 #>
function Get-OutputPath {
	Join-Path (Get-Location) generated-missions
}