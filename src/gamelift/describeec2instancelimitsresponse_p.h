// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEC2INSTANCELIMITSRESPONSE_P_H
#define QTAWS_DESCRIBEEC2INSTANCELIMITSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeEC2InstanceLimitsResponse;

class DescribeEC2InstanceLimitsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeEC2InstanceLimitsResponsePrivate(DescribeEC2InstanceLimitsResponse * const q);

    void parseDescribeEC2InstanceLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEC2InstanceLimitsResponse)
    Q_DISABLE_COPY(DescribeEC2InstanceLimitsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
