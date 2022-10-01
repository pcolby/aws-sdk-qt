// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONSNAPSHOTRESPONSE_P_H
#define QTAWS_CREATEAPPLICATIONSNAPSHOTRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class CreateApplicationSnapshotResponse;

class CreateApplicationSnapshotResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit CreateApplicationSnapshotResponsePrivate(CreateApplicationSnapshotResponse * const q);

    void parseCreateApplicationSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApplicationSnapshotResponse)
    Q_DISABLE_COPY(CreateApplicationSnapshotResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
