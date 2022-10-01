// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTJOBSREQUEST_P_H
#define QTAWS_LISTREPORTJOBSREQUEST_P_H

#include "backuprequest_p.h"
#include "listreportjobsrequest.h"

namespace QtAws {
namespace Backup {

class ListReportJobsRequest;

class ListReportJobsRequestPrivate : public BackupRequestPrivate {

public:
    ListReportJobsRequestPrivate(const BackupRequest::Action action,
                                   ListReportJobsRequest * const q);
    ListReportJobsRequestPrivate(const ListReportJobsRequestPrivate &other,
                                   ListReportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReportJobsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
