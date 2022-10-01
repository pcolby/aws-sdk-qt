// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERATEBASEDRULERESPONSE_P_H
#define QTAWS_CREATERATEBASEDRULERESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class CreateRateBasedRuleResponse;

class CreateRateBasedRuleResponsePrivate : public WafResponsePrivate {

public:

    explicit CreateRateBasedRuleResponsePrivate(CreateRateBasedRuleResponse * const q);

    void parseCreateRateBasedRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRateBasedRuleResponse)
    Q_DISABLE_COPY(CreateRateBasedRuleResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
