// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTSCHEDULERESPONSE_H
#define QTAWS_CREATESNAPSHOTSCHEDULERESPONSE_H

#include "redshiftresponse.h"
#include "createsnapshotschedulerequest.h"

namespace QtAws {
namespace Redshift {

class CreateSnapshotScheduleResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateSnapshotScheduleResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateSnapshotScheduleResponse(const CreateSnapshotScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSnapshotScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSnapshotScheduleResponse)
    Q_DISABLE_COPY(CreateSnapshotScheduleResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
