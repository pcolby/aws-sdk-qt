// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESNAPSHOTSCHEDULERESPONSE_P_H
#define QTAWS_UPDATESNAPSHOTSCHEDULERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSnapshotScheduleResponse;

class UpdateSnapshotScheduleResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateSnapshotScheduleResponsePrivate(UpdateSnapshotScheduleResponse * const q);

    void parseUpdateSnapshotScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSnapshotScheduleResponse)
    Q_DISABLE_COPY(UpdateSnapshotScheduleResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
