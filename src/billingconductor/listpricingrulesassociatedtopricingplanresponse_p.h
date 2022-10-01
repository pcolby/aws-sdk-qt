// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGRULESASSOCIATEDTOPRICINGPLANRESPONSE_P_H
#define QTAWS_LISTPRICINGRULESASSOCIATEDTOPRICINGPLANRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingRulesAssociatedToPricingPlanResponse;

class ListPricingRulesAssociatedToPricingPlanResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit ListPricingRulesAssociatedToPricingPlanResponsePrivate(ListPricingRulesAssociatedToPricingPlanResponse * const q);

    void parseListPricingRulesAssociatedToPricingPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPricingRulesAssociatedToPricingPlanResponse)
    Q_DISABLE_COPY(ListPricingRulesAssociatedToPricingPlanResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
