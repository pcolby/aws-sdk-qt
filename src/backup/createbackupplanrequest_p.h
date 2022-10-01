// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPPLANREQUEST_P_H
#define QTAWS_CREATEBACKUPPLANREQUEST_P_H

#include "backuprequest_p.h"
#include "createbackupplanrequest.h"

namespace QtAws {
namespace Backup {

class CreateBackupPlanRequest;

class CreateBackupPlanRequestPrivate : public BackupRequestPrivate {

public:
    CreateBackupPlanRequestPrivate(const BackupRequest::Action action,
                                   CreateBackupPlanRequest * const q);
    CreateBackupPlanRequestPrivate(const CreateBackupPlanRequestPrivate &other,
                                   CreateBackupPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackupPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
