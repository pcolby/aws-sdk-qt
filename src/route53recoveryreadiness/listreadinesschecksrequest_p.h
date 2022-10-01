// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREADINESSCHECKSREQUEST_P_H
#define QTAWS_LISTREADINESSCHECKSREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "listreadinesschecksrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListReadinessChecksRequest;

class ListReadinessChecksRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    ListReadinessChecksRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   ListReadinessChecksRequest * const q);
    ListReadinessChecksRequestPrivate(const ListReadinessChecksRequestPrivate &other,
                                   ListReadinessChecksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReadinessChecksRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
