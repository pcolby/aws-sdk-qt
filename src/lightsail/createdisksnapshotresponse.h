// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISKSNAPSHOTRESPONSE_H
#define QTAWS_CREATEDISKSNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "createdisksnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDiskSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateDiskSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateDiskSnapshotResponse(const CreateDiskSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDiskSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDiskSnapshotResponse)
    Q_DISABLE_COPY(CreateDiskSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
