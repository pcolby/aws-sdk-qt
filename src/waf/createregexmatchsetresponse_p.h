// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXMATCHSETRESPONSE_P_H
#define QTAWS_CREATEREGEXMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class CreateRegexMatchSetResponse;

class CreateRegexMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit CreateRegexMatchSetResponsePrivate(CreateRegexMatchSetResponse * const q);

    void parseCreateRegexMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRegexMatchSetResponse)
    Q_DISABLE_COPY(CreateRegexMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
