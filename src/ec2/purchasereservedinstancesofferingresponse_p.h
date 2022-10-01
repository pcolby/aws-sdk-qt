// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDINSTANCESOFFERINGRESPONSE_P_H
#define QTAWS_PURCHASERESERVEDINSTANCESOFFERINGRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class PurchaseReservedInstancesOfferingResponse;

class PurchaseReservedInstancesOfferingResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit PurchaseReservedInstancesOfferingResponsePrivate(PurchaseReservedInstancesOfferingResponse * const q);

    void parsePurchaseReservedInstancesOfferingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedInstancesOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedInstancesOfferingResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
