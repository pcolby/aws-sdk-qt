// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESFROMSNAPSHOTRESPONSE_H
#define QTAWS_CREATEINSTANCESFROMSNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "createinstancesfromsnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateInstancesFromSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateInstancesFromSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateInstancesFromSnapshotResponse(const CreateInstancesFromSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInstancesFromSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstancesFromSnapshotResponse)
    Q_DISABLE_COPY(CreateInstancesFromSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
