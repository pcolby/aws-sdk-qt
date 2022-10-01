// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESETSREQUEST_P_H
#define QTAWS_LISTRESOURCESETSREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "listresourcesetsrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListResourceSetsRequest;

class ListResourceSetsRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    ListResourceSetsRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   ListResourceSetsRequest * const q);
    ListResourceSetsRequestPrivate(const ListResourceSetsRequestPrivate &other,
                                   ListResourceSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceSetsRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
