// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANREQUEST_P_H
#define QTAWS_GETBACKUPPLANREQUEST_P_H

#include "backuprequest_p.h"
#include "getbackupplanrequest.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanRequest;

class GetBackupPlanRequestPrivate : public BackupRequestPrivate {

public:
    GetBackupPlanRequestPrivate(const BackupRequest::Action action,
                                   GetBackupPlanRequest * const q);
    GetBackupPlanRequestPrivate(const GetBackupPlanRequestPrivate &other,
                                   GetBackupPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackupPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
