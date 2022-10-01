// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLEFROMCLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_RESTORETABLEFROMCLUSTERSNAPSHOTREQUEST_P_H

#include "redshiftrequest_p.h"
#include "restoretablefromclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class RestoreTableFromClusterSnapshotRequest;

class RestoreTableFromClusterSnapshotRequestPrivate : public RedshiftRequestPrivate {

public:
    RestoreTableFromClusterSnapshotRequestPrivate(const RedshiftRequest::Action action,
                                   RestoreTableFromClusterSnapshotRequest * const q);
    RestoreTableFromClusterSnapshotRequestPrivate(const RestoreTableFromClusterSnapshotRequestPrivate &other,
                                   RestoreTableFromClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreTableFromClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
