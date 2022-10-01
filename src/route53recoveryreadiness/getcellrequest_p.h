// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELLREQUEST_P_H
#define QTAWS_GETCELLREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "getcellrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetCellRequest;

class GetCellRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    GetCellRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   GetCellRequest * const q);
    GetCellRequestPrivate(const GetCellRequestPrivate &other,
                                   GetCellRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCellRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
