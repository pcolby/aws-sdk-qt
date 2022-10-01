// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKRESOURCESTATUSREQUEST_P_H
#define QTAWS_GETREADINESSCHECKRESOURCESTATUSREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "getreadinesscheckresourcestatusrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckResourceStatusRequest;

class GetReadinessCheckResourceStatusRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    GetReadinessCheckResourceStatusRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   GetReadinessCheckResourceStatusRequest * const q);
    GetReadinessCheckResourceStatusRequestPrivate(const GetReadinessCheckResourceStatusRequestPrivate &other,
                                   GetReadinessCheckResourceStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReadinessCheckResourceStatusRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
