// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDDBINSTANCESOFFERINGREQUEST_H
#define QTAWS_PURCHASERESERVEDDBINSTANCESOFFERINGREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class PurchaseReservedDBInstancesOfferingRequestPrivate;

class QTAWSRDS_EXPORT PurchaseReservedDBInstancesOfferingRequest : public RdsRequest {

public:
    PurchaseReservedDBInstancesOfferingRequest(const PurchaseReservedDBInstancesOfferingRequest &other);
    PurchaseReservedDBInstancesOfferingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedDBInstancesOfferingRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
