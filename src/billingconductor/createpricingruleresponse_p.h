// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRICINGRULERESPONSE_P_H
#define QTAWS_CREATEPRICINGRULERESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class CreatePricingRuleResponse;

class CreatePricingRuleResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit CreatePricingRuleResponsePrivate(CreatePricingRuleResponse * const q);

    void parseCreatePricingRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePricingRuleResponse)
    Q_DISABLE_COPY(CreatePricingRuleResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
