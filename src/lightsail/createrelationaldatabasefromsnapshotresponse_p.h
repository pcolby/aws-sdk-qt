// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASEFROMSNAPSHOTRESPONSE_P_H
#define QTAWS_CREATERELATIONALDATABASEFROMSNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseFromSnapshotResponse;

class CreateRelationalDatabaseFromSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateRelationalDatabaseFromSnapshotResponsePrivate(CreateRelationalDatabaseFromSnapshotResponse * const q);

    void parseCreateRelationalDatabaseFromSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRelationalDatabaseFromSnapshotResponse)
    Q_DISABLE_COPY(CreateRelationalDatabaseFromSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
