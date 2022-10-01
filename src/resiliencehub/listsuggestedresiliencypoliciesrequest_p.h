// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUGGESTEDRESILIENCYPOLICIESREQUEST_P_H
#define QTAWS_LISTSUGGESTEDRESILIENCYPOLICIESREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listsuggestedresiliencypoliciesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListSuggestedResiliencyPoliciesRequest;

class ListSuggestedResiliencyPoliciesRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListSuggestedResiliencyPoliciesRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListSuggestedResiliencyPoliciesRequest * const q);
    ListSuggestedResiliencyPoliciesRequestPrivate(const ListSuggestedResiliencyPoliciesRequestPrivate &other,
                                   ListSuggestedResiliencyPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSuggestedResiliencyPoliciesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
