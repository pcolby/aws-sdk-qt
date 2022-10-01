// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATERESOURCESTOCUSTOMLINEITEMREQUEST_P_H
#define QTAWS_BATCHASSOCIATERESOURCESTOCUSTOMLINEITEMREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "batchassociateresourcestocustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class BatchAssociateResourcesToCustomLineItemRequest;

class BatchAssociateResourcesToCustomLineItemRequestPrivate : public BillingConductorRequestPrivate {

public:
    BatchAssociateResourcesToCustomLineItemRequestPrivate(const BillingConductorRequest::Action action,
                                   BatchAssociateResourcesToCustomLineItemRequest * const q);
    BatchAssociateResourcesToCustomLineItemRequestPrivate(const BatchAssociateResourcesToCustomLineItemRequestPrivate &other,
                                   BatchAssociateResourcesToCustomLineItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchAssociateResourcesToCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
