// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETEVENTSRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETEVENTSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetEventsResponse;

class DescribeFleetEventsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeFleetEventsResponsePrivate(DescribeFleetEventsResponse * const q);

    void parseDescribeFleetEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetEventsResponse)
    Q_DISABLE_COPY(DescribeFleetEventsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
