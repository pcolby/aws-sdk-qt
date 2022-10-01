// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGPLANSASSOCIATEDWITHPRICINGRULEREQUEST_P_H
#define QTAWS_LISTPRICINGPLANSASSOCIATEDWITHPRICINGRULEREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "listpricingplansassociatedwithpricingrulerequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingPlansAssociatedWithPricingRuleRequest;

class ListPricingPlansAssociatedWithPricingRuleRequestPrivate : public BillingConductorRequestPrivate {

public:
    ListPricingPlansAssociatedWithPricingRuleRequestPrivate(const BillingConductorRequest::Action action,
                                   ListPricingPlansAssociatedWithPricingRuleRequest * const q);
    ListPricingPlansAssociatedWithPricingRuleRequestPrivate(const ListPricingPlansAssociatedWithPricingRuleRequestPrivate &other,
                                   ListPricingPlansAssociatedWithPricingRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPricingPlansAssociatedWithPricingRuleRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
