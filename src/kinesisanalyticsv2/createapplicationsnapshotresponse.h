// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONSNAPSHOTRESPONSE_H
#define QTAWS_CREATEAPPLICATIONSNAPSHOTRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "createapplicationsnapshotrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class CreateApplicationSnapshotResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT CreateApplicationSnapshotResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    CreateApplicationSnapshotResponse(const CreateApplicationSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApplicationSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationSnapshotResponse)
    Q_DISABLE_COPY(CreateApplicationSnapshotResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
