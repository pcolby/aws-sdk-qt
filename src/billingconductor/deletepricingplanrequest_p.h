// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRICINGPLANREQUEST_P_H
#define QTAWS_DELETEPRICINGPLANREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "deletepricingplanrequest.h"

namespace QtAws {
namespace BillingConductor {

class DeletePricingPlanRequest;

class DeletePricingPlanRequestPrivate : public BillingConductorRequestPrivate {

public:
    DeletePricingPlanRequestPrivate(const BillingConductorRequest::Action action,
                                   DeletePricingPlanRequest * const q);
    DeletePricingPlanRequestPrivate(const DeletePricingPlanRequestPrivate &other,
                                   DeletePricingPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePricingPlanRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
