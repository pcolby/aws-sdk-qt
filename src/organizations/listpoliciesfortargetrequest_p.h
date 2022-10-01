// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESFORTARGETREQUEST_P_H
#define QTAWS_LISTPOLICIESFORTARGETREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listpoliciesfortargetrequest.h"

namespace QtAws {
namespace Organizations {

class ListPoliciesForTargetRequest;

class ListPoliciesForTargetRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListPoliciesForTargetRequestPrivate(const OrganizationsRequest::Action action,
                                   ListPoliciesForTargetRequest * const q);
    ListPoliciesForTargetRequestPrivate(const ListPoliciesForTargetRequestPrivate &other,
                                   ListPoliciesForTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPoliciesForTargetRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
