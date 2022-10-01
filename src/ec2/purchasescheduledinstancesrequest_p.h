// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASESCHEDULEDINSTANCESREQUEST_P_H
#define QTAWS_PURCHASESCHEDULEDINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "purchasescheduledinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class PurchaseScheduledInstancesRequest;

class PurchaseScheduledInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    PurchaseScheduledInstancesRequestPrivate(const Ec2Request::Action action,
                                   PurchaseScheduledInstancesRequest * const q);
    PurchaseScheduledInstancesRequestPrivate(const PurchaseScheduledInstancesRequestPrivate &other,
                                   PurchaseScheduledInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseScheduledInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
