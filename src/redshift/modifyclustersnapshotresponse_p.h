// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERSNAPSHOTRESPONSE_P_H
#define QTAWS_MODIFYCLUSTERSNAPSHOTRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSnapshotResponse;

class ModifyClusterSnapshotResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyClusterSnapshotResponsePrivate(ModifyClusterSnapshotResponse * const q);

    void parseModifyClusterSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyClusterSnapshotResponse)
    Q_DISABLE_COPY(ModifyClusterSnapshotResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
