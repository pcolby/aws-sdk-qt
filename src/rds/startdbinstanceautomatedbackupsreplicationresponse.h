// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBINSTANCEAUTOMATEDBACKUPSREPLICATIONRESPONSE_H
#define QTAWS_STARTDBINSTANCEAUTOMATEDBACKUPSREPLICATIONRESPONSE_H

#include "rdsresponse.h"
#include "startdbinstanceautomatedbackupsreplicationrequest.h"

namespace QtAws {
namespace Rds {

class StartDBInstanceAutomatedBackupsReplicationResponsePrivate;

class QTAWSRDS_EXPORT StartDBInstanceAutomatedBackupsReplicationResponse : public RdsResponse {
    Q_OBJECT

public:
    StartDBInstanceAutomatedBackupsReplicationResponse(const StartDBInstanceAutomatedBackupsReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDBInstanceAutomatedBackupsReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDBInstanceAutomatedBackupsReplicationResponse)
    Q_DISABLE_COPY(StartDBInstanceAutomatedBackupsReplicationResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
