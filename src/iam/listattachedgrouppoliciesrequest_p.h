// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDGROUPPOLICIESREQUEST_P_H
#define QTAWS_LISTATTACHEDGROUPPOLICIESREQUEST_P_H

#include "iamrequest_p.h"
#include "listattachedgrouppoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListAttachedGroupPoliciesRequest;

class ListAttachedGroupPoliciesRequestPrivate : public IamRequestPrivate {

public:
    ListAttachedGroupPoliciesRequestPrivate(const IamRequest::Action action,
                                   ListAttachedGroupPoliciesRequest * const q);
    ListAttachedGroupPoliciesRequestPrivate(const ListAttachedGroupPoliciesRequestPrivate &other,
                                   ListAttachedGroupPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttachedGroupPoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
