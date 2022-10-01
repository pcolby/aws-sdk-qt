// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDDBINSTANCESOFFERINGREQUEST_P_H
#define QTAWS_PURCHASERESERVEDDBINSTANCESOFFERINGREQUEST_P_H

#include "rdsrequest_p.h"
#include "purchasereserveddbinstancesofferingrequest.h"

namespace QtAws {
namespace Rds {

class PurchaseReservedDBInstancesOfferingRequest;

class PurchaseReservedDBInstancesOfferingRequestPrivate : public RdsRequestPrivate {

public:
    PurchaseReservedDBInstancesOfferingRequestPrivate(const RdsRequest::Action action,
                                   PurchaseReservedDBInstancesOfferingRequest * const q);
    PurchaseReservedDBInstancesOfferingRequestPrivate(const PurchaseReservedDBInstancesOfferingRequestPrivate &other,
                                   PurchaseReservedDBInstancesOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedDBInstancesOfferingRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
