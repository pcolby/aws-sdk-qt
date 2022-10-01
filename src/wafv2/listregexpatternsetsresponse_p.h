// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXPATTERNSETSRESPONSE_P_H
#define QTAWS_LISTREGEXPATTERNSETSRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class ListRegexPatternSetsResponse;

class ListRegexPatternSetsResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit ListRegexPatternSetsResponsePrivate(ListRegexPatternSetsResponse * const q);

    void parseListRegexPatternSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRegexPatternSetsResponse)
    Q_DISABLE_COPY(ListRegexPatternSetsResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
