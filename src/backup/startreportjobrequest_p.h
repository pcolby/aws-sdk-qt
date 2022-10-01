// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPORTJOBREQUEST_P_H
#define QTAWS_STARTREPORTJOBREQUEST_P_H

#include "backuprequest_p.h"
#include "startreportjobrequest.h"

namespace QtAws {
namespace Backup {

class StartReportJobRequest;

class StartReportJobRequestPrivate : public BackupRequestPrivate {

public:
    StartReportJobRequestPrivate(const BackupRequest::Action action,
                                   StartReportJobRequest * const q);
    StartReportJobRequestPrivate(const StartReportJobRequestPrivate &other,
                                   StartReportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartReportJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
