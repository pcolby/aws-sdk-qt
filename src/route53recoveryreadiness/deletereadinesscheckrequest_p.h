// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREADINESSCHECKREQUEST_P_H
#define QTAWS_DELETEREADINESSCHECKREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "deletereadinesscheckrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteReadinessCheckRequest;

class DeleteReadinessCheckRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    DeleteReadinessCheckRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   DeleteReadinessCheckRequest * const q);
    DeleteReadinessCheckRequestPrivate(const DeleteReadinessCheckRequestPrivate &other,
                                   DeleteReadinessCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReadinessCheckRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
