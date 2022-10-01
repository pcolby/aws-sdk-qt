// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTRECOMMENDATIONSREQUEST_H
#define QTAWS_LISTBOTRECOMMENDATIONSREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotRecommendationsRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT ListBotRecommendationsRequest : public LexModelsV2Request {

public:
    ListBotRecommendationsRequest(const ListBotRecommendationsRequest &other);
    ListBotRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBotRecommendationsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
