// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSCHEDULERESPONSE_P_H
#define QTAWS_DESCRIBESNAPSHOTSCHEDULERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSnapshotScheduleResponse;

class DescribeSnapshotScheduleResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeSnapshotScheduleResponsePrivate(DescribeSnapshotScheduleResponse * const q);

    void parseDescribeSnapshotScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotScheduleResponse)
    Q_DISABLE_COPY(DescribeSnapshotScheduleResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
