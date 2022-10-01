// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESTOREJOBRESPONSE_P_H
#define QTAWS_DESCRIBERESTOREJOBRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeRestoreJobResponse;

class DescribeRestoreJobResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeRestoreJobResponsePrivate(DescribeRestoreJobResponse * const q);

    void parseDescribeRestoreJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRestoreJobResponse)
    Q_DISABLE_COPY(DescribeRestoreJobResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
