// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEROUTETABLEASSOCIATIONREQUEST_P_H
#define QTAWS_REPLACEROUTETABLEASSOCIATIONREQUEST_P_H

#include "ec2request_p.h"
#include "replaceroutetableassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceRouteTableAssociationRequest;

class ReplaceRouteTableAssociationRequestPrivate : public Ec2RequestPrivate {

public:
    ReplaceRouteTableAssociationRequestPrivate(const Ec2Request::Action action,
                                   ReplaceRouteTableAssociationRequest * const q);
    ReplaceRouteTableAssociationRequestPrivate(const ReplaceRouteTableAssociationRequestPrivate &other,
                                   ReplaceRouteTableAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReplaceRouteTableAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
