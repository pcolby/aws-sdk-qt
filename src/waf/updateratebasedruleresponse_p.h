// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERATEBASEDRULERESPONSE_P_H
#define QTAWS_UPDATERATEBASEDRULERESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class UpdateRateBasedRuleResponse;

class UpdateRateBasedRuleResponsePrivate : public WafResponsePrivate {

public:

    explicit UpdateRateBasedRuleResponsePrivate(UpdateRateBasedRuleResponse * const q);

    void parseUpdateRateBasedRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRateBasedRuleResponse)
    Q_DISABLE_COPY(UpdateRateBasedRuleResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
