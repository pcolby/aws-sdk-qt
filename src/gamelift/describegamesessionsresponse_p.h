// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEGAMESESSIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionsResponse;

class DescribeGameSessionsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeGameSessionsResponsePrivate(DescribeGameSessionsResponse * const q);

    void parseDescribeGameSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGameSessionsResponse)
    Q_DISABLE_COPY(DescribeGameSessionsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
