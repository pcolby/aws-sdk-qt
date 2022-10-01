// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHINTERNETGATEWAYREQUEST_H
#define QTAWS_DETACHINTERNETGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DetachInternetGatewayRequestPrivate;

class QTAWSEC2_EXPORT DetachInternetGatewayRequest : public Ec2Request {

public:
    DetachInternetGatewayRequest(const DetachInternetGatewayRequest &other);
    DetachInternetGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
