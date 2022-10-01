// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREADINESSCHECKREQUEST_P_H
#define QTAWS_UPDATEREADINESSCHECKREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "updatereadinesscheckrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateReadinessCheckRequest;

class UpdateReadinessCheckRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    UpdateReadinessCheckRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   UpdateReadinessCheckRequest * const q);
    UpdateReadinessCheckRequestPrivate(const UpdateReadinessCheckRequestPrivate &other,
                                   UpdateReadinessCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReadinessCheckRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
