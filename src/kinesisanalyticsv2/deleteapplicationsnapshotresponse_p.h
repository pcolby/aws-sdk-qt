// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONSNAPSHOTRESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONSNAPSHOTRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationSnapshotResponse;

class DeleteApplicationSnapshotResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit DeleteApplicationSnapshotResponsePrivate(DeleteApplicationSnapshotResponse * const q);

    void parseDeleteApplicationSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationSnapshotResponse)
    Q_DISABLE_COPY(DeleteApplicationSnapshotResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
