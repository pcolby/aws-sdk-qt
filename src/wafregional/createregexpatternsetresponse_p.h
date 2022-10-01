// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXPATTERNSETRESPONSE_P_H
#define QTAWS_CREATEREGEXPATTERNSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class CreateRegexPatternSetResponse;

class CreateRegexPatternSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit CreateRegexPatternSetResponsePrivate(CreateRegexPatternSetResponse * const q);

    void parseCreateRegexPatternSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRegexPatternSetResponse)
    Q_DISABLE_COPY(CreateRegexPatternSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
