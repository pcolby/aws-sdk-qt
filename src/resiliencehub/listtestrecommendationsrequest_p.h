// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTRECOMMENDATIONSREQUEST_P_H
#define QTAWS_LISTTESTRECOMMENDATIONSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listtestrecommendationsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListTestRecommendationsRequest;

class ListTestRecommendationsRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListTestRecommendationsRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListTestRecommendationsRequest * const q);
    ListTestRecommendationsRequestPrivate(const ListTestRecommendationsRequestPrivate &other,
                                   ListTestRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTestRecommendationsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
