// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBEGAMESERVERINSTANCESRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerInstancesResponse;

class DescribeGameServerInstancesResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeGameServerInstancesResponsePrivate(DescribeGameServerInstancesResponse * const q);

    void parseDescribeGameServerInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGameServerInstancesResponse)
    Q_DISABLE_COPY(DescribeGameServerInstancesResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
