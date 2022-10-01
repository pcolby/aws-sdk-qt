// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASEREPLICACOUNTREQUEST_P_H
#define QTAWS_INCREASEREPLICACOUNTREQUEST_P_H

#include "elasticacherequest_p.h"
#include "increasereplicacountrequest.h"

namespace QtAws {
namespace ElastiCache {

class IncreaseReplicaCountRequest;

class IncreaseReplicaCountRequestPrivate : public ElastiCacheRequestPrivate {

public:
    IncreaseReplicaCountRequestPrivate(const ElastiCacheRequest::Action action,
                                   IncreaseReplicaCountRequest * const q);
    IncreaseReplicaCountRequestPrivate(const IncreaseReplicaCountRequestPrivate &other,
                                   IncreaseReplicaCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(IncreaseReplicaCountRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
