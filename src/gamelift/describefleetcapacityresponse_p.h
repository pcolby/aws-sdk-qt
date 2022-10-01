// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETCAPACITYRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETCAPACITYRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetCapacityResponse;

class DescribeFleetCapacityResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeFleetCapacityResponsePrivate(DescribeFleetCapacityResponse * const q);

    void parseDescribeFleetCapacityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetCapacityResponse)
    Q_DISABLE_COPY(DescribeFleetCapacityResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
