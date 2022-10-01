// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXPATTERNSETRESPONSE_P_H
#define QTAWS_GETREGEXPATTERNSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetRegexPatternSetResponse;

class GetRegexPatternSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetRegexPatternSetResponsePrivate(GetRegexPatternSetResponse * const q);

    void parseGetRegexPatternSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRegexPatternSetResponse)
    Q_DISABLE_COPY(GetRegexPatternSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
