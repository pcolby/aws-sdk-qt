// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMLINEITEMREQUEST_P_H
#define QTAWS_DELETECUSTOMLINEITEMREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "deletecustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class DeleteCustomLineItemRequest;

class DeleteCustomLineItemRequestPrivate : public BillingConductorRequestPrivate {

public:
    DeleteCustomLineItemRequestPrivate(const BillingConductorRequest::Action action,
                                   DeleteCustomLineItemRequest * const q);
    DeleteCustomLineItemRequestPrivate(const DeleteCustomLineItemRequestPrivate &other,
                                   DeleteCustomLineItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
