// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTREQUEST_P_H
#define QTAWS_CREATESNAPSHOTREQUEST_P_H

#include "elasticacherequest_p.h"
#include "createsnapshotrequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateSnapshotRequest;

class CreateSnapshotRequestPrivate : public ElastiCacheRequestPrivate {

public:
    CreateSnapshotRequestPrivate(const ElastiCacheRequest::Action action,
                                   CreateSnapshotRequest * const q);
    CreateSnapshotRequestPrivate(const CreateSnapshotRequestPrivate &other,
                                   CreateSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
