// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTVPCENDPOINTCONNECTIONSRESPONSE_H
#define QTAWS_REJECTVPCENDPOINTCONNECTIONSRESPONSE_H

#include "ec2response.h"
#include "rejectvpcendpointconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class RejectVpcEndpointConnectionsResponsePrivate;

class QTAWSEC2_EXPORT RejectVpcEndpointConnectionsResponse : public Ec2Response {
    Q_OBJECT

public:
    RejectVpcEndpointConnectionsResponse(const RejectVpcEndpointConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectVpcEndpointConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectVpcEndpointConnectionsResponse)
    Q_DISABLE_COPY(RejectVpcEndpointConnectionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
