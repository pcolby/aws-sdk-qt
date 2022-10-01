// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCASSOCIATIONAUTHORIZATIONREQUEST_P_H
#define QTAWS_CREATEVPCASSOCIATIONAUTHORIZATIONREQUEST_P_H

#include "route53request_p.h"
#include "createvpcassociationauthorizationrequest.h"

namespace QtAws {
namespace Route53 {

class CreateVPCAssociationAuthorizationRequest;

class CreateVPCAssociationAuthorizationRequestPrivate : public Route53RequestPrivate {

public:
    CreateVPCAssociationAuthorizationRequestPrivate(const Route53Request::Action action,
                                   CreateVPCAssociationAuthorizationRequest * const q);
    CreateVPCAssociationAuthorizationRequestPrivate(const CreateVPCAssociationAuthorizationRequestPrivate &other,
                                   CreateVPCAssociationAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVPCAssociationAuthorizationRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
