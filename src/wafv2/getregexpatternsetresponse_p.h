// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXPATTERNSETRESPONSE_P_H
#define QTAWS_GETREGEXPATTERNSETRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class GetRegexPatternSetResponse;

class GetRegexPatternSetResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit GetRegexPatternSetResponsePrivate(GetRegexPatternSetResponse * const q);

    void parseGetRegexPatternSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRegexPatternSetResponse)
    Q_DISABLE_COPY(GetRegexPatternSetResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
