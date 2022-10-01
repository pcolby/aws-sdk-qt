// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWSREQUEST_P_H
#define QTAWS_LISTWORKFLOWSREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "listworkflowsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListWorkflowsRequest;

class ListWorkflowsRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    ListWorkflowsRequestPrivate(const CustomerProfilesRequest::Action action,
                                   ListWorkflowsRequest * const q);
    ListWorkflowsRequestPrivate(const ListWorkflowsRequestPrivate &other,
                                   ListWorkflowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkflowsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
