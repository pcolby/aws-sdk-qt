// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGRULESRESPONSE_P_H
#define QTAWS_LISTPRICINGRULESRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingRulesResponse;

class ListPricingRulesResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit ListPricingRulesResponsePrivate(ListPricingRulesResponse * const q);

    void parseListPricingRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPricingRulesResponse)
    Q_DISABLE_COPY(ListPricingRulesResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
