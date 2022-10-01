// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBILLINGGROUPSREQUEST_P_H
#define QTAWS_LISTBILLINGGROUPSREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "listbillinggroupsrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListBillingGroupsRequest;

class ListBillingGroupsRequestPrivate : public BillingConductorRequestPrivate {

public:
    ListBillingGroupsRequestPrivate(const BillingConductorRequest::Action action,
                                   ListBillingGroupsRequest * const q);
    ListBillingGroupsRequestPrivate(const ListBillingGroupsRequestPrivate &other,
                                   ListBillingGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBillingGroupsRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
