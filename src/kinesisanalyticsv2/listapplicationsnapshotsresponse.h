// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSNAPSHOTSRESPONSE_H
#define QTAWS_LISTAPPLICATIONSNAPSHOTSRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "listapplicationsnapshotsrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class ListApplicationSnapshotsResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT ListApplicationSnapshotsResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    ListApplicationSnapshotsResponse(const ListApplicationSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationSnapshotsResponse)
    Q_DISABLE_COPY(ListApplicationSnapshotsResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
