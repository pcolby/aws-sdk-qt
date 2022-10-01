// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDUSERPOLICIESREQUEST_P_H
#define QTAWS_LISTATTACHEDUSERPOLICIESREQUEST_P_H

#include "iamrequest_p.h"
#include "listattacheduserpoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListAttachedUserPoliciesRequest;

class ListAttachedUserPoliciesRequestPrivate : public IamRequestPrivate {

public:
    ListAttachedUserPoliciesRequestPrivate(const IamRequest::Action action,
                                   ListAttachedUserPoliciesRequest * const q);
    ListAttachedUserPoliciesRequestPrivate(const ListAttachedUserPoliciesRequestPrivate &other,
                                   ListAttachedUserPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttachedUserPoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
