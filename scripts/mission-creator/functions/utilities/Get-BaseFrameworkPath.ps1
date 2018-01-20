<#
 # .Synopsis
 # Finds and returns the folder of the base LTMF.VR mission
 #
 # .Description
 # Finds and returns the folder of the base LTMF.VR mission
 #
 # .Outputs
 # 		[System.String] The absolute path to the LTMF.VR mission folder
 #>
function Get-BaseFrameworkPath {
	Join-Path (Get-RepoPath) "tmf_template.Altis" -resolve
}