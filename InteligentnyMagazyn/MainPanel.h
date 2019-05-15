#pragma once

namespace InteligentnyMagazyn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MainPanel
	/// </summary>
	public ref class MainPanel : public System::Windows::Forms::Form
	{
	public:
		MainPanel(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MainPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  databaseElementsButton;
	private: System::Windows::Forms::Button^  databaseToolsButton;
	private: System::Windows::Forms::Button^  databseBigElementsButton;
	private: System::Windows::Forms::Button^  databasesDelivererButton;
	private: System::Windows::Forms::Button^  searchButton;
	private: System::Windows::Forms::Button^  editDatabaseButton;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPanel::typeid));
			this->databaseElementsButton = (gcnew System::Windows::Forms::Button());
			this->databaseToolsButton = (gcnew System::Windows::Forms::Button());
			this->databseBigElementsButton = (gcnew System::Windows::Forms::Button());
			this->databasesDelivererButton = (gcnew System::Windows::Forms::Button());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->editDatabaseButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// databaseElementsButton
			// 
			this->databaseElementsButton->BackColor = System::Drawing::Color::BurlyWood;
			this->databaseElementsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->databaseElementsButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->databaseElementsButton->ForeColor = System::Drawing::Color::LimeGreen;
			this->databaseElementsButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"databaseElementsButton.Image")));
			this->databaseElementsButton->Location = System::Drawing::Point(88, 318);
			this->databaseElementsButton->Name = L"databaseElementsButton";
			this->databaseElementsButton->Size = System::Drawing::Size(352, 121);
			this->databaseElementsButton->TabIndex = 0;
			this->databaseElementsButton->Text = L"Baza Elementów";
			this->databaseElementsButton->UseVisualStyleBackColor = false;
			this->databaseElementsButton->Click += gcnew System::EventHandler(this, &MainPanel::databaseElementsButton_Click);
			// 
			// databaseToolsButton
			// 
			this->databaseToolsButton->BackColor = System::Drawing::Color::BurlyWood;
			this->databaseToolsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->databaseToolsButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->databaseToolsButton->ForeColor = System::Drawing::Color::LimeGreen;
			this->databaseToolsButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"databaseToolsButton.Image")));
			this->databaseToolsButton->Location = System::Drawing::Point(88, 466);
			this->databaseToolsButton->Name = L"databaseToolsButton";
			this->databaseToolsButton->Size = System::Drawing::Size(352, 121);
			this->databaseToolsButton->TabIndex = 1;
			this->databaseToolsButton->Text = L"Baza Narzedzi";
			this->databaseToolsButton->UseVisualStyleBackColor = false;
			this->databaseToolsButton->Click += gcnew System::EventHandler(this, &MainPanel::databaseToolsButton_Click);
			// 
			// databseBigElementsButton
			// 
			this->databseBigElementsButton->BackColor = System::Drawing::Color::BurlyWood;
			this->databseBigElementsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->databseBigElementsButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->databseBigElementsButton->ForeColor = System::Drawing::Color::LimeGreen;
			this->databseBigElementsButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"databseBigElementsButton.Image")));
			this->databseBigElementsButton->Location = System::Drawing::Point(88, 615);
			this->databseBigElementsButton->Name = L"databseBigElementsButton";
			this->databseBigElementsButton->Size = System::Drawing::Size(352, 121);
			this->databseBigElementsButton->TabIndex = 2;
			this->databseBigElementsButton->Text = L"Baza Elementów Wielkogabarytowych";
			this->databseBigElementsButton->UseVisualStyleBackColor = false;
			this->databseBigElementsButton->Click += gcnew System::EventHandler(this, &MainPanel::databseBigElementsButton_Click);
			// 
			// databasesDelivererButton
			// 
			this->databasesDelivererButton->BackColor = System::Drawing::Color::BurlyWood;
			this->databasesDelivererButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->databasesDelivererButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->databasesDelivererButton->ForeColor = System::Drawing::Color::LimeGreen;
			this->databasesDelivererButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"databasesDelivererButton.Image")));
			this->databasesDelivererButton->Location = System::Drawing::Point(88, 766);
			this->databasesDelivererButton->Name = L"databasesDelivererButton";
			this->databasesDelivererButton->Size = System::Drawing::Size(352, 121);
			this->databasesDelivererButton->TabIndex = 3;
			this->databasesDelivererButton->Text = L"Dostawcy";
			this->databasesDelivererButton->UseVisualStyleBackColor = false;
			this->databasesDelivererButton->Click += gcnew System::EventHandler(this, &MainPanel::databasesDelivererButton_Click);
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::Color::BurlyWood;
			this->searchButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchButton->ForeColor = System::Drawing::Color::LimeGreen;
			this->searchButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchButton.Image")));
			this->searchButton->Location = System::Drawing::Point(702, 213);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(1061, 48);
			this->searchButton->TabIndex = 4;
			this->searchButton->Tag = L"N";
			this->searchButton->Text = L"Szukaj";
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Visible = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &MainPanel::searchButton_Click);
			// 
			// editDatabaseButton
			// 
			this->editDatabaseButton->BackColor = System::Drawing::Color::BurlyWood;
			this->editDatabaseButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->editDatabaseButton->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->editDatabaseButton->ForeColor = System::Drawing::Color::LimeGreen;
			this->editDatabaseButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editDatabaseButton.Image")));
			this->editDatabaseButton->Location = System::Drawing::Point(702, 124);
			this->editDatabaseButton->Name = L"editDatabaseButton";
			this->editDatabaseButton->Size = System::Drawing::Size(1061, 48);
			this->editDatabaseButton->TabIndex = 5;
			this->editDatabaseButton->Tag = L"N";
			this->editDatabaseButton->Text = L"Edytuj Baze";
			this->editDatabaseButton->UseVisualStyleBackColor = false;
			this->editDatabaseButton->Visible = false;
			this->editDatabaseButton->Click += gcnew System::EventHandler(this, &MainPanel::editDatabaseButton_Click);
			// 
			// MainPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1710, 850);
			this->Controls->Add(this->editDatabaseButton);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->databasesDelivererButton);
			this->Controls->Add(this->databseBigElementsButton);
			this->Controls->Add(this->databaseToolsButton);
			this->Controls->Add(this->databaseElementsButton);
			this->MaximizeBox = false;
			this->Name = L"MainPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inteligentny Magazyn";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainPanel::MainPanel_FormClosed);
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		bool databaseElementsButtonClick = false;
		bool databaseToolsButtonClick = false;
		bool databseBigElementsButtonClick = false;
		bool databasesDelivererButtonClick = false;
		bool editDatabaseButtonClick = false;
		bool searchButtonClick = false;
	
		private: void firstStanWhenStartProgram() {
			editDatabaseButtonClick = false;
			searchButtonClick = true;
		}
	private: System::Void MainPanel_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		if (MessageBox::Show("Zamkniêcie aplikacji", "Czy na pewno chcesz zakoñczyæ?",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::ExitThread();
		}
		else {
			MainPanel^ mainPanel = gcnew MainPanel();
			mainPanel->Show();
		}
	}
	private: System::Void databaseElementsButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno2-1.jpg");
		this->editDatabaseButton->Visible = true;
		this->searchButton->Visible = true;

		databaseElementsButtonClick = true;
		databaseToolsButtonClick = false;
		databseBigElementsButtonClick = false;
		databasesDelivererButtonClick = false;

		firstStanWhenStartProgram();
	}
	private: System::Void databaseToolsButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno3-1.jpg");
		this->editDatabaseButton->Visible = true;
		this->searchButton->Visible = true;

		databaseElementsButtonClick = false;
		databaseToolsButtonClick = true;
		databseBigElementsButtonClick = false;
		databasesDelivererButtonClick = false;

		firstStanWhenStartProgram();
	}
	private: System::Void databseBigElementsButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno4-1.jpg");
		this->editDatabaseButton->Visible = true;
		this->searchButton->Visible = true;

		databaseElementsButtonClick = false;
		databaseToolsButtonClick = false;
		databseBigElementsButtonClick = true;
		databasesDelivererButtonClick = false;

		firstStanWhenStartProgram();
	}
	private: System::Void databasesDelivererButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno5-1.jpg");
		this->editDatabaseButton->Visible = true;
		this->searchButton->Visible = true;

		databaseElementsButtonClick = false;
		databaseToolsButtonClick = false;
		databseBigElementsButtonClick = false;
		databasesDelivererButtonClick = true;

		firstStanWhenStartProgram();
	}
	private: System::Void editDatabaseButton_Click(System::Object^  sender, System::EventArgs^  e) {
		editDatabaseButtonClick = true;
		searchButtonClick = false;

		if (databaseElementsButtonClick) this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno2-2.jpg");
		else if (databaseToolsButtonClick) this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno3-2.jpg");
		else if (databseBigElementsButtonClick) this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno4-2.jpg");
		else if (databasesDelivererButtonClick) this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno5-2.jpg");
	}
	private: System::Void searchButton_Click(System::Object^  sender, System::EventArgs^  e) {
		editDatabaseButtonClick = false;
		searchButtonClick = true;

		if (databaseElementsButtonClick) this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno2-1.jpg");
		else if (databaseToolsButtonClick) this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno3-1.jpg");
		else if (databseBigElementsButtonClick) this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno4-1.jpg");
		else if (databasesDelivererButtonClick) this->BackgroundImage = Image::FromFile("images\\imgPanels\\okno5-1.jpg");
	}
	};
}
