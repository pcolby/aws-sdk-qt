// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWREQUEST_P_H
#define QTAWS_GETWORKFLOWREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "getworkflowrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetWorkflowRequest;

class GetWorkflowRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    GetWorkflowRequestPrivate(const CustomerProfilesRequest::Action action,
                                   GetWorkflowRequest * const q);
    GetWorkflowRequestPrivate(const GetWorkflowRequestPrivate &other,
                                   GetWorkflowRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkflowRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
