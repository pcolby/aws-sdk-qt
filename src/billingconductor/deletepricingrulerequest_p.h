// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRICINGRULEREQUEST_P_H
#define QTAWS_DELETEPRICINGRULEREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "deletepricingrulerequest.h"

namespace QtAws {
namespace BillingConductor {

class DeletePricingRuleRequest;

class DeletePricingRuleRequestPrivate : public BillingConductorRequestPrivate {

public:
    DeletePricingRuleRequestPrivate(const BillingConductorRequest::Action action,
                                   DeletePricingRuleRequest * const q);
    DeletePricingRuleRequestPrivate(const DeletePricingRuleRequestPrivate &other,
                                   DeletePricingRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePricingRuleRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
