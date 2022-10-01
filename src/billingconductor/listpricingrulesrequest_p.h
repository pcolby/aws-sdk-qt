// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGRULESREQUEST_P_H
#define QTAWS_LISTPRICINGRULESREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "listpricingrulesrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingRulesRequest;

class ListPricingRulesRequestPrivate : public BillingConductorRequestPrivate {

public:
    ListPricingRulesRequestPrivate(const BillingConductorRequest::Action action,
                                   ListPricingRulesRequest * const q);
    ListPricingRulesRequestPrivate(const ListPricingRulesRequestPrivate &other,
                                   ListPricingRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPricingRulesRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
