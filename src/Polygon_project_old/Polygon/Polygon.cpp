﻿<?xml version="1.0" encoding="utf-8"?>
<Project DefaultTargets="Build" ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup Label="ProjectConfigurations">
    <ProjectConfiguration Include="Debug|Win32">
      <Configuration>Debug</Configuration>
      <Platform>Win32</Platform>
    </ProjectConfiguration>
    <ProjectConfiguration Include="Release|Win32">
      <Configuration>Release</Configuration>
      <Platform>Win32</Platform>
    </ProjectConfiguration>
  </ItemGroup>
  <PropertyGroup Label="Globals">
    <ProjectGuid>{63694DC4-1AB8-4543-8D13-40931D00FDE5}</ProjectGuid>
    <RootNamespace>Polygon</RootNamespace>
    <Keyword>MFCProj</Keyword>
  </PropertyGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Default.props" />
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'" Label="Configuration">
    <ConfigurationType>Application</ConfigurationType>
    <UseDebugLibraries>true</UseDebugLibraries>
    <PlatformToolset>v110</PlatformToolset>
    <CharacterSet>Unicode</CharacterSet>
    <UseOfMfc>Static</UseOfMfc>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'" Label="Configuration">
    <ConfigurationType>Application</ConfigurationType>
    <UseDebugLibraries>false</UseDebugLibraries>
    <PlatformToolset>v110</PlatformToolset>
    <WholeProgramOptimization>true</WholeProgramOptimization>
    <CharacterSet>Unicode</CharacterSet>
    <UseOfMfc>Static</UseOfMfc>
  </PropertyGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
  <ImportGroup Label="ExtensionSettings">
  </ImportGroup>
  <ImportGroup Label="PropertySheets" Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
    <Import Project="$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition="exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label="LocalAppDataPlatform" />
  </ImportGroup>
  <ImportGroup Label="PropertySheets" Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <Import Project="$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition="exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label="LocalAppDataPlatform" />
  </ImportGroup>
  <PropertyGroup Label="UserMacros" />
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
    <LinkIncremental>true</LinkIncremental>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <LinkIncremental>false</LinkIncremental>
  </PropertyGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
    <ClCompile>
      <PrecompiledHeader>Use</PrecompiledHeader>
      <WarningLevel>Level3</WarningLevel>
      <Optimization>Disabled</Optimization>
      <PreprocessorDefinitions>WIN32;_WINDOWS;_DEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <SDLCheck>true</SDLCheck>
    </ClCompile>
    <Link>
      <SubSystem>Windows</SubSystem>
      <GenerateDebugInformation>true</GenerateDebugInformation>
    </Link>
    <Midl>
      <MkTypLibCompatible>false</MkTypLibCompatible>
      <ValidateAllParameters>true</ValidateAllParameters>
      <PreprocessorDefinitions>_DEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>_DEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <AdditionalIncludeDirectories>$(IntDir);%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
    </ResourceCompile>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <ClCompile>
      <WarningLevel>Level3</WarningLevel>
      <PrecompiledHeader>Use</PrecompiledHeader>
      <Optimization>MaxSpeed</Optimization>
      <FunctionLevelLinking>true</FunctionLevelLinking>
      <IntrinsicFunctions>true</IntrinsicFunctions>
      <PreprocessorDefinitions>WIN32;_WINDOWS;NDEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <SDLCheck>true</SDLCheck>
    </ClCompile>
    <Link>
      <SubSystem>Windows</SubSystem>
      <GenerateDebugInformation>true</GenerateDebugInformation>
      <EnableCOMDATFolding>true</EnableCOMDATFolding>
      <OptimizeReferences>true</OptimizeReferences>
    </Link>
    <Midl>
      <MkTypLibCompatible>false</MkTypLibCompatible>
      <ValidateAllParameters>true</ValidateAllParameters>
      <PreprocessorDefinitions>NDEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>NDEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <AdditionalIncludeDirectories>$(IntDir);%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>
    </ResourceCompile>
  </ItemDefinitionGroup>
  <ItemGroup>
    <Text Include="ReadMe.txt" />
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="Delaunay.h" />
    <ClInclude Include="MainFrm.h" />
    <ClInclude Include="Polygon.h" />
    <ClInclude Include="Polygonal.h" />
    <ClInclude Include="PolygonDoc.h" />
    <ClInclude Include="PolygonView.h" />
    <ClInclude Include="Resource.h" />
    <ClInclude Include="stdafx.h" />
    <ClInclude Include="targetver.h" />
    <ClInclude Include="Triangle.h" />
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="Delaunay.cpp" />
    <ClCompile Include="MainFrm.cpp" />
    <ClCompile Include="Polygon.cpp" />
    <ClCompile Include="Polygonal.cpp" />
    <ClCompile Include="PolygonDoc.cpp" />
    <ClCompile Include="PolygonView.cpp" />
    <ClCompile Include="stdafx.cpp">
      <PrecompiledHeader Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">Create</PrecompiledHeader>
      <PrecompiledHeader Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">Create</PrecompiledHeader>
    </ClCompile>
    <ClCompile Include="Triangle.cpp" />
  </ItemGroup>
  <ItemGroup>
    <None Include="Polygon.reg" />
    <None Include="res\Polygon.rc2" />
    <None Include="res\ribbon.mfcribbon-ms" />
  </ItemGroup>
  <ItemGroup>
    <ResourceCompile Include="Polygon.rc" />
  </ItemGroup>
  <ItemGroup>
    <Image Include="res\buttons.bmp" />
    <Image Include="res\filelarge.bmp" />
    <Image Include="res\filesmall.bmp" />
    <Image Include="res\main.bmp" />
    <Image Include="res\Polygon.ico" />
    <Image Include="res\PolygonDoc.ico" />
    <Image Include="res\Toolbar.bmp" />
    <Image Include="res\Toolbar256.bmp" />
    <Image Include="res\writelarge.bmp" />
    <Image Include="res\writesmall.bmp" />
  </ItemGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
  <ImportGroup Label="ExtensionTargets">
  </ImportGroup>
  <ProjectExtensions>
    <VisualStudio>
      <UserProperties RESOURCE_FILE="Polygon.rc" />
    </VisualStudio>
  </ProjectExtensions>
</Project>