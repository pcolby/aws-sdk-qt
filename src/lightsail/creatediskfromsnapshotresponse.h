// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISKFROMSNAPSHOTRESPONSE_H
#define QTAWS_CREATEDISKFROMSNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "creatediskfromsnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDiskFromSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateDiskFromSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateDiskFromSnapshotResponse(const CreateDiskFromSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDiskFromSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDiskFromSnapshotResponse)
    Q_DISABLE_COPY(CreateDiskFromSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
