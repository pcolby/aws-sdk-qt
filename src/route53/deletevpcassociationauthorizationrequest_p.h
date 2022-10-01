// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCASSOCIATIONAUTHORIZATIONREQUEST_P_H
#define QTAWS_DELETEVPCASSOCIATIONAUTHORIZATIONREQUEST_P_H

#include "route53request_p.h"
#include "deletevpcassociationauthorizationrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteVPCAssociationAuthorizationRequest;

class DeleteVPCAssociationAuthorizationRequestPrivate : public Route53RequestPrivate {

public:
    DeleteVPCAssociationAuthorizationRequestPrivate(const Route53Request::Action action,
                                   DeleteVPCAssociationAuthorizationRequest * const q);
    DeleteVPCAssociationAuthorizationRequestPrivate(const DeleteVPCAssociationAuthorizationRequestPrivate &other,
                                   DeleteVPCAssociationAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVPCAssociationAuthorizationRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
