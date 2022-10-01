// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPREFIXLISTREFERENCESREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYPREFIXLISTREFERENCESREQUEST_P_H

#include "ec2request_p.h"
#include "gettransitgatewayprefixlistreferencesrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPrefixListReferencesRequest;

class GetTransitGatewayPrefixListReferencesRequestPrivate : public Ec2RequestPrivate {

public:
    GetTransitGatewayPrefixListReferencesRequestPrivate(const Ec2Request::Action action,
                                   GetTransitGatewayPrefixListReferencesRequest * const q);
    GetTransitGatewayPrefixListReferencesRequestPrivate(const GetTransitGatewayPrefixListReferencesRequestPrivate &other,
                                   GetTransitGatewayPrefixListReferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayPrefixListReferencesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
