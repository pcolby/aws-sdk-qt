// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBOTRECOMMENDATIONRESPONSE_H
#define QTAWS_STARTBOTRECOMMENDATIONRESPONSE_H

#include "lexmodelsv2response.h"
#include "startbotrecommendationrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class StartBotRecommendationResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT StartBotRecommendationResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    StartBotRecommendationResponse(const StartBotRecommendationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartBotRecommendationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBotRecommendationResponse)
    Q_DISABLE_COPY(StartBotRecommendationResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
