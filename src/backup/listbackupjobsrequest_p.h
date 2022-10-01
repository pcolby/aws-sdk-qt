// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPJOBSREQUEST_P_H
#define QTAWS_LISTBACKUPJOBSREQUEST_P_H

#include "backuprequest_p.h"
#include "listbackupjobsrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupJobsRequest;

class ListBackupJobsRequestPrivate : public BackupRequestPrivate {

public:
    ListBackupJobsRequestPrivate(const BackupRequest::Action action,
                                   ListBackupJobsRequest * const q);
    ListBackupJobsRequestPrivate(const ListBackupJobsRequestPrivate &other,
                                   ListBackupJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBackupJobsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
