// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESNAPSHOTRESPONSE_H
#define QTAWS_GETRELATIONALDATABASESNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabasesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseSnapshotResponse(const GetRelationalDatabaseSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseSnapshotResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
