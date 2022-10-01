// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYCLUSTERSNAPSHOTRESPONSE_P_H
#define QTAWS_COPYCLUSTERSNAPSHOTRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CopyClusterSnapshotResponse;

class CopyClusterSnapshotResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CopyClusterSnapshotResponsePrivate(CopyClusterSnapshotResponse * const q);

    void parseCopyClusterSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyClusterSnapshotResponse)
    Q_DISABLE_COPY(CopyClusterSnapshotResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
