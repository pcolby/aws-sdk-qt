// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCEAUTOMATEDBACKUPREQUEST_H
#define QTAWS_DELETEDBINSTANCEAUTOMATEDBACKUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBInstanceAutomatedBackupRequestPrivate;

class QTAWSRDS_EXPORT DeleteDBInstanceAutomatedBackupRequest : public RdsRequest {

public:
    DeleteDBInstanceAutomatedBackupRequest(const DeleteDBInstanceAutomatedBackupRequest &other);
    DeleteDBInstanceAutomatedBackupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBInstanceAutomatedBackupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
