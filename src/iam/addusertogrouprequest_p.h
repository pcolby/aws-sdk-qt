// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDUSERTOGROUPREQUEST_P_H
#define QTAWS_ADDUSERTOGROUPREQUEST_P_H

#include "iamrequest_p.h"
#include "addusertogrouprequest.h"

namespace QtAws {
namespace Iam {

class AddUserToGroupRequest;

class AddUserToGroupRequestPrivate : public IamRequestPrivate {

public:
    AddUserToGroupRequestPrivate(const IamRequest::Action action,
                                   AddUserToGroupRequest * const q);
    AddUserToGroupRequestPrivate(const AddUserToGroupRequestPrivate &other,
                                   AddUserToGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddUserToGroupRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
