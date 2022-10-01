// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTTASKREQUEST_P_H
#define QTAWS_STARTIMPORTTASKREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "startimporttaskrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartImportTaskRequest;

class StartImportTaskRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    StartImportTaskRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   StartImportTaskRequest * const q);
    StartImportTaskRequestPrivate(const StartImportTaskRequestPrivate &other,
                                   StartImportTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartImportTaskRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
