// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETECLUSTERSNAPSHOTSRESPONSE_P_H
#define QTAWS_BATCHDELETECLUSTERSNAPSHOTSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class BatchDeleteClusterSnapshotsResponse;

class BatchDeleteClusterSnapshotsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit BatchDeleteClusterSnapshotsResponsePrivate(BatchDeleteClusterSnapshotsResponse * const q);

    void parseBatchDeleteClusterSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteClusterSnapshotsResponse)
    Q_DISABLE_COPY(BatchDeleteClusterSnapshotsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
