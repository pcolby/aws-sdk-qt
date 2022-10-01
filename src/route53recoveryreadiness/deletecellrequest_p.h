// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECELLREQUEST_P_H
#define QTAWS_DELETECELLREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "deletecellrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteCellRequest;

class DeleteCellRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    DeleteCellRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   DeleteCellRequest * const q);
    DeleteCellRequestPrivate(const DeleteCellRequestPrivate &other,
                                   DeleteCellRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCellRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
