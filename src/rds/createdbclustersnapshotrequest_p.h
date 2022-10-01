// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_CREATEDBCLUSTERSNAPSHOTREQUEST_P_H

#include "rdsrequest_p.h"
#include "createdbclustersnapshotrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBClusterSnapshotRequest;

class CreateDBClusterSnapshotRequestPrivate : public RdsRequestPrivate {

public:
    CreateDBClusterSnapshotRequestPrivate(const RdsRequest::Action action,
                                   CreateDBClusterSnapshotRequest * const q);
    CreateDBClusterSnapshotRequestPrivate(const CreateDBClusterSnapshotRequestPrivate &other,
                                   CreateDBClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
