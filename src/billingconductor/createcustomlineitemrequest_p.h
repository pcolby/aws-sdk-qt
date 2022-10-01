// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMLINEITEMREQUEST_P_H
#define QTAWS_CREATECUSTOMLINEITEMREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "createcustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class CreateCustomLineItemRequest;

class CreateCustomLineItemRequestPrivate : public BillingConductorRequestPrivate {

public:
    CreateCustomLineItemRequestPrivate(const BillingConductorRequest::Action action,
                                   CreateCustomLineItemRequest * const q);
    CreateCustomLineItemRequestPrivate(const CreateCustomLineItemRequestPrivate &other,
                                   CreateCustomLineItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomLineItemRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
