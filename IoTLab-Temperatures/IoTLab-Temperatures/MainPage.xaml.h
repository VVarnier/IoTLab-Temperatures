﻿//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include "Mote.h"

namespace IoTLab_Temperatures
{
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		Mote* closestMote;
		std::vector<Mote*> motes;

		~MainPage();

		void InitializeMotes();
		bool IsLatitudeValid();
		bool IsLongitudeValid();
		void LatitudeBox_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e);
		void LongitudeBox_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e);
		void RenderClosestMoteBattery();
		void RenderClosestMoteBrightness();
		void RenderClosestMoteHumidity();
		void RenderClosestMoteTemperature();
		void RenderMoteContainer();
		void RetrieveTemperatureFromIoTLab();
		void SetBatteryImageFromMeasure(double batteryValue);
		void SetBrightnessImageFromMeasure(double brightnessValue);
		void SetClosestMoteFromCoordinate(GeographicCoordinate& coordinate);
		void SetHumidityImageFromMeasure(double humidityRate);
		void SetTemperatureImageFromMeasure(double temperatureValue);
		void ToggleImages(Windows::UI::Xaml::Controls::Image^ toActivate, Windows::UI::Xaml::Controls::Image^ toDeactivate);
		void UpdateBatteryCard(MeasureReport& measure);
		void UpdateBrightnessCard(MeasureReport& measure);
		void UpdateCards();
		void UpdateDisplay();
		void UpdateHumidityCard(MeasureReport& measure);
		void UpdateTemperatureCard(MeasureReport& measure);
		void UpdateValidateButtonValidity();
		void ValidateButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
