// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLEPOLICIESREQUEST_P_H
#define QTAWS_LISTROLEPOLICIESREQUEST_P_H

#include "iamrequest_p.h"
#include "listrolepoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListRolePoliciesRequest;

class ListRolePoliciesRequestPrivate : public IamRequestPrivate {

public:
    ListRolePoliciesRequestPrivate(const IamRequest::Action action,
                                   ListRolePoliciesRequest * const q);
    ListRolePoliciesRequestPrivate(const ListRolePoliciesRequestPrivate &other,
                                   ListRolePoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRolePoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
