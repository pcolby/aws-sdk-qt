// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDATIONPREFERENCESRESPONSE_P_H
#define QTAWS_DELETERECOMMENDATIONPREFERENCESRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class DeleteRecommendationPreferencesResponse;

class DeleteRecommendationPreferencesResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit DeleteRecommendationPreferencesResponsePrivate(DeleteRecommendationPreferencesResponse * const q);

    void parseDeleteRecommendationPreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRecommendationPreferencesResponse)
    Q_DISABLE_COPY(DeleteRecommendationPreferencesResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
