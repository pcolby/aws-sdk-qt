// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECROSSACCOUNTAUTHORIZATIONREQUEST_P_H
#define QTAWS_DELETECROSSACCOUNTAUTHORIZATIONREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "deletecrossaccountauthorizationrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteCrossAccountAuthorizationRequest;

class DeleteCrossAccountAuthorizationRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    DeleteCrossAccountAuthorizationRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   DeleteCrossAccountAuthorizationRequest * const q);
    DeleteCrossAccountAuthorizationRequestPrivate(const DeleteCrossAccountAuthorizationRequestPrivate &other,
                                   DeleteCrossAccountAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCrossAccountAuthorizationRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
