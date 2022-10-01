// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOLICIESREQUEST_P_H
#define QTAWS_LISTUSERPOLICIESREQUEST_P_H

#include "iamrequest_p.h"
#include "listuserpoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListUserPoliciesRequest;

class ListUserPoliciesRequestPrivate : public IamRequestPrivate {

public:
    ListUserPoliciesRequestPrivate(const IamRequest::Action action,
                                   ListUserPoliciesRequest * const q);
    ListUserPoliciesRequestPrivate(const ListUserPoliciesRequestPrivate &other,
                                   ListUserPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserPoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
