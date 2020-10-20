/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_REMOVEUSERFROMGROUPREQUEST_P_H
#define QTAWS_REMOVEUSERFROMGROUPREQUEST_P_H

#include "iamrequest_p.h"
#include "removeuserfromgrouprequest.h"

namespace QtAws {
namespace IAM {

class RemoveUserFromGroupRequest;

class QTAWS_EXPORT RemoveUserFromGroupRequestPrivate : public IamRequestPrivate {

public:
    RemoveUserFromGroupRequestPrivate(const IamRequest::Action action,
                                   RemoveUserFromGroupRequest * const q);
    RemoveUserFromGroupRequestPrivate(const RemoveUserFromGroupRequestPrivate &other,
                                   RemoveUserFromGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveUserFromGroupRequest)

};

} // namespace IAM
} // namespace QtAws

#endif
