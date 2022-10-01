// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRICINGRULERESPONSE_P_H
#define QTAWS_DELETEPRICINGRULERESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class DeletePricingRuleResponse;

class DeletePricingRuleResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit DeletePricingRuleResponsePrivate(DeletePricingRuleResponse * const q);

    void parseDeletePricingRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePricingRuleResponse)
    Q_DISABLE_COPY(DeletePricingRuleResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
