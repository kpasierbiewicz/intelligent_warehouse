#pragma once
#include "MainPanel.h"

namespace InteligentnyMagazyn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o StartWindow
	/// </summary>
	public ref class StartWindow : public System::Windows::Forms::Form
	{
	public:
		StartWindow(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			this->timerLoarding->Enabled = true;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~StartWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timerLoarding;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StartWindow::typeid));
			this->timerLoarding = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timerLoarding
			// 
			this->timerLoarding->Enabled = true;
			this->timerLoarding->Interval = 1000;
			this->timerLoarding->Tick += gcnew System::EventHandler(this, &StartWindow::timerLoading_Tick);
			// 
			// StartWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(560, 407);
			this->MaximizeBox = false;
			this->Name = L"StartWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inteligentny Magazyn";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		int indexImage = 1;

		void changeBackgroundOnStartWindow() {
			if (indexImage <= 3) {
				this->BackgroundImage = Image::FromFile("images\\startWindow\\start" + indexImage + ".jpg");
				indexImage++;
			}
			else if (indexImage == 4) {
				// Zmiana okna zawartoœæ
				this->Hide();
				this->timerLoarding->Enabled = false;
				MainPanel^ mainPanel = gcnew MainPanel();
				mainPanel->ShowDialog();
				this->Close();
			}
		}
	private: System::Void timerLoading_Tick(System::Object^  sender, System::EventArgs^  e) {
		changeBackgroundOnStartWindow();
	}
	};
}
