// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCESRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeInstancesResponse;

class DescribeInstancesResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeInstancesResponsePrivate(DescribeInstancesResponse * const q);

    void parseDescribeInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstancesResponse)
    Q_DISABLE_COPY(DescribeInstancesResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
