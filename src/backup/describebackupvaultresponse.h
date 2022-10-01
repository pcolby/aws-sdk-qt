// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPVAULTRESPONSE_H
#define QTAWS_DESCRIBEBACKUPVAULTRESPONSE_H

#include "backupresponse.h"
#include "describebackupvaultrequest.h"

namespace QtAws {
namespace Backup {

class DescribeBackupVaultResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeBackupVaultResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeBackupVaultResponse(const DescribeBackupVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBackupVaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBackupVaultResponse)
    Q_DISABLE_COPY(DescribeBackupVaultResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
