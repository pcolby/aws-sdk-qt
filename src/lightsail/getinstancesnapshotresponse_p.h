// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESNAPSHOTRESPONSE_P_H
#define QTAWS_GETINSTANCESNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceSnapshotResponse;

class GetInstanceSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetInstanceSnapshotResponsePrivate(GetInstanceSnapshotResponse * const q);

    void parseGetInstanceSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceSnapshotResponse)
    Q_DISABLE_COPY(GetInstanceSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
