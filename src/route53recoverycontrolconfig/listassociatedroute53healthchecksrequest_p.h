// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDROUTE53HEALTHCHECKSREQUEST_P_H
#define QTAWS_LISTASSOCIATEDROUTE53HEALTHCHECKSREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "listassociatedroute53healthchecksrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListAssociatedRoute53HealthChecksRequest;

class ListAssociatedRoute53HealthChecksRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    ListAssociatedRoute53HealthChecksRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   ListAssociatedRoute53HealthChecksRequest * const q);
    ListAssociatedRoute53HealthChecksRequestPrivate(const ListAssociatedRoute53HealthChecksRequestPrivate &other,
                                   ListAssociatedRoute53HealthChecksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociatedRoute53HealthChecksRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
