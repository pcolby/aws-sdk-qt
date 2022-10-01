// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETECLUSTERSNAPSHOTSREQUEST_P_H
#define QTAWS_BATCHDELETECLUSTERSNAPSHOTSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "batchdeleteclustersnapshotsrequest.h"

namespace QtAws {
namespace Redshift {

class BatchDeleteClusterSnapshotsRequest;

class BatchDeleteClusterSnapshotsRequestPrivate : public RedshiftRequestPrivate {

public:
    BatchDeleteClusterSnapshotsRequestPrivate(const RedshiftRequest::Action action,
                                   BatchDeleteClusterSnapshotsRequest * const q);
    BatchDeleteClusterSnapshotsRequestPrivate(const BatchDeleteClusterSnapshotsRequestPrivate &other,
                                   BatchDeleteClusterSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteClusterSnapshotsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
