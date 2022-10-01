// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESNAPSHOTRESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASESNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseSnapshotResponse;

class GetRelationalDatabaseSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabaseSnapshotResponsePrivate(GetRelationalDatabaseSnapshotResponse * const q);

    void parseGetRelationalDatabaseSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseSnapshotResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
