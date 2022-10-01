// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRICINGRULEREQUEST_P_H
#define QTAWS_UPDATEPRICINGRULEREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "updatepricingrulerequest.h"

namespace QtAws {
namespace BillingConductor {

class UpdatePricingRuleRequest;

class UpdatePricingRuleRequestPrivate : public BillingConductorRequestPrivate {

public:
    UpdatePricingRuleRequestPrivate(const BillingConductorRequest::Action action,
                                   UpdatePricingRuleRequest * const q);
    UpdatePricingRuleRequestPrivate(const UpdatePricingRuleRequestPrivate &other,
                                   UpdatePricingRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePricingRuleRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
