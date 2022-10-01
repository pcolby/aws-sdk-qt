// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESNAPSHOTSCHEDULERESPONSE_H
#define QTAWS_UPDATESNAPSHOTSCHEDULERESPONSE_H

#include "storagegatewayresponse.h"
#include "updatesnapshotschedulerequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSnapshotScheduleResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateSnapshotScheduleResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateSnapshotScheduleResponse(const UpdateSnapshotScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSnapshotScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSnapshotScheduleResponse)
    Q_DISABLE_COPY(UpdateSnapshotScheduleResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
