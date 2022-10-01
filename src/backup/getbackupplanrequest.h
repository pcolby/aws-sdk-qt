// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANREQUEST_H
#define QTAWS_GETBACKUPPLANREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanRequestPrivate;

class QTAWSBACKUP_EXPORT GetBackupPlanRequest : public BackupRequest {

public:
    GetBackupPlanRequest(const GetBackupPlanRequest &other);
    GetBackupPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackupPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
