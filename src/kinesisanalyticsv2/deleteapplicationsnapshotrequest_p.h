// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONSNAPSHOTREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONSNAPSHOTREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "deleteapplicationsnapshotrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationSnapshotRequest;

class DeleteApplicationSnapshotRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    DeleteApplicationSnapshotRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   DeleteApplicationSnapshotRequest * const q);
    DeleteApplicationSnapshotRequestPrivate(const DeleteApplicationSnapshotRequestPrivate &other,
                                   DeleteApplicationSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationSnapshotRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
