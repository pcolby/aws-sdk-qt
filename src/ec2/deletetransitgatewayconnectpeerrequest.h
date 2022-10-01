// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYCONNECTPEERREQUEST_H
#define QTAWS_DELETETRANSITGATEWAYCONNECTPEERREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayConnectPeerRequestPrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayConnectPeerRequest : public Ec2Request {

public:
    DeleteTransitGatewayConnectPeerRequest(const DeleteTransitGatewayConnectPeerRequest &other);
    DeleteTransitGatewayConnectPeerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayConnectPeerRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
