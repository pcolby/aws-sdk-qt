// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEGAMESERVERGROUPRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerGroupResponse;

class DescribeGameServerGroupResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeGameServerGroupResponsePrivate(DescribeGameServerGroupResponse * const q);

    void parseDescribeGameServerGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGameServerGroupResponse)
    Q_DISABLE_COPY(DescribeGameServerGroupResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
