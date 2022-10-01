// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROBOTAPPLICATIONRESPONSE_P_H
#define QTAWS_DESCRIBEROBOTAPPLICATIONRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeRobotApplicationResponse;

class DescribeRobotApplicationResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeRobotApplicationResponsePrivate(DescribeRobotApplicationResponse * const q);

    void parseDescribeRobotApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRobotApplicationResponse)
    Q_DISABLE_COPY(DescribeRobotApplicationResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
