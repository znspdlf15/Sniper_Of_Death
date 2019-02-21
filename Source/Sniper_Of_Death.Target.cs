// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Sniper_Of_DeathTarget : TargetRules
{
	public Sniper_Of_DeathTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Sniper_Of_Death");
	}
}
