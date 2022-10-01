// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTSNAPSHOTRECORDSRESPONSE_P_H
#define QTAWS_GETEXPORTSNAPSHOTRECORDSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetExportSnapshotRecordsResponse;

class GetExportSnapshotRecordsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetExportSnapshotRecordsResponsePrivate(GetExportSnapshotRecordsResponse * const q);

    void parseGetExportSnapshotRecordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExportSnapshotRecordsResponse)
    Q_DISABLE_COPY(GetExportSnapshotRecordsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
