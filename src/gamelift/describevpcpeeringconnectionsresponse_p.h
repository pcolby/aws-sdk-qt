// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCPEERINGCONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVPCPEERINGCONNECTIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeVpcPeeringConnectionsResponse;

class DescribeVpcPeeringConnectionsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeVpcPeeringConnectionsResponsePrivate(DescribeVpcPeeringConnectionsResponse * const q);

    void parseDescribeVpcPeeringConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcPeeringConnectionsResponse)
    Q_DISABLE_COPY(DescribeVpcPeeringConnectionsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
