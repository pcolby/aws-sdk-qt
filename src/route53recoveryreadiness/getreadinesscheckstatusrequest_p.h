// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKSTATUSREQUEST_P_H
#define QTAWS_GETREADINESSCHECKSTATUSREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "getreadinesscheckstatusrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckStatusRequest;

class GetReadinessCheckStatusRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    GetReadinessCheckStatusRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   GetReadinessCheckStatusRequest * const q);
    GetReadinessCheckStatusRequestPrivate(const GetReadinessCheckStatusRequestPrivate &other,
                                   GetReadinessCheckStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReadinessCheckStatusRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
