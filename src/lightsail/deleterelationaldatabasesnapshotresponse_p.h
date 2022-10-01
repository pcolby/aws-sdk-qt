// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERELATIONALDATABASESNAPSHOTRESPONSE_P_H
#define QTAWS_DELETERELATIONALDATABASESNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteRelationalDatabaseSnapshotResponse;

class DeleteRelationalDatabaseSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteRelationalDatabaseSnapshotResponsePrivate(DeleteRelationalDatabaseSnapshotResponse * const q);

    void parseDeleteRelationalDatabaseSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRelationalDatabaseSnapshotResponse)
    Q_DISABLE_COPY(DeleteRelationalDatabaseSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
