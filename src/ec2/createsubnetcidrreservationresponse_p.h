// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETCIDRRESERVATIONRESPONSE_P_H
#define QTAWS_CREATESUBNETCIDRRESERVATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateSubnetCidrReservationResponse;

class CreateSubnetCidrReservationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateSubnetCidrReservationResponsePrivate(CreateSubnetCidrReservationResponse * const q);

    void parseCreateSubnetCidrReservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSubnetCidrReservationResponse)
    Q_DISABLE_COPY(CreateSubnetCidrReservationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
