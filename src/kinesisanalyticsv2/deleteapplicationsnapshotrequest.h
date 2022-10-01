// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONSNAPSHOTREQUEST_H
#define QTAWS_DELETEAPPLICATIONSNAPSHOTREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationSnapshotRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationSnapshotRequest : public KinesisAnalyticsV2Request {

public:
    DeleteApplicationSnapshotRequest(const DeleteApplicationSnapshotRequest &other);
    DeleteApplicationSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationSnapshotRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
