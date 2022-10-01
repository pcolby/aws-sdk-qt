// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONRESOURCESREQUEST_P_H
#define QTAWS_LISTAPPVERSIONRESOURCESREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listappversionresourcesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionResourcesRequest;

class ListAppVersionResourcesRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListAppVersionResourcesRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListAppVersionResourcesRequest * const q);
    ListAppVersionResourcesRequestPrivate(const ListAppVersionResourcesRequestPrivate &other,
                                   ListAppVersionResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppVersionResourcesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
