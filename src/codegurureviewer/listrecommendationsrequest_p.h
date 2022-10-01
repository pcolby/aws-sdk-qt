// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONSREQUEST_P_H
#define QTAWS_LISTRECOMMENDATIONSREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "listrecommendationsrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRecommendationsRequest;

class ListRecommendationsRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    ListRecommendationsRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   ListRecommendationsRequest * const q);
    ListRecommendationsRequestPrivate(const ListRecommendationsRequestPrivate &other,
                                   ListRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecommendationsRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
