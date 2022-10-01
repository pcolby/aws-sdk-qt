// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYRESERVATIONRESPONSE_P_H
#define QTAWS_CREATECAPACITYRESERVATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateCapacityReservationResponse;

class CreateCapacityReservationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateCapacityReservationResponsePrivate(CreateCapacityReservationResponse * const q);

    void parseCreateCapacityReservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCapacityReservationResponse)
    Q_DISABLE_COPY(CreateCapacityReservationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
