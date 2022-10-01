// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_COPYDBCLUSTERSNAPSHOTREQUEST_P_H

#include "rdsrequest_p.h"
#include "copydbclustersnapshotrequest.h"

namespace QtAws {
namespace Rds {

class CopyDBClusterSnapshotRequest;

class CopyDBClusterSnapshotRequestPrivate : public RdsRequestPrivate {

public:
    CopyDBClusterSnapshotRequestPrivate(const RdsRequest::Action action,
                                   CopyDBClusterSnapshotRequest * const q);
    CopyDBClusterSnapshotRequestPrivate(const CopyDBClusterSnapshotRequestPrivate &other,
                                   CopyDBClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyDBClusterSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
