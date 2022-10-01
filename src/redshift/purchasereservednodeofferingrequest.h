// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDNODEOFFERINGREQUEST_H
#define QTAWS_PURCHASERESERVEDNODEOFFERINGREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class PurchaseReservedNodeOfferingRequestPrivate;

class QTAWSREDSHIFT_EXPORT PurchaseReservedNodeOfferingRequest : public RedshiftRequest {

public:
    PurchaseReservedNodeOfferingRequest(const PurchaseReservedNodeOfferingRequest &other);
    PurchaseReservedNodeOfferingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedNodeOfferingRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
