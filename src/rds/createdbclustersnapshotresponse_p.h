// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERSNAPSHOTRESPONSE_P_H
#define QTAWS_CREATEDBCLUSTERSNAPSHOTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateDBClusterSnapshotResponse;

class CreateDBClusterSnapshotResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateDBClusterSnapshotResponsePrivate(CreateDBClusterSnapshotResponse * const q);

    void parseCreateDBClusterSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterSnapshotResponse)
    Q_DISABLE_COPY(CreateDBClusterSnapshotResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
