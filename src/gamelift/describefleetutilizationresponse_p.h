// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETUTILIZATIONRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETUTILIZATIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetUtilizationResponse;

class DescribeFleetUtilizationResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeFleetUtilizationResponsePrivate(DescribeFleetUtilizationResponse * const q);

    void parseDescribeFleetUtilizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetUtilizationResponse)
    Q_DISABLE_COPY(DescribeFleetUtilizationResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
