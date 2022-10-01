// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASEREPLICACOUNTREQUEST_P_H
#define QTAWS_DECREASEREPLICACOUNTREQUEST_P_H

#include "elasticacherequest_p.h"
#include "decreasereplicacountrequest.h"

namespace QtAws {
namespace ElastiCache {

class DecreaseReplicaCountRequest;

class DecreaseReplicaCountRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DecreaseReplicaCountRequestPrivate(const ElastiCacheRequest::Action action,
                                   DecreaseReplicaCountRequest * const q);
    DecreaseReplicaCountRequestPrivate(const DecreaseReplicaCountRequestPrivate &other,
                                   DecreaseReplicaCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DecreaseReplicaCountRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
