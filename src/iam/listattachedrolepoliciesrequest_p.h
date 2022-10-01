// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDROLEPOLICIESREQUEST_P_H
#define QTAWS_LISTATTACHEDROLEPOLICIESREQUEST_P_H

#include "iamrequest_p.h"
#include "listattachedrolepoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListAttachedRolePoliciesRequest;

class ListAttachedRolePoliciesRequestPrivate : public IamRequestPrivate {

public:
    ListAttachedRolePoliciesRequestPrivate(const IamRequest::Action action,
                                   ListAttachedRolePoliciesRequest * const q);
    ListAttachedRolePoliciesRequestPrivate(const ListAttachedRolePoliciesRequestPrivate &other,
                                   ListAttachedRolePoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttachedRolePoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
