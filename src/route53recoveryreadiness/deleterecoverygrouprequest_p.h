// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYGROUPREQUEST_P_H
#define QTAWS_DELETERECOVERYGROUPREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "deleterecoverygrouprequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteRecoveryGroupRequest;

class DeleteRecoveryGroupRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    DeleteRecoveryGroupRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   DeleteRecoveryGroupRequest * const q);
    DeleteRecoveryGroupRequestPrivate(const DeleteRecoveryGroupRequestPrivate &other,
                                   DeleteRecoveryGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRecoveryGroupRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
