// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSNAPSHOTRESPONSE_P_H
#define QTAWS_GETDISKSNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetDiskSnapshotResponse;

class GetDiskSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetDiskSnapshotResponsePrivate(GetDiskSnapshotResponse * const q);

    void parseGetDiskSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDiskSnapshotResponse)
    Q_DISABLE_COPY(GetDiskSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
