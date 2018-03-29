/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETEROLEPOLICYREQUEST_P_H
#define QTAWS_DELETEROLEPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "deleterolepolicyrequest.h"

namespace QtAws {
namespace IAM {

class DeleteRolePolicyRequest;

class QTAWS_EXPORT DeleteRolePolicyRequestPrivate : public IAMRequestPrivate {

public:
    DeleteRolePolicyRequestPrivate(const IAM::Action action,
                                   DeleteRolePolicyRequest * const q);
    DeleteRolePolicyRequestPrivate(const DeleteRolePolicyRequestPrivate &other,
                                   DeleteRolePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRolePolicyRequest)

};

} // namespace IAM
} // namespace QtAws

#endif
