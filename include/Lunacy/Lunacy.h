#pragma once
#include "LunacyEnums.h"

#include <corecrt_math_defines.h>
#include <Windows.h>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>

#pragma region General Use
struct Transform2D;
struct Transform;
struct TriVertex;
struct Matrix;
struct Ratio;
struct Span;
struct Edge;

template <typename T>
struct Vector2;

template <typename T>
struct Vector3;

template <typename T>
struct Rect;

template <typename T>
struct Padding;

struct fRGB;
struct iRGB;
struct bRGB;
struct HSV;

#define IVector2 Vector2<int>
#define FVector2 Vector2<float>
#define DVector2 Vector2<double>

#define IVector3 Vector3<int>
#define FVector3 Vector3<float>
#define DVector3 Vector3<double>

#define IRect Rect<int>
#define FRect Rect<float>
#define DRect Rect<double>

#define IPadding Padding<int>
#define FPadding Padding<float>
#define DPadding Padding<double>
#pragma endregion

#pragma region SexyStructs
namespace Sexy
{
	struct SexyVector;
	struct SexyString;
	struct SexyList;
	struct SexySet;
	struct SexyMap;
}
#pragma endregion

namespace Sexy
{
#pragma region GFX Related
	class Graphics;
	class GraphicsState;
	class NativeDisplay;

	class D3DInterface;
	class DDInterface;
	class RenderCommand;
#pragma endregion

#pragma region Audio Related
	class MusicInterface;
	class SoundManager;
	class SoundiNstance;

#pragma endregion

	class AnimInfo;
	class CritSect;

#pragma region Random
	class MTRand;

#pragma endregion

	class AutoModalFlags;
	class PreModalInfo;
	class ModalFlags;
	class PerfTimer;
	class FlagsMod;

#pragma region Resources
	// Images
	class Image;
	class MemoryImage;
	class SharedImage;
	class SharedImageRef;

	class DDImage;

	// Fonts
	class Font;
	class SysFont;
	class ImageFont;
	class FontData;
	class FontLayer;
	class AciveFontLayer;


	// General
	class ResourceManager;
	class EncodignParser;
	class XMLParser;
	class Buffer;
	class XMLElement;
	class HTTPTransfer;
	class DataElement;
	class CharData;
	class DescParser;
#pragma endregion

#pragma region UI Elements
	class UIContainer;
	class UIElement;
	class UIRoot;
	class UIButton;
	class UIDialogButton;
	class UIDialog;
	class UISafeDeleteInfo;
	class UIHyperlink;
	class UITextBox;
	class UIScrollbar;
	class UISlider;
	class UICheckBox;

	// Listeners
	class ListListener;
	class ScrollListener;
	class ButtonListener;
	class DialogListener;
	class TextBoxListener;
	class CheckboxListener;
	class SliderListener;
#pragma endregion

	class WinInetHTTPTransfer;
	class SexyAppBase;
	class BetaSupport;
	class SexyApp;
}

template <typename T>
class DataArray;

#pragma region Game Objects
class Lawn;
class Zombie;
class Plant;
class Projectile;
class Pickup;
class GridItem;
class LawnMower;
class SeedPacket;
class SeedBank;
class CursorObject;
class CursorPreview;
class HitResult;
#pragma endregion
