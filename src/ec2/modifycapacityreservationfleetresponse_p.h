// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCAPACITYRESERVATIONFLEETRESPONSE_P_H
#define QTAWS_MODIFYCAPACITYRESERVATIONFLEETRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyCapacityReservationFleetResponse;

class ModifyCapacityReservationFleetResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyCapacityReservationFleetResponsePrivate(ModifyCapacityReservationFleetResponse * const q);

    void parseModifyCapacityReservationFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyCapacityReservationFleetResponse)
    Q_DISABLE_COPY(ModifyCapacityReservationFleetResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
