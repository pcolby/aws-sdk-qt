// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONSUMMARIESRESPONSE_H
#define QTAWS_GETRECOMMENDATIONSUMMARIESRESPONSE_H

#include "computeoptimizerresponse.h"
#include "getrecommendationsummariesrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetRecommendationSummariesResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetRecommendationSummariesResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    GetRecommendationSummariesResponse(const GetRecommendationSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecommendationSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommendationSummariesResponse)
    Q_DISABLE_COPY(GetRecommendationSummariesResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
