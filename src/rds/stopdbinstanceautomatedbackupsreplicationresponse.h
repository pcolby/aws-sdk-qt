// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBINSTANCEAUTOMATEDBACKUPSREPLICATIONRESPONSE_H
#define QTAWS_STOPDBINSTANCEAUTOMATEDBACKUPSREPLICATIONRESPONSE_H

#include "rdsresponse.h"
#include "stopdbinstanceautomatedbackupsreplicationrequest.h"

namespace QtAws {
namespace Rds {

class StopDBInstanceAutomatedBackupsReplicationResponsePrivate;

class QTAWSRDS_EXPORT StopDBInstanceAutomatedBackupsReplicationResponse : public RdsResponse {
    Q_OBJECT

public:
    StopDBInstanceAutomatedBackupsReplicationResponse(const StopDBInstanceAutomatedBackupsReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopDBInstanceAutomatedBackupsReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDBInstanceAutomatedBackupsReplicationResponse)
    Q_DISABLE_COPY(StopDBInstanceAutomatedBackupsReplicationResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
