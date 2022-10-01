// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGGROUPRESPONSE_P_H
#define QTAWS_DESCRIBETHINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeThingGroupResponse;

class DescribeThingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeThingGroupResponsePrivate(DescribeThingGroupResponse * const q);

    void parseDescribeThingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeThingGroupResponse)
    Q_DISABLE_COPY(DescribeThingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
