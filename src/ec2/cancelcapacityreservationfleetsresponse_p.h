// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCAPACITYRESERVATIONFLEETSRESPONSE_P_H
#define QTAWS_CANCELCAPACITYRESERVATIONFLEETSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CancelCapacityReservationFleetsResponse;

class CancelCapacityReservationFleetsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CancelCapacityReservationFleetsResponsePrivate(CancelCapacityReservationFleetsResponse * const q);

    void parseCancelCapacityReservationFleetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelCapacityReservationFleetsResponse)
    Q_DISABLE_COPY(CancelCapacityReservationFleetsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
