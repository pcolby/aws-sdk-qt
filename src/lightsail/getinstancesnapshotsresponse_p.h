// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESNAPSHOTSRESPONSE_P_H
#define QTAWS_GETINSTANCESNAPSHOTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceSnapshotsResponse;

class GetInstanceSnapshotsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetInstanceSnapshotsResponsePrivate(GetInstanceSnapshotsResponse * const q);

    void parseGetInstanceSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceSnapshotsResponse)
    Q_DISABLE_COPY(GetInstanceSnapshotsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
