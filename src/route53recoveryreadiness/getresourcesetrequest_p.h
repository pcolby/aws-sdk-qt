// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESETREQUEST_P_H
#define QTAWS_GETRESOURCESETREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "getresourcesetrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetResourceSetRequest;

class GetResourceSetRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    GetResourceSetRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   GetResourceSetRequest * const q);
    GetResourceSetRequestPrivate(const GetResourceSetRequestPrivate &other,
                                   GetResourceSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceSetRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
