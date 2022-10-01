// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYPREFIXLISTREFERENCEREQUEST_P_H
#define QTAWS_DELETETRANSITGATEWAYPREFIXLISTREFERENCEREQUEST_P_H

#include "ec2request_p.h"
#include "deletetransitgatewayprefixlistreferencerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayPrefixListReferenceRequest;

class DeleteTransitGatewayPrefixListReferenceRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTransitGatewayPrefixListReferenceRequestPrivate(const Ec2Request::Action action,
                                   DeleteTransitGatewayPrefixListReferenceRequest * const q);
    DeleteTransitGatewayPrefixListReferenceRequestPrivate(const DeleteTransitGatewayPrefixListReferenceRequestPrivate &other,
                                   DeleteTransitGatewayPrefixListReferenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayPrefixListReferenceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
