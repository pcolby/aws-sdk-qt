// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTSCHEDULERESPONSE_P_H
#define QTAWS_CREATESNAPSHOTSCHEDULERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateSnapshotScheduleResponse;

class CreateSnapshotScheduleResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateSnapshotScheduleResponsePrivate(CreateSnapshotScheduleResponse * const q);

    void parseCreateSnapshotScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotScheduleResponse)
    Q_DISABLE_COPY(CreateSnapshotScheduleResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
