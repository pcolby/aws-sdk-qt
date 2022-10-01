// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_P_H
#define QTAWS_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_P_H

#include "ec2request_p.h"
#include "purchasereservedinstancesofferingrequest.h"

namespace QtAws {
namespace Ec2 {

class PurchaseReservedInstancesOfferingRequest;

class PurchaseReservedInstancesOfferingRequestPrivate : public Ec2RequestPrivate {

public:
    PurchaseReservedInstancesOfferingRequestPrivate(const Ec2Request::Action action,
                                   PurchaseReservedInstancesOfferingRequest * const q);
    PurchaseReservedInstancesOfferingRequestPrivate(const PurchaseReservedInstancesOfferingRequestPrivate &other,
                                   PurchaseReservedInstancesOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedInstancesOfferingRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
