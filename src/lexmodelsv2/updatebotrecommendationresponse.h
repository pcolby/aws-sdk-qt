// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTRECOMMENDATIONRESPONSE_H
#define QTAWS_UPDATEBOTRECOMMENDATIONRESPONSE_H

#include "lexmodelsv2response.h"
#include "updatebotrecommendationrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotRecommendationResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateBotRecommendationResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    UpdateBotRecommendationResponse(const UpdateBotRecommendationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBotRecommendationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBotRecommendationResponse)
    Q_DISABLE_COPY(UpdateBotRecommendationResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
