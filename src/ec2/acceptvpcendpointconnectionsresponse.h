// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTVPCENDPOINTCONNECTIONSRESPONSE_H
#define QTAWS_ACCEPTVPCENDPOINTCONNECTIONSRESPONSE_H

#include "ec2response.h"
#include "acceptvpcendpointconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptVpcEndpointConnectionsResponsePrivate;

class QTAWSEC2_EXPORT AcceptVpcEndpointConnectionsResponse : public Ec2Response {
    Q_OBJECT

public:
    AcceptVpcEndpointConnectionsResponse(const AcceptVpcEndpointConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptVpcEndpointConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptVpcEndpointConnectionsResponse)
    Q_DISABLE_COPY(AcceptVpcEndpointConnectionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
