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

#ifndef QTAWS_LISTUSERSBYPERMISSIONGROUPREQUEST_P_H
#define QTAWS_LISTUSERSBYPERMISSIONGROUPREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "listusersbypermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class ListUsersByPermissionGroupRequest;

class ListUsersByPermissionGroupRequestPrivate : public FinspaceDataRequestPrivate {

public:
    ListUsersByPermissionGroupRequestPrivate(const FinspaceDataRequest::Action action,
                                   ListUsersByPermissionGroupRequest * const q);
    ListUsersByPermissionGroupRequestPrivate(const ListUsersByPermissionGroupRequestPrivate &other,
                                   ListUsersByPermissionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUsersByPermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
