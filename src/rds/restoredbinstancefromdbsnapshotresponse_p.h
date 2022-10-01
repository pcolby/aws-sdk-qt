// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCEFROMDBSNAPSHOTRESPONSE_P_H
#define QTAWS_RESTOREDBINSTANCEFROMDBSNAPSHOTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceFromDBSnapshotResponse;

class RestoreDBInstanceFromDBSnapshotResponsePrivate : public RdsResponsePrivate {

public:

    explicit RestoreDBInstanceFromDBSnapshotResponsePrivate(RestoreDBInstanceFromDBSnapshotResponse * const q);

    void parseRestoreDBInstanceFromDBSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreDBInstanceFromDBSnapshotResponse)
    Q_DISABLE_COPY(RestoreDBInstanceFromDBSnapshotResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
