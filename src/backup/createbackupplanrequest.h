// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPPLANREQUEST_H
#define QTAWS_CREATEBACKUPPLANREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class CreateBackupPlanRequestPrivate;

class QTAWSBACKUP_EXPORT CreateBackupPlanRequest : public BackupRequest {

public:
    CreateBackupPlanRequest(const CreateBackupPlanRequest &other);
    CreateBackupPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackupPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
