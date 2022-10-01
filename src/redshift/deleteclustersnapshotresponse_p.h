// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSNAPSHOTRESPONSE_P_H
#define QTAWS_DELETECLUSTERSNAPSHOTRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSnapshotResponse;

class DeleteClusterSnapshotResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteClusterSnapshotResponsePrivate(DeleteClusterSnapshotResponse * const q);

    void parseDeleteClusterSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClusterSnapshotResponse)
    Q_DISABLE_COPY(DeleteClusterSnapshotResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
