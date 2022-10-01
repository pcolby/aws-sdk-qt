// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESILIENCYPOLICIESREQUEST_P_H
#define QTAWS_LISTRESILIENCYPOLICIESREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listresiliencypoliciesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListResiliencyPoliciesRequest;

class ListResiliencyPoliciesRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListResiliencyPoliciesRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListResiliencyPoliciesRequest * const q);
    ListResiliencyPoliciesRequestPrivate(const ListResiliencyPoliciesRequestPrivate &other,
                                   ListResiliencyPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResiliencyPoliciesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
