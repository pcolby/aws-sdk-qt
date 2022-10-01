// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYGROUPSREQUEST_P_H
#define QTAWS_LISTRECOVERYGROUPSREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "listrecoverygroupsrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListRecoveryGroupsRequest;

class ListRecoveryGroupsRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    ListRecoveryGroupsRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   ListRecoveryGroupsRequest * const q);
    ListRecoveryGroupsRequestPrivate(const ListRecoveryGroupsRequestPrivate &other,
                                   ListRecoveryGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecoveryGroupsRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
