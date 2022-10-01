// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESGRANTINGSERVICEACCESSREQUEST_P_H
#define QTAWS_LISTPOLICIESGRANTINGSERVICEACCESSREQUEST_P_H

#include "iamrequest_p.h"
#include "listpoliciesgrantingserviceaccessrequest.h"

namespace QtAws {
namespace Iam {

class ListPoliciesGrantingServiceAccessRequest;

class ListPoliciesGrantingServiceAccessRequestPrivate : public IamRequestPrivate {

public:
    ListPoliciesGrantingServiceAccessRequestPrivate(const IamRequest::Action action,
                                   ListPoliciesGrantingServiceAccessRequest * const q);
    ListPoliciesGrantingServiceAccessRequestPrivate(const ListPoliciesGrantingServiceAccessRequestPrivate &other,
                                   ListPoliciesGrantingServiceAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPoliciesGrantingServiceAccessRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
