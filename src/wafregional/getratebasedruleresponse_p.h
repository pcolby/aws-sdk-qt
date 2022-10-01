// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDRULERESPONSE_P_H
#define QTAWS_GETRATEBASEDRULERESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetRateBasedRuleResponse;

class GetRateBasedRuleResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetRateBasedRuleResponsePrivate(GetRateBasedRuleResponse * const q);

    void parseGetRateBasedRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRateBasedRuleResponse)
    Q_DISABLE_COPY(GetRateBasedRuleResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
