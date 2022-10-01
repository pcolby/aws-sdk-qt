// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPORTTASKREQUEST_P_H
#define QTAWS_STARTEXPORTTASKREQUEST_P_H

#include "rdsrequest_p.h"
#include "startexporttaskrequest.h"

namespace QtAws {
namespace Rds {

class StartExportTaskRequest;

class StartExportTaskRequestPrivate : public RdsRequestPrivate {

public:
    StartExportTaskRequestPrivate(const RdsRequest::Action action,
                                   StartExportTaskRequest * const q);
    StartExportTaskRequestPrivate(const StartExportTaskRequestPrivate &other,
                                   StartExportTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartExportTaskRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
