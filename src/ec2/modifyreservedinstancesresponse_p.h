// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYRESERVEDINSTANCESRESPONSE_P_H
#define QTAWS_MODIFYRESERVEDINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyReservedInstancesResponse;

class ModifyReservedInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyReservedInstancesResponsePrivate(ModifyReservedInstancesResponse * const q);

    void parseModifyReservedInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyReservedInstancesResponse)
    Q_DISABLE_COPY(ModifyReservedInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
