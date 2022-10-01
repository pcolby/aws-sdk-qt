// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESETREQUEST_P_H
#define QTAWS_UPDATERESOURCESETREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "updateresourcesetrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateResourceSetRequest;

class UpdateResourceSetRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    UpdateResourceSetRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   UpdateResourceSetRequest * const q);
    UpdateResourceSetRequestPrivate(const UpdateResourceSetRequestPrivate &other,
                                   UpdateResourceSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResourceSetRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
