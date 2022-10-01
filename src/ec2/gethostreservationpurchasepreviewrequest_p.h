// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTRESERVATIONPURCHASEPREVIEWREQUEST_P_H
#define QTAWS_GETHOSTRESERVATIONPURCHASEPREVIEWREQUEST_P_H

#include "ec2request_p.h"
#include "gethostreservationpurchasepreviewrequest.h"

namespace QtAws {
namespace Ec2 {

class GetHostReservationPurchasePreviewRequest;

class GetHostReservationPurchasePreviewRequestPrivate : public Ec2RequestPrivate {

public:
    GetHostReservationPurchasePreviewRequestPrivate(const Ec2Request::Action action,
                                   GetHostReservationPurchasePreviewRequest * const q);
    GetHostReservationPurchasePreviewRequestPrivate(const GetHostReservationPurchasePreviewRequestPrivate &other,
                                   GetHostReservationPurchasePreviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHostReservationPurchasePreviewRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
