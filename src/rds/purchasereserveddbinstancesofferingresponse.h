// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDDBINSTANCESOFFERINGRESPONSE_H
#define QTAWS_PURCHASERESERVEDDBINSTANCESOFFERINGRESPONSE_H

#include "rdsresponse.h"
#include "purchasereserveddbinstancesofferingrequest.h"

namespace QtAws {
namespace Rds {

class PurchaseReservedDBInstancesOfferingResponsePrivate;

class QTAWSRDS_EXPORT PurchaseReservedDBInstancesOfferingResponse : public RdsResponse {
    Q_OBJECT

public:
    PurchaseReservedDBInstancesOfferingResponse(const PurchaseReservedDBInstancesOfferingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurchaseReservedDBInstancesOfferingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedDBInstancesOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedDBInstancesOfferingResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
