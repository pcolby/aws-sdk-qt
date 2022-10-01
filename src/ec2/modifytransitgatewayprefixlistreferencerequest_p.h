// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRANSITGATEWAYPREFIXLISTREFERENCEREQUEST_P_H
#define QTAWS_MODIFYTRANSITGATEWAYPREFIXLISTREFERENCEREQUEST_P_H

#include "ec2request_p.h"
#include "modifytransitgatewayprefixlistreferencerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTransitGatewayPrefixListReferenceRequest;

class ModifyTransitGatewayPrefixListReferenceRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyTransitGatewayPrefixListReferenceRequestPrivate(const Ec2Request::Action action,
                                   ModifyTransitGatewayPrefixListReferenceRequest * const q);
    ModifyTransitGatewayPrefixListReferenceRequestPrivate(const ModifyTransitGatewayPrefixListReferenceRequestPrivate &other,
                                   ModifyTransitGatewayPrefixListReferenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyTransitGatewayPrefixListReferenceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
