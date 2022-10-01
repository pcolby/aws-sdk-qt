// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAVAILABILITYZONEGROUPRESPONSE_P_H
#define QTAWS_MODIFYAVAILABILITYZONEGROUPRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyAvailabilityZoneGroupResponse;

class ModifyAvailabilityZoneGroupResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyAvailabilityZoneGroupResponsePrivate(ModifyAvailabilityZoneGroupResponse * const q);

    void parseModifyAvailabilityZoneGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyAvailabilityZoneGroupResponse)
    Q_DISABLE_COPY(ModifyAvailabilityZoneGroupResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
