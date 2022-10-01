// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H
#define QTAWS_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class PurchaseReservedInstancesOfferingRequestPrivate;

class QTAWSEC2_EXPORT PurchaseReservedInstancesOfferingRequest : public Ec2Request {

public:
    PurchaseReservedInstancesOfferingRequest(const PurchaseReservedInstancesOfferingRequest &other);
    PurchaseReservedInstancesOfferingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedInstancesOfferingRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
