// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETLOCATIONUTILIZATIONRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETLOCATIONUTILIZATIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetLocationUtilizationResponse;

class DescribeFleetLocationUtilizationResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeFleetLocationUtilizationResponsePrivate(DescribeFleetLocationUtilizationResponse * const q);

    void parseDescribeFleetLocationUtilizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetLocationUtilizationResponse)
    Q_DISABLE_COPY(DescribeFleetLocationUtilizationResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
