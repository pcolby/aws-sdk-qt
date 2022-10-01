// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASESNAPSHOTRESPONSE_H
#define QTAWS_CREATERELATIONALDATABASESNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "createrelationaldatabasesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateRelationalDatabaseSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateRelationalDatabaseSnapshotResponse(const CreateRelationalDatabaseSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRelationalDatabaseSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRelationalDatabaseSnapshotResponse)
    Q_DISABLE_COPY(CreateRelationalDatabaseSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
