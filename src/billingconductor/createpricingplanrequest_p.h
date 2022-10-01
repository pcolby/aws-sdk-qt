// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRICINGPLANREQUEST_P_H
#define QTAWS_CREATEPRICINGPLANREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "createpricingplanrequest.h"

namespace QtAws {
namespace BillingConductor {

class CreatePricingPlanRequest;

class CreatePricingPlanRequestPrivate : public BillingConductorRequestPrivate {

public:
    CreatePricingPlanRequestPrivate(const BillingConductorRequest::Action action,
                                   CreatePricingPlanRequest * const q);
    CreatePricingPlanRequestPrivate(const CreatePricingPlanRequestPrivate &other,
                                   CreatePricingPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePricingPlanRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
