// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONSNAPSHOTRESPONSE_H
#define QTAWS_DELETEAPPLICATIONSNAPSHOTRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "deleteapplicationsnapshotrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationSnapshotResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationSnapshotResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    DeleteApplicationSnapshotResponse(const DeleteApplicationSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApplicationSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationSnapshotResponse)
    Q_DISABLE_COPY(DeleteApplicationSnapshotResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
