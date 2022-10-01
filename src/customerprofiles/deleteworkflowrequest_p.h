// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFLOWREQUEST_P_H
#define QTAWS_DELETEWORKFLOWREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "deleteworkflowrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteWorkflowRequest;

class DeleteWorkflowRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    DeleteWorkflowRequestPrivate(const CustomerProfilesRequest::Action action,
                                   DeleteWorkflowRequest * const q);
    DeleteWorkflowRequestPrivate(const DeleteWorkflowRequestPrivate &other,
                                   DeleteWorkflowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkflowRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
