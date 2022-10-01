// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPVAULTREQUEST_P_H
#define QTAWS_DESCRIBEBACKUPVAULTREQUEST_P_H

#include "backuprequest_p.h"
#include "describebackupvaultrequest.h"

namespace QtAws {
namespace Backup {

class DescribeBackupVaultRequest;

class DescribeBackupVaultRequestPrivate : public BackupRequestPrivate {

public:
    DescribeBackupVaultRequestPrivate(const BackupRequest::Action action,
                                   DescribeBackupVaultRequest * const q);
    DescribeBackupVaultRequestPrivate(const DescribeBackupVaultRequestPrivate &other,
                                   DescribeBackupVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBackupVaultRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
