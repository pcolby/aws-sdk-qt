// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTVPCENDPOINTCONNECTIONSREQUEST_H
#define QTAWS_REJECTVPCENDPOINTCONNECTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RejectVpcEndpointConnectionsRequestPrivate;

class QTAWSEC2_EXPORT RejectVpcEndpointConnectionsRequest : public Ec2Request {

public:
    RejectVpcEndpointConnectionsRequest(const RejectVpcEndpointConnectionsRequest &other);
    RejectVpcEndpointConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectVpcEndpointConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
