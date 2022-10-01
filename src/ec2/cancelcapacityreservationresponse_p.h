// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCAPACITYRESERVATIONRESPONSE_P_H
#define QTAWS_CANCELCAPACITYRESERVATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CancelCapacityReservationResponse;

class CancelCapacityReservationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CancelCapacityReservationResponsePrivate(CancelCapacityReservationResponse * const q);

    void parseCancelCapacityReservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelCapacityReservationResponse)
    Q_DISABLE_COPY(CancelCapacityReservationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
