// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSNAPSHOTSREQUEST_P_H
#define QTAWS_LISTAPPLICATIONSNAPSHOTSREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "listapplicationsnapshotsrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class ListApplicationSnapshotsRequest;

class ListApplicationSnapshotsRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    ListApplicationSnapshotsRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   ListApplicationSnapshotsRequest * const q);
    ListApplicationSnapshotsRequestPrivate(const ListApplicationSnapshotsRequestPrivate &other,
                                   ListApplicationSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationSnapshotsRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
