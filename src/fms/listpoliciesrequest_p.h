// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESREQUEST_P_H
#define QTAWS_LISTPOLICIESREQUEST_P_H

#include "fmsrequest_p.h"
#include "listpoliciesrequest.h"

namespace QtAws {
namespace Fms {

class ListPoliciesRequest;

class ListPoliciesRequestPrivate : public FmsRequestPrivate {

public:
    ListPoliciesRequestPrivate(const FmsRequest::Action action,
                                   ListPoliciesRequest * const q);
    ListPoliciesRequestPrivate(const ListPoliciesRequestPrivate &other,
                                   ListPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPoliciesRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
