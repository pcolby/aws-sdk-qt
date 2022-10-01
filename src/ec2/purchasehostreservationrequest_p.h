// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEHOSTRESERVATIONREQUEST_P_H
#define QTAWS_PURCHASEHOSTRESERVATIONREQUEST_P_H

#include "ec2request_p.h"
#include "purchasehostreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class PurchaseHostReservationRequest;

class PurchaseHostReservationRequestPrivate : public Ec2RequestPrivate {

public:
    PurchaseHostReservationRequestPrivate(const Ec2Request::Action action,
                                   PurchaseHostReservationRequest * const q);
    PurchaseHostReservationRequestPrivate(const PurchaseHostReservationRequestPrivate &other,
                                   PurchaseHostReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseHostReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
