// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMATCHMAKINGCONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEMATCHMAKINGCONFIGURATIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeMatchmakingConfigurationsResponse;

class DescribeMatchmakingConfigurationsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeMatchmakingConfigurationsResponsePrivate(DescribeMatchmakingConfigurationsResponse * const q);

    void parseDescribeMatchmakingConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMatchmakingConfigurationsResponse)
    Q_DISABLE_COPY(DescribeMatchmakingConfigurationsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
