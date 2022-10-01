// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPVAULTRESPONSE_P_H
#define QTAWS_DESCRIBEBACKUPVAULTRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeBackupVaultResponse;

class DescribeBackupVaultResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeBackupVaultResponsePrivate(DescribeBackupVaultResponse * const q);

    void parseDescribeBackupVaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBackupVaultResponse)
    Q_DISABLE_COPY(DescribeBackupVaultResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
