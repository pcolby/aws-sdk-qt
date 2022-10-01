// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKREQUEST_P_H
#define QTAWS_GETREADINESSCHECKREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "getreadinesscheckrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckRequest;

class GetReadinessCheckRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    GetReadinessCheckRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   GetReadinessCheckRequest * const q);
    GetReadinessCheckRequestPrivate(const GetReadinessCheckRequestPrivate &other,
                                   GetReadinessCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReadinessCheckRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
