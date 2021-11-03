#include "pe.hpp"

using namespace GView::Type::PE;
using namespace AppCUI::Controls;

struct LANGUAGE_CODE_2
{
    unsigned int CodeID;
    const char* Name;
};

static LANGUAGE_CODE_2 LangCode2[] = {
    { 0, "None" },
    { 1025, "Arabic (Saudi Arabia)" },
    { 1026, "Bulgarian" },
    { 1027, "Catalan" },
    { 1028, "Chinese (Taiwan)" },
    { 1029, "Czech" },
    { 1030, "Danish" },
    { 1031, "German (Germany)" },
    { 1032, "Greek" },
    { 1033, "English (United States)" },
    { 1034, "Spanish (Traditional Sort)" },
    { 1035, "Finnish" },
    { 1036, "French (France)" },
    { 1037, "Hebrew" },
    { 1038, "Hungarian" },
    { 1039, "Icelandic" },
    { 1040, "Italian (Italy)" },
    { 1041, "Japanese" },
    { 1042, "Korean" },
    { 1043, "Dutch (Netherlands)" },
    { 1044, "Norwegian (Bokmal)" },
    { 1045, "Polish" },
    { 1046, "Portuguese (Brazil)" },
    { 1047, "Rhaeto-Romanic" },
    { 1048, "Romanian" },
    { 1049, "Russian" },
    { 1050, "Croatian" },
    { 1051, "Slovak" },
    { 1052, "Albanian" },
    { 1053, "Swedish" },
    { 1054, "Thai" },
    { 1055, "Turkish" },
    { 1056, "Urdu" },
    { 1057, "Indonesian" },
    { 1058, "Ukrainian" },
    { 1059, "Belarusian" },
    { 1060, "Slovenian" },
    { 1061, "Estonian" },
    { 1062, "Latvian" },
    { 1063, "Lithuanian" },
    { 1064, "Tajik" },
    { 1065, "Farsi" },
    { 1066, "Vietnamese" },
    { 1067, "Armenian" },
    { 1068, "Azeri (Latin)" },
    { 1069, "Basque" },
    { 1070, "Sorbian" },
    { 1071, "FYRO Macedonian" },
    { 1072, "Sutu" },
    { 1072, "Sesotho" },
    { 1073, "Tsonga" },
    { 1074, "Tswana" },
    { 1075, "Venda" },
    { 1076, "Xhosa" },
    { 1077, "Zulu" },
    { 1078, "Afrikaans" },
    { 1079, "Georgian" },
    { 1080, "Faroese" },
    { 1081, "Hindi" },
    { 1082, "Maltese" },
    { 1083, "Sami Lappish" },
    { 1084, "Gaelic Scotland" },
    { 1085, "Yiddish" },
    { 1086, "Malay (Malaysia)" },
    { 1087, "Kazakh" },
    { 1088, "Kyrgyz (Cyrillic)" },
    { 1089, "Swahili" },
    { 1090, "Turkmen" },
    { 1091, "Uzbek (Latin)" },
    { 1092, "Tatar" },
    { 1093, "Bengali (India)" },
    { 1094, "Punjabi" },
    { 1095, "Gujarati" },
    { 1096, "Oriya" },
    { 1097, "Tamil" },
    { 1098, "Telugu" },
    { 1099, "Kannada" },
    { 1100, "Malayalam" },
    { 1101, "Assamese" },
    { 1102, "Marathi" },
    { 1103, "Sanskrit" },
    { 1104, "Mongolian (Cyrillic)" },
    { 1105, "Tibetan" },
    { 1106, "Welsh" },
    { 1107, "Khmer" },
    { 1108, "Lao" },
    { 1109, "Burmese" },
    { 1110, "Galician" },
    { 1111, "Konkani" },
    { 1112, "Manipuri" },
    { 1113, "Sindhi" },
    { 1114, "Syriac" },
    { 1115, "Sinhalese (Sri Lanka)" },
    { 1118, "Amharic (Ethiopia)" },
    { 1120, "Kashmiri" },
    { 1121, "Nepali" },
    { 1122, "Frisian (Netherlands)" },
    { 1124, "Filipino" },
    { 1125, "Divehi" },
    { 1126, "Edo" },
    { 1136, "Igbo (Nigeria)" },
    { 1140, "Guarani (Paraguay)" },
    { 1142, "Latin" },
    { 1143, "Somali" },
    { 1153, "Maori (New Zealand)" },
    { 1279, "HID (Human Interface Device)" },
    { 2049, "Arabic (Iraq)" },
    { 2052, "Chinese (PRC)" },
    { 2055, "German (Switzerland)" },
    { 2057, "English (United Kingdom)" },
    { 2058, "Spanish (Mexico)" },
    { 2060, "French (Belgium)" },
    { 2064, "Italian (Switzerland)" },
    { 2067, "Dutch (Belgium)" },
    { 2068, "Norwegian (Nynorsk)" },
    { 2070, "Portuguese (Portugal)" },
    { 2072, "Romanian (Moldova)" },
    { 2073, "Russian (Moldova)" },
    { 2074, "Serbian (Latin)" },
    { 2077, "Swedish (Finland)" },
    { 2092, "Azeri (Cyrillic)" },
    { 2108, "Gaelic Ireland" },
    { 2110, "Malay (Brunei Darussalam)" },
    { 2115, "Uzbek (Cyrillic)" },
    { 2117, "Bengali (Bangladesh)" },
    { 2128, "Mongolian (Mongolia)" },
    { 3073, "Arabic (Egypt)" },
    { 3076, "Chinese (Hong Kong S.A.R.)" },
    { 3079, "German (Austria)" },
    { 3081, "English (Australia)" },
    { 3082, "Spanish (International Sort)" },
    { 3084, "French (Canada)" },
    { 3098, "Serbian (Cyrillic)" },
    { 4097, "Arabic (Libya)" },
    { 4100, "Chinese (Singapore)" },
    { 4103, "German (Luxembourg)" },
    { 4105, "English (Canada)" },
    { 4106, "Spanish (Guatemala)" },
    { 4108, "French (Switzerland)" },
    { 4122, "Croatian (Bosnia/Herzegovina)" },
    { 5121, "Arabic (Algeria)" },
    { 5124, "Chinese (Macau S.A.R.)" },
    { 5127, "German (Liechtenstein)" },
    { 5129, "English (New Zealand)" },
    { 5130, "Spanish (Costa Rica)" },
    { 5132, "French (Luxembourg)" },
    { 5146, "Bosnian (Bosnia/Herzegovina)" },
    { 6145, "Arabic (Morocco)" },
    { 6153, "English (Ireland)" },
    { 6154, "Spanish (Panama)" },
    { 6156, "French (Monaco)" },
    { 7169, "Arabic (Tunisia)" },
    { 7177, "English (South Africa)" },
    { 7178, "Spanish (Dominican Republic)" },
    { 7180, "French (West Indies)" },
    { 8193, "Arabic (Oman)" },
    { 8201, "English (Jamaica)" },
    { 8202, "Spanish (Venezuela)" },
    { 9217, "Arabic (Yemen)" },
    { 9225, "English (Caribbean)" },
    { 9226, "Spanish (Colombia)" },
    { 9228, "French (Congo, DRC)" },
    { 10241, "Arabic (Syria)" },
    { 10249, "English (Belize)" },
    { 10250, "Spanish (Peru)" },
    { 10252, "French (Senegal)" },
    { 11265, "Arabic (Jordan)" },
    { 11273, "English (Trinidad)" },
    { 11274, "Spanish (Argentina)" },
    { 11276, "French (Cameroon)" },
    { 12289, "Arabic (Lebanon)" },
    { 12297, "English (Zimbabwe)" },
    { 12298, "Spanish (Ecuador)" },
    { 12300, "French (Cote d'Ivoire)" },
    { 13313, "Arabic (Kuwait)" },
    { 13321, "English (Philippines)" },
    { 13322, "Spanish (Chile)" },
    { 13324, "French (Mali)" },
    { 14337, "Arabic (U.A.E.)" },
    { 14346, "Spanish (Uruguay)" },
    { 14348, "French (Morocco)" },
    { 15361, "Arabic (Bahrain)" },
    { 15370, "Spanish (Paraguay)" },
    { 16385, "Arabic (Qatar)" },
    { 16393, "English (India)" },
    { 16394, "Spanish (Bolivia)" },
    { 17418, "Spanish (El Salvador)" },
    { 18442, "Spanish (Honduras)" },
    { 19466, "Spanish (Nicaragua)" },
    { 20490, "Spanish (Puerto Rico)" },
};
char* LanguageIDToName(unsigned int langID)
{
    for (int tr = 0; tr < sizeof(LangCode2) / sizeof(LangCode2[0]); tr++)
    {
        if (langID == LangCode2[tr].CodeID)
            return (char*) LangCode2[tr].Name;
    }
    return nullptr;
}
Panels::Information::Information(Reference<GView::Type::PE::PEFile> _pe) : TabPage("Informa&Tion")
{
    pe      = _pe;
    general = this->CreateChildControl<ListView>("x:0,y:0,w:100%,h:10", ListViewFlags::None);
    general->AddColumn("Field", TextAlignament::Left, 12);
    general->AddColumn("Value", TextAlignament::Left, 100);

    version = this->CreateChildControl<ListView>("x:0,y:11,w:100%,h:10", ListViewFlags::None);
    version->AddColumn("Field", TextAlignament::Left, 12);
    version->AddColumn("Value", TextAlignament::Left, 100);

    issues = this->CreateChildControl<ListView>("x:0,y:21,w:100%,h:10", ListViewFlags::HideColumns);
    issues->AddColumn("Info", TextAlignament::Left, 200);

    this->Update();
}
void Panels::Information::UpdateGeneralInformation()
{
    ItemHandle item;
    LocalString<256> tempStr;
    NumericFormatter n;

    general->DeleteAllItems();
    general->AddItem("File");
    //general->SetItemText(poz++, 1, (char*) pe->file->GetFileName(true));
    // size
    general->AddItem("Size", tempStr.Format("%s bytes",n.ToString(pe->file->GetSize(), { NumericFormatFlags::None, 10, 3, ',' }).data()));
    // computed
    general->AddItem("Computed", tempStr.Format("%llu (0x%llX) bytes", pe->computedSize, pe->computedSize));
    // cert
    general->AddItem("Computed(Cert)", tempStr.Format("%llu (0x%llX) bytes", pe->computedWithCertificate, pe->computedWithCertificate));
    // memory
    general->AddItem("Memory", tempStr.Format("%llu (0x%llX) bytes", pe->virtualComputedSize, pe->virtualComputedSize));

    if (pe->computedSize < pe->file->GetSize()) // overlay
    {
        const auto sz = pe->file->GetSize() - pe->computedSize;
        item          = general->AddItem(
              "Overlay", tempStr.Format("%lld (0x%llX) [%3d%%] bytes", sz, sz, (uint64_t) ((sz * 100) / pe->file->GetSize())));
        general->SetItemXOffset(item, 2);
        general->SetItemType(item, ListViewItemType::WarningInformation);
    }
    if (pe->computedSize > pe->file->GetSize()) // Missing
    {
        const auto sz = pe->computedSize - pe->file->GetSize();
        item          = general->AddItem(
              "Missing", tempStr.Format("%lld (0x%llX) [%3d%%] bytes", sz, sz, (uint64_t) ((sz * 100) / pe->file->GetSize())));
        general->SetItemXOffset(item, 2);
        general->SetItemType(item, ListViewItemType::ErrorInformation);
    }

    // type
    if (pe->isMetroApp)
        general->AddItem("Type", tempStr.Format("Metro APP (%s)", pe->GetSubsystem()));
    else if ((pe->nth32.FileHeader.Characteristics & __IMAGE_FILE_DLL) != 0)
        general->AddItem("Type", tempStr.Format("DLL (%s)", pe->GetSubsystem()));
    else
        general->AddItem("Type", tempStr.Format("EXE (%s)", pe->GetSubsystem()));

    // machine
    general->AddItem("Machine", pe->GetMachine());

    // export Name
    if (pe->dllName)
    {
        general->AddItem("ExportName", pe->dllName);
    }
    // pdb folder
    if (pe->pdbName)
    {
        general->AddItem("PDB File", pe->pdbName);
    }

    // verific si language-ul
    for (const auto & r: pe->res)
    {
        if (r.Type == __RT_VERSION)
        {
            general->AddItem("Language", LanguageIDToName(r.Language));
            break;
        }
    }

    // certificat
    //if ((pe->dirs[__IMAGE_DIRECTORY_ENTRY_SECURITY].Size > sizeof(WinCertificate)) &&
    //    (pe->dirs[__IMAGE_DIRECTORY_ENTRY_SECURITY].VirtualAddress > 0))
    //{
    //    WinCertificate cert;
    //    if (pe->file->CopyToBuffer(pe->dirs[__IMAGE_DIRECTORY_ENTRY_SECURITY].VirtualAddress, sizeof(cert), &cert))
    //    {
    //        switch (cert.wCertificateType)
    //        {
    //        case __WIN_CERT_TYPE_X509:
    //            tempStr.Set("X.509");
    //            break;
    //        case __WIN_CERT_TYPE_PKCS_SIGNED_DATA:
    //            tempStr.Set("PKCS SignedData");
    //            break;
    //        case __WIN_CERT_TYPE_RESERVED_1:
    //            tempStr.Set("Reserved");
    //            break;
    //        case __WIN_CERT_TYPE_TS_STACK_SIGNED:
    //            tempStr.Set("Terminal Server Protocol Stack");
    //            break;
    //        default:
    //            tempStr.Set("Unknown !!");
    //            break;
    //        };
    //        // tempStr.AddFormatedEx(" (0x%X), Revision:0x%X", cert.wCertificateType, cert.wRevision);
    //        tempStr.AddFormatedEx(" (0x%{uint16,hex}), Revision:0x%{uint16,hex}", cert.wCertificateType, cert.wRevision);
    //        general->AddItem("Certificate");
    //        general->SetItemColor(poz, SC(3 + 8, 0) | GLib::Constants::Colors::TransparentBackground);
    //        general->SetItemText(poz++, 1, tempStr.GetText());
    //    }
    //}

}
void Panels::Information::UpdateVersionInformation()
{
    version->DeleteAllItems();
    // description/Copyright/Company/Comments/IntName/OrigName/FileVer/ProdName/ProdVer
    for (int tr = 0; tr < pe->Ver.GetNrItems(); tr++)
    {
        auto itemID = version->AddItem(pe->Ver.GetKey(tr)->ToStringView());
        version->SetItemText(itemID, 1, pe->Ver.GetValue(tr)->ToStringView());
    }
    // hide if version info is not present
    version->SetVisible(version->GetItemsCount() > 0);
}
void Panels::Information::UpdateIssues()
{
    AppCUI::Controls::ItemHandle itemHandle;
    bool hasErrors   = false;
    bool hasWarnings = false;

    issues->DeleteAllItems();

    for (const auto& err : pe->errList)
    {
        if (err.type != PEFile::ErrorType::Error)
            continue;

        if (!hasErrors)
        {
            itemHandle = issues->AddItem("Errors");
            issues->SetItemType(itemHandle, ListViewItemType::Highlighted);
            hasErrors = true;
        }
        itemHandle = issues->AddItem(err.text);
        issues->SetItemType(itemHandle, ListViewItemType::ErrorInformation);
        issues->SetItemXOffset(itemHandle, 2);
    }

    for (const auto& err : pe->errList)
    {
        if (err.type != PEFile::ErrorType::Warning)
            continue;

        if (!hasWarnings)
        {
            itemHandle = issues->AddItem("Warnings");
            issues->SetItemType(itemHandle, ListViewItemType::Highlighted);
            hasWarnings = true;
        }
        itemHandle = issues->AddItem(err.text);
        issues->SetItemType(itemHandle, ListViewItemType::WarningInformation);
        issues->SetItemXOffset(itemHandle, 2);
    }
    // hide if no issues
    issues->SetVisible(pe->errList.size() > 0);
}
void Panels::Information::RecomputePanelsPositions()
{
    int py   = 0;
    int last = 0;
    int w    = this->GetWidth();
    int h    = this->GetHeight();
    
    if ((!version.IsValid()) || (!general.IsValid()) || (!issues.IsValid()))
        return;
    if (this->version->IsVisible())
        last = 1;
    if (this->issues->IsVisible())
        last = 2;
    // if (InfoPanelCtx.pnlIcon->IsVisible()) last = 3;
    
    // resize
    if (last == 0)
    {
        this->general->Resize(w, h - py);
    }
    else
    {
        if (this->general->GetItemsCount() > 15)
        {
            this->general->Resize(w, 18);
            py += 18;
        }
        else
        {
            this->general->Resize(w, this->general->GetItemsCount() + 3);
            py += (this->general->GetItemsCount() + 3);
        }
    }
    if (this->version->IsVisible())
    {
        this->version->MoveTo(0, py);
        if (last == 1)
        {
            this->version->Resize(w, h - py);
        }
        else
        {
            this->version->Resize(w, this->version->GetItemsCount() + 3);
            py += (this->version->GetItemsCount() + 3);
        }
    }
    if (this->issues->IsVisible())
    {
        this->issues->MoveTo(0, py);
        if (last == 2)
        {
            this->issues->Resize(w, h - py);
        }
        else
        {
            if (this->issues->GetItemsCount() > 6)
            {
                this->issues->Resize(w, 8);
                py += 8;
            }
            else
            {
                this->issues->Resize(w, this->issues->GetItemsCount() + 2);
                py += (this->issues->GetItemsCount() + 2);
            }
        }
    }
}
void Panels::Information::Update()
{
    UpdateGeneralInformation();
    UpdateVersionInformation();
    UpdateIssues();
    RecomputePanelsPositions();
}

