// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEOFFERINGREQUEST_P_H
#define QTAWS_PURCHASEOFFERINGREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "purchaseofferingrequest.h"

namespace QtAws {
namespace MediaConnect {

class PurchaseOfferingRequest;

class PurchaseOfferingRequestPrivate : public MediaConnectRequestPrivate {

public:
    PurchaseOfferingRequestPrivate(const MediaConnectRequest::Action action,
                                   PurchaseOfferingRequest * const q);
    PurchaseOfferingRequestPrivate(const PurchaseOfferingRequestPrivate &other,
                                   PurchaseOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseOfferingRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
