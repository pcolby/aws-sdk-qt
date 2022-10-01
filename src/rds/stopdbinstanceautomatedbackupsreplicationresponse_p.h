// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBINSTANCEAUTOMATEDBACKUPSREPLICATIONRESPONSE_P_H
#define QTAWS_STOPDBINSTANCEAUTOMATEDBACKUPSREPLICATIONRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class StopDBInstanceAutomatedBackupsReplicationResponse;

class StopDBInstanceAutomatedBackupsReplicationResponsePrivate : public RdsResponsePrivate {

public:

    explicit StopDBInstanceAutomatedBackupsReplicationResponsePrivate(StopDBInstanceAutomatedBackupsReplicationResponse * const q);

    void parseStopDBInstanceAutomatedBackupsReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopDBInstanceAutomatedBackupsReplicationResponse)
    Q_DISABLE_COPY(StopDBInstanceAutomatedBackupsReplicationResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
