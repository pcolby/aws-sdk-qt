// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCESNAPSHOTRESPONSE_P_H
#define QTAWS_DELETEINSTANCESNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteInstanceSnapshotResponse;

class DeleteInstanceSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteInstanceSnapshotResponsePrivate(DeleteInstanceSnapshotResponse * const q);

    void parseDeleteInstanceSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceSnapshotResponse)
    Q_DISABLE_COPY(DeleteInstanceSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
