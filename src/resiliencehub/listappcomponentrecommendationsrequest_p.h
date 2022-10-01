// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPCOMPONENTRECOMMENDATIONSREQUEST_P_H
#define QTAWS_LISTAPPCOMPONENTRECOMMENDATIONSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listappcomponentrecommendationsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppComponentRecommendationsRequest;

class ListAppComponentRecommendationsRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListAppComponentRecommendationsRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListAppComponentRecommendationsRequest * const q);
    ListAppComponentRecommendationsRequestPrivate(const ListAppComponentRecommendationsRequestPrivate &other,
                                   ListAppComponentRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppComponentRecommendationsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
