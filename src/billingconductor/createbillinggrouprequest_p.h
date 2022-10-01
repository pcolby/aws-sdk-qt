// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBILLINGGROUPREQUEST_P_H
#define QTAWS_CREATEBILLINGGROUPREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "createbillinggrouprequest.h"

namespace QtAws {
namespace BillingConductor {

class CreateBillingGroupRequest;

class CreateBillingGroupRequestPrivate : public BillingConductorRequestPrivate {

public:
    CreateBillingGroupRequestPrivate(const BillingConductorRequest::Action action,
                                   CreateBillingGroupRequest * const q);
    CreateBillingGroupRequestPrivate(const CreateBillingGroupRequestPrivate &other,
                                   CreateBillingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBillingGroupRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
