// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBOTRECOMMENDATIONRESPONSE_H
#define QTAWS_STOPBOTRECOMMENDATIONRESPONSE_H

#include "lexmodelsv2response.h"
#include "stopbotrecommendationrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class StopBotRecommendationResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT StopBotRecommendationResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    StopBotRecommendationResponse(const StopBotRecommendationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopBotRecommendationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopBotRecommendationResponse)
    Q_DISABLE_COPY(StopBotRecommendationResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
