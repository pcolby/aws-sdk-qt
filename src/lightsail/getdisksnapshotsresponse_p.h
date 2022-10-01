// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSNAPSHOTSRESPONSE_P_H
#define QTAWS_GETDISKSNAPSHOTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetDiskSnapshotsResponse;

class GetDiskSnapshotsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetDiskSnapshotsResponsePrivate(GetDiskSnapshotsResponse * const q);

    void parseGetDiskSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDiskSnapshotsResponse)
    Q_DISABLE_COPY(GetDiskSnapshotsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
