// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBINSTANCEAUTOMATEDBACKUPSREPLICATIONREQUEST_H
#define QTAWS_STOPDBINSTANCEAUTOMATEDBACKUPSREPLICATIONREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class StopDBInstanceAutomatedBackupsReplicationRequestPrivate;

class QTAWSRDS_EXPORT StopDBInstanceAutomatedBackupsReplicationRequest : public RdsRequest {

public:
    StopDBInstanceAutomatedBackupsReplicationRequest(const StopDBInstanceAutomatedBackupsReplicationRequest &other);
    StopDBInstanceAutomatedBackupsReplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDBInstanceAutomatedBackupsReplicationRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
