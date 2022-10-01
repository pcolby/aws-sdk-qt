// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOSNAPSHOTSRESPONSE_P_H
#define QTAWS_GETAUTOSNAPSHOTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetAutoSnapshotsResponse;

class GetAutoSnapshotsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetAutoSnapshotsResponsePrivate(GetAutoSnapshotsResponse * const q);

    void parseGetAutoSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAutoSnapshotsResponse)
    Q_DISABLE_COPY(GetAutoSnapshotsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
