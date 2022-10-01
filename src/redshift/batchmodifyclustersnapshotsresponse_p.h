// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHMODIFYCLUSTERSNAPSHOTSRESPONSE_P_H
#define QTAWS_BATCHMODIFYCLUSTERSNAPSHOTSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class BatchModifyClusterSnapshotsResponse;

class BatchModifyClusterSnapshotsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit BatchModifyClusterSnapshotsResponsePrivate(BatchModifyClusterSnapshotsResponse * const q);

    void parseBatchModifyClusterSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchModifyClusterSnapshotsResponse)
    Q_DISABLE_COPY(BatchModifyClusterSnapshotsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
