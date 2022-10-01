// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTRECOMMENDATIONRESPONSE_H
#define QTAWS_DESCRIBEBOTRECOMMENDATIONRESPONSE_H

#include "lexmodelsv2response.h"
#include "describebotrecommendationrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotRecommendationResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeBotRecommendationResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DescribeBotRecommendationResponse(const DescribeBotRecommendationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBotRecommendationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBotRecommendationResponse)
    Q_DISABLE_COPY(DescribeBotRecommendationResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
