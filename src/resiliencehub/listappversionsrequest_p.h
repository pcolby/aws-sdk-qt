// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONSREQUEST_P_H
#define QTAWS_LISTAPPVERSIONSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listappversionsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionsRequest;

class ListAppVersionsRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListAppVersionsRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListAppVersionsRequest * const q);
    ListAppVersionsRequestPrivate(const ListAppVersionsRequestPrivate &other,
                                   ListAppVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppVersionsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
