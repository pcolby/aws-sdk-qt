// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAPACITYRESERVATIONUSAGERESPONSE_P_H
#define QTAWS_GETCAPACITYRESERVATIONUSAGERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetCapacityReservationUsageResponse;

class GetCapacityReservationUsageResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetCapacityReservationUsageResponsePrivate(GetCapacityReservationUsageResponse * const q);

    void parseGetCapacityReservationUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCapacityReservationUsageResponse)
    Q_DISABLE_COPY(GetCapacityReservationUsageResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
