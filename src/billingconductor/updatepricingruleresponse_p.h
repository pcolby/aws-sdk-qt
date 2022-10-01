// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRICINGRULERESPONSE_P_H
#define QTAWS_UPDATEPRICINGRULERESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class UpdatePricingRuleResponse;

class UpdatePricingRuleResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit UpdatePricingRuleResponsePrivate(UpdatePricingRuleResponse * const q);

    void parseUpdatePricingRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePricingRuleResponse)
    Q_DISABLE_COPY(UpdatePricingRuleResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
