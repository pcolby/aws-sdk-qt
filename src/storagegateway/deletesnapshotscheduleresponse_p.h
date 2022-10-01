// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTSCHEDULERESPONSE_P_H
#define QTAWS_DELETESNAPSHOTSCHEDULERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DeleteSnapshotScheduleResponse;

class DeleteSnapshotScheduleResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DeleteSnapshotScheduleResponsePrivate(DeleteSnapshotScheduleResponse * const q);

    void parseDeleteSnapshotScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSnapshotScheduleResponse)
    Q_DISABLE_COPY(DeleteSnapshotScheduleResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
