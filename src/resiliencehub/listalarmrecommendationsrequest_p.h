// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMRECOMMENDATIONSREQUEST_P_H
#define QTAWS_LISTALARMRECOMMENDATIONSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listalarmrecommendationsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAlarmRecommendationsRequest;

class ListAlarmRecommendationsRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListAlarmRecommendationsRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListAlarmRecommendationsRequest * const q);
    ListAlarmRecommendationsRequestPrivate(const ListAlarmRecommendationsRequestPrivate &other,
                                   ListAlarmRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAlarmRecommendationsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
