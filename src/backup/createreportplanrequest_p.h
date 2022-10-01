// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPORTPLANREQUEST_P_H
#define QTAWS_CREATEREPORTPLANREQUEST_P_H

#include "backuprequest_p.h"
#include "createreportplanrequest.h"

namespace QtAws {
namespace Backup {

class CreateReportPlanRequest;

class CreateReportPlanRequestPrivate : public BackupRequestPrivate {

public:
    CreateReportPlanRequestPrivate(const BackupRequest::Action action,
                                   CreateReportPlanRequest * const q);
    CreateReportPlanRequestPrivate(const CreateReportPlanRequestPrivate &other,
                                   CreateReportPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReportPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
