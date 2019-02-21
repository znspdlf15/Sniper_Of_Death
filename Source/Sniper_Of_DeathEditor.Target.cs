// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Sniper_Of_DeathEditorTarget : TargetRules
{
	public Sniper_Of_DeathEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Sniper_Of_Death");
	}
}
