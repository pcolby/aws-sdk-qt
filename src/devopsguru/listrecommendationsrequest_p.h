// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONSREQUEST_P_H
#define QTAWS_LISTRECOMMENDATIONSREQUEST_P_H

#include "devopsgururequest_p.h"
#include "listrecommendationsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListRecommendationsRequest;

class ListRecommendationsRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    ListRecommendationsRequestPrivate(const DevOpsGuruRequest::Action action,
                                   ListRecommendationsRequest * const q);
    ListRecommendationsRequestPrivate(const ListRecommendationsRequestPrivate &other,
                                   ListRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecommendationsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
