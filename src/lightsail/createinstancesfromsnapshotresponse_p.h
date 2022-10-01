// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESFROMSNAPSHOTRESPONSE_P_H
#define QTAWS_CREATEINSTANCESFROMSNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateInstancesFromSnapshotResponse;

class CreateInstancesFromSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateInstancesFromSnapshotResponsePrivate(CreateInstancesFromSnapshotResponse * const q);

    void parseCreateInstancesFromSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInstancesFromSnapshotResponse)
    Q_DISABLE_COPY(CreateInstancesFromSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
