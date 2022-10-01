// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMLINEITEMSREQUEST_P_H
#define QTAWS_LISTCUSTOMLINEITEMSREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "listcustomlineitemsrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListCustomLineItemsRequest;

class ListCustomLineItemsRequestPrivate : public BillingConductorRequestPrivate {

public:
    ListCustomLineItemsRequestPrivate(const BillingConductorRequest::Action action,
                                   ListCustomLineItemsRequest * const q);
    ListCustomLineItemsRequestPrivate(const ListCustomLineItemsRequestPrivate &other,
                                   ListCustomLineItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomLineItemsRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
