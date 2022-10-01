// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTRESPONSE_H
#define QTAWS_GETSNAPSHOTRESPONSE_H

#include "gamesparksresponse.h"
#include "getsnapshotrequest.h"

namespace QtAws {
namespace GameSparks {

class GetSnapshotResponsePrivate;

class QTAWSGAMESPARKS_EXPORT GetSnapshotResponse : public GameSparksResponse {
    Q_OBJECT

public:
    GetSnapshotResponse(const GetSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSnapshotResponse)
    Q_DISABLE_COPY(GetSnapshotResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
