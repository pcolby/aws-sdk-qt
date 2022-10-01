// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPOLICIESREQUEST_P_H
#define QTAWS_LISTSECURITYPOLICIESREQUEST_P_H

#include "transferrequest_p.h"
#include "listsecuritypoliciesrequest.h"

namespace QtAws {
namespace Transfer {

class ListSecurityPoliciesRequest;

class ListSecurityPoliciesRequestPrivate : public TransferRequestPrivate {

public:
    ListSecurityPoliciesRequestPrivate(const TransferRequest::Action action,
                                   ListSecurityPoliciesRequest * const q);
    ListSecurityPoliciesRequestPrivate(const ListSecurityPoliciesRequestPrivate &other,
                                   ListSecurityPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSecurityPoliciesRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
