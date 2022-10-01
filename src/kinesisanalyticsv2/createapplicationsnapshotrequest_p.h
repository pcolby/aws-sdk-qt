// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONSNAPSHOTREQUEST_P_H
#define QTAWS_CREATEAPPLICATIONSNAPSHOTREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "createapplicationsnapshotrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class CreateApplicationSnapshotRequest;

class CreateApplicationSnapshotRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    CreateApplicationSnapshotRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   CreateApplicationSnapshotRequest * const q);
    CreateApplicationSnapshotRequestPrivate(const CreateApplicationSnapshotRequestPrivate &other,
                                   CreateApplicationSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApplicationSnapshotRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
