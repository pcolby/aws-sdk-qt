// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCPEERINGAUTHORIZATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVPCPEERINGAUTHORIZATIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeVpcPeeringAuthorizationsResponse;

class DescribeVpcPeeringAuthorizationsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeVpcPeeringAuthorizationsResponsePrivate(DescribeVpcPeeringAuthorizationsResponse * const q);

    void parseDescribeVpcPeeringAuthorizationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcPeeringAuthorizationsResponse)
    Q_DISABLE_COPY(DescribeVpcPeeringAuthorizationsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
