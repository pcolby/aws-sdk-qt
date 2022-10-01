// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEHOSTRESERVATIONRESPONSE_P_H
#define QTAWS_PURCHASEHOSTRESERVATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class PurchaseHostReservationResponse;

class PurchaseHostReservationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit PurchaseHostReservationResponsePrivate(PurchaseHostReservationResponse * const q);

    void parsePurchaseHostReservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurchaseHostReservationResponse)
    Q_DISABLE_COPY(PurchaseHostReservationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
