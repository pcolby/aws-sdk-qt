// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBILLINGGROUPCOSTREPORTSREQUEST_P_H
#define QTAWS_LISTBILLINGGROUPCOSTREPORTSREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "listbillinggroupcostreportsrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListBillingGroupCostReportsRequest;

class ListBillingGroupCostReportsRequestPrivate : public BillingConductorRequestPrivate {

public:
    ListBillingGroupCostReportsRequestPrivate(const BillingConductorRequest::Action action,
                                   ListBillingGroupCostReportsRequest * const q);
    ListBillingGroupCostReportsRequestPrivate(const ListBillingGroupCostReportsRequestPrivate &other,
                                   ListBillingGroupCostReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBillingGroupCostReportsRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
