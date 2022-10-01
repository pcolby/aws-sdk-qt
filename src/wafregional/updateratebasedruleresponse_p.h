// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERATEBASEDRULERESPONSE_P_H
#define QTAWS_UPDATERATEBASEDRULERESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class UpdateRateBasedRuleResponse;

class UpdateRateBasedRuleResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit UpdateRateBasedRuleResponsePrivate(UpdateRateBasedRuleResponse * const q);

    void parseUpdateRateBasedRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRateBasedRuleResponse)
    Q_DISABLE_COPY(UpdateRateBasedRuleResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
