// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESNAPSHOTSRESPONSE_H
#define QTAWS_GETRELATIONALDATABASESNAPSHOTSRESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabasesnapshotsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseSnapshotsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseSnapshotsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseSnapshotsResponse(const GetRelationalDatabaseSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseSnapshotsResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseSnapshotsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
