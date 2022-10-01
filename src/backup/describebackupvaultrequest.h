// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPVAULTREQUEST_H
#define QTAWS_DESCRIBEBACKUPVAULTREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DescribeBackupVaultRequestPrivate;

class QTAWSBACKUP_EXPORT DescribeBackupVaultRequest : public BackupRequest {

public:
    DescribeBackupVaultRequest(const DescribeBackupVaultRequest &other);
    DescribeBackupVaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBackupVaultRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
