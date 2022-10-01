// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDINSTANCESOFFERINGRESPONSE_H
#define QTAWS_PURCHASERESERVEDINSTANCESOFFERINGRESPONSE_H

#include "ec2response.h"
#include "purchasereservedinstancesofferingrequest.h"

namespace QtAws {
namespace Ec2 {

class PurchaseReservedInstancesOfferingResponsePrivate;

class QTAWSEC2_EXPORT PurchaseReservedInstancesOfferingResponse : public Ec2Response {
    Q_OBJECT

public:
    PurchaseReservedInstancesOfferingResponse(const PurchaseReservedInstancesOfferingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurchaseReservedInstancesOfferingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedInstancesOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedInstancesOfferingResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
