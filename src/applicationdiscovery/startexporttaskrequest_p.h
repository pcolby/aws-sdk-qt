// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPORTTASKREQUEST_P_H
#define QTAWS_STARTEXPORTTASKREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "startexporttaskrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartExportTaskRequest;

class StartExportTaskRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    StartExportTaskRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   StartExportTaskRequest * const q);
    StartExportTaskRequestPrivate(const StartExportTaskRequestPrivate &other,
                                   StartExportTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartExportTaskRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
