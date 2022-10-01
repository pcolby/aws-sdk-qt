// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYRESERVATIONFLEETRESPONSE_P_H
#define QTAWS_CREATECAPACITYRESERVATIONFLEETRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateCapacityReservationFleetResponse;

class CreateCapacityReservationFleetResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateCapacityReservationFleetResponsePrivate(CreateCapacityReservationFleetResponse * const q);

    void parseCreateCapacityReservationFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCapacityReservationFleetResponse)
    Q_DISABLE_COPY(CreateCapacityReservationFleetResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
