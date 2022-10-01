// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPSFORCAPACITYRESERVATIONRESPONSE_P_H
#define QTAWS_GETGROUPSFORCAPACITYRESERVATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetGroupsForCapacityReservationResponse;

class GetGroupsForCapacityReservationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetGroupsForCapacityReservationResponsePrivate(GetGroupsForCapacityReservationResponse * const q);

    void parseGetGroupsForCapacityReservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupsForCapacityReservationResponse)
    Q_DISABLE_COPY(GetGroupsForCapacityReservationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
