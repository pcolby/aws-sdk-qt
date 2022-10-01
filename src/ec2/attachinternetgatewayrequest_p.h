// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINTERNETGATEWAYREQUEST_P_H
#define QTAWS_ATTACHINTERNETGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "attachinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class AttachInternetGatewayRequest;

class AttachInternetGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    AttachInternetGatewayRequestPrivate(const Ec2Request::Action action,
                                   AttachInternetGatewayRequest * const q);
    AttachInternetGatewayRequestPrivate(const AttachInternetGatewayRequestPrivate &other,
                                   AttachInternetGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
