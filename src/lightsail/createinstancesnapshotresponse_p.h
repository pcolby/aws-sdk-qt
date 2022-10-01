// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESNAPSHOTRESPONSE_P_H
#define QTAWS_CREATEINSTANCESNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateInstanceSnapshotResponse;

class CreateInstanceSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateInstanceSnapshotResponsePrivate(CreateInstanceSnapshotResponse * const q);

    void parseCreateInstanceSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInstanceSnapshotResponse)
    Q_DISABLE_COPY(CreateInstanceSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
