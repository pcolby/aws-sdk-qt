// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMLINEITEMREQUEST_P_H
#define QTAWS_UPDATECUSTOMLINEITEMREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "updatecustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class UpdateCustomLineItemRequest;

class UpdateCustomLineItemRequestPrivate : public BillingConductorRequestPrivate {

public:
    UpdateCustomLineItemRequestPrivate(const BillingConductorRequest::Action action,
                                   UpdateCustomLineItemRequest * const q);
    UpdateCustomLineItemRequestPrivate(const UpdateCustomLineItemRequestPrivate &other,
                                   UpdateCustomLineItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
