// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYPOINTRESPONSE_P_H
#define QTAWS_DESCRIBERECOVERYPOINTRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeRecoveryPointResponse;

class DescribeRecoveryPointResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeRecoveryPointResponsePrivate(DescribeRecoveryPointResponse * const q);

    void parseDescribeRecoveryPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRecoveryPointResponse)
    Q_DISABLE_COPY(DescribeRecoveryPointResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
