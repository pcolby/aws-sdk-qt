// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONWORKFLOWREQUEST_P_H
#define QTAWS_CREATEINTEGRATIONWORKFLOWREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "createintegrationworkflowrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class CreateIntegrationWorkflowRequest;

class CreateIntegrationWorkflowRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    CreateIntegrationWorkflowRequestPrivate(const CustomerProfilesRequest::Action action,
                                   CreateIntegrationWorkflowRequest * const q);
    CreateIntegrationWorkflowRequestPrivate(const CreateIntegrationWorkflowRequestPrivate &other,
                                   CreateIntegrationWorkflowRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIntegrationWorkflowRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
