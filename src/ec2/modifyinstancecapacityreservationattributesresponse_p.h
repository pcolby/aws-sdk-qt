// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCECAPACITYRESERVATIONATTRIBUTESRESPONSE_P_H
#define QTAWS_MODIFYINSTANCECAPACITYRESERVATIONATTRIBUTESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceCapacityReservationAttributesResponse;

class ModifyInstanceCapacityReservationAttributesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyInstanceCapacityReservationAttributesResponsePrivate(ModifyInstanceCapacityReservationAttributesResponse * const q);

    void parseModifyInstanceCapacityReservationAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceCapacityReservationAttributesResponse)
    Q_DISABLE_COPY(ModifyInstanceCapacityReservationAttributesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
