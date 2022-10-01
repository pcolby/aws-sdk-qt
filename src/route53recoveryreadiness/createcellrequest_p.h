// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECELLREQUEST_P_H
#define QTAWS_CREATECELLREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "createcellrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateCellRequest;

class CreateCellRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    CreateCellRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   CreateCellRequest * const q);
    CreateCellRequestPrivate(const CreateCellRequestPrivate &other,
                                   CreateCellRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCellRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
