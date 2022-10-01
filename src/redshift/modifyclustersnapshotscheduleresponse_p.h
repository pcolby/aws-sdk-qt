// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERSNAPSHOTSCHEDULERESPONSE_P_H
#define QTAWS_MODIFYCLUSTERSNAPSHOTSCHEDULERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSnapshotScheduleResponse;

class ModifyClusterSnapshotScheduleResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyClusterSnapshotScheduleResponsePrivate(ModifyClusterSnapshotScheduleResponse * const q);

    void parseModifyClusterSnapshotScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyClusterSnapshotScheduleResponse)
    Q_DISABLE_COPY(ModifyClusterSnapshotScheduleResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
