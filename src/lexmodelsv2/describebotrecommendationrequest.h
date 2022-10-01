// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTRECOMMENDATIONREQUEST_H
#define QTAWS_DESCRIBEBOTRECOMMENDATIONREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotRecommendationRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeBotRecommendationRequest : public LexModelsV2Request {

public:
    DescribeBotRecommendationRequest(const DescribeBotRecommendationRequest &other);
    DescribeBotRecommendationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBotRecommendationRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
