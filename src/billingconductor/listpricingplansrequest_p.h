// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGPLANSREQUEST_P_H
#define QTAWS_LISTPRICINGPLANSREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "listpricingplansrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingPlansRequest;

class ListPricingPlansRequestPrivate : public BillingConductorRequestPrivate {

public:
    ListPricingPlansRequestPrivate(const BillingConductorRequest::Action action,
                                   ListPricingPlansRequest * const q);
    ListPricingPlansRequestPrivate(const ListPricingPlansRequestPrivate &other,
                                   ListPricingPlansRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPricingPlansRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
