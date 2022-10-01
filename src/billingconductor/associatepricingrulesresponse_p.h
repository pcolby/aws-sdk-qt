// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRICINGRULESRESPONSE_P_H
#define QTAWS_ASSOCIATEPRICINGRULESRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class AssociatePricingRulesResponse;

class AssociatePricingRulesResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit AssociatePricingRulesResponsePrivate(AssociatePricingRulesResponse * const q);

    void parseAssociatePricingRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociatePricingRulesResponse)
    Q_DISABLE_COPY(AssociatePricingRulesResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
