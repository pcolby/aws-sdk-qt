// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPJOBREQUEST_P_H
#define QTAWS_DESCRIBEBACKUPJOBREQUEST_P_H

#include "backuprequest_p.h"
#include "describebackupjobrequest.h"

namespace QtAws {
namespace Backup {

class DescribeBackupJobRequest;

class DescribeBackupJobRequestPrivate : public BackupRequestPrivate {

public:
    DescribeBackupJobRequestPrivate(const BackupRequest::Action action,
                                   DescribeBackupJobRequest * const q);
    DescribeBackupJobRequestPrivate(const DescribeBackupJobRequestPrivate &other,
                                   DescribeBackupJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBackupJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
