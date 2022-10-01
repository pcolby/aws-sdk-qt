// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASESNAPSHOTRESPONSE_P_H
#define QTAWS_CREATERELATIONALDATABASESNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseSnapshotResponse;

class CreateRelationalDatabaseSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateRelationalDatabaseSnapshotResponsePrivate(CreateRelationalDatabaseSnapshotResponse * const q);

    void parseCreateRelationalDatabaseSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRelationalDatabaseSnapshotResponse)
    Q_DISABLE_COPY(CreateRelationalDatabaseSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
