// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONQUEUESRESPONSE_P_H
#define QTAWS_DESCRIBEGAMESESSIONQUEUESRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionQueuesResponse;

class DescribeGameSessionQueuesResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeGameSessionQueuesResponsePrivate(DescribeGameSessionQueuesResponse * const q);

    void parseDescribeGameSessionQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGameSessionQueuesResponse)
    Q_DISABLE_COPY(DescribeGameSessionQueuesResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
