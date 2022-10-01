// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECROSSACCOUNTAUTHORIZATIONREQUEST_P_H
#define QTAWS_CREATECROSSACCOUNTAUTHORIZATIONREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "createcrossaccountauthorizationrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateCrossAccountAuthorizationRequest;

class CreateCrossAccountAuthorizationRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    CreateCrossAccountAuthorizationRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   CreateCrossAccountAuthorizationRequest * const q);
    CreateCrossAccountAuthorizationRequestPrivate(const CreateCrossAccountAuthorizationRequestPrivate &other,
                                   CreateCrossAccountAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCrossAccountAuthorizationRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
