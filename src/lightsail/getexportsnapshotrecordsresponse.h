// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTSNAPSHOTRECORDSRESPONSE_H
#define QTAWS_GETEXPORTSNAPSHOTRECORDSRESPONSE_H

#include "lightsailresponse.h"
#include "getexportsnapshotrecordsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetExportSnapshotRecordsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetExportSnapshotRecordsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetExportSnapshotRecordsResponse(const GetExportSnapshotRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExportSnapshotRecordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExportSnapshotRecordsResponse)
    Q_DISABLE_COPY(GetExportSnapshotRecordsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
