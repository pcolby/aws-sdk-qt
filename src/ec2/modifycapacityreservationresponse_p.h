// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCAPACITYRESERVATIONRESPONSE_P_H
#define QTAWS_MODIFYCAPACITYRESERVATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyCapacityReservationResponse;

class ModifyCapacityReservationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyCapacityReservationResponsePrivate(ModifyCapacityReservationResponse * const q);

    void parseModifyCapacityReservationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyCapacityReservationResponse)
    Q_DISABLE_COPY(ModifyCapacityReservationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
