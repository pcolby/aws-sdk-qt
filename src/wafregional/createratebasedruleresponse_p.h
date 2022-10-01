// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERATEBASEDRULERESPONSE_P_H
#define QTAWS_CREATERATEBASEDRULERESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class CreateRateBasedRuleResponse;

class CreateRateBasedRuleResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit CreateRateBasedRuleResponsePrivate(CreateRateBasedRuleResponse * const q);

    void parseCreateRateBasedRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRateBasedRuleResponse)
    Q_DISABLE_COPY(CreateRateBasedRuleResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
