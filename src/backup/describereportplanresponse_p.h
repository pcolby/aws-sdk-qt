// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTPLANRESPONSE_P_H
#define QTAWS_DESCRIBEREPORTPLANRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeReportPlanResponse;

class DescribeReportPlanResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeReportPlanResponsePrivate(DescribeReportPlanResponse * const q);

    void parseDescribeReportPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReportPlanResponse)
    Q_DISABLE_COPY(DescribeReportPlanResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
