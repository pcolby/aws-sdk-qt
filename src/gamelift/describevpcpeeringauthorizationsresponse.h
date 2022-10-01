// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCPEERINGAUTHORIZATIONSRESPONSE_H
#define QTAWS_DESCRIBEVPCPEERINGAUTHORIZATIONSRESPONSE_H

#include "gameliftresponse.h"
#include "describevpcpeeringauthorizationsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeVpcPeeringAuthorizationsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeVpcPeeringAuthorizationsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeVpcPeeringAuthorizationsResponse(const DescribeVpcPeeringAuthorizationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcPeeringAuthorizationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcPeeringAuthorizationsResponse)
    Q_DISABLE_COPY(DescribeVpcPeeringAuthorizationsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
