// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXPATTERNSETSRESPONSE_P_H
#define QTAWS_LISTREGEXPATTERNSETSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListRegexPatternSetsResponse;

class ListRegexPatternSetsResponsePrivate : public WafResponsePrivate {

public:

    explicit ListRegexPatternSetsResponsePrivate(ListRegexPatternSetsResponse * const q);

    void parseListRegexPatternSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRegexPatternSetsResponse)
    Q_DISABLE_COPY(ListRegexPatternSetsResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
