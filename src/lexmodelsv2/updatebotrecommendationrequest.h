// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTRECOMMENDATIONREQUEST_H
#define QTAWS_UPDATEBOTRECOMMENDATIONREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotRecommendationRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateBotRecommendationRequest : public LexModelsV2Request {

public:
    UpdateBotRecommendationRequest(const UpdateBotRecommendationRequest &other);
    UpdateBotRecommendationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBotRecommendationRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
