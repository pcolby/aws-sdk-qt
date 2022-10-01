// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTSCHEDULERESPONSE_P_H
#define QTAWS_MODIFYSNAPSHOTSCHEDULERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifySnapshotScheduleResponse;

class ModifySnapshotScheduleResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifySnapshotScheduleResponsePrivate(ModifySnapshotScheduleResponse * const q);

    void parseModifySnapshotScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifySnapshotScheduleResponse)
    Q_DISABLE_COPY(ModifySnapshotScheduleResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
