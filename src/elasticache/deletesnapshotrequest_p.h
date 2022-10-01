// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTREQUEST_P_H
#define QTAWS_DELETESNAPSHOTREQUEST_P_H

#include "elasticacherequest_p.h"
#include "deletesnapshotrequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteSnapshotRequest;

class DeleteSnapshotRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DeleteSnapshotRequestPrivate(const ElastiCacheRequest::Action action,
                                   DeleteSnapshotRequest * const q);
    DeleteSnapshotRequestPrivate(const DeleteSnapshotRequestPrivate &other,
                                   DeleteSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSnapshotRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
