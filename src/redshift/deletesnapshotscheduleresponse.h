// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTSCHEDULERESPONSE_H
#define QTAWS_DELETESNAPSHOTSCHEDULERESPONSE_H

#include "redshiftresponse.h"
#include "deletesnapshotschedulerequest.h"

namespace QtAws {
namespace Redshift {

class DeleteSnapshotScheduleResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeleteSnapshotScheduleResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeleteSnapshotScheduleResponse(const DeleteSnapshotScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSnapshotScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSnapshotScheduleResponse)
    Q_DISABLE_COPY(DeleteSnapshotScheduleResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
