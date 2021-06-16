/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DISASSOCIATEIPGROUPSREQUEST_P_H
#define QTAWS_DISASSOCIATEIPGROUPSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "disassociateipgroupsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DisassociateIpGroupsRequest;

class QTAWS_EXPORT DisassociateIpGroupsRequestPrivate : public WorkSpacesRequestPrivate {

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
