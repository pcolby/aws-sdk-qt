// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBOTRECOMMENDATIONREQUEST_H
#define QTAWS_STARTBOTRECOMMENDATIONREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class StartBotRecommendationRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT StartBotRecommendationRequest : public LexModelsV2Request {

public:
    StartBotRecommendationRequest(const StartBotRecommendationRequest &other);
    StartBotRecommendationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBotRecommendationRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
