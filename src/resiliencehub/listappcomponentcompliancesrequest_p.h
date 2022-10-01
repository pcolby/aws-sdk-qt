// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPCOMPONENTCOMPLIANCESREQUEST_P_H
#define QTAWS_LISTAPPCOMPONENTCOMPLIANCESREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listappcomponentcompliancesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppComponentCompliancesRequest;

class ListAppComponentCompliancesRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListAppComponentCompliancesRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListAppComponentCompliancesRequest * const q);
    ListAppComponentCompliancesRequestPrivate(const ListAppComponentCompliancesRequestPrivate &other,
                                   ListAppComponentCompliancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppComponentCompliancesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
