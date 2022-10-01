// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERSNAPSHOTSCHEDULERESPONSE_H
#define QTAWS_MODIFYCLUSTERSNAPSHOTSCHEDULERESPONSE_H

#include "redshiftresponse.h"
#include "modifyclustersnapshotschedulerequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSnapshotScheduleResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterSnapshotScheduleResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyClusterSnapshotScheduleResponse(const ModifyClusterSnapshotScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterSnapshotScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterSnapshotScheduleResponse)
    Q_DISABLE_COPY(ModifyClusterSnapshotScheduleResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
