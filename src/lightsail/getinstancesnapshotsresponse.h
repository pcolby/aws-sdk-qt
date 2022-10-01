// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESNAPSHOTSRESPONSE_H
#define QTAWS_GETINSTANCESNAPSHOTSRESPONSE_H

#include "lightsailresponse.h"
#include "getinstancesnapshotsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceSnapshotsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstanceSnapshotsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetInstanceSnapshotsResponse(const GetInstanceSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceSnapshotsResponse)
    Q_DISABLE_COPY(GetInstanceSnapshotsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
