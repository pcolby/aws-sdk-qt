// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHVPNGATEWAYREQUEST_H
#define QTAWS_DETACHVPNGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DetachVpnGatewayRequestPrivate;

class QTAWSEC2_EXPORT DetachVpnGatewayRequest : public Ec2Request {

public:
    DetachVpnGatewayRequest(const DetachVpnGatewayRequest &other);
    DetachVpnGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachVpnGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
