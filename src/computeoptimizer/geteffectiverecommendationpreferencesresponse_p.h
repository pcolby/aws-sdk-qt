// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVERECOMMENDATIONPREFERENCESRESPONSE_P_H
#define QTAWS_GETEFFECTIVERECOMMENDATIONPREFERENCESRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEffectiveRecommendationPreferencesResponse;

class GetEffectiveRecommendationPreferencesResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit GetEffectiveRecommendationPreferencesResponsePrivate(GetEffectiveRecommendationPreferencesResponse * const q);

    void parseGetEffectiveRecommendationPreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEffectiveRecommendationPreferencesResponse)
    Q_DISABLE_COPY(GetEffectiveRecommendationPreferencesResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
