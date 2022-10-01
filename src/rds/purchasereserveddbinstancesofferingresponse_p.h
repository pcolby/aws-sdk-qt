// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDDBINSTANCESOFFERINGRESPONSE_P_H
#define QTAWS_PURCHASERESERVEDDBINSTANCESOFFERINGRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class PurchaseReservedDBInstancesOfferingResponse;

class PurchaseReservedDBInstancesOfferingResponsePrivate : public RdsResponsePrivate {

public:

    explicit PurchaseReservedDBInstancesOfferingResponsePrivate(PurchaseReservedDBInstancesOfferingResponse * const q);

    void parsePurchaseReservedDBInstancesOfferingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedDBInstancesOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedDBInstancesOfferingResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
