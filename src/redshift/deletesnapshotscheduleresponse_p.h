// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTSCHEDULERESPONSE_P_H
#define QTAWS_DELETESNAPSHOTSCHEDULERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteSnapshotScheduleResponse;

class DeleteSnapshotScheduleResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteSnapshotScheduleResponsePrivate(DeleteSnapshotScheduleResponse * const q);

    void parseDeleteSnapshotScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSnapshotScheduleResponse)
    Q_DISABLE_COPY(DeleteSnapshotScheduleResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
