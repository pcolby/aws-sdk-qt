// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHINTERNETGATEWAYREQUEST_P_H
#define QTAWS_DETACHINTERNETGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "detachinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DetachInternetGatewayRequest;

class DetachInternetGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    DetachInternetGatewayRequestPrivate(const Ec2Request::Action action,
                                   DetachInternetGatewayRequest * const q);
    DetachInternetGatewayRequestPrivate(const DetachInternetGatewayRequestPrivate &other,
                                   DetachInternetGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
