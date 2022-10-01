// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETLOCATIONCAPACITYRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETLOCATIONCAPACITYRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetLocationCapacityResponse;

class DescribeFleetLocationCapacityResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeFleetLocationCapacityResponsePrivate(DescribeFleetLocationCapacityResponse * const q);

    void parseDescribeFleetLocationCapacityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetLocationCapacityResponse)
    Q_DISABLE_COPY(DescribeFleetLocationCapacityResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
