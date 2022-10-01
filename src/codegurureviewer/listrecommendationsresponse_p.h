// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_LISTRECOMMENDATIONSRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRecommendationsResponse;

class ListRecommendationsResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit ListRecommendationsResponsePrivate(ListRecommendationsResponse * const q);

    void parseListRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecommendationsResponse)
    Q_DISABLE_COPY(ListRecommendationsResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
