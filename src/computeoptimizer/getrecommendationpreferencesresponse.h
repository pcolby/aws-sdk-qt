// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONPREFERENCESRESPONSE_H
#define QTAWS_GETRECOMMENDATIONPREFERENCESRESPONSE_H

#include "computeoptimizerresponse.h"
#include "getrecommendationpreferencesrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetRecommendationPreferencesResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetRecommendationPreferencesResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    GetRecommendationPreferencesResponse(const GetRecommendationPreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecommendationPreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommendationPreferencesResponse)
    Q_DISABLE_COPY(GetRecommendationPreferencesResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
