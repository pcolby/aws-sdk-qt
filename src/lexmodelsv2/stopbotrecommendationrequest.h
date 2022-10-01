// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBOTRECOMMENDATIONREQUEST_H
#define QTAWS_STOPBOTRECOMMENDATIONREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class StopBotRecommendationRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT StopBotRecommendationRequest : public LexModelsV2Request {

public:
    StopBotRecommendationRequest(const StopBotRecommendationRequest &other);
    StopBotRecommendationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopBotRecommendationRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
