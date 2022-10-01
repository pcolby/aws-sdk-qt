// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEAPPVERSIONRESOURCESREQUEST_P_H
#define QTAWS_RESOLVEAPPVERSIONRESOURCESREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "resolveappversionresourcesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ResolveAppVersionResourcesRequest;

class ResolveAppVersionResourcesRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ResolveAppVersionResourcesRequestPrivate(const ResilienceHubRequest::Action action,
                                   ResolveAppVersionResourcesRequest * const q);
    ResolveAppVersionResourcesRequestPrivate(const ResolveAppVersionResourcesRequestPrivate &other,
                                   ResolveAppVersionResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResolveAppVersionResourcesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
