// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTPLANREQUEST_P_H
#define QTAWS_UPDATEREPORTPLANREQUEST_P_H

#include "backuprequest_p.h"
#include "updatereportplanrequest.h"

namespace QtAws {
namespace Backup {

class UpdateReportPlanRequest;

class UpdateReportPlanRequestPrivate : public BackupRequestPrivate {

public:
    UpdateReportPlanRequestPrivate(const BackupRequest::Action action,
                                   UpdateReportPlanRequest * const q);
    UpdateReportPlanRequestPrivate(const UpdateReportPlanRequestPrivate &other,
                                   UpdateReportPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReportPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
