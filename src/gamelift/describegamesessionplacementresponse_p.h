// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONPLACEMENTRESPONSE_P_H
#define QTAWS_DESCRIBEGAMESESSIONPLACEMENTRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionPlacementResponse;

class DescribeGameSessionPlacementResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeGameSessionPlacementResponsePrivate(DescribeGameSessionPlacementResponse * const q);

    void parseDescribeGameSessionPlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGameSessionPlacementResponse)
    Q_DISABLE_COPY(DescribeGameSessionPlacementResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
