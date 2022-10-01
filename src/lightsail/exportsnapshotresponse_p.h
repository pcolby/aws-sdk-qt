// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSNAPSHOTRESPONSE_P_H
#define QTAWS_EXPORTSNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class ExportSnapshotResponse;

class ExportSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit ExportSnapshotResponsePrivate(ExportSnapshotResponse * const q);

    void parseExportSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportSnapshotResponse)
    Q_DISABLE_COPY(ExportSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
