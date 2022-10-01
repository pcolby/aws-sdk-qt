// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBINSTANCEAUTOMATEDBACKUPSREPLICATIONRESPONSE_P_H
#define QTAWS_STARTDBINSTANCEAUTOMATEDBACKUPSREPLICATIONRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class StartDBInstanceAutomatedBackupsReplicationResponse;

class StartDBInstanceAutomatedBackupsReplicationResponsePrivate : public RdsResponsePrivate {

public:

    explicit StartDBInstanceAutomatedBackupsReplicationResponsePrivate(StartDBInstanceAutomatedBackupsReplicationResponse * const q);

    void parseStartDBInstanceAutomatedBackupsReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDBInstanceAutomatedBackupsReplicationResponse)
    Q_DISABLE_COPY(StartDBInstanceAutomatedBackupsReplicationResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
