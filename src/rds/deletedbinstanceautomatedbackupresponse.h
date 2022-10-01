// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCEAUTOMATEDBACKUPRESPONSE_H
#define QTAWS_DELETEDBINSTANCEAUTOMATEDBACKUPRESPONSE_H

#include "rdsresponse.h"
#include "deletedbinstanceautomatedbackuprequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBInstanceAutomatedBackupResponsePrivate;

class QTAWSRDS_EXPORT DeleteDBInstanceAutomatedBackupResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteDBInstanceAutomatedBackupResponse(const DeleteDBInstanceAutomatedBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBInstanceAutomatedBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBInstanceAutomatedBackupResponse)
    Q_DISABLE_COPY(DeleteDBInstanceAutomatedBackupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
