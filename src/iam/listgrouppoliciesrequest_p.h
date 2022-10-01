// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPPOLICIESREQUEST_P_H
#define QTAWS_LISTGROUPPOLICIESREQUEST_P_H

#include "iamrequest_p.h"
#include "listgrouppoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListGroupPoliciesRequest;

class ListGroupPoliciesRequestPrivate : public IamRequestPrivate {

public:
    ListGroupPoliciesRequestPrivate(const IamRequest::Action action,
                                   ListGroupPoliciesRequest * const q);
    ListGroupPoliciesRequestPrivate(const ListGroupPoliciesRequestPrivate &other,
                                   ListGroupPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupPoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
