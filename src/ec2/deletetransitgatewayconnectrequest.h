// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYCONNECTREQUEST_H
#define QTAWS_DELETETRANSITGATEWAYCONNECTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayConnectRequestPrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayConnectRequest : public Ec2Request {

public:
    DeleteTransitGatewayConnectRequest(const DeleteTransitGatewayConnectRequest &other);
    DeleteTransitGatewayConnectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayConnectRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
