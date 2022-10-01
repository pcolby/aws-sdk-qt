// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCPEERINGCONNECTIONSRESPONSE_H
#define QTAWS_DESCRIBEVPCPEERINGCONNECTIONSRESPONSE_H

#include "gameliftresponse.h"
#include "describevpcpeeringconnectionsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeVpcPeeringConnectionsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeVpcPeeringConnectionsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeVpcPeeringConnectionsResponse(const DescribeVpcPeeringConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcPeeringConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcPeeringConnectionsResponse)
    Q_DISABLE_COPY(DescribeVpcPeeringConnectionsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
