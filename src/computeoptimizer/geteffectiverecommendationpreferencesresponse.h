// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVERECOMMENDATIONPREFERENCESRESPONSE_H
#define QTAWS_GETEFFECTIVERECOMMENDATIONPREFERENCESRESPONSE_H

#include "computeoptimizerresponse.h"
#include "geteffectiverecommendationpreferencesrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEffectiveRecommendationPreferencesResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEffectiveRecommendationPreferencesResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    GetEffectiveRecommendationPreferencesResponse(const GetEffectiveRecommendationPreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEffectiveRecommendationPreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEffectiveRecommendationPreferencesResponse)
    Q_DISABLE_COPY(GetEffectiveRecommendationPreferencesResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
