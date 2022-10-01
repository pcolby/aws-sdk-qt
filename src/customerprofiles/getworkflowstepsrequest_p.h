// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWSTEPSREQUEST_P_H
#define QTAWS_GETWORKFLOWSTEPSREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "getworkflowstepsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetWorkflowStepsRequest;

class GetWorkflowStepsRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    GetWorkflowStepsRequestPrivate(const CustomerProfilesRequest::Action action,
                                   GetWorkflowStepsRequest * const q);
    GetWorkflowStepsRequestPrivate(const GetWorkflowStepsRequestPrivate &other,
                                   GetWorkflowStepsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkflowStepsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
