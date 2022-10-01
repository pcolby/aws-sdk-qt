// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREADINESSCHECKREQUEST_P_H
#define QTAWS_CREATEREADINESSCHECKREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "createreadinesscheckrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateReadinessCheckRequest;

class CreateReadinessCheckRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    CreateReadinessCheckRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   CreateReadinessCheckRequest * const q);
    CreateReadinessCheckRequestPrivate(const CreateReadinessCheckRequestPrivate &other,
                                   CreateReadinessCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReadinessCheckRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
