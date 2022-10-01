// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSCHEDULERESPONSE_H
#define QTAWS_DESCRIBESNAPSHOTSCHEDULERESPONSE_H

#include "storagegatewayresponse.h"
#include "describesnapshotschedulerequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSnapshotScheduleResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeSnapshotScheduleResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeSnapshotScheduleResponse(const DescribeSnapshotScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSnapshotScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotScheduleResponse)
    Q_DISABLE_COPY(DescribeSnapshotScheduleResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
