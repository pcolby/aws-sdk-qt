// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKUPPLANREQUEST_P_H
#define QTAWS_UPDATEBACKUPPLANREQUEST_P_H

#include "backuprequest_p.h"
#include "updatebackupplanrequest.h"

namespace QtAws {
namespace Backup {

class UpdateBackupPlanRequest;

class UpdateBackupPlanRequestPrivate : public BackupRequestPrivate {

public:
    UpdateBackupPlanRequestPrivate(const BackupRequest::Action action,
                                   UpdateBackupPlanRequest * const q);
    UpdateBackupPlanRequestPrivate(const UpdateBackupPlanRequestPrivate &other,
                                   UpdateBackupPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBackupPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
