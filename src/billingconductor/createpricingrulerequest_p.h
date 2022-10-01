// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRICINGRULEREQUEST_P_H
#define QTAWS_CREATEPRICINGRULEREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "createpricingrulerequest.h"

namespace QtAws {
namespace BillingConductor {

class CreatePricingRuleRequest;

class CreatePricingRuleRequestPrivate : public BillingConductorRequestPrivate {

public:
    CreatePricingRuleRequestPrivate(const BillingConductorRequest::Action action,
                                   CreatePricingRuleRequest * const q);
    CreatePricingRuleRequestPrivate(const CreatePricingRuleRequestPrivate &other,
                                   CreatePricingRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePricingRuleRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
