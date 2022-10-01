// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDNODEOFFERINGREQUEST_P_H
#define QTAWS_PURCHASERESERVEDNODEOFFERINGREQUEST_P_H

#include "redshiftrequest_p.h"
#include "purchasereservednodeofferingrequest.h"

namespace QtAws {
namespace Redshift {

class PurchaseReservedNodeOfferingRequest;

class PurchaseReservedNodeOfferingRequestPrivate : public RedshiftRequestPrivate {

public:
    PurchaseReservedNodeOfferingRequestPrivate(const RedshiftRequest::Action action,
                                   PurchaseReservedNodeOfferingRequest * const q);
    PurchaseReservedNodeOfferingRequestPrivate(const PurchaseReservedNodeOfferingRequestPrivate &other,
                                   PurchaseReservedNodeOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedNodeOfferingRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
