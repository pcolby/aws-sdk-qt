// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOLICIESREQUEST_P_H
#define QTAWS_LISTIDENTITYPOLICIESREQUEST_P_H

#include "sesrequest_p.h"
#include "listidentitypoliciesrequest.h"

namespace QtAws {
namespace Ses {

class ListIdentityPoliciesRequest;

class ListIdentityPoliciesRequestPrivate : public SesRequestPrivate {

public:
    ListIdentityPoliciesRequestPrivate(const SesRequest::Action action,
                                   ListIdentityPoliciesRequest * const q);
    ListIdentityPoliciesRequestPrivate(const ListIdentityPoliciesRequestPrivate &other,
                                   ListIdentityPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIdentityPoliciesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
