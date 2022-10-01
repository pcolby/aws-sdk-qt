// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESETREQUEST_P_H
#define QTAWS_DELETERESOURCESETREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "deleteresourcesetrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteResourceSetRequest;

class DeleteResourceSetRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    DeleteResourceSetRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   DeleteResourceSetRequest * const q);
    DeleteResourceSetRequestPrivate(const DeleteResourceSetRequestPrivate &other,
                                   DeleteResourceSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourceSetRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
