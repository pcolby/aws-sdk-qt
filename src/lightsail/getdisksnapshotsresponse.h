// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSNAPSHOTSRESPONSE_H
#define QTAWS_GETDISKSNAPSHOTSRESPONSE_H

#include "lightsailresponse.h"
#include "getdisksnapshotsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDiskSnapshotsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetDiskSnapshotsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetDiskSnapshotsResponse(const GetDiskSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDiskSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiskSnapshotsResponse)
    Q_DISABLE_COPY(GetDiskSnapshotsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
