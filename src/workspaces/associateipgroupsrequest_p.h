// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIPGROUPSREQUEST_P_H
#define QTAWS_ASSOCIATEIPGROUPSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "associateipgroupsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class AssociateIpGroupsRequest;

class AssociateIpGroupsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    AssociateIpGroupsRequestPrivate(const WorkSpacesRequest::Action action,
                                   AssociateIpGroupsRequest * const q);
    AssociateIpGroupsRequestPrivate(const AssociateIpGroupsRequestPrivate &other,
                                   AssociateIpGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateIpGroupsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
