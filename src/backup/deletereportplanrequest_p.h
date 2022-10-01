// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTPLANREQUEST_P_H
#define QTAWS_DELETEREPORTPLANREQUEST_P_H

#include "backuprequest_p.h"
#include "deletereportplanrequest.h"

namespace QtAws {
namespace Backup {

class DeleteReportPlanRequest;

class DeleteReportPlanRequestPrivate : public BackupRequestPrivate {

public:
    DeleteReportPlanRequestPrivate(const BackupRequest::Action action,
                                   DeleteReportPlanRequest * const q);
    DeleteReportPlanRequestPrivate(const DeleteReportPlanRequestPrivate &other,
                                   DeleteReportPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReportPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
