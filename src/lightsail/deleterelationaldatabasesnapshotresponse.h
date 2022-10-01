// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERELATIONALDATABASESNAPSHOTRESPONSE_H
#define QTAWS_DELETERELATIONALDATABASESNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "deleterelationaldatabasesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteRelationalDatabaseSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteRelationalDatabaseSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteRelationalDatabaseSnapshotResponse(const DeleteRelationalDatabaseSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRelationalDatabaseSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRelationalDatabaseSnapshotResponse)
    Q_DISABLE_COPY(DeleteRelationalDatabaseSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
