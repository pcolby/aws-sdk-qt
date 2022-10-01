// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLEFROMCLUSTERSNAPSHOTRESPONSE_P_H
#define QTAWS_RESTORETABLEFROMCLUSTERSNAPSHOTRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class RestoreTableFromClusterSnapshotResponse;

class RestoreTableFromClusterSnapshotResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit RestoreTableFromClusterSnapshotResponsePrivate(RestoreTableFromClusterSnapshotResponse * const q);

    void parseRestoreTableFromClusterSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreTableFromClusterSnapshotResponse)
    Q_DISABLE_COPY(RestoreTableFromClusterSnapshotResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
