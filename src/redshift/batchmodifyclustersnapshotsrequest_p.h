// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHMODIFYCLUSTERSNAPSHOTSREQUEST_P_H
#define QTAWS_BATCHMODIFYCLUSTERSNAPSHOTSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "batchmodifyclustersnapshotsrequest.h"

namespace QtAws {
namespace Redshift {

class BatchModifyClusterSnapshotsRequest;

class BatchModifyClusterSnapshotsRequestPrivate : public RedshiftRequestPrivate {

public:
    BatchModifyClusterSnapshotsRequestPrivate(const RedshiftRequest::Action action,
                                   BatchModifyClusterSnapshotsRequest * const q);
    BatchModifyClusterSnapshotsRequestPrivate(const BatchModifyClusterSnapshotsRequestPrivate &other,
                                   BatchModifyClusterSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchModifyClusterSnapshotsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
