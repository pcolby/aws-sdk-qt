// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESASSOCIATEDTOCUSTOMLINEITEMREQUEST_P_H
#define QTAWS_LISTRESOURCESASSOCIATEDTOCUSTOMLINEITEMREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "listresourcesassociatedtocustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListResourcesAssociatedToCustomLineItemRequest;

class ListResourcesAssociatedToCustomLineItemRequestPrivate : public BillingConductorRequestPrivate {

public:
    ListResourcesAssociatedToCustomLineItemRequestPrivate(const BillingConductorRequest::Action action,
                                   ListResourcesAssociatedToCustomLineItemRequest * const q);
    ListResourcesAssociatedToCustomLineItemRequestPrivate(const ListResourcesAssociatedToCustomLineItemRequestPrivate &other,
                                   ListResourcesAssociatedToCustomLineItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourcesAssociatedToCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
