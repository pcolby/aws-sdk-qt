// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_DELETECLUSTERSNAPSHOTREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deleteclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSnapshotRequest;

class DeleteClusterSnapshotRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteClusterSnapshotRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteClusterSnapshotRequest * const q);
    DeleteClusterSnapshotRequestPrivate(const DeleteClusterSnapshotRequestPrivate &other,
                                   DeleteClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
