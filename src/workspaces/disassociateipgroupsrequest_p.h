// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEIPGROUPSREQUEST_P_H
#define QTAWS_DISASSOCIATEIPGROUPSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "disassociateipgroupsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DisassociateIpGroupsRequest;

class DisassociateIpGroupsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DisassociateIpGroupsRequestPrivate(const WorkSpacesRequest::Action action,
                                   DisassociateIpGroupsRequest * const q);
    DisassociateIpGroupsRequestPrivate(const DisassociateIpGroupsRequestPrivate &other,
                                   DisassociateIpGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateIpGroupsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
