// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSNAPSHOTRESPONSE_H
#define QTAWS_EXPORTSNAPSHOTRESPONSE_H

#include "gamesparksresponse.h"
#include "exportsnapshotrequest.h"

namespace QtAws {
namespace GameSparks {

class ExportSnapshotResponsePrivate;

class QTAWSGAMESPARKS_EXPORT ExportSnapshotResponse : public GameSparksResponse {
    Q_OBJECT

public:
    ExportSnapshotResponse(const ExportSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportSnapshotResponse)
    Q_DISABLE_COPY(ExportSnapshotResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
