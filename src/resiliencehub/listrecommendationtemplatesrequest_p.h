// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONTEMPLATESREQUEST_P_H
#define QTAWS_LISTRECOMMENDATIONTEMPLATESREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listrecommendationtemplatesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListRecommendationTemplatesRequest;

class ListRecommendationTemplatesRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListRecommendationTemplatesRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListRecommendationTemplatesRequest * const q);
    ListRecommendationTemplatesRequestPrivate(const ListRecommendationTemplatesRequestPrivate &other,
                                   ListRecommendationTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecommendationTemplatesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
