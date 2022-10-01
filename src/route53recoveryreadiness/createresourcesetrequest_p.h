// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESETREQUEST_P_H
#define QTAWS_CREATERESOURCESETREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "createresourcesetrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateResourceSetRequest;

class CreateResourceSetRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    CreateResourceSetRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   CreateResourceSetRequest * const q);
    CreateResourceSetRequestPrivate(const CreateResourceSetRequestPrivate &other,
                                   CreateResourceSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourceSetRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
