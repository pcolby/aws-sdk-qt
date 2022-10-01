// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTRECOMMENDATIONSRESPONSE_H
#define QTAWS_LISTBOTRECOMMENDATIONSRESPONSE_H

#include "lexmodelsv2response.h"
#include "listbotrecommendationsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotRecommendationsResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListBotRecommendationsResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListBotRecommendationsResponse(const ListBotRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBotRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBotRecommendationsResponse)
    Q_DISABLE_COPY(ListBotRecommendationsResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
