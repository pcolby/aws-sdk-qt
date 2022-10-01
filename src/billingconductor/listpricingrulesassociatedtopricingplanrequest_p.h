// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGRULESASSOCIATEDTOPRICINGPLANREQUEST_P_H
#define QTAWS_LISTPRICINGRULESASSOCIATEDTOPRICINGPLANREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "listpricingrulesassociatedtopricingplanrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingRulesAssociatedToPricingPlanRequest;

class ListPricingRulesAssociatedToPricingPlanRequestPrivate : public BillingConductorRequestPrivate {

public:
    ListPricingRulesAssociatedToPricingPlanRequestPrivate(const BillingConductorRequest::Action action,
                                   ListPricingRulesAssociatedToPricingPlanRequest * const q);
    ListPricingRulesAssociatedToPricingPlanRequestPrivate(const ListPricingRulesAssociatedToPricingPlanRequestPrivate &other,
                                   ListPricingRulesAssociatedToPricingPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPricingRulesAssociatedToPricingPlanRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
