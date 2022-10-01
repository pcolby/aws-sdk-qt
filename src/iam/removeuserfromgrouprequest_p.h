// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEUSERFROMGROUPREQUEST_P_H
#define QTAWS_REMOVEUSERFROMGROUPREQUEST_P_H

#include "iamrequest_p.h"
#include "removeuserfromgrouprequest.h"

namespace QtAws {
namespace Iam {

class RemoveUserFromGroupRequest;

class RemoveUserFromGroupRequestPrivate : public IamRequestPrivate {

public:
    RemoveUserFromGroupRequestPrivate(const IamRequest::Action action,
                                   RemoveUserFromGroupRequest * const q);
    RemoveUserFromGroupRequestPrivate(const RemoveUserFromGroupRequestPrivate &other,
                                   RemoveUserFromGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveUserFromGroupRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
