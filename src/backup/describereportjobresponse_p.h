// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEREPORTJOBRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeReportJobResponse;

class DescribeReportJobResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeReportJobResponsePrivate(DescribeReportJobResponse * const q);

    void parseDescribeReportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReportJobResponse)
    Q_DISABLE_COPY(DescribeReportJobResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
