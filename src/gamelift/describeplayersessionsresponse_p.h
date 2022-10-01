// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLAYERSESSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEPLAYERSESSIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribePlayerSessionsResponse;

class DescribePlayerSessionsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribePlayerSessionsResponsePrivate(DescribePlayerSessionsResponse * const q);

    void parseDescribePlayerSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePlayerSessionsResponse)
    Q_DISABLE_COPY(DescribePlayerSessionsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
