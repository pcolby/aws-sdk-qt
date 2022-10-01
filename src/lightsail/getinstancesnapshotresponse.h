// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESNAPSHOTRESPONSE_H
#define QTAWS_GETINSTANCESNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "getinstancesnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceSnapshotResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstanceSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetInstanceSnapshotResponse(const GetInstanceSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceSnapshotResponse)
    Q_DISABLE_COPY(GetInstanceSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
