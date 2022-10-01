// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMATCHMAKINGRULESETSRESPONSE_P_H
#define QTAWS_DESCRIBEMATCHMAKINGRULESETSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeMatchmakingRuleSetsResponse;

class DescribeMatchmakingRuleSetsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeMatchmakingRuleSetsResponsePrivate(DescribeMatchmakingRuleSetsResponse * const q);

    void parseDescribeMatchmakingRuleSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMatchmakingRuleSetsResponse)
    Q_DISABLE_COPY(DescribeMatchmakingRuleSetsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
