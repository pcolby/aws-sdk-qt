// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATERESOURCESFROMCUSTOMLINEITEMREQUEST_P_H
#define QTAWS_BATCHDISASSOCIATERESOURCESFROMCUSTOMLINEITEMREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "batchdisassociateresourcesfromcustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class BatchDisassociateResourcesFromCustomLineItemRequest;

class BatchDisassociateResourcesFromCustomLineItemRequestPrivate : public BillingConductorRequestPrivate {

public:
    BatchDisassociateResourcesFromCustomLineItemRequestPrivate(const BillingConductorRequest::Action action,
                                   BatchDisassociateResourcesFromCustomLineItemRequest * const q);
    BatchDisassociateResourcesFromCustomLineItemRequestPrivate(const BatchDisassociateResourcesFromCustomLineItemRequestPrivate &other,
                                   BatchDisassociateResourcesFromCustomLineItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateResourcesFromCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
