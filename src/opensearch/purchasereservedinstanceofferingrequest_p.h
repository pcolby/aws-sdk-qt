// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDINSTANCEOFFERINGREQUEST_P_H
#define QTAWS_PURCHASERESERVEDINSTANCEOFFERINGREQUEST_P_H

#include "opensearchrequest_p.h"
#include "purchasereservedinstanceofferingrequest.h"

namespace QtAws {
namespace OpenSearch {

class PurchaseReservedInstanceOfferingRequest;

class PurchaseReservedInstanceOfferingRequestPrivate : public OpenSearchRequestPrivate {

public:
    PurchaseReservedInstanceOfferingRequestPrivate(const OpenSearchRequest::Action action,
                                   PurchaseReservedInstanceOfferingRequest * const q);
    PurchaseReservedInstanceOfferingRequestPrivate(const PurchaseReservedInstanceOfferingRequestPrivate &other,
                                   PurchaseReservedInstanceOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedInstanceOfferingRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
