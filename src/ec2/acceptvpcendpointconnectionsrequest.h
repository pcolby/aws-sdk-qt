// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTVPCENDPOINTCONNECTIONSREQUEST_H
#define QTAWS_ACCEPTVPCENDPOINTCONNECTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AcceptVpcEndpointConnectionsRequestPrivate;

class QTAWSEC2_EXPORT AcceptVpcEndpointConnectionsRequest : public Ec2Request {

public:
    AcceptVpcEndpointConnectionsRequest(const AcceptVpcEndpointConnectionsRequest &other);
    AcceptVpcEndpointConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptVpcEndpointConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
