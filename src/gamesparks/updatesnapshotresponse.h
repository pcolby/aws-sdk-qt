// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESNAPSHOTRESPONSE_H
#define QTAWS_UPDATESNAPSHOTRESPONSE_H

#include "gamesparksresponse.h"
#include "updatesnapshotrequest.h"

namespace QtAws {
namespace GameSparks {

class UpdateSnapshotResponsePrivate;

class QTAWSGAMESPARKS_EXPORT UpdateSnapshotResponse : public GameSparksResponse {
    Q_OBJECT

public:
    UpdateSnapshotResponse(const UpdateSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSnapshotResponse)
    Q_DISABLE_COPY(UpdateSnapshotResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
