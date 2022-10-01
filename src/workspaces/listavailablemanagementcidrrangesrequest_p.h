// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEMENTCIDRRANGESREQUEST_P_H
#define QTAWS_LISTAVAILABLEMANAGEMENTCIDRRANGESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "listavailablemanagementcidrrangesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ListAvailableManagementCidrRangesRequest;

class ListAvailableManagementCidrRangesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ListAvailableManagementCidrRangesRequestPrivate(const WorkSpacesRequest::Action action,
                                   ListAvailableManagementCidrRangesRequest * const q);
    ListAvailableManagementCidrRangesRequestPrivate(const ListAvailableManagementCidrRangesRequestPrivate &other,
                                   ListAvailableManagementCidrRangesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAvailableManagementCidrRangesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
