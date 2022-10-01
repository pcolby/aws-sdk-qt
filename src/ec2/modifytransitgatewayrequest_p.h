// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRANSITGATEWAYREQUEST_P_H
#define QTAWS_MODIFYTRANSITGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "modifytransitgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTransitGatewayRequest;

class ModifyTransitGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyTransitGatewayRequestPrivate(const Ec2Request::Action action,
                                   ModifyTransitGatewayRequest * const q);
    ModifyTransitGatewayRequestPrivate(const ModifyTransitGatewayRequestPrivate &other,
                                   ModifyTransitGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyTransitGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
