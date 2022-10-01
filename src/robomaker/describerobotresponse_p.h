// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROBOTRESPONSE_P_H
#define QTAWS_DESCRIBEROBOTRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeRobotResponse;

class DescribeRobotResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeRobotResponsePrivate(DescribeRobotResponse * const q);

    void parseDescribeRobotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRobotResponse)
    Q_DISABLE_COPY(DescribeRobotResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
