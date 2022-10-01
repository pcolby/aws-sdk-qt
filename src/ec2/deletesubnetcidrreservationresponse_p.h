// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETCIDRRESERVATIONRESPONSE_P_H
#define QTAWS_DELETESUBNETCIDRRESERVATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteSubnetCidrReservationResponse;

class DeleteSubnetCidrReservationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteSubnetCidrReservationResponsePrivate(DeleteSubnetCidrReservationResponse * const q);

    void parseDeleteSubnetCidrReservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSubnetCidrReservationResponse)
    Q_DISABLE_COPY(DeleteSubnetCidrReservationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
