// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSNAPSHOTSRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONSNAPSHOTSRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class ListApplicationSnapshotsResponse;

class ListApplicationSnapshotsResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit ListApplicationSnapshotsResponsePrivate(ListApplicationSnapshotsResponse * const q);

    void parseListApplicationSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationSnapshotsResponse)
    Q_DISABLE_COPY(ListApplicationSnapshotsResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
