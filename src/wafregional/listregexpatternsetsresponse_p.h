// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXPATTERNSETSRESPONSE_P_H
#define QTAWS_LISTREGEXPATTERNSETSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListRegexPatternSetsResponse;

class ListRegexPatternSetsResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListRegexPatternSetsResponsePrivate(ListRegexPatternSetsResponse * const q);

    void parseListRegexPatternSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRegexPatternSetsResponse)
    Q_DISABLE_COPY(ListRegexPatternSetsResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
