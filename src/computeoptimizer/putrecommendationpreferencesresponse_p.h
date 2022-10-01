// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECOMMENDATIONPREFERENCESRESPONSE_P_H
#define QTAWS_PUTRECOMMENDATIONPREFERENCESRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class PutRecommendationPreferencesResponse;

class PutRecommendationPreferencesResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit PutRecommendationPreferencesResponsePrivate(PutRecommendationPreferencesResponse * const q);

    void parsePutRecommendationPreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRecommendationPreferencesResponse)
    Q_DISABLE_COPY(PutRecommendationPreferencesResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
