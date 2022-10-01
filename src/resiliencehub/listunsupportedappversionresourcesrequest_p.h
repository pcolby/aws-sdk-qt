// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUNSUPPORTEDAPPVERSIONRESOURCESREQUEST_P_H
#define QTAWS_LISTUNSUPPORTEDAPPVERSIONRESOURCESREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listunsupportedappversionresourcesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListUnsupportedAppVersionResourcesRequest;

class ListUnsupportedAppVersionResourcesRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListUnsupportedAppVersionResourcesRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListUnsupportedAppVersionResourcesRequest * const q);
    ListUnsupportedAppVersionResourcesRequestPrivate(const ListUnsupportedAppVersionResourcesRequestPrivate &other,
                                   ListUnsupportedAppVersionResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUnsupportedAppVersionResourcesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
