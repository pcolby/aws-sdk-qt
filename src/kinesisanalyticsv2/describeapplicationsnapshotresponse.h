// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSNAPSHOTRESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONSNAPSHOTRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "describeapplicationsnapshotrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DescribeApplicationSnapshotResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DescribeApplicationSnapshotResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    DescribeApplicationSnapshotResponse(const DescribeApplicationSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationSnapshotResponse)
    Q_DISABLE_COPY(DescribeApplicationSnapshotResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
