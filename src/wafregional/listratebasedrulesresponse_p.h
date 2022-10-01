// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRATEBASEDRULESRESPONSE_P_H
#define QTAWS_LISTRATEBASEDRULESRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListRateBasedRulesResponse;

class ListRateBasedRulesResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListRateBasedRulesResponsePrivate(ListRateBasedRulesResponse * const q);

    void parseListRateBasedRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRateBasedRulesResponse)
    Q_DISABLE_COPY(ListRateBasedRulesResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
