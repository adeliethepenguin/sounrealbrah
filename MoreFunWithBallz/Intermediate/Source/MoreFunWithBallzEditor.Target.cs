using UnrealBuildTool;

public class MoreFunWithBallzEditorTarget : TargetRules
{
	public MoreFunWithBallzEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("MoreFunWithBallz");
	}
}
