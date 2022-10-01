// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXMATCHSETRESPONSE_P_H
#define QTAWS_UPDATEREGEXMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class UpdateRegexMatchSetResponse;

class UpdateRegexMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit UpdateRegexMatchSetResponsePrivate(UpdateRegexMatchSetResponse * const q);

    void parseUpdateRegexMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRegexMatchSetResponse)
    Q_DISABLE_COPY(UpdateRegexMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
