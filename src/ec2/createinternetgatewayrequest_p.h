// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTERNETGATEWAYREQUEST_P_H
#define QTAWS_CREATEINTERNETGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "createinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateInternetGatewayRequest;

class CreateInternetGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    CreateInternetGatewayRequestPrivate(const Ec2Request::Action action,
                                   CreateInternetGatewayRequest * const q);
    CreateInternetGatewayRequestPrivate(const CreateInternetGatewayRequestPrivate &other,
                                   CreateInternetGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
