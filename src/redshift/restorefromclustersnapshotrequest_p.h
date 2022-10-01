// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMCLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_RESTOREFROMCLUSTERSNAPSHOTREQUEST_P_H

#include "redshiftrequest_p.h"
#include "restorefromclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class RestoreFromClusterSnapshotRequest;

class RestoreFromClusterSnapshotRequestPrivate : public RedshiftRequestPrivate {

public:
    RestoreFromClusterSnapshotRequestPrivate(const RedshiftRequest::Action action,
                                   RestoreFromClusterSnapshotRequest * const q);
    RestoreFromClusterSnapshotRequestPrivate(const RestoreFromClusterSnapshotRequestPrivate &other,
                                   RestoreFromClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreFromClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
