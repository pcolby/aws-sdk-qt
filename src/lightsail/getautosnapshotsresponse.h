// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOSNAPSHOTSRESPONSE_H
#define QTAWS_GETAUTOSNAPSHOTSRESPONSE_H

#include "lightsailresponse.h"
#include "getautosnapshotsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetAutoSnapshotsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetAutoSnapshotsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetAutoSnapshotsResponse(const GetAutoSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAutoSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAutoSnapshotsResponse)
    Q_DISABLE_COPY(GetAutoSnapshotsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
