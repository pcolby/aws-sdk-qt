// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXMATCHSETRESPONSE_P_H
#define QTAWS_CREATEREGEXMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class CreateRegexMatchSetResponse;

class CreateRegexMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit CreateRegexMatchSetResponsePrivate(CreateRegexMatchSetResponse * const q);

    void parseCreateRegexMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRegexMatchSetResponse)
    Q_DISABLE_COPY(CreateRegexMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
