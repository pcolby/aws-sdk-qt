// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEREPORTJOBREQUEST_P_H

#include "backuprequest_p.h"
#include "describereportjobrequest.h"

namespace QtAws {
namespace Backup {

class DescribeReportJobRequest;

class DescribeReportJobRequestPrivate : public BackupRequestPrivate {

public:
    DescribeReportJobRequestPrivate(const BackupRequest::Action action,
                                   DescribeReportJobRequest * const q);
    DescribeReportJobRequestPrivate(const DescribeReportJobRequestPrivate &other,
                                   DescribeReportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReportJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
