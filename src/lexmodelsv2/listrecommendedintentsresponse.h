// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDEDINTENTSRESPONSE_H
#define QTAWS_LISTRECOMMENDEDINTENTSRESPONSE_H

#include "lexmodelsv2response.h"
#include "listrecommendedintentsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListRecommendedIntentsResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListRecommendedIntentsResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListRecommendedIntentsResponse(const ListRecommendedIntentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecommendedIntentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecommendedIntentsResponse)
    Q_DISABLE_COPY(ListRecommendedIntentsResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
