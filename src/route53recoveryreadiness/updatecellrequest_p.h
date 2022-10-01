// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECELLREQUEST_P_H
#define QTAWS_UPDATECELLREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "updatecellrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateCellRequest;

class UpdateCellRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    UpdateCellRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   UpdateCellRequest * const q);
    UpdateCellRequestPrivate(const UpdateCellRequestPrivate &other,
                                   UpdateCellRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCellRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
