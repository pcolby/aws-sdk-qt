// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASEFROMSNAPSHOTRESPONSE_H
#define QTAWS_CREATERELATIONALDATABASEFROMSNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "createrelationaldatabasefromsnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseFromSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateRelationalDatabaseFromSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateRelationalDatabaseFromSnapshotResponse(const CreateRelationalDatabaseFromSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRelationalDatabaseFromSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRelationalDatabaseFromSnapshotResponse)
    Q_DISABLE_COPY(CreateRelationalDatabaseFromSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
