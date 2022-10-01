// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEOFFERINGREQUEST_P_H
#define QTAWS_PURCHASEOFFERINGREQUEST_P_H

#include "medialiverequest_p.h"
#include "purchaseofferingrequest.h"

namespace QtAws {
namespace MediaLive {

class PurchaseOfferingRequest;

class PurchaseOfferingRequestPrivate : public MediaLiveRequestPrivate {

public:
    PurchaseOfferingRequestPrivate(const MediaLiveRequest::Action action,
                                   PurchaseOfferingRequest * const q);
    PurchaseOfferingRequestPrivate(const PurchaseOfferingRequestPrivate &other,
                                   PurchaseOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseOfferingRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
