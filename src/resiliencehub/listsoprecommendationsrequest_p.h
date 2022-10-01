// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOPRECOMMENDATIONSREQUEST_P_H
#define QTAWS_LISTSOPRECOMMENDATIONSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listsoprecommendationsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListSopRecommendationsRequest;

class ListSopRecommendationsRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListSopRecommendationsRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListSopRecommendationsRequest * const q);
    ListSopRecommendationsRequestPrivate(const ListSopRecommendationsRequestPrivate &other,
                                   ListSopRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSopRecommendationsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
