// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXMATCHSETRESPONSE_P_H
#define QTAWS_GETREGEXMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetRegexMatchSetResponse;

class GetRegexMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetRegexMatchSetResponsePrivate(GetRegexMatchSetResponse * const q);

    void parseGetRegexMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRegexMatchSetResponse)
    Q_DISABLE_COPY(GetRegexMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
