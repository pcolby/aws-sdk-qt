// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMCLUSTERSNAPSHOTRESPONSE_P_H
#define QTAWS_RESTOREFROMCLUSTERSNAPSHOTRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class RestoreFromClusterSnapshotResponse;

class RestoreFromClusterSnapshotResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit RestoreFromClusterSnapshotResponsePrivate(RestoreFromClusterSnapshotResponse * const q);

    void parseRestoreFromClusterSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreFromClusterSnapshotResponse)
    Q_DISABLE_COPY(RestoreFromClusterSnapshotResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
