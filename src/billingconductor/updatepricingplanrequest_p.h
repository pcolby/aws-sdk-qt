// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRICINGPLANREQUEST_P_H
#define QTAWS_UPDATEPRICINGPLANREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "updatepricingplanrequest.h"

namespace QtAws {
namespace BillingConductor {

class UpdatePricingPlanRequest;

class UpdatePricingPlanRequestPrivate : public BillingConductorRequestPrivate {

public:
    UpdatePricingPlanRequestPrivate(const BillingConductorRequest::Action action,
                                   UpdatePricingPlanRequest * const q);
    UpdatePricingPlanRequestPrivate(const UpdatePricingPlanRequestPrivate &other,
                                   UpdatePricingPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePricingPlanRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
