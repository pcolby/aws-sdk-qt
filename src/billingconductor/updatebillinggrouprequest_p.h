// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBILLINGGROUPREQUEST_P_H
#define QTAWS_UPDATEBILLINGGROUPREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "updatebillinggrouprequest.h"

namespace QtAws {
namespace BillingConductor {

class UpdateBillingGroupRequest;

class UpdateBillingGroupRequestPrivate : public BillingConductorRequestPrivate {

public:
    UpdateBillingGroupRequestPrivate(const BillingConductorRequest::Action action,
                                   UpdateBillingGroupRequest * const q);
    UpdateBillingGroupRequestPrivate(const UpdateBillingGroupRequestPrivate &other,
                                   UpdateBillingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBillingGroupRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
