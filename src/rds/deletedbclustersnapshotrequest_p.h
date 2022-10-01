// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_DELETEDBCLUSTERSNAPSHOTREQUEST_P_H

#include "rdsrequest_p.h"
#include "deletedbclustersnapshotrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBClusterSnapshotRequest;

class DeleteDBClusterSnapshotRequestPrivate : public RdsRequestPrivate {

public:
    DeleteDBClusterSnapshotRequestPrivate(const RdsRequest::Action action,
                                   DeleteDBClusterSnapshotRequest * const q);
    DeleteDBClusterSnapshotRequestPrivate(const DeleteDBClusterSnapshotRequestPrivate &other,
                                   DeleteDBClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
