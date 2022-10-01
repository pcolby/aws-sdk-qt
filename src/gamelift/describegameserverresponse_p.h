// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERRESPONSE_P_H
#define QTAWS_DESCRIBEGAMESERVERRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerResponse;

class DescribeGameServerResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeGameServerResponsePrivate(DescribeGameServerResponse * const q);

    void parseDescribeGameServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGameServerResponse)
    Q_DISABLE_COPY(DescribeGameServerResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
