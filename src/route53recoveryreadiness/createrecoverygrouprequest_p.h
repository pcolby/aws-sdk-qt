// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOVERYGROUPREQUEST_P_H
#define QTAWS_CREATERECOVERYGROUPREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "createrecoverygrouprequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateRecoveryGroupRequest;

class CreateRecoveryGroupRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    CreateRecoveryGroupRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   CreateRecoveryGroupRequest * const q);
    CreateRecoveryGroupRequestPrivate(const CreateRecoveryGroupRequestPrivate &other,
                                   CreateRecoveryGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRecoveryGroupRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
