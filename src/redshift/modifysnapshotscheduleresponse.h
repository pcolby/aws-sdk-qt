// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTSCHEDULERESPONSE_H
#define QTAWS_MODIFYSNAPSHOTSCHEDULERESPONSE_H

#include "redshiftresponse.h"
#include "modifysnapshotschedulerequest.h"

namespace QtAws {
namespace Redshift {

class ModifySnapshotScheduleResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifySnapshotScheduleResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifySnapshotScheduleResponse(const ModifySnapshotScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifySnapshotScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySnapshotScheduleResponse)
    Q_DISABLE_COPY(ModifySnapshotScheduleResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
