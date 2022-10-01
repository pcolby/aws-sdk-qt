// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRICINGRULESREQUEST_P_H
#define QTAWS_ASSOCIATEPRICINGRULESREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "associatepricingrulesrequest.h"

namespace QtAws {
namespace BillingConductor {

class AssociatePricingRulesRequest;

class AssociatePricingRulesRequestPrivate : public BillingConductorRequestPrivate {

public:
    AssociatePricingRulesRequestPrivate(const BillingConductorRequest::Action action,
                                   AssociatePricingRulesRequest * const q);
    AssociatePricingRulesRequestPrivate(const AssociatePricingRulesRequestPrivate &other,
                                   AssociatePricingRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociatePricingRulesRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
