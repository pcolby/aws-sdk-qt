// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISKFROMSNAPSHOTRESPONSE_P_H
#define QTAWS_CREATEDISKFROMSNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateDiskFromSnapshotResponse;

class CreateDiskFromSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateDiskFromSnapshotResponsePrivate(CreateDiskFromSnapshotResponse * const q);

    void parseCreateDiskFromSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDiskFromSnapshotResponse)
    Q_DISABLE_COPY(CreateDiskFromSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
