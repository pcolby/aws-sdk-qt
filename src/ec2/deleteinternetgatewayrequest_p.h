// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTERNETGATEWAYREQUEST_P_H
#define QTAWS_DELETEINTERNETGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "deleteinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteInternetGatewayRequest;

class DeleteInternetGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteInternetGatewayRequestPrivate(const Ec2Request::Action action,
                                   DeleteInternetGatewayRequest * const q);
    DeleteInternetGatewayRequestPrivate(const DeleteInternetGatewayRequestPrivate &other,
                                   DeleteInternetGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
