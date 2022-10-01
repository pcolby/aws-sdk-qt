// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISKSNAPSHOTRESPONSE_P_H
#define QTAWS_CREATEDISKSNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateDiskSnapshotResponse;

class CreateDiskSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateDiskSnapshotResponsePrivate(CreateDiskSnapshotResponse * const q);

    void parseCreateDiskSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDiskSnapshotResponse)
    Q_DISABLE_COPY(CreateDiskSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
