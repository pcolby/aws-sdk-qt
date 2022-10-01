// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEOFFERINGREQUEST_P_H
#define QTAWS_PURCHASEOFFERINGREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "purchaseofferingrequest.h"

namespace QtAws {
namespace DeviceFarm {

class PurchaseOfferingRequest;

class PurchaseOfferingRequestPrivate : public DeviceFarmRequestPrivate {

public:
    PurchaseOfferingRequestPrivate(const DeviceFarmRequest::Action action,
                                   PurchaseOfferingRequest * const q);
    PurchaseOfferingRequestPrivate(const PurchaseOfferingRequestPrivate &other,
                                   PurchaseOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseOfferingRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
