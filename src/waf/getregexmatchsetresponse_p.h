// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXMATCHSETRESPONSE_P_H
#define QTAWS_GETREGEXMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetRegexMatchSetResponse;

class GetRegexMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit GetRegexMatchSetResponsePrivate(GetRegexMatchSetResponse * const q);

    void parseGetRegexMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRegexMatchSetResponse)
    Q_DISABLE_COPY(GetRegexMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
