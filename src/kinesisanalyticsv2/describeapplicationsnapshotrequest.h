// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSNAPSHOTREQUEST_H
#define QTAWS_DESCRIBEAPPLICATIONSNAPSHOTREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DescribeApplicationSnapshotRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DescribeApplicationSnapshotRequest : public KinesisAnalyticsV2Request {

public:
    DescribeApplicationSnapshotRequest(const DescribeApplicationSnapshotRequest &other);
    DescribeApplicationSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationSnapshotRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
