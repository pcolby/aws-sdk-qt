// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBACKUPJOBREQUEST_P_H
#define QTAWS_STOPBACKUPJOBREQUEST_P_H

#include "backuprequest_p.h"
#include "stopbackupjobrequest.h"

namespace QtAws {
namespace Backup {

class StopBackupJobRequest;

class StopBackupJobRequestPrivate : public BackupRequestPrivate {

public:
    StopBackupJobRequestPrivate(const BackupRequest::Action action,
                                   StopBackupJobRequest * const q);
    StopBackupJobRequestPrivate(const StopBackupJobRequestPrivate &other,
                                   StopBackupJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopBackupJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
