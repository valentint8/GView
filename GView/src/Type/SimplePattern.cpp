#include <GViewApp.hpp>

using namespace GView::Type;
using namespace GView::Utils;

constexpr unsigned char CHAR_TYPE_INVALID = 0xFF;
constexpr unsigned char CHAR_TYPE_SEP     = 0xFE;
constexpr unsigned char CHAR_TYPE_ANY     = 0xFD;

unsigned char PatternCharTypes[256] = { CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_SEP,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_SEP,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        0,
                                        1,
                                        2,
                                        3,
                                        4,
                                        5,
                                        6,
                                        7,
                                        8,
                                        9,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_SEP,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        0,
                                        1,
                                        2,
                                        3,
                                        4,
                                        5,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        0,
                                        1,
                                        2,
                                        3,
                                        4,
                                        5,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID,
                                        CHAR_TYPE_INVALID };

SimplePattern::SimplePattern()
{
    this->Count  = 0;
    this->Offset = 0;
}
bool SimplePattern::Init(std::string_view text, unsigned int ofs)
{
    this->Offset = ofs;
    if (text.empty())
    {
        this->Count = 0;
        return true;
    }

    auto s = (const unsigned char*) text.data();
    auto e = s + text.size();

    if ((text.starts_with("hex:\"")) || (text.starts_with("hex:'")))
    {
        s += 5;
        e--; // assume the strings ends with either " or '
        while (s < e)
        {
            while ((s < e) && (PatternCharTypes[*s] == CHAR_TYPE_SEP))
                s++;
            CHECK(s + 2 <= e, false, "Invalid end of pattern for %s", text.data());
            auto v1 = PatternCharTypes[*s];
            auto v2 = PatternCharTypes[s[1]];
            CHECK((v1 < 15) && (v2 < 15), false, "Invalid hex characers in pattern: %s", text.data());
            this->CharactersToMatch[this->Count++] = (v1 << 4) | v2;
            CHECK(this->Count < MAX_PATTERN_VALUES, false, "Patern too large (max allowed is %d)", MAX_PATTERN_VALUES - 1);
            s += 2;
        }
    }
    else
    {
        // simple ascii
        CHECK(text.size() <= MAX_PATTERN_VALUES, false, "Patern too large (max allowed is %d)", MAX_PATTERN_VALUES);
        memcpy(this->CharactersToMatch, s, text.size());
    }
    return true;
}
bool SimplePattern::Match(AppCUI::Utils::BufferView buf) const
{
    if (this->Count == 0)
        return true; // no pattern means it matches everything
    if (!buf.IsValid())
        return false; // null buffer
    if (((unsigned int) this->Offset) + ((unsigned int) this->Count) > buf.GetLength())
        return false; // outside the testing buffer
    auto s                 = buf.GetData() + this->Offset;
    auto e                 = s + this->Count;
    const unsigned char* p = this->CharactersToMatch;
    for (; s < e; s++, p++)
    {
        if ((*p) == '?')
            continue;
        if ((*s) != (*p))
            return false;
    }
    return true;
}