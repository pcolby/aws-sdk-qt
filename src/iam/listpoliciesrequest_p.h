// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESREQUEST_P_H
#define QTAWS_LISTPOLICIESREQUEST_P_H

#include "iamrequest_p.h"
#include "listpoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListPoliciesRequest;

class ListPoliciesRequestPrivate : public IamRequestPrivate {

public:
    ListPoliciesRequestPrivate(const IamRequest::Action action,
                                   ListPoliciesRequest * const q);
    ListPoliciesRequestPrivate(const ListPoliciesRequestPrivate &other,
                                   ListPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
