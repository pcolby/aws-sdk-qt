// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRICINGRULESREQUEST_P_H
#define QTAWS_DISASSOCIATEPRICINGRULESREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "disassociatepricingrulesrequest.h"

namespace QtAws {
namespace BillingConductor {

class DisassociatePricingRulesRequest;

class DisassociatePricingRulesRequestPrivate : public BillingConductorRequestPrivate {

public:
    DisassociatePricingRulesRequestPrivate(const BillingConductorRequest::Action action,
                                   DisassociatePricingRulesRequest * const q);
    DisassociatePricingRulesRequestPrivate(const DisassociatePricingRulesRequestPrivate &other,
                                   DisassociatePricingRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociatePricingRulesRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
