// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTPLANREQUEST_P_H
#define QTAWS_DESCRIBEREPORTPLANREQUEST_P_H

#include "backuprequest_p.h"
#include "describereportplanrequest.h"

namespace QtAws {
namespace Backup {

class DescribeReportPlanRequest;

class DescribeReportPlanRequestPrivate : public BackupRequestPrivate {

public:
    DescribeReportPlanRequestPrivate(const BackupRequest::Action action,
                                   DescribeReportPlanRequest * const q);
    DescribeReportPlanRequestPrivate(const DescribeReportPlanRequestPrivate &other,
                                   DescribeReportPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReportPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
