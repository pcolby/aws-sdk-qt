// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYGROUPREQUEST_P_H
#define QTAWS_GETRECOVERYGROUPREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "getrecoverygrouprequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetRecoveryGroupRequest;

class GetRecoveryGroupRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    GetRecoveryGroupRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   GetRecoveryGroupRequest * const q);
    GetRecoveryGroupRequestPrivate(const GetRecoveryGroupRequestPrivate &other,
                                   GetRecoveryGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecoveryGroupRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
