// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPREFIXLISTREFERENCEREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYPREFIXLISTREFERENCEREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewayprefixlistreferencerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPrefixListReferenceRequest;

class CreateTransitGatewayPrefixListReferenceRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayPrefixListReferenceRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayPrefixListReferenceRequest * const q);
    CreateTransitGatewayPrefixListReferenceRequestPrivate(const CreateTransitGatewayPrefixListReferenceRequestPrivate &other,
                                   CreateTransitGatewayPrefixListReferenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayPrefixListReferenceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
