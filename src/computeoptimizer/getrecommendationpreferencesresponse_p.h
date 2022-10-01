// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONPREFERENCESRESPONSE_P_H
#define QTAWS_GETRECOMMENDATIONPREFERENCESRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetRecommendationPreferencesResponse;

class GetRecommendationPreferencesResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit GetRecommendationPreferencesResponsePrivate(GetRecommendationPreferencesResponse * const q);

    void parseGetRecommendationPreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecommendationPreferencesResponse)
    Q_DISABLE_COPY(GetRecommendationPreferencesResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
