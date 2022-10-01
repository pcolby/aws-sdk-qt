// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMATCHMAKINGRESPONSE_P_H
#define QTAWS_DESCRIBEMATCHMAKINGRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeMatchmakingResponse;

class DescribeMatchmakingResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeMatchmakingResponsePrivate(DescribeMatchmakingResponse * const q);

    void parseDescribeMatchmakingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMatchmakingResponse)
    Q_DISABLE_COPY(DescribeMatchmakingResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
