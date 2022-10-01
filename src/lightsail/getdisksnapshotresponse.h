// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSNAPSHOTRESPONSE_H
#define QTAWS_GETDISKSNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "getdisksnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDiskSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetDiskSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetDiskSnapshotResponse(const GetDiskSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDiskSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiskSnapshotResponse)
    Q_DISABLE_COPY(GetDiskSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
